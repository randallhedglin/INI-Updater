// main.h -- main header file for all modules  //

// includes //

// mfc modules
#include<afxwin.h>
#include<afxext.h>
#include<afxdisp.h>
#include<afxdtctl.h>
#include<afxcmn.h>
#include<afxpriv.h>

// system modules
#include<atlbase.h>
#include<string.h>
#include<stdlib.h>
#include<commdlg.h>
#include<math.h>

// program modules
#include"resource.h"

// globals //

// global message string
extern char g_pMsg[];

// classes //

class CMainApp:public CWinApp
{
public:
	// system overrides
	virtual BOOL InitInstance(void);

	// declare message map
	DECLARE_MESSAGE_MAP()
};

class CFloatEdit:public CEdit
{
public:
	// declare message map
	DECLARE_MESSAGE_MAP()
};

class CMainDialog:public CDialog
{
public:
	// constructors
	CMainDialog(UINT nIDTemplate,
				CWnd* pParentWnd=NULL):CDialog(nIDTemplate,
											   pParentWnd) {}
	CMainDialog():CDialog() {}

	// system overrides
	virtual BOOL OnInitDialog(void);

	// misc. functions
	void Cleanup(void);

	// controls
	CEdit*      m_pDevName;
	CEdit*      m_pSysName;
	CEdit*      m_pDevUDID;
	CEdit*      m_pSysVersion;
	CButton*    m_pUIiPhone;
	CButton*    m_pUIiPad;
	CButton*    m_pMTaskOn;
	CComboBox*  m_pLanguage;
	CComboBox*  m_pCountry;
	CButton*    m_pBattUnknown;
	CButton*    m_pBattUnplugged;
	CButton*    m_pBattCharging;
	CButton*    m_pBattFull;
	CScrollBar* m_pLevelSlide;
	CEdit*      m_pLevel;
	CFloatEdit* m_pLatitude;
	CFloatEdit* m_pLongitude;
	CFloatEdit* m_pCourse;
	CFloatEdit* m_pSpeed;
	CFloatEdit* m_pHeading;
	CFloatEdit* m_pAltitude;
	CFloatEdit* m_pHorzAccuracy;
	CFloatEdit* m_pVertAccuracy;
	CButton*    m_pAutoUpdate;
	CEdit*      m_pOutputFile;
	CButton*    m_pChangeFile;
	
	// declare message map
	DECLARE_MESSAGE_MAP()
};

// eof //