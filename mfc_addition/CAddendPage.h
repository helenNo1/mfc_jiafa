#pragma once
#include "afxdialogex.h"


// CAddendPage 对话框

class CAddendPage : public CMFCPropertyPage
{
	DECLARE_DYNAMIC(CAddendPage)

public:
	CAddendPage(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CAddendPage();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ADDEND_PAGE };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
//	virtual BOOL OnSetActive();
};
