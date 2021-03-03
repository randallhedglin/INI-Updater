// main.h -- program entry point and essential functions //

// includes //

// mfc modules
#include<afxwin.h>
#include<afxext.h>
#include<afxdisp.h>
#include<afxdtctl.h>
#include<afxcmn.h>
#include<afxpriv.h>

// other includes
#include<string.h>
#include<stdlib.h>
#include<commdlg.h>
#include<math.h>

// classes //

class CMainApp:public CWinApp
{
public:
	// system overrides
	virtual BOOL InitInstance(void);

	// declare message map
	DECLARE_MESSAGE_MAP()
};

// eof //