
// mfc_additionDlg.h: 头文件
//

#pragma once

#include "CTipDlg.h"
#include "CAddSheet.h"


// CmfcadditionDlg 对话框
class CmfcadditionDlg : public CDialogEx
{
	CTipDlg* m_pTipDlg;
// 构造
public:
	CmfcadditionDlg(CWnd* pParent = nullptr);	// 标准构造函数
	~CmfcadditionDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFC_ADDITION_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	double m_jiashu;
	double m_beijiashu;
	double m_he;
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedInstructButton();
};
