// FireWall_Cilent.h : main header file for the FIREWALL_CILENT application
//

#if !defined(AFX_FIREWALL_CILENT_H__9C21E27D_CB6F_47C0_9626_6BF8910A838A__INCLUDED_)
#define AFX_FIREWALL_CILENT_H__9C21E27D_CB6F_47C0_9626_6BF8910A838A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CFireWall_CilentApp:
// See FireWall_Cilent.cpp for the implementation of this class
//

class CFireWall_CilentApp : public CWinApp
{
public:
	CFireWall_CilentApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CFireWall_CilentApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CFireWall_CilentApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_FIREWALL_CILENT_H__9C21E27D_CB6F_47C0_9626_6BF8910A838A__INCLUDED_)
