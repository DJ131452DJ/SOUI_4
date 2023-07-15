﻿#include <souistd.h>
#include <control/Srealwnd.h>
#include <interface/SRealWndHandler-i.h>

SNSBEGIN

SRealWnd::SRealWnd()
    : m_bInit(FALSE)
    , m_lpData(0)
    , m_hRealWnd(0)
{
}

SRealWnd::~SRealWnd()
{
}

BOOL SRealWnd::NeedRedrawWhenStateChange()
{
    return FALSE;
}

void SRealWnd::ShowRealWindow()
{
    if (IsVisible(TRUE) && !IsWindow(m_hRealWnd))
    {
        InitRealWnd();
    }
    if (IsWindow(m_hRealWnd))
    {
        ShowWindow(m_hRealWnd, IsVisible(TRUE) ? SW_SHOW : SW_HIDE);
    }
}

void SRealWnd::OnShowWindow(BOOL bShow, UINT nStatus)
{
    __baseCls::OnShowWindow(bShow, nStatus);
    ShowRealWindow();
}

void SRealWnd::OnDestroy()
{
    if (IsWindow(m_hRealWnd))
    {
        IRealWndHandler *pRealWndHandler = GETREALWNDHANDLER;
        if (pRealWndHandler)
            pRealWndHandler->OnRealWndDestroy(this);
    }
    __baseCls::OnDestroy();
}

BOOL SRealWnd::InitFromXml(IXmlNode *pNode)
{
    SXmlNode xmlNode(pNode);
    m_xmlParams.root().append_copy(xmlNode.child(L"params"));
    BOOL bRet = __baseCls::InitFromXml(pNode);
    if (bRet)
    {
        if (m_bInit)
            InitRealWnd();
    }
    return bRet;
}

HWND SRealWnd::GetRealHwnd(BOOL bAutoCreate /*=TRUE*/)
{
    if (!bAutoCreate)
        return m_hRealWnd;

    if (!m_bInit && !IsWindow(m_hRealWnd))
    {
        InitRealWnd();
    }

    return m_hRealWnd;
}

BOOL SRealWnd::InitRealWnd()
{
    m_dwStyle |= WS_CHILD;

    IRealWndHandler *pRealWndHandler = GETREALWNDHANDLER;

    if (pRealWndHandler)
        m_hRealWnd = pRealWndHandler->OnRealWndCreate(this);

    if (::IsWindow(m_hRealWnd))
    {
        if (!m_bInit && !pRealWndHandler->OnRealWndSize(this))
        {
            //如果不是在加载的时候创建窗口，则需要自动调整窗口位置
            CRect rcClient;
            GetClientRect(&rcClient);
            SetWindowPos(m_hRealWnd, 0, rcClient.left, rcClient.top, rcClient.Width(), rcClient.Height(), SWP_NOZORDER);
        }

        if (pRealWndHandler)
            pRealWndHandler->OnRealWndInit(this);

        return TRUE;
    }
    return FALSE;
}

BOOL SRealWnd::OnRelayout(const CRect &rcWnd)
{
    if (!__baseCls::OnRelayout(rcWnd))
        return FALSE;

    IRealWndHandler *pRealWndHandler = GETREALWNDHANDLER;
    HWND hRealWnd = GetRealHwnd(FALSE);
    if (pRealWndHandler && ::IsWindow(hRealWnd))
    {
        if (!pRealWndHandler->OnRealWndPosition(this, rcWnd))
        {
            CPoint pt = rcWnd.TopLeft();
            if (GetWindowLong(hRealWnd, GWL_STYLE) & WS_POPUP)
            {
                ::ClientToScreen(GetContainer()->GetHostHwnd(), &pt);
            }
            ::SetWindowPos(hRealWnd, 0, pt.x, pt.y, rcWnd.Width(), rcWnd.Height(), SWP_NOZORDER);
        }
    }
    return TRUE;
}
SNSEND