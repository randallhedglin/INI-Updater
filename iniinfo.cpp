// iniinfo.h -- ini data handler functions //

// includes //

#include"main.h"
#include"iniinfo.h"

// globals //

// language id list
char* pLanguage[]={ "af","Afrikaans",
				    "sq","Albanian",
				    "am","Amharic",
				    "ar","Arabic",
				    "hy","Armenian",
				    "az","Azerbaijani",
				    "bn","Bengali",
					"bs","Bosnian",
				    "bg","Bulgarian",
				    "my","Burmese",
				    "ca","Catalan",
				    "ce","Chechen",
				    "ny","Chichewa",
				    "zh","Chinese",
				    "kw","Cornish",
				    "hr","Croatian",
				    "cs","Czech",
					"ds","Danish",
				    "nl","Dutch",
				    "en","English",
				    "et","Estonian",
					"fj","Fijian",
				    "fi","Finnish",
				    "fr","French",
				    "gd","Gaelic",
				    "ka","Georgian",
				    "de","German",
				    "el","Greek",
				    "gu","Gujarati",
				    "ga","Irish",
					"ht","Haitian",
				    "he","Hebrew",
				    "hi","Hindi",
				    "hu","Hungarian",
				    "is","Icelandic",
				    "io","Ido",
				    "id","Indonesian",
				    "it","Italian",
				    "ja","Japanese",
				    "ks","Kashmiri",
				    "kk","Kazakh",
				    "ko","Korean",
				    "ku","Kurdish",
				    "lo","Lao",
				    "la","Latin",
				    "lv","Latvian",
				    "ln","Lingala",
				    "lt","Lithuanian",
				    "mk","Macedonian",
				    "ms","Malay",
				    "mt","Maltese",
				    "gv","Manx",
				    "mh","Marshallese",
				    "mn","Mongolian",
				    "nv","Navaho",
				    "ne","Nepali",
				    "no","Norwegian",
					"fa","Persian",
				    "pl","Polish",
				    "pt","Portuguese",
				    "pa","Punjabi",
				    "qu","Quechua",
				    "ro","Romanian",
				    "ru","Russian",
				    "sm","Samoan",
				    "sa","Sanskrit",
				    "sc","Sardinian",
				    "sr","Serbian",
				    "si","Sinhala",
				    "sk","Slovak",
				    "sl","Slovenian",
				    "so","Somali",
				    "es","Spanish",
				    "sw","Swahili",
				    "sv","Swedish",
				    "tl","Tagalog",
				    "ty","Tahitian",
				    "th","Thai",
				    "bo","Tibetan",
				    "to","Tonga",
				    "tr","Turkish",
				    "uk","Ukrainian",
				    "ur","Urdu",
				    "uz","Uzbek",
				    "vi","Vietnamese",
				    "cy","Welsh",
				    "xh","Xhosa",
				    "yi","Yiddish",
				    "zu","Zulu",
					"##","##" };

// country id list
char* pCountry[]={ "AF","Afghanistan",
				   "AL","Albania",
				   "DZ","Algeria",
				   "AS","American Samoa",
				   "AO","Angola",
				   "AQ","Antartica",
				   "AR","Argentina",
				   "AM","Armenia",
				   "AW","Aruba",
				   "AU","Australia",
				   "AT","Austria",
				   "AZ","Azerbaijan",
				   "BS","Bahamas",
				   "BH","Bahrain",
				   "BD","Bangladesh",
				   "BB","Barbados",
				   "BY","Belarus",
				   "BE","Belgium",
				   "BZ","Belize",
				   "BJ","Benin",
				   "BM","Bermuda",
				   "BO","Bolivia",
				   "BA","Boznia and Herzegovina",
				   "BW","Botswana",
				   "BR","Brazil",
				   "BG","Bulgaria",
				   "BF","Burkina Faso",
				   "BI","Burundi",
				   "KH","Cambodia",
				   "CM","Cameroon",
				   "CA","Canada",
				   "CV","Cape Verde",
				   "KY","Cayman Islands",
				   "TD","Chad",
				   "CL","Chile",
				   "CN","China",
				   "CO","Colombia",
				   "CR","Costa Rica",
				   "CI","Cote D'Ivoire",
				   "HR","Croatia",
				   "CU","Cuba",
				   "CW","Curacao",
				   "CY","Cyprus",
				   "CZ","Czech Republic",
				   "DK","Denmark",
				   "DJ","Djibouti",
				   "DM","Dominica",
				   "DO","Dominican Republic",
				   "EC","Ecuador",
				   "EG","Egypt",
				   "SV","El Salvador",
				   "ER","Eritrea",
				   "EE","Estonia",
				   "ET","Ethiopia",
				   "FK","Falkland Islands",
				   "FO","Faroe Islands",
				   "FJ","Fiji",
				   "FI","Finland",
				   "FR","France",
				   "GA","Gabon",
				   "GM","Gambia",
				   "GE","Georgia",
				   "DE","Germany",
				   "GH","Ghana",
				   "GR","Greece",
				   "GL","Greenland",
				   "GD","Grenada",
				   "GP","Guadeloupe",
				   "GU","Guam",
				   "GT","Guatemala",
				   "GN","Guinea",
				   "GW","Guinea-Bissau",
				   "GY","Guyana",
				   "HT","Haiti",
				   "HN","Honduras",
				   "HK","Hong Kong",
				   "HU","Hungary",
				   "IS","Iceland",
				   "IN","India",
				   "ID","Indonesia",
				   "IR","Iran",
				   "IQ","Iraq",
				   "IE","Ireland",
				   "IM","Isle of Man",
				   "IL","Israel",
				   "IT","Italy",
				   "JM","Jamaica",
				   "JP","Japan",
				   "JO","Jordan",
				   "KZ","Kazakhstan",
				   "KE","Kenya",
				   "KP","Korea (North)",
				   "KR","Korea (South)",
				   "KW","Kuwait",
				   "KG","Kyrgyzstan",
				   "LA","Lao",
				   "LV","Latvia",
				   "LB","Lebanon",
				   "LS","Lesotho",
				   "LR","Liberia",
				   "LI","Lichtenstein",
				   "LT","Lithuania",
				   "LU","Luxembourg",
				   "MO","Macao",
				   "MK","Macedonia",
				   "MG","Madagascar",
				   "MW","Malawi",
				   "MY","Malausia",
				   "ML","Mali",
				   "MT","Malta",
				   "MH","Marshall Islands",
				   "MQ","Martinique",
				   "MR","Mauritania",
				   "MU","Mauritius",
				   "MX","Mexico",
				   "FM","Micronesia",
				   "MD","Moldova",
				   "MC","Monaco",
				   "MN","Mongolia",
				   "ME","Montenegro",
				   "MS","Montserrat",
				   "MA","Morocco",
				   "MZ","Mozambique",
				   "MM","Myanmar",
				   "NA","Namibia",
				   "NP","Nepal",
				   "NL","Netherlands",
				   "NZ","New Zealand",
				   "NI","Nicaragua",
				   "NG","Nigeria",
				   "NO","Norway",
				   "OM","Oman",
				   "PK","Pakistan",
				   "PW","Palau",
				   "PA","Panama",
				   "PG","Papua New Guinea",
				   "PY","Paraguay",
				   "PE","Peru",
				   "PH","Philippines",
				   "PN","Pitcairn",
				   "PL","Poland",
				   "PT","Portugal",
				   "PR","Puerto Rico",
				   "QA","Qatar",
				   "RE","Reunion",
				   "RO","Romania",
				   "RU","Russia",
				   "RW","Rwanda",
				   "WS","Samoa",
				   "ST","Sao Tome and Principe",
				   "SA","Saudi Arabia",
				   "SN","Senegal",
				   "RS","Serbia",
				   "SL","Sierra Leone",
				   "SG","Singapore",
				   "SK","Slovakia",
				   "SI","Slovenia",
				   "SB","Solomon Islands",
				   "SO","Somalia",
				   "ZA","South Africa",
				   "ES","Spain",
				   "LK","Sri Lanka",
				   "SD","Sudan",
				   "SR","Suriname",
				   "SZ","Swaziland",
				   "SE","Sweden",
				   "CH","Switzerland",
				   "TW","Taiwan",
				   "TJ","Tajikistan",
				   "TZ","Tanzania",
				   "TH","Thailand",
				   "TL","Timor-Leste",
				   "TG","Togo",
				   "TK","Tokelau",
				   "TO","Tonga",
				   "TT","Trinidad and Tobago",
				   "TN","Tunisia",
				   "TR","Turkey",
				   "TM","Turkmenistan",
				   "TC","Turks and Caicos Islands",
				   "TV","Tuvalu",
				   "UG","Uganda",
				   "UA","Ukraine",
				   "AE","United Arab Emirates",
				   "GB","United Kingdon",
				   "US","United States",
				   "UY","Uruguay",
				   "UZ","Uzbekistan",
				   "VE","Venezuela",
				   "VN","Viet Nam",
				   "VG","Virgin Islands (British)",
				   "VI","Virgin Islands (U.S.)",
				   "EH","Western Sahara",
				   "YE","Yemen",
				   "ZM","Zambia",
				   "ZW","Zimbabwe",
				   "##","##" };

// CINIInfo functions //

CINIInfo::CINIInfo(const char*  pRegKey,
				   CMainDialog* pMainDlg)
{
	// copy pointers
	m_pRegKey  =pRegKey;
	m_pMainDlg =pMainDlg;
}

CINIInfo::~CINIInfo()
{
	// read data
	ReadMainDlg();

	// save data
	SaveToReg();
}

void CINIInfo::LoadFromReg(void)
{
	// temporary values
	DWORD* pdwTemp;
	DWORD  dwSize;

	// macros for loading values
	#define LoadRegNumI(key,target,defval)     pdwTemp=(DWORD*)(&target); if(pRegKey->QueryValue((*pdwTemp),key)!=ERROR_SUCCESS) target=defval; else target=(*((int*)(pdwTemp)));
	#define LoadRegNumF(key,target,defval)     pdwTemp=(DWORD*)(&target); if(pRegKey->QueryValue((*pdwTemp),key)!=ERROR_SUCCESS) target=defval; else target=(*((float*)(pdwTemp)));
	#define LoadRegStr(key,target,defval,size) dwSize=size; if(pRegKey->QueryValue(target,key,&dwSize)!=ERROR_SUCCESS) strcpy(target,defval);

	// create registry key
	CRegKey* pRegKey=new CRegKey;

	// open registry key
	pRegKey->Create(HKEY_CURRENT_USER,
					m_pRegKey);

	// load data from regristry
	LoadRegStr("OutputFile",  m_pOutputFile,  "C:\\DragonFireSDK\\DragonFireSDK.ini",    _MAX_PATH)
	LoadRegStr("DevName",     m_pDevName,     "My Simulator",                            MAX_EDIT_BUF)
	LoadRegStr("DevUDID",     m_pDevUDID,     "1234567890abcdef1234567890abcdef12345678",MAX_EDIT_BUF)
	LoadRegStr("SysName",     m_pSysName,     "DFSDK iOS Simulator",                     MAX_EDIT_BUF)
	LoadRegStr("SysVersion",  m_pSysVersion,  "1.4",                                     MAX_EDIT_BUF)
	LoadRegNumI("UIType",      m_nUIType,      ,0)
	LoadRegNumI("LanguageID",  m_nLanguageID,  ,19)
	LoadRegNumI("CountryID",   m_nCountryID,   ,185)
	LoadRegNumI("BattState",   m_nBattState,   ,1)
	LoadRegNumI("BattLevel",   m_nBattLevel,   ,100)
	LoadRegNumI("MTaskOn",     m_nMTaskOn,     ,1)
	LoadRegNumF("Latitude",    m_fLatitude,    ,32.0F)
	LoadRegNumF("Longitude",   m_fLongitude,   ,-94.0F)
	LoadRegNumF("Course",      m_fCourse,      ,300)
	LoadRegNumF("Speed",       m_fSpeed,       ,50)
	LoadRegNumF("Heading",     m_fHeading,     ,359.2F)
	LoadRegNumF("Altitude",    m_fAltitude,    ,0)
	LoadRegNumF("HorzAccuracy",m_fHorzAccuracy,10)
	LoadRegNumF("VertAccuracy",m_fVertAccuracy,15)

	// close regristry key
	pRegKey->Close();

	// delete registry key
	delete pRegKey;
}

void CINIInfo::UpdateMainDlg(void)
{
}

void CINIInfo::ReadMainDlg(void)
{
}

void CINIInfo::OutputINI(void)
{
	// last output time
	static DWORD dwLastTime=0;

	// wait for delay
	if(GetTickCount()<(dwLastTime+FILE_OUTPUT_DELAY))
		return;

	// read main dialog
	ReadMainDlg();

	// create file object
	CFile* pFile=new CFile();
	
	// open file
	if(pFile->Open((PCSTR)m_pOutputFile,
				   CFile::modeCreate|CFile::modeWrite|CFile::shareExclusive|CFile::typeBinary))
	{
		// output ini file
		sprintf(g_pMsg,"[Location]\r\n");                               pFile->Write((void*)g_pMsg,strlen(g_pMsg));
		sprintf(g_pMsg,"Latitude=%f\r\n",             m_fLatitude);     pFile->Write((void*)g_pMsg,strlen(g_pMsg));
		sprintf(g_pMsg,"Longitude=%f\r\n",            m_fLongitude);    pFile->Write((void*)g_pMsg,strlen(g_pMsg));
		sprintf(g_pMsg,"Altitude=%f\r\n",             m_fAltitude);     pFile->Write((void*)g_pMsg,strlen(g_pMsg));
		sprintf(g_pMsg,"Course=%f\r\n",               m_fCourse);       pFile->Write((void*)g_pMsg,strlen(g_pMsg));
		sprintf(g_pMsg,"Heading=%f\r\n",              m_fHeading);      pFile->Write((void*)g_pMsg,strlen(g_pMsg));
		sprintf(g_pMsg,"HorizontalAccuracy=%f\r\n",   m_fHorzAccuracy); pFile->Write((void*)g_pMsg,strlen(g_pMsg));
		sprintf(g_pMsg,"Speed=%f\r\n",                m_fSpeed);        pFile->Write((void*)g_pMsg,strlen(g_pMsg));
		sprintf(g_pMsg,"VerticalAccuracy=%f\r\n",     m_fVertAccuracy); pFile->Write((void*)g_pMsg,strlen(g_pMsg));
		sprintf(g_pMsg,"[Device]\r\n");                                 pFile->Write((void*)g_pMsg,strlen(g_pMsg));
		sprintf(g_pMsg,"BatteryLevel=%d\r\n",         m_nBattLevel);    pFile->Write((void*)g_pMsg,strlen(g_pMsg));
		sprintf(g_pMsg,"BatteryState=%d\r\n",         m_nBattState);    pFile->Write((void*)g_pMsg,strlen(g_pMsg));
		GetLocaleID(g_pMsg);                                            pFile->Write((void*)g_pMsg,strlen(g_pMsg));
		sprintf(g_pMsg,"Model=DFSDK Simulator\r\n");                    pFile->Write((void*)g_pMsg,strlen(g_pMsg));
		sprintf(g_pMsg,"MultitaskingSupported=%d\r\n",m_nMTaskOn);      pFile->Write((void*)g_pMsg,strlen(g_pMsg));
		sprintf(g_pMsg,"Name=%s\r\n",                 m_pDevName);      pFile->Write((void*)g_pMsg,strlen(g_pMsg));
		sprintf(g_pMsg,"SystemName=%s\r\n",           m_pSysName);      pFile->Write((void*)g_pMsg,strlen(g_pMsg));
		sprintf(g_pMsg,"SystemVersion=%s\r\n",        m_pSysVersion);   pFile->Write((void*)g_pMsg,strlen(g_pMsg));
		sprintf(g_pMsg,"UDID=%s\r\n",                 m_pDevUDID);      pFile->Write((void*)g_pMsg,strlen(g_pMsg));
		sprintf(g_pMsg,"UIType=%d\r\n",               m_nUIType);       pFile->Write((void*)g_pMsg,strlen(g_pMsg));

		// close file
		pFile->Close();

		// save output time
		dwLastTime=GetTickCount();
	}

	// delete file object
	delete pFile;
}

void CINIInfo::GetLocaleID(char* pStr)
{
	// prepare string
	sprintf(pStr,
			"LocaleID=%s_%s\r\n",
			pLanguage[m_nLanguageID*2],
			pCountry[m_nCountryID*2]);
}

void CINIInfo::SaveToReg(void)
{
	// temporary value
	DWORD* pdwTemp;

	// macros for saving values
	#define SaveRegNum(key,target) pdwTemp=(DWORD*)(&target); pRegKey->SetValue((*pdwTemp),key);
	#define SaveRegStr(key,target) pRegKey->SetValue(target,key);

	// create registry key
	CRegKey* pRegKey=new CRegKey;

	// open registry key
	pRegKey->Create(HKEY_CURRENT_USER,
					m_pRegKey);

	// save data to regristry
	SaveRegStr("OutputFile",  m_pOutputFile)
	SaveRegStr("DevName",     m_pDevName)
	SaveRegStr("DevUDID",     m_pDevUDID)
	SaveRegStr("SysName",     m_pSysName)
	SaveRegStr("SysVersion",  m_pSysVersion)
	SaveRegNum("UIType",      m_nUIType)
	SaveRegNum("LanguageID",  m_nLanguageID)
	SaveRegNum("CountryID",   m_nCountryID)
	SaveRegNum("BattState",   m_nBattState)
	SaveRegNum("BattLevel",   m_nBattLevel)
	SaveRegNum("MTaskOn",     m_nMTaskOn)
	SaveRegNum("Latitude",    m_fLatitude)
	SaveRegNum("Longitude",   m_fLongitude)
	SaveRegNum("Course",      m_fCourse)
	SaveRegNum("Speed",       m_fSpeed)
	SaveRegNum("Heading",     m_fHeading)
	SaveRegNum("Altitude",    m_fAltitude)
	SaveRegNum("HorzAccuracy",m_fHorzAccuracy)
	SaveRegNum("VertAccuracy",m_fVertAccuracy)

	// close regristry key
	pRegKey->Close();

	// delete registry key
	delete pRegKey;
}

// eof //