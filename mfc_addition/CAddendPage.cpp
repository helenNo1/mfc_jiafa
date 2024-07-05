// CAddendPage.cpp: 实现文件
//

#include "pch.h"
#include "mfc_addition.h"
#include "afxdialogex.h"
#include "CAddendPage.h"


// CAddendPage 对话框

IMPLEMENT_DYNAMIC(CAddendPage, CMFCPropertyPage)

CAddendPage::CAddendPage(CWnd* pParent /*=nullptr*/)
	: CMFCPropertyPage(IDD_ADDEND_PAGE)
{

}

CAddendPage::~CAddendPage()
{
}

void CAddendPage::DoDataExchange(CDataExchange* pDX)
{
	CMFCPropertyPage::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CAddendPage, CMFCPropertyPage)
END_MESSAGE_MAP()


// CAddendPage 消息处理程序


//BOOL CAddendPage::OnSetActive()
//{
	// TODO: 在此添加专用代码和/或调用基类
	 // 获得父窗口，即属性表CPropertySheet类   
//	CPropertySheet* psheet = (CPropertySheet*)GetParent();
	// 设置属性表只有“下一步”按钮   
//	psheet->SetWizardButtons(PSWIZB_NEXT);
//	return CMFCPropertyPage::OnSetActive();
//}
