// CAddPage.cpp: 实现文件
//

#include "pch.h"
#include "mfc_addition.h"
#include "afxdialogex.h"
#include "CAddPage.h"


// CAddPage 对话框

IMPLEMENT_DYNAMIC(CAddPage, CMFCPropertyPage)

CAddPage::CAddPage(CWnd* pParent /*=nullptr*/)
	: CMFCPropertyPage(IDD_ADD_PAGE)
{

}

CAddPage::~CAddPage()
{
}

void CAddPage::DoDataExchange(CDataExchange* pDX)
{
	CMFCPropertyPage::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CAddPage, CMFCPropertyPage)
END_MESSAGE_MAP()


// CAddPage 消息处理程序


//BOOL CAddPage::OnSetActive()
//{
	// TODO: 在此添加专用代码和/或调用基类
//	CPropertySheet* psheet = (CPropertySheet*)GetParent();
	//设置属性表只有“完成”按钮   
//	psheet->SetFinishText(_T("完成"));
//	return CMFCPropertyPage::OnSetActive();
//}


//BOOL CAddPage::OnWizardFinish()
//{
	// TODO: 在此添加专用代码和/或调用基类
//	MessageBox(_T("使用说明向导已阅读完！"));
//
//	return CMFCPropertyPage::OnWizardFinish();
//}
