﻿//////////////////////////////////////////////////////////////////////////
//  Class Name: SFontPool
// Description: Font Pool
//////////////////////////////////////////////////////////////////////////

#pragma once
#include "souistd.h"
#include "res.mgr/sfontpool.h"
#include "helper/SplitString.h"
#include "layout/SLayoutSize.h"
#include "helper/SHostMgr.h"

SNSBEGIN


int CALLBACK DefFontsEnumProc(CONST LOGFONT *lplf,    // logical-font data
							  CONST TEXTMETRIC *lptm, // physical-font data
							  DWORD dwType,           // font type
							  LPARAM lpData           // application-defined data
							  )
{
	BOOL * pbValidFont = (BOOL*)lpData;
	*pbValidFont = TRUE;
	return 0;//stop enum.
}

static BOOL DefFontCheck(const SStringW &strFontName)
{
	//确保字体存在
	HDC hdc = GetDC(NULL);
	SStringT strFace = S_CW2T(strFontName);
	BOOL bValidFont = FALSE;
	EnumFonts(hdc, strFace.c_str(), DefFontsEnumProc, (LPARAM)&bValidFont);
	ReleaseDC(NULL, hdc);
	return bValidFont;
}

FunFontCheck SFontPool::s_funFontCheck = DefFontCheck;


void SFontPool::SetFontChecker(FunFontCheck fontCheck)
{
	s_funFontCheck = fontCheck;
}

BOOL SFontPool::CheckFont(const SStringW &strFontName)
{
	return s_funFontCheck(strFontName);
}


SFontPool::SFontPool(IRenderFactory *pRendFactory)
    : m_RenderFactory(pRendFactory)
{
    m_pFunOnKeyRemoved = OnKeyRemoved;
}

void SFontPool::OnKeyRemoved(const IFontPtr &obj)
{
    obj->Release();
}

static const WCHAR KFontPropSeprator = L','; //字体属性之间的分隔符，不再支持其它符号。
static const WCHAR KPropSeprator = L':';     //一个属性name:value对之间的分隔符
static const WCHAR kExPropKey[] = L"exprop";
static const WCHAR KFontFace[] = L"face";
static const WCHAR KFontBold[] = L"bold";
static const WCHAR KFontUnderline[] = L"underline";
static const WCHAR KFontItalic[] = L"italic";
static const WCHAR KFontStrike[] = L"strike";
static const WCHAR KFontAdding[] = L"adding";
static const WCHAR KFontSize[] = L"size";
static const WCHAR KFontCharset[] = L"charset";
static const WCHAR KFontWeight[] = L"weight";
static const WCHAR KFontEscapement[] = L"escapement";
const static WCHAR KDefFontFace[] = L"宋体";

IFontPtr SFontPool::GetFont(const SStringW &strFont, int scale)
{
	SAutoLock autoLock(m_cs);
	SStringW strFontDesc = GETUIDEF->GetFontDesc(strFont);
	FontInfo info = FontInfoFromString(strFontDesc,m_defFontInfo);

	IFontPtr hftRet=NULL;
	if (HasKey(info))
	{
		hftRet = GetKeyObject(info);
	}
	else
	{
		hftRet = _CreateFont(info,scale);
		AddKeyObject(info, hftRet);
	}
	return hftRet;
}


IFontPtr SFontPool::_CreateFont(const FontInfo &fontInfo,int scale)
{
    LOGFONT lfNew = { 0 };

    lfNew.lfCharSet = fontInfo.style.attr.byCharset;

    //优先使用weigth属性.
    lfNew.lfWeight = (long)(fontInfo.style.attr.byWeight * 4);
    if (lfNew.lfWeight == 0) //没有weight属性时检查bold属性.
        lfNew.lfWeight = (fontInfo.style.attr.fBold ? FW_BOLD : FW_NORMAL);
    lfNew.lfUnderline = (FALSE != fontInfo.style.attr.fUnderline);
    lfNew.lfItalic = (FALSE != fontInfo.style.attr.fItalic);
    lfNew.lfStrikeOut = (FALSE != fontInfo.style.attr.fStrike);
	lfNew.lfEscapement = lfNew.lfOrientation = fontInfo.style.attr.fEscapement;
	if(fontInfo.style.attr.szIsAdding){
		SLayoutSize defFontSize((float)(short)m_defFontInfo.style.attr.nSize,(SLayoutSize::Unit)m_defFontInfo.style.attr.szUnit);
		lfNew.lfHeight = -defFontSize.toPixelSize(scale);
		SLayoutSize layoutSize((float)(short)fontInfo.style.attr.nSize,(SLayoutSize::Unit)fontInfo.style.attr.szUnit);
		lfNew.lfHeight -= layoutSize.toPixelSize(scale);

	}else{
		SLayoutSize layoutSize((float)(int)fontInfo.style.attr.nSize,(SLayoutSize::Unit)fontInfo.style.attr.szUnit);
		lfNew.lfHeight = -layoutSize.toPixelSize(scale);
	}
    lfNew.lfQuality = CLEARTYPE_QUALITY;

    _tcscpy_s(lfNew.lfFaceName, _countof(lfNew.lfFaceName), S_CW2T(fontInfo.strFaceName));
	IFontPtr ret = NULL;
	SASSERT(m_RenderFactory);
	m_RenderFactory->CreateFont(&ret, &lfNew);

	if(!fontInfo.strPropEx.IsEmpty()){
		SXmlDoc xmlDoc;
		xmlDoc.load_string(fontInfo.strPropEx.c_str());
		SXmlNode xmlExProp = xmlDoc.root().child(kExPropKey);
		ret->SetProp(&xmlExProp);
	}
    return ret;
}

