// FireWall_CilentDlg.h : header file
//

#if !defined(AFX_FIREWALL_CILENTDLG_H__96AD9FDC_1D7F_47A4_9B6F_B11D0EE2BA85__INCLUDED_)
#define AFX_FIREWALL_CILENTDLG_H__96AD9FDC_1D7F_47A4_9B6F_B11D0EE2BA85__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CFireWall_CilentDlg dialog

class CFireWall_CilentDlg : public CDialog
{
// Construction
public:
	CFireWall_CilentDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CFireWall_CilentDlg)
	enum { IDD = IDD_FIREWALL_CILENT_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CFireWall_CilentDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CFireWall_CilentDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnApply();
	afx_msg void OnClean();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_FIREWALL_CILENTDLG_H__96AD9FDC_1D7F_47A4_9B6F_B11D0EE2BA85__INCLUDED_)
