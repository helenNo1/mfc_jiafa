
// mfc_additionDlg.cpp: 实现文件
//

#include "pch.h"
#include "framework.h"
#include "mfc_addition.h"

#include "mfc_additionDlg.h"

#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 实现
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedOk();
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &CAboutDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDOK, &CAboutDlg::OnBnClickedOk)
END_MESSAGE_MAP()


// CmfcadditionDlg 对话框


CmfcadditionDlg::~CmfcadditionDlg() {
	if (NULL != m_pTipDlg) {
		delete m_pTipDlg;
	}
}

CmfcadditionDlg::CmfcadditionDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_MFC_ADDITION_DIALOG, pParent)
	, m_jiashu(0)
	, m_beijiashu(0)
	, m_he(0)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
	m_pTipDlg = NULL;
}

void CmfcadditionDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_jiashu);
	DDX_Text(pDX, IDC_EDIT2, m_beijiashu);
	DDX_Text(pDX, IDC_EDIT3, m_he);
}

BEGIN_MESSAGE_MAP(CmfcadditionDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &CmfcadditionDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_INSTRUCT_BUTTON, &CmfcadditionDlg::OnBnClickedInstructButton)
END_MESSAGE_MAP()


// CmfcadditionDlg 消息处理程序

BOOL CmfcadditionDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != nullptr)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO: 在此添加额外的初始化代码

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void CmfcadditionDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CmfcadditionDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CmfcadditionDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CAboutDlg::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
}


void CmfcadditionDlg::OnBnClickedButton1()
{

	INT_PTR nRes;
	/*
	CTipDlg tipDlg;
	nRes = tipDlg.DoModal();
	if (IDCANCEL == nRes) return;
	*/
	if (NULL == m_pTipDlg) {
		m_pTipDlg = new CTipDlg();
		m_pTipDlg->Create(IDD_DIALOG_TIP, this);
	}

	m_pTipDlg->ShowWindow(SW_SHOW);


	// TODO: 在此添加控件通知处理程序代码
	// 将各控件中的数据保存到相应的变量   
	
	UpdateData(TRUE);

	// 将被加数和加数的加和赋值给m_editSum   
	m_he = m_jiashu + m_beijiashu;

	// 根据各变量的值更新相应的控件。和的编辑框会显示m_editSum的值   
	UpdateData(FALSE);
	
}


void CAboutDlg::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
	CDialogEx::OnOK();
}


void CmfcadditionDlg::OnBnClickedInstructButton()
{
	// TODO: 在此添加控件通知处理程序代码
	 // 创建属性表对象   
	CAddSheet sheet(_T("使用说明"));
	// 设置属性对话框为向导对话框   
	//sheet.SetWizardMode();
	// 打开模态向导对话框   
	sheet.DoModal();
}
