#pragma once

#include "CSummandPage.h"
#include "CAddendPage.h"
#include "CAddPage.h"

// CAddSheet

class CAddSheet : public CPropertySheet
{
	DECLARE_DYNAMIC(CAddSheet)
	CSummandPage    m_summandPage;
	CAddendPage     m_addendPage;
	CAddPage        m_addPage;
public:
	CAddSheet(UINT nIDCaption, CWnd* pParentWnd = nullptr, UINT iSelectPage = 0);
	CAddSheet(LPCTSTR pszCaption, CWnd* pParentWnd = nullptr, UINT iSelectPage = 0);
	virtual ~CAddSheet();

protected:
	DECLARE_MESSAGE_MAP()
};