const FontInfo &SFontPool::GetDefFontInfo() const
{
    return m_defFontInfo;
}

void SFontPool::SetDefFontInfo(const FontInfo &fontInfo)
{
    SAutoLock autoLock(m_cs);
    m_defFontInfo = fontInfo;
    RemoveAll();
    SHostMgr::getSingletonPtr()->DispatchMessage(true, UM_UPDATEFONT);
}

void SFontPool::SetDefFontInfo(const SStringW &strFontInfo)
{
	FontInfo emptyDefFont;
    FontInfo fi = FontInfoFromString(strFontInfo,emptyDefFont);
	if(!CheckFont(fi.strFaceName)){//make sure default font face is valid.
		fi.strFaceName = KDefFontFace;
	}
    SetDefFontInfo(fi);
}

FontInfo SFontPool::FontInfoFromString(const SStringW &strFontDesc, const FontInfo & defFontInfo)
{
    FontInfo fi = defFontInfo;
	SXmlDoc xmlExProp;
	SXmlNode nodeExp;
	if(fi.strPropEx.IsEmpty())
		nodeExp = xmlExProp.root().append_child(kExPropKey);
	else{
		xmlExProp.load_string(fi.strPropEx.c_str());
		nodeExp = xmlExProp.root().child(kExPropKey);
	}
	SStringW fontDesc2 = strFontDesc;
	fontDesc2.MakeLower();
	SArray<SStringW> strLst;
    UINT nSeg = SplitString(fontDesc2, KFontPropSeprator, strLst);
    for (UINT i = 0; i < nSeg; i++)
    {
        SArray<SStringW> kv;
        UINT n = SplitString(strLst[i], KPropSeprator, kv);
        if (n != 2)
            continue;
        if (kv[0] == KFontFace)
        {
            if (kv[1][0] == L'\'' || kv[1][0] == L'\"')
                fi.strFaceName = kv[1].Mid(1, kv[1].GetLength() - 2);
            else
                fi.strFaceName = kv[1];
        }
        else if (kv[0] == KFontSize)
        {
			SLayoutSize layoutSize;
			layoutSize.parseString(kv[1]);
			fi.style.attr.nSize = (short)abs(layoutSize.fSize);
			fi.style.attr.szUnit = (int)layoutSize.unit;
			fi.style.attr.szIsAdding = 0;
		}else if(kv[0] == KFontAdding){
			SLayoutSize layoutSize;
			layoutSize.parseString(kv[1]);
			fi.style.attr.nSize = (short)layoutSize.fSize;
			fi.style.attr.szUnit = (int)layoutSize.unit;
			fi.style.attr.szIsAdding = 1;
		}
        else if (kv[0] == KFontCharset)
        {
            fi.style.attr.byCharset = _wtoi(kv[1]);
        }
        else if (kv[0] == KFontWeight) 
        {
			fi.style.attr.byWeight = (_wtoi(kv[1]) + 2) / 4; //+2 for 四舍五入. /4是为了把weight scale到0-250.
        }
        else if (kv[0] == KFontBold)
        {
            fi.style.attr.fBold = _wtoi(kv[1]);
        }
        else if (kv[0] == KFontItalic)
        {
            fi.style.attr.fItalic = _wtoi(kv[1]);
        }
        else if (kv[0] == KFontStrike)
        {
            fi.style.attr.fStrike = _wtoi(kv[1]);
        }
        else if (kv[0] == KFontUnderline)
        {
            fi.style.attr.fUnderline = _wtoi(kv[1]);
		}else if(kv[0] == KFontEscapement){
			int fescapement = (int)(_wtof(kv[1])*10);
			fescapement %= 3600;
			if(fescapement < 0) fescapement+= 3600;
			//make sure fescapement is between [0,3600)
			fi.style.attr.fEscapement = fescapement;
		}else{//extend props
			nodeExp.append_attribute(kv[0].c_str()).set_value(kv[1].c_str());
		}
    }
	if(nodeExp.first_attribute()){
		nodeExp.ToString(&fi.strPropEx);
	}
    return fi;
}

SNSEND