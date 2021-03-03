// iniinfo.h -- ini data handler header //

// constants //

#define MAX_EDIT_LEN 63
#define MAX_EDIT_BUF (MAX_EDIT_LEN+1)

#define FILE_OUTPUT_DELAY 100

// classes //

class CINIInfo
{
public:
	// constructor/destructor
	CINIInfo(const char*  pRegKey,
			 CMainDialog* pMainDlg);
	~CINIInfo();

	// primary functions
	void LoadFromReg(void);
	void UpdateMainDlg(void);
	void ReadMainDlg(void);
	void OutputINI(void);
	void GetLocaleID(char* pStr);
	void SaveToReg(void);

	// ini file data
	char  m_pDevName[MAX_EDIT_BUF];
	char  m_pDevUDID[MAX_EDIT_BUF];
	char  m_pSysName[MAX_EDIT_BUF];
	char  m_pSysVersion[MAX_EDIT_BUF];
	int   m_nUIType;
	int   m_nLanguageID;
	int   m_nCountryID;
	int   m_nBattState;
	int   m_nBattLevel;
	int   m_nMTaskOn;
	float m_fLatitude;
	float m_fLongitude;
	float m_fCourse;
	float m_fSpeed;
	float m_fHeading;
	float m_fAltitude;
	float m_fHorzAccuracy;
	float m_fVertAccuracy;
	char  m_pOutputFile[_MAX_PATH];

	// misc. data members
	const char*  m_pRegKey;
	CMainDialog* m_pMainDlg;
};

// eof //