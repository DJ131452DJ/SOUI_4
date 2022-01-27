#pragma once
#include "core\Swnd.h"

#define EVT_BTNSEL_CHANGING EVT_EXTERNAL_BEGIN+100
#define EVT_BTNSEL_CHANGED EVT_BTNSEL_CHANGING+1

class EventBtnSelChanging : public TplIEvtArgs<EventBtnSelChanging>
{
	SOUI_CLASS_NAME(TplIEvtArgs<EventBtnSelChanging>, L"on_btn_sel_changing")
public:
	EventBtnSelChanging(SObject *pSender) :TplIEvtArgs<EventBtnSelChanging>(pSender), bCancel(FALSE) {}
	enum {
		EventID = EVT_BTNSEL_CHANGING
	};
	int iOldSel;
	int iNewSel;
	BOOL bCancel;
};
class EventBtnSelChanged : public TplIEvtArgs<EventBtnSelChanged>
{
	SOUI_CLASS_NAME(TplIEvtArgs<EventBtnSelChanged>, L"on_btn_sel_changed")
public:
	EventBtnSelChanged(SObject *pSender) :TplIEvtArgs<EventBtnSelChanged>(pSender), bCancel(FALSE) {}
	enum {
		EventID = EVT_BTNSEL_CHANGED
	};
	int iOldSel;
	int iNewSel;
	BOOL bCancel;
};
//一个
class SLoopButton :
	public SImageButton
{
	SOUI_CLASS_NAME(SImageButton, L"loopbtn")
public:
	SLoopButton();
	~SLoopButton();

	SOUI_ATTRS_BEGIN()
		ATTR_INT(L"skinStates",m_iSkinStates,FALSE)
		ATTR_INT(L"curState",m_iCurState,FALSE)
		ATTR_INT(L"states",m_iState,FALSE)
	SOUI_ATTRS_END()

protected:
	virtual void OnStateChanged(DWORD dwOldState, DWORD dwNewState);
	virtual BOOL NeedRedrawWhenStateChange()
	{
		return m_iSkinStates>1?TRUE:FALSE;
	}
	void OnPaint(IRenderTarget * pRT);
	void OnLButtonUp(UINT nFlags, CPoint pt);
	void Next()
	{
		if (++m_iCurState>=m_iState)
			m_iCurState = 0;
	}
	int GetNext()
	{
		int iNext = m_iCurState;
		if (++iNext >= m_iState)
			return 0;
		return iNext;
	}
	
	SOUI_MSG_MAP_BEGIN()
		MSG_WM_PAINT_EX(OnPaint)
		MSG_WM_LBUTTONDOWN(OnLButtonDown)
		MSG_WM_LBUTTONUP(OnLButtonUp)
	SOUI_MSG_MAP_END()
private:
	//当前显示的状态,注意状态从0开始算的
	int m_iCurState;
	//总共有几个状态
	int m_iState;
	//子图的状态数，不是总共有多少个子图，而是每种状态下的子图数
	int m_iSkinStates;
};

