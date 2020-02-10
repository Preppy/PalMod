#pragma once


// CSettDlg dialog

class CSettDlg : public CDialog
{
	DECLARE_DYNAMIC(CSettDlg)

public:
	CSettDlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~CSettDlg();

// Dialog Data
	enum { IDD = IDD_SETT_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	BOOL m_bAlphaTrans;
	BOOL m_bUpdSupp;
};
