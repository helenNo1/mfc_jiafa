#pragma once
#include "afxdialogex.h"


// CAddPage 对话框

class CAddPage : public CMFCPropertyPage
{
	DECLARE_DYNAMIC(CAddPage)

public:
	CAddPage(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CAddPage();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ADD_PAGE };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
//	virtual BOOL OnSetActive();
//	virtual BOOL OnWizardFinish();
};
