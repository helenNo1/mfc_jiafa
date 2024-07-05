// CSummandPage.cpp: 实现文件
//

#include "pch.h"
#include "mfc_addition.h"
#include "afxdialogex.h"
#include "CSummandPage.h"


// CSummandPage 对话框

IMPLEMENT_DYNAMIC(CSummandPage, CMFCPropertyPage)

CSummandPage::CSummandPage(CWnd* pParent /*=nullptr*/)
	: CMFCPropertyPage(IDD_SUMMAND_PAGE)
{

}

CSummandPage::~CSummandPage()
{
}

void CSummandPage::DoDataExchange(CDataExchange* pDX)
{
	CMFCPropertyPage::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CSummandPage, CMFCPropertyPage)
END_MESSAGE_MAP()


// CSummandPage 消息处理程序


//BOOL CSummandPage::OnSetActive()
//{
	// TODO: 在此添加专用代码和/或调用基类
	 // 获得父窗口，即属性表CPropertySheet类   
//	CPropertySheet* psheet = (CPropertySheet*)GetParent();
	// 设置属性表只有“下一步”按钮   
//	psheet->SetWizardButtons(PSWIZB_NEXT);
//	return CMFCPropertyPage::OnSetActive();
//}
