// main.cpp -- program entry point and essential functions //

// includes //

#include"main.h"
#include"iniinfo.h"

// message maps //

BEGIN_MESSAGE_MAP(CMainApp,CWinApp)
END_MESSAGE_MAP()

BEGIN_MESSAGE_MAP(CFloatEdit,CEdit)
END_MESSAGE_MAP()

BEGIN_MESSAGE_MAP(CMainDialog,CDialog)
END_MESSAGE_MAP()

// declare main application instance //
CMainApp g_MainApp;

// globals //

// global message string
char g_pMsg[_MAX_PATH];
// ini data object
CINIInfo* g_pINIInfo=NULL;

// CMAainApp functions //

BOOL CMainApp::InitInstance(void)
{
	// enable control container
	AfxEnableControlContainer();

	// create main dialog
	CMainDialog* pMainDlg=new CMainDialog(IDD_MAIN);

	// create ini data object
	g_pINIInfo=new CINIInfo("Software\\DFSDK INI Updater",
							pMainDlg);

	// execute main dialog
	pMainDlg->DoModal();

	// clean up main dialog
	pMainDlg->Cleanup();

	// delete objects
	delete g_pINIInfo;
	delete pMainDlg;

	// close application
	return(FALSE);
}

// CFloatEdit functions //

// CMainDialog functions //

CMainDialog::OnInitDialog()
{
	// call base method
	CDialog::OnInitDialog();

	// create controls
	m_pDevName       =new CEdit;
	m_pSysName       =new CEdit;
	m_pDevUDID       =new CEdit;
	m_pSysVersion    =new CEdit;
	m_pUIiPhone      =new CButton;
	m_pUIiPad        =new CButton;
	m_pMTaskOn       =new CButton;
	m_pLanguage      =new CComboBox;
	m_pCountry       =new CComboBox;
	m_pBattUnknown   =new CButton;
	m_pBattUnplugged =new CButton;
	m_pBattCharging  =new CButton;
	m_pBattFull      =new CButton;
	m_pLevelSlide    =new CScrollBar;
	m_pLevel         =new CEdit;
	m_pLatitude      =new CFloatEdit;
	m_pLongitude     =new CFloatEdit;
	m_pCourse        =new CFloatEdit;
	m_pSpeed         =new CFloatEdit;
	m_pHeading       =new CFloatEdit;
	m_pAltitude      =new CFloatEdit;
	m_pHorzAccuracy  =new CFloatEdit;
	m_pVertAccuracy  =new CFloatEdit;
	m_pAutoUpdate    =new CButton;
	m_pOutputFile    =new CEdit;
	m_pChangeFile    =new CButton;

	// attach dialog controls
	m_pDevName->SubclassDlgItem(IDC_EDIT_DEVNAME,this);
	m_pSysName->SubclassDlgItem(IDC_EDIT_SYSNAME,this);
	m_pDevUDID->SubclassDlgItem(IDC_EDIT_DEVUDID,this);
	m_pSysVersion->SubclassDlgItem(IDC_EDIT_SYSVERSION,this);
	m_pUIiPhone->SubclassDlgItem(IDC_RADIO_IPHONE,this);
	m_pUIiPad->SubclassDlgItem(IDC_RADIO_IPAD,this);
	m_pMTaskOn->SubclassDlgItem(IDC_CHECK_MULTITASK,this);
	m_pLanguage->SubclassDlgItem(IDC_COMBO_LANGUAGE,this);
	m_pCountry->SubclassDlgItem(IDC_COMBO_COUNTRY,this);
	m_pBattUnknown->SubclassDlgItem(IDC_RADIO_BATT0,this);
	m_pBattUnplugged->SubclassDlgItem(IDC_RADIO_BATT1,this);
	m_pBattCharging->SubclassDlgItem(IDC_RADIO_BATT2,this);
	m_pBattFull->SubclassDlgItem(IDC_RADIO_BATT3,this);
	m_pLevelSlide->SubclassDlgItem(IDC_SCROLL_BATTLVL,this);
	m_pLevel->SubclassDlgItem(IDC_EDIT_BATTLEVEL,this);
	m_pLatitude->SubclassDlgItem(IDC_EDIT_LATITUDE,this);
	m_pLongitude->SubclassDlgItem(IDC_EDIT_LONGITUDE,this);
	m_pCourse->SubclassDlgItem(IDC_EDIT_COURSE,this);
	m_pSpeed->SubclassDlgItem(IDC_EDIT_SPEED,this);
	m_pHeading->SubclassDlgItem(IDC_EDIT_HEADING,this);
	m_pAltitude->SubclassDlgItem(IDC_EDIT_ALTITUDE,this);
	m_pHorzAccuracy->SubclassDlgItem(IDC_EDIT_HORZACC,this);
	m_pVertAccuracy->SubclassDlgItem(IDC_EDIT_VERTACC,this);
	m_pAutoUpdate->SubclassDlgItem(IDC_CHECK_AUTOUPDATE,this);
	m_pOutputFile->SubclassDlgItem(IDC_EDIT_FILENAME,this);
	m_pChangeFile->SubclassDlgItem(IDC_BUTTON_CHANGE,this);

	// load ini data
	g_pINIInfo->LoadFromReg();

	// populate dialog box
	g_pINIInfo->UpdateMainDlg();

	// refresh ini file
	g_pINIInfo->OutputINI();

	// ok
	return(TRUE);
}

void CMainDialog::Cleanup(void)
{
	// delete controls
	delete m_pDevName;
	delete m_pSysName;
	delete m_pDevUDID;
	delete m_pSysVersion;
	delete m_pUIiPhone;
	delete m_pUIiPad;
	delete m_pMTaskOn;
	delete m_pLanguage;
	delete m_pCountry;
	delete m_pBattUnknown;
	delete m_pBattUnplugged;
	delete m_pBattCharging;
	delete m_pBattFull;
	delete m_pLevelSlide;
	delete m_pLevel;
	delete m_pLatitude;
	delete m_pLongitude;
	delete m_pCourse;
	delete m_pSpeed;
	delete m_pHeading;
	delete m_pAltitude;
	delete m_pHorzAccuracy;
	delete m_pVertAccuracy;
	delete m_pAutoUpdate;
	delete m_pOutputFile;
	delete m_pChangeFile;
}

// eof //