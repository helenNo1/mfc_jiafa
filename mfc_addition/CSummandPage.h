﻿#pragma once
#include "afxdialogex.h"


// CSummandPage 对话框

class CSummandPage : public CMFCPropertyPage
{
	DECLARE_DYNAMIC(CSummandPage)

public:
	CSummandPage(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CSummandPage();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SUMMAND_PAGE };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
//	virtual BOOL OnSetActive();
};
