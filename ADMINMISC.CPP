

#define WIN32_LEAN_AND_MEAN
#define _ADMINMISC_H_

#ifdef __BORLANDC__
typedef wchar_t wctype_t; /* in tchar.h, but unavailable unless _UNICODE */
#endif

#include <windows.h>
#include <winsock.h>
#include <stdio.h>		//	Gurusamy's right, Borland is brain damaged!
#include <math.h>		//	Gurusamy's right, MS is brain damaged!
#include <lmcons.h>     // LAN Manager common definitions
#include <lmerr.h>      // LAN Manager network error definitions
#include <lmUseFlg.h>
#include <lmAccess.h>
#include <lmAPIBuf.h>
#include <lmremutl.h>
#include <lmat.h>

#if defined(__cplusplus) && !defined(PERL_OBJECT)
extern "C" {
#endif

#include "EXTERN.h"
#include "perl.h"
#include "XSUB.h"

#if defined(__cplusplus) && !defined(PERL_OBJECT)
}
#endif

	//	Include the AdminMisc headers
#include "AdminMisc.h"
#include "DNS.h"


//	===============REMOVE BECAUSE IT IS OBSOLETE!
	//	Set up Globals...
//	PHANDLE	phToken = 0;		//	handle to Token for impersonation!
//	==============================================


	//	Here are the function prototypes that we don't need to bother putting in 
	//	the header because no other file should need this (not DNS.CPP at least).
	SV *MakeSVFromAccount(PERL_OBJECT_PROTO PUSER_INFO_3 puiUser, int iTemp);
	int SetUserInfo(PERL_OBJECT_PROTO PUSER_INFO_3 puiUser, double dValue, char *szValue, int iTemp);
	void AddFileValue(PERL_OBJECT_PROTO DWORD dLang, char *szKey, char *szName, HV *hv, void *pBuffer);


// constant function for exporting NT definitions.

static long constant(PERL_OBJECT_PROTO char *name)
{
	int	iTemp; 

    errno = 0;

    switch (*name) {
    case 'A':
   			if (strEQ(name, "AF_OP_PRINT"))
		#ifdef AF_OP_PRINT
			    return AF_OP_PRINT;
		#else
			    goto not_there;
		#endif
			if (strEQ(name, "AF_OP_COMM"))
		#ifdef AF_OP_COMM
			    return AF_OP_COMM;
		#else
			    goto not_there;
		#endif
			if (strEQ(name, "AF_OP_SERVER"))
		#ifdef AF_OP_SERVER
			    return AF_OP_SERVER;
		#else
			    goto not_there;
		#endif
			if (strEQ(name, "AF_OP_ACCOUNTS"))
		#ifdef AF_OP_ACCOUNTS
			    return AF_OP_ACCOUNTS;
		#else
			    goto not_there;
		#endif
		break;
    
	case 'B':
			if (strEQ(name, "BACKGROUND_RED"))
		#ifdef BACKGROUND_RED
			    return BACKGROUND_RED;
		#else
			    goto not_there;
		#endif
			if (strEQ(name, "BACKGROUND_BLUE"))
		#ifdef BACKGROUND_BLUE
			    return BACKGROUND_BLUE;
		#else
			    goto not_there;
		#endif
			if (strEQ(name, "BACKGROUND_GREEN"))
		#ifdef BACKGROUND_GREEN
			    return BACKGROUND_GREEN;
		#else
			    goto not_there;
		#endif
			if (strEQ(name, "BACKGROUND_INTENSITY"))
		#ifdef BACKGROUND_INTENSITY
			    return BACKGROUND_INTENSITY;
		#else
			    goto not_there;
		#endif

		break;

    case 'C':
			if (strEQ(name, "CREATE_DEFAULT_ERROR_MODE"))
		#ifdef CREATE_DEFAULT_ERROR_MODE
			    return CREATE_DEFAULT_ERROR_MODE;
		#else
			    goto not_there;
		#endif
			if (strEQ(name, "CREATE_NEW_CONSOLE"))
		#ifdef CREATE_NEW_CONSOLE
			    return CREATE_NEW_CONSOLE;
		#else
			    goto not_there;
		#endif
			if (strEQ(name, "CREATE_NEW_PROCESS_GROUP"))
		#ifdef CREATE_NEW_PROCESS_GROUP
			    return CREATE_NEW_PROCESS_GROUP;
		#else
			    goto not_there;
		#endif
			if (strEQ(name, "CREATE_SEPARATE_WOW_VDM"))
		#ifdef CREATE_SEPARATE_WOW_VDM
			    return CREATE_SEPARATE_WOW_VDM;
		#else
			    goto not_there;
		#endif
			if (strEQ(name, "CREATE_SUSPENDED"))
		#ifdef CREATE_SUSPENDED
			    return CREATE_SUSPENDED;
		#else
			    goto not_there;
		#endif
			if (strEQ(name, "CREATE_UNICODE_ENVIRONMENT"))
		#ifdef CREATE_UNICODE_ENVIRONMENT
			    return CREATE_UNICODE_ENVIRONMENT;
		#else
			    goto not_there;
		#endif

		
		break;
    case 'D':
			if (strEQ(name, "DEBUG_PROCESS"))
		#ifdef DEBUG_PROCESS
			    return DEBUG_PROCESS;
		#else
			    goto not_there;
		#endif
			if (strEQ(name, "DEBUG_ONLY_THIS_PROCESS"))
		#ifdef DEBUG_ONLY_THIS_PROCESS
			    return DEBUG_ONLY_THIS_PROCESS;
		#else
			    goto not_there;
		#endif
			if (strEQ(name, "DETACHED_PROCESS"))
		#ifdef DETACHED_PROCESS
			    return DETACHED_PROCESS;
		#else
			    goto not_there;
		#endif
		
		if (strEQ(name, "DRIVE_REMOVABLE"))
		#ifdef DRIVE_REMOVABLE
			    return DRIVE_REMOVABLE;
		#else
			    goto not_there;
		#endif
			if (strEQ(name, "DRIVE_FIXED"))
		#ifdef DRIVE_FIXED
			    return DRIVE_FIXED;
		#else
			    goto not_there;
		#endif
			if (strEQ(name, "DRIVE_REMOTE"))
		#ifdef DRIVE_REMOTE
			    return DRIVE_REMOTE;
		#else
			    goto not_there;
		#endif
			if (strEQ(name, "DRIVE_CDROM"))
		#ifdef DRIVE_CDROM
			    return DRIVE_CDROM;
		#else
			    goto not_there;
		#endif
			if (strEQ(name, "DRIVE_RAMDISK"))
		#ifdef DRIVE_RAMDISK
			    return DRIVE_RAMDISK;
		#else
			    goto not_there;
		#endif
			if (strEQ(name, "DOMAIN_GROUP_RID_USERS"))
		#ifdef DOMAIN_GROUP_RID_USERS
			    return DOMAIN_GROUP_RID_USERS;
		#else
			    goto not_there;
		#endif
		break;
    
	case 'E':
			if (strEQ(name, "ENV_SYSTEM"))
		#ifdef ENV_SYSTEM
			    return ENV_SYSTEM;
		#else
			    goto not_there;
		#endif
			if (strEQ(name, "ENV_USER"))
		#ifdef ENV_USER
			    return ENV_USER;
		#else
			    goto not_there;
		#endif

				if (strEQ(name, "EWX_LOGOFF"))
		#ifdef EWX_LOGOFF 
			    return EWX_LOGOFF ;
		#else
			    goto not_there;
		#endif
			if (strEQ(name, "EWX_FORCE"))
		#ifdef EWX_FORCE
			    return EWX_FORCE;
		#else
			    goto not_there;
		#endif
			if (strEQ(name, "EWX_POWEROFF"))
		#ifdef EWX_POWEROFF
			    return EWX_POWEROFF;
		#else
			    goto not_there;
		#endif
			if (strEQ(name, "EWX_REBOOT"))
		#ifdef EWX_REBOOT
			    return EWX_REBOOT;
		#else
			    goto not_there;
		#endif
			if (strEQ(name, "EWX_SHUTDOWN"))
		#ifdef EWX_SHUTDOWN
			    return EWX_SHUTDOWN;
		#else
			    goto not_there;
		#endif
		
		break;
    case 'F':
		if (strEQ(name, "FRIDAY"))
		    return 0x000010;

			if (strEQ(name, "FOREGROUND_RED"))
		#ifdef FOREGROUND_RED
			    return FOREGROUND_RED;
		#else
			    goto not_there;
		#endif
			if (strEQ(name, "FOREGROUND_BLUE"))
		#ifdef FOREGROUND_BLUE
			    return FOREGROUND_BLUE;
		#else
			    goto not_there;
		#endif
			if (strEQ(name, "FOREGROUND_GREEN"))
		#ifdef FOREGROUND_GREEN
			    return FOREGROUND_GREEN;
		#else
			    goto not_there;
		#endif
			if (strEQ(name, "FOREGROUND_INTENSITY"))
		#ifdef FOREGROUND_INTENSITY
			    return FOREGROUND_INTENSITY;
		#else
			    goto not_there;
		#endif
		
		break;
    case 'G':
		break;
    case 'H':
			if (strEQ(name, "HIGH_PRIORITY_CLASS"))
		#ifdef HIGH_PRIORITY_CLASS
			    return HIGH_PRIORITY_CLASS;
		#else
			    goto not_there;
		#endif

		break;
    case 'I':
			if (strEQ(name, "IDLE_PRIORITY_CLASS"))
		#ifdef IDLE_PRIORITY_CLASS
			    return IDLE_PRIORITY_CLASS;
		#else
			    goto not_there;
		#endif

		break;
    case 'J':
			if (strEQ(name, "JOB_RUN_PERIODICALLY"))
		#ifdef JOB_RUN_PERIODICALLY
			    return JOB_RUN_PERIODICALLY;
		#else
			    goto not_there;
		#endif
			if (strEQ(name, "JOB_ADD_CURRENT_DATE"))
		#ifdef JOB_ADD_CURRENT_DATE 
			    return JOB_ADD_CURRENT_DATE;
		#else
			    goto not_there;
		#endif
			if (strEQ(name, "JOB_RUN_PERIODICALLY"))
		#ifdef JOB_RUN_PERIODICALLY
			    return JOB_RUN_PERIODICALLY;
		#else
			    goto not_there;
		#endif
			if (strEQ(name, "JOB_EXEC_ERROR"))
		#ifdef JOB_EXEC_ERROR
			    return JOB_EXEC_ERROR;
		#else
			    goto not_there;
		#endif
			if (strEQ(name, "JOB_RUNS_TODAY"))
		#ifdef JOB_RUNS_TODAY
			    return JOB_RUNS_TODAY;
		#else
			    goto not_there;
		#endif
			if (strEQ(name, "JOB_NONINTERACTIVE"))
		#ifdef JOB_NONINTERACTIVE
			    return JOB_NONINTERACTIVE;
		#else
			    goto not_there;
		#endif
			if (strEQ(name, "IDLE_PRIORITY_CLASS"))
		#ifdef IDLE_PRIORITY_CLASS
			    return IDLE_PRIORITY_CLASS;
		#else
			    goto not_there;
		#endif

		break;

	case 'K':
		break;
    
	case 'L':
			if (strEQ(name, "LOGON32_LOGON_BATCH"))
		#ifdef LOGON32_LOGON_BATCH
			    return LOGON32_LOGON_BATCH;
		#else
			    goto not_there;
		#endif
			if (strEQ(name, "LOGON32_LOGON_INTERACTIVE"))
		#ifdef LOGON32_LOGON_INTERACTIVE
			    return LOGON32_LOGON_INTERACTIVE;
		#else
			    goto not_there;
		#endif
			if (strEQ(name, "LOGON32_LOGON_SERVICE"))
		#ifdef LOGON32_LOGON_SERVICE
			    return LOGON32_LOGON_SERVICE;
		#else
			    goto not_there;
		#endif
			if (strEQ(name, "LOGON32_LOGON_NETWORK"))
		#ifdef LOGON32_LOGON_NETWORK
			    return LOGON32_LOGON_NETWORK;
		#else
			    goto not_there;
		#endif

		break;

    case 'M':
		if (strEQ(name, "MONDAY"))
		    return 0x000001;
			break;

	case 'N':
			if (strEQ(name, "NORMAL_PRIORITY_CLASS"))
		#ifdef NORMAL_PRIORITY_CLASS
			    return NORMAL_PRIORITY_CLASS;
		#else
			    goto not_there;
		#endif
		break;
    case 'O':
		break;
    case 'P':
		break;
    case 'Q':
		break;
    case 'R':
			if (strEQ(name, "REALTIME_PRIORITY_CLASS"))
		#ifdef REALTIME_PRIORITY_CLASS
			    return REALTIME_PRIORITY_CLASS;
		#else
			    goto not_there;
		#endif

		break;
    case 'S':
		if (strEQ(name, "SATURDAY"))
		    return 0x000020;
		if (strEQ(name, "SUNDAY"))
		    return 0x000040;

			if (strEQ(name, "SAM_DAYS_PER_WEEK"))
		#ifdef SAM_DAYS_PER_WEEK
			    return SAM_DAYS_PER_WEEK;
		#else
			    goto not_there;
		#endif
			    if (strEQ(name, "SAM_HOURS_PER_WEEK"))
		#ifdef SAM_HOURS_PER_WEEK
			    return SAM_HOURS_PER_WEEK;
		#else
			    goto not_there;
		#endif
			    if (strEQ(name, "STARTF_USESHOWWINDOW"))
		#ifdef STARTF_USESHOWWINDOW
			    return STARTF_USESHOWWINDOW;
		#else
			    goto not_there;
		#endif

			    if (strEQ(name, "STARTF_USEPOSITION"))
		#ifdef STARTF_USEPOSITION
			    return STARTF_USEPOSITION;
		#else
			    goto not_there;
		#endif
			    if (strEQ(name, "STARTF_USESIZE"))
		#ifdef STARTF_USESIZE
			    return STARTF_USESIZE;
		#else
			    goto not_there;
		#endif
			    if (strEQ(name, "STARTF_USECOUNTCHARS"))
		#ifdef STARTF_USECOUNTCHARS
			    return STARTF_USECOUNTCHARS;
		#else
			    goto not_there;
		#endif
			    if (strEQ(name, "STARTF_USEFILLATTRIBUTE"))
		#ifdef STARTF_USEFILLATTRIBUTE
			    return STARTF_USEFILLATTRIBUTE;
		#else
			    goto not_there;
		#endif
			    if (strEQ(name, "STARTF_FORCEONFEEDBACK"))
		#ifdef STARTF_FORCEONFEEDBACK
			    return STARTF_FORCEONFEEDBACK;
		#else
			    goto not_there;
		#endif
			    if (strEQ(name, "STARTF_FORCEOFFFEEDBACK"))
		#ifdef STARTF_FORCEOFFFEEDBACK
			    return STARTF_FORCEOFFFEEDBACK;
		#else
			    goto not_there;
		#endif
			    if (strEQ(name, "STARTF_USESTDHANDLES"))
		#ifdef STARTF_USESTDHANDLES
			    return STARTF_USESTDHANDLES;
		#else
			    goto not_there;
		#endif
				
			    if (strEQ(name, "SW_HIDE"))
		#ifdef SW_HIDE
			    return SW_HIDE;
		#else
			    goto not_there;
		#endif
			    if (strEQ(name, "SW_MAXIMIZE"))
		#ifdef SW_MAXIMIZE
			    return SW_MAXIMIZE;
		#else
			    goto not_there;
		#endif
			    if (strEQ(name, "SW_MINIMIZE"))
		#ifdef SW_MINIMIZE
			    return SW_MINIMIZE;
		#else
			    goto not_there;
		#endif
			    if (strEQ(name, "SW_RESTORE"))
		#ifdef SW_RESTORE
			    return SW_RESTORE;
		#else
			    goto not_there;
		#endif
			    if (strEQ(name, "SW_SHOW"))
		#ifdef SW_SHOW
			    return SW_SHOW;
		#else
			    goto not_there;
		#endif
			    if (strEQ(name, "SW_SHOWDEFAULT"))
		#ifdef SW_SHOWDEFAULT
			    return SW_SHOWDEFAULT;
		#else
			    goto not_there;
		#endif
			    if (strEQ(name, "SW_SHOWMAXIMIZED"))
		#ifdef SW_SHOWMAXIMIZED
			    return SW_SHOWMAXIMIZED;
		#else
			    goto not_there;
		#endif
			    if (strEQ(name, "SW_SHOWMINIMIZED"))
		#ifdef SW_SHOWMINIMIZED
			    return SW_SHOWMINIMIZED;
		#else
			    goto not_there;
		#endif
			    if (strEQ(name, "SW_SHOWMINNOACTIVE"))
		#ifdef SW_SHOWMINNOACTIVE
			    return SW_SHOWMINNOACTIVE;
		#else
			    goto not_there;
		#endif
			    if (strEQ(name, "SW_SHOWNA"))
		#ifdef SW_SHOWNA
			    return SW_SHOWNA;
		#else
			    goto not_there;
		#endif
			    if (strEQ(name, "SW_SHOWNOACTIVATE"))
		#ifdef SW_SHOWNOACTIVATE
			    return SW_SHOWNOACTIVATE;
		#else
			    goto not_there;
		#endif
			    if (strEQ(name, "SW_SHOWNORMAL"))
		#ifdef SW_SHOWNORMAL
			    return SW_SHOWNORMAL;
		#else
			    goto not_there;
		#endif


			    if (strEQ(name, "STD_INPUT_HANDLE"))
		#ifdef STD_INPUT_HANDLE
			    return STD_INPUT_HANDLE;
		#else
			    goto not_there;
		#endif
			    if (strEQ(name, "STD_OUTPUT_HANDLE"))
		#ifdef STD_OUTPUT_HANDLE
			    return STD_OUTPUT_HANDLE;
		#else
			    goto not_there;
		#endif
			    if (strEQ(name, "STD_ERROR_HANDLE"))
		#ifdef STD_ERROR_HANDLE
			    return STD_ERROR_HANDLE;
		#else
			    goto not_there;
		#endif

				
				break;
 
	case 'T':

		if (strEQ(name, "TUESDAY"))
		    return 0x000002;
		if (strEQ(name, "THURSDAY"))
		    return 0x000008;
		
			if (strEQ(name, "TIMEQ_FOREVER"))
		#ifdef TIMEQ_FOREVER
			    return TIMEQ_FOREVER;
		#else
			    goto not_there;
		#endif
	   	break;
    
	case 'U':
			if (strEQ(name, "UF_TEMP_DUPLICATE_ACCOUNT"))
		#ifdef UF_TEMP_DUPLICATE_ACCOUNT
			    return UF_TEMP_DUPLICATE_ACCOUNT;
		#else
			    goto not_there;
		#endif
			if (strEQ(name, "UF_NORMAL_ACCOUNT"))
		#ifdef UF_NORMAL_ACCOUNT
			    return UF_NORMAL_ACCOUNT;
		#else
			    goto not_there;
		#endif
			if (strEQ(name, "UF_INTERDOMAIN_TRUST_ACCOUNT"))
		#ifdef UF_INTERDOMAIN_TRUST_ACCOUNT
			    return UF_INTERDOMAIN_TRUST_ACCOUNT;
		#else
			    goto not_there;
		#endif
			if (strEQ(name, "UF_WORKSTATION_TRUST_ACCOUNT"))
		#ifdef UF_WORKSTATION_TRUST_ACCOUNT
			    return UF_WORKSTATION_TRUST_ACCOUNT;
		#else
			    goto not_there;
		#endif
			if (strEQ(name, "UF_SERVER_TRUST_ACCOUNT"))
		#ifdef UF_SERVER_TRUST_ACCOUNT
			    return UF_SERVER_TRUST_ACCOUNT;
		#else
			    goto not_there;
		#endif
			if (strEQ(name, "UF_MACHINE_ACCOUNT_MASK"))
		#ifdef UF_MACHINE_ACCOUNT_MASK
			    return UF_MACHINE_ACCOUNT_MASK;
		#else
			    goto not_there;
		#endif
			if (strEQ(name, "UF_ACCOUNT_TYPE_MASK"))
		#ifdef UF_ACCOUNT_TYPE_MASK
			    return UF_ACCOUNT_TYPE_MASK;
		#else
			    goto not_there;
		#endif
			if (strEQ(name, "UF_DONT_EXPIRE_PASSWD"))
		#ifdef UF_DONT_EXPIRE_PASSWD
			    return UF_DONT_EXPIRE_PASSWD;
		#else
			    goto not_there;
		#endif
			if (strEQ(name, "UF_SETTABLE_BITS"))
		#ifdef UF_SETTABLE_BITS
			    return UF_SETTABLE_BITS;
		#else
			    goto not_there;
		#endif
				if (strEQ(name, "UF_SCRIPT"))
		#ifdef UF_SCRIPT
			    return UF_SCRIPT;
		#else
			    goto not_there;
		#endif
			if (strEQ(name, "UF_ACCOUNTDISABLE"))
		#ifdef UF_ACCOUNTDISABLE
			    return UF_ACCOUNTDISABLE;
		#else
			    goto not_there;
		#endif
			if (strEQ(name, "UF_HOMEDIR_REQUIRED"))
		#ifdef UF_HOMEDIR_REQUIRED
			    return UF_HOMEDIR_REQUIRED;
		#else
			    goto not_there;
		#endif
			if (strEQ(name, "UF_LOCKOUT"))
		#ifdef UF_LOCKOUT
			    return UF_LOCKOUT;
		#else
			    goto not_there;
		#endif
			if (strEQ(name, "UF_PASSWD_NOTREQD"))
		#ifdef UF_PASSWD_NOTREQD
			    return UF_PASSWD_NOTREQD;
		#else
			    goto not_there;
		#endif
			if (strEQ(name, "UF_PASSWD_CANT_CHANGE"))
		#ifdef UF_PASSWD_CANT_CHANGE
			    return UF_PASSWD_CANT_CHANGE;
		#else
			    goto not_there;
		#endif
				if (strEQ(name, "USE_FORCE"))
		#ifdef USE_FORCE
			    return USE_FORCE;
		#else
			    goto not_there;
		#endif
			if (strEQ(name, "USE_LOTS_OF_FORCE"))
		#ifdef USE_LOTS_OF_FORCE
			    return USE_LOTS_OF_FORCE;
		#else
			    goto not_there;
		#endif
			if (strEQ(name, "USE_NOFORCE"))
		#ifdef USE_NOFORCE
			    return USE_NOFORCE;
		#else
			    goto not_there;
		#endif
			if (strEQ(name, "USER_PRIV_MASK"))
		#ifdef USER_PRIV_MASK
			    return USER_PRIV_MASK;
		#else
			    goto not_there;
		#endif
			if (strEQ(name, "USER_PRIV_GUEST"))
		#ifdef USER_PRIV_GUEST
			    return USER_PRIV_GUEST;
		#else
			    goto not_there;
		#endif
			if (strEQ(name, "USER_PRIV_USER"))
		#ifdef USER_PRIV_USER
			    return USER_PRIV_USER;
		#else
			    goto not_there;
		#endif
			if (strEQ(name, "USER_PRIV_ADMIN"))
		#ifdef USER_PRIV_ADMIN
			    return USER_PRIV_ADMIN;
		#else
			    goto not_there;
		#endif
			if (strEQ(name, "UNITS_PER_WEEK"))
		#ifdef UNITS_PER_WEEK
			    return UNITS_PER_WEEK;
		#else
			    goto not_there;
		#endif
			if (strEQ(name, "USER_MAXSTORAGE_UNLIMITED"))
		#ifdef USER_MAXSTORAGE_UNLIMITED
			    return USER_MAXSTORAGE_UNLIMITED;
		#else
			    goto not_there;
		#endif
		break;
    case 'V':
		break;
    case 'W':
		if (strEQ(name, "WEDNESDAY"))
		    return 0x000004;

		break;
    case 'X':
		break;
    case 'Y':
		break;
    case 'Z':
		break;
    }
	{
		DWORD	dValue = 0;
		if(MapNameToConstant(name, &dValue)){
			return (long) dValue;
		}
	}
    errno = EINVAL;
    return 0;

not_there:
    errno = ENOENT;
    return 0;
}




#undef malloc
#undef free
void AllocWideName(char* name, LPWSTR &lpPtr)
{
	int length;

	lpPtr = NULL;
	if(name != NULL)	// && *name != '\0')
	{							   
			//	Add one extra for the null!!
		length = (strlen(name) * sizeof(wctype_t)) + sizeof(wctype_t);
		lpPtr = (LPWSTR)malloc(length);
		if(lpPtr != NULL)
			MultiByteToWideChar(CP_ACP, NULL, name, -1, lpPtr, length);
	}
}

inline void FreeWideName(LPWSTR lpPtr)
{
	if(lpPtr != NULL)
		free(lpPtr);
}

inline int WCTMB(LPWSTR lpwStr, LPSTR lpStr, int size)
{
	*lpStr = '\0';
	return WideCharToMultiByte(CP_ACP, NULL, lpwStr, -1, lpStr, size, NULL, NULL);
}

static DWORD lastError = 0;

	//	GetDC returns 0 if it can not resolve the (P)DC or returns a
	//	char* to the ascii name of the server WHICH NEEDS TO BE DELETED
	//	later!!!!
	//	bFlag == TRUE if requesting a Primary Domain Controler.
char *GetDC(char *szName, BOOL bFlag){
	LPWSTR	lpwServer, lpwDomain, lpwPrimaryDC = 0;
	char *szServer = 0;
	int	iSize = 50;
	NET_API_STATUS	nResult;
	
	if (szServer = new char [iSize + 1]){
			//	IF preceded with a \\ or a // then assume it is a computer name otherwise...
		if (szName){
			for(int iTemp = strlen(szName); iTemp >= 0; iTemp--){
				if (szName[iTemp] == '/'){
					szName[iTemp] = '\\';
				}
			}
			if (strncmp(szName, "\\\\", 2) == 0){
				AllocWideName((char*) szName, lpwServer);
				lpwDomain = 0;
			}else{
				//	...this must be a domain name
				AllocWideName((char*) szName, lpwDomain);
				lpwServer = 0;
			}
		}else{
			lpwServer = 0;
			lpwDomain = 0;
		}
		if (bFlag){
			nResult = NetGetDCName(lpwServer, lpwDomain, (LPBYTE *)&lpwPrimaryDC);
		}else{
			nResult = NetGetAnyDCName(lpwServer, lpwDomain, (LPBYTE *)&lpwPrimaryDC);
		}
		if (nResult == NERR_Success){
			WCTMB(lpwPrimaryDC, szServer, iSize);
			NetApiBufferFree(lpwPrimaryDC);
		}else{
			if (lpwServer){
					//	Let's just assume that the name will NEVER be > than
					//	what has been allocated.
				strncpy(szServer, szName, iSize);
				if (szServer[0] == '/') szServer[0] = '\\';
				if (szServer[1] == '/') szServer[1] = '\\';
			}else{
				delete [] szServer;
				szServer = 0;
			}
		}
		FreeWideName(lpwServer);
		FreeWideName(lpwDomain);
	}
	return szServer;
}

int MapNameToConstant(char *szString, DWORD *dValue){
	int	iTemp;
		//	Scan for a name that matches a USER_INFO_3 field name
	for(iTemp = 0; iTemp < TOTAL_ACCOUNT_INFO; iTemp++){
		if (!(stricmp(szString, AccountInfoName[iTemp]))){
			*dValue = iTemp;
			return 1;
		}
	}
	return 0;
}

void AddFileValue(PERL_OBJECT_PROTO DWORD dLang, char *szKey, char *szName, HV *hv, void *pBuffer)
{
	char	*szBuffer;
	SV		*sv;
	UINT	dBufSize;
	char	szTemp[50];

	sprintf(szTemp, "\\StringFileInfo\\%08X\\%s", dLang, szKey);
	if (VerQueryValue(pBuffer, 
		szTemp, 
		(void **) &szBuffer, 
		&dBufSize)){
		sv = newSVpv((char *)szBuffer, strlen((char *) szBuffer));
		hv_store(hv, szKey, strlen(szKey), sv, 0);
	}
	return;
}

XS(XS_NT__AdminMisc_GetError)
{
	dSP;
	PUSHMARK(sp);
	XPUSHs(newSViv(lastError));
	PUTBACK;
}
	//	---------------------------------------------------------------
	//		Added Features...	Dave Roth <rothd@roth.net>
void LogoffImpersonatedUser(int iSeverity){
	PHANDLE	phToken =  (void **) TlsGetValue(gdTlsSlot);

	if (phToken != 0 || iSeverity){
		RevertToSelf();
		if(phToken){
			CloseHandle(phToken);
		}
		phToken = 0;
		TlsSetValue(gdTlsSlot, phToken);
	}
}

XS(XS_NT__AdminMisc_ShowWindow)
{
	dXSARGS;
	int	iAttribute;

	if (items != 1){
		croak("Useage: Win32::AdminMisc::ShowWindow($Attribute)\n");
	}

	PUSHMARK(sp);


	iAttribute = (int) SvIV(ST(0));
	if(ShowWindow(GetWindow, iAttribute)){ 
		XPUSHs(newSViv((long) 1));
	}else{
		XPUSHs(newSViv((long) 0));
	}

	PUTBACK;
}

XS(XS_NT__AdminMisc_GetStdHandle)
{
	dXSARGS;
	HANDLE	hResult;

	if (items != 1){
		croak("Useage: Win32::AdminMisc::GetStdHandle($StdType)\n");
	}

	PUSHMARK(sp);


	hResult = GetStdHandle((DWORD)SvIV(ST(0)));
	
	if (hResult == INVALID_HANDLE_VALUE){
		XPUSHs(&sv_undef);
	}else{
		XPUSHs(newSViv((long) hResult));
	}

	PUTBACK;
}



XS(XS_NT__AdminMisc_GetLogonName)
{
	dXSARGS;
	char szName[128];
	unsigned long len;
	
	lastError = 0;
	if (items != 0){
		croak("Useage: Win32::AdminMisc::GetLogonName()\n");
	}

	PUSHMARK(sp);

	len = sizeof(szName);
	if(!(lastError = GetUserName((LPTSTR) szName, &len))){ 
		strcpy(szName, "");

	}else{
		XPUSHs(newSVpv(szName, strlen(szName)));
	}

	PUTBACK;
}


XS(XS_NT__AdminMisc_GetComputerName)
{
	dXSARGS;
	char szName[MAX_COMPUTERNAME_LENGTH + 1];
	unsigned long len;
	BOOL	bResult = FALSE;

	if (items != 0){
		croak("Useage: Win32::AdminMisc::GetComputerName()\n");
	}

	PUSHMARK(sp);

	len = sizeof(szName);
	bResult = GetComputerName((LPTSTR) szName, &len);

	if (bResult){
		XPUSHs(newSVpv(szName, strlen(szName)));
	}else{
		XPUSHs(&sv_undef);
	}

	PUTBACK;
}

XS(XS_NT__AdminMisc_SetComputerName)
{
	dXSARGS;
	char *szName;
	WCHAR	*szwName;
	unsigned long len;
	BOOL	bResult = FALSE;

	if (items != 1){
		croak("Useage: Win32::AdminMisc::SetComputerName($Name)\n");
	}

	PUSHMARK(sp);

	szName = SvPV(ST(0), na);
	if (strlen(szName) <= MAX_COMPUTERNAME_LENGTH){
		AllocWideName(szName, szwName);
		bResult = SetComputerName((LPCTSTR) szwName);
		FreeWideName(szwName);
	}
	if (bResult){
		XPUSHs(newSVpv(szName, strlen(szName)));
	}else{
		XPUSHs(&sv_undef);
	}

	PUTBACK;
}



XS(XS_NT__AdminMisc_LogoffAsUser)
{
	dXSARGS;
	int	iSeverity = 0;

	if (items > 1)
	{
		croak("Useage: Win32::AdminMisc::LogoffAsUser()\n");
	}
	if (items){
		iSeverity = SvIV(ST(0));
	}
	LogoffImpersonatedUser(iSeverity);


	RETURNRESULT(1);
}


	//	A domain name of "." will choose the computer's local database. A NULL will
	//	search local database then any trust until the username is found.
XS(XS_NT__AdminMisc_LogonAsUser)
{
 	dXSARGS;
	LPTSTR	szUser, szDomain, szPassword;
	DWORD dType = LOGON32_LOGON_INTERACTIVE;
	PHANDLE	phToken = (void **) TlsGetValue(gdTlsSlot);

	if (items > 4 || items < 3)
	{
		croak("Useage: NT::AdminMisc::LogonAsUser(domain, userName, password [, $LogonType)\n");
	}

	lastError = 0;
	szDomain = (LPTSTR) SvPV(ST(0), na);
	if (! strlen(szDomain)){
		szDomain = NULL;
	}else{
		for(int iTemp = strlen(szDomain); iTemp >= 0; iTemp--){
			if (szDomain[iTemp] == '/'){
				szDomain[iTemp] = '\\';
			}
		}
	}
	szUser   = (LPTSTR) SvPV(ST(1), na);
	szPassword = (LPTSTR) SvPV(ST(2), na);

	if (items == 4){
		dType = SvIV(ST(3));
	}
		//	If we are already logged on, log us out first!
	if (phToken != 0){
		LogoffImpersonatedUser(0);
		phToken = 0;
	}								  
			//	Log on as the User...
 	lastError = LogonUser(szUser, szDomain, szPassword, dType, LOGON32_PROVIDER_DEFAULT, (PHANDLE) &phToken);
	if (lastError != 0){
			//	Now impersonate the User...
		if (!(lastError = ImpersonateLoggedOnUser(phToken))){
			LogoffImpersonatedUser(0);
			phToken = 0;
		}
	}else{
		phToken = 0;
	}
		//	Save the thread specific token
	TlsSetValue(gdTlsSlot, phToken);

	RETURNRESULT(lastError == 1);
}




XS(XS_NT__AdminMisc_UserCheckPassword)
{
	dXSARGS;

	if (items != 3)
	{
		croak("Useage: NT::AdminMisc::UserCheckPassword(domain, userName, password)\n");
	}
	lastError = ChangePassword((char*)SvPV(ST(0),na),(char*)SvPV(ST(1),na), (char*)SvPV(ST(2),na), (char*)SvPV(ST(2),na)); 

	RETURNRESULT(lastError == 1);
}	

XS(XS_NT__AdminMisc_UserChangePassword)
{
	dXSARGS;

	if (items != 4)
	{
		croak("Useage: NT::AdminMisc::UserChangePassword(domain, userName, oldPassword, newPassword)\n");
	}
	lastError = ChangePassword((char*)SvPV(ST(0),na),(char*)SvPV(ST(1),na), (char*)SvPV(ST(2),na), (char*)SvPV(ST(3),na)); 

	RETURNRESULT(lastError == 1);
}		
	

int ChangePassword(char *szDomain, char *szUser, char *szOldPassword, char *szNewPassword){
	LPWSTR lpwDomain, lpwUser;
	LPWSTR lpwOldPassword, lpwNewPassword;
	NET_API_STATUS	nasResult = 0;

	AllocWideName(szDomain, lpwDomain);
	AllocWideName(szUser, lpwUser);
	AllocWideName(szOldPassword, lpwOldPassword);
	AllocWideName(szNewPassword, lpwNewPassword);

	nasResult = NetUserChangePassword(lpwDomain, lpwUser, lpwOldPassword, lpwNewPassword);
	
	FreeWideName(lpwDomain);
	FreeWideName(lpwUser);
	FreeWideName(lpwOldPassword);
	FreeWideName(lpwNewPassword);
		
	return (nasResult == 0);
}

XS(XS_NT__AdminMisc_CreateProcessAsUser)
{
	dXSARGS;
	DWORD	dResult = 0;
	DWORD	dFlags = 0;
	DWORD	dPriority = NORMAL_PRIORITY_CLASS;
	BOOL	bInherit = FALSE;
	int		iNum = 0;
	char	*szCommand, *szDefaultDir = 0;
	STARTUPINFO 		stStartup;
	PROCESS_INFORMATION	stProcInfo;
	HANDLE	hClientToken;
	PHANDLE	phToken = (void **) TlsGetValue(gdTlsSlot);
	
	lastError = 0;
	if (items < 0 ){
		croak("Useage: Win32::AdminMisc::CreateProcessAsUser($CommandString [, $DefaultDirectory] [, %Config])\n");
	}


//	IF WE perform the LogonUser() without using the logon type of
//	LOGON32_LOGON_NETWORK, the token *should* be a primary token so
//	any process spawned by the impersonating process should be
//	run under the auspices of the impersonated user.
	
/*
	//	Remark out this function to test if it works without a problem 
	//	since DuplicateTokenEx() requires NT 4.0.

	if (DuplicateTokenEx(	phToken,
							MAXIMUM_ALLOWED,
							NULL,
							SecurityImpersonation,
							TokenPrimary,
							&hClientToken)){
*/
		//	Next line assignes the ClientToken handle instead of using the
		//	the DupliateTokenEx() function.
	hClientToken = phToken;
		
			//spawn
			//	PROCESS_INFORMATION stProcInfo;
			// initialize the STARTUP_INFO structure for the new process.
		stStartup.lpReserved=NULL;
		stStartup.cb = sizeof( STARTUPINFO );

		stStartup.lpTitle = NULL; 
		stStartup.lpDesktop = "winsta0\\default";
		stStartup.dwX = NULL; 
		stStartup.dwY = NULL; 
		stStartup.dwXSize = NULL; 
		stStartup.dwYSize = NULL; 
		stStartup.dwXCountChars = NULL; 
		stStartup.dwYCountChars = NULL; 
		stStartup.dwFillAttribute = NULL; 
		stStartup.dwFlags = NULL; 
		stStartup.wShowWindow = NULL; 
		stStartup.cbReserved2 = NULL; 
		stStartup.lpReserved2 = NULL; 
		stStartup.hStdInput = NULL; 
		stStartup.hStdOutput = NULL; 
		stStartup.hStdError = NULL; 

		szCommand = (char *) SvPV(ST(0), na);
		iNum = 0;
		
		if (items > 1 && !(items & 1)){
			szDefaultDir = (char *) SvPV(ST(1), na);
			iNum++;
		}
			
			//	IF there are more than 1 parameter then let's assume that variables are being
			//	passed in and let's process them...
		if (items > 2 ){
			char	*szString;
			
			while (++iNum < items){
				szString = SvPV(ST(iNum), na);

				if (++iNum > items){
					continue;
				}

				if (stricmp("StdInput", szString) == 0){
					stStartup.hStdInput = (HANDLE) SvIV(ST(iNum));
					stStartup.dwFlags |= STARTF_USESTDHANDLES;
					bInherit = 1;
				}else if(stricmp("StdOutput", szString) == 0){
					stStartup.hStdOutput = (HANDLE) SvIV(ST(iNum));
					stStartup.dwFlags |= STARTF_USESTDHANDLES;
					bInherit = 1;
				}else if(stricmp("StdError", szString) == 0){
					stStartup.hStdError = (HANDLE) SvIV(ST(iNum));
					stStartup.dwFlags |= STARTF_USESTDHANDLES;
					bInherit = 1;
				}else if(stricmp("Desktop", szString) == 0){
					stStartup.lpDesktop = (LPTSTR) SvPV(ST(iNum), na);
				}else if(stricmp("Title", szString) == 0){
					stStartup.lpTitle = (LPTSTR) SvPV(ST(iNum), na);
				}else if(stricmp("X", szString) == 0){
					stStartup.dwX = (DWORD) SvIV(ST(iNum));
					stStartup.dwFlags |= STARTF_USEPOSITION;
				}else if(stricmp("Y", szString) == 0){
					stStartup.dwY = (DWORD) SvIV(ST(iNum));
					stStartup.dwFlags |= STARTF_USEPOSITION;
				}else if(stricmp("XSize", szString) == 0){
					stStartup.dwXSize = (DWORD) SvIV(ST(iNum));
					stStartup.dwFlags |= STARTF_USESIZE;
				}else if(stricmp("YSize", szString) == 0){
					stStartup.dwYSize = (DWORD) SvIV(ST(iNum));
					stStartup.dwFlags |= STARTF_USESIZE;
				}else if(stricmp("XBuffer", szString) == 0){
					stStartup.dwXCountChars = (DWORD) SvIV(ST(iNum));
					stStartup.dwFlags |= STARTF_USECOUNTCHARS;
				}else if(stricmp("YBuffer", szString) == 0){
					stStartup.dwYCountChars = (DWORD) SvIV(ST(iNum));
					stStartup.dwFlags |= STARTF_USECOUNTCHARS;
				}else if(stricmp("Fill", szString) == 0){
					stStartup.dwFillAttribute = (DWORD) SvIV(ST(iNum));
					stStartup.dwFlags |= STARTF_USEFILLATTRIBUTE;
				}else if(stricmp("Priority", szString) == 0){
					dPriority = (DWORD) SvIV(ST(iNum));
				}else if(stricmp("Flags", szString) == 0){
						//	Let's assume these flags are for
						//	the creation process for now. If we want
						//	to use "flags" for the STARTUP stucture
						//	let's use someother keyword.
					dFlags |= (DWORD) SvIV(ST(iNum));
					//	stStartup.dwFlags = (DWORD) svIV(ST(iNum));
				}else if(stricmp("Show", szString) == 0){
					stStartup.wShowWindow = SvIV(ST(iNum));
					stStartup.dwFlags |= STARTF_USESHOWWINDOW;
				}else if(stricmp("Inherit", szString) == 0){
					bInherit = (BOOL) (SvIV(ST(iNum))? 1:0);
				}else if(stricmp("Directory", szString) == 0){
					szDefaultDir = (char *) SvPV(ST(iNum), na);
				}
				//	iNum++;

			}
		}

		if (hClientToken){
			if (CreateProcessAsUser(hClientToken, 
									NULL, 
									szCommand, 
									NULL, 
									NULL, 
									bInherit, 
									dFlags | dPriority, 
									NULL, 
									szDefaultDir, 
									&stStartup, 
									&stProcInfo)){
				
				dResult = stProcInfo.dwProcessId;
			}
		}

/*	
	//	Remark out to test if we can live without the DuplicateTokenEx() call
	//	since it requires NT 4.0

		CloseHandle(hClientToken);
	}
*/
	XPUSHs(sv_2mortal(newSViv((long) dResult)));

	PUTBACK;
}

	//		End of new features.
	//	---------------------------------------------------------------


XS(XS_NT__AdminMisc_constant)
{
	dXSARGS;

	if (items != 2)
	{
		croak("Usage: NT::AdminMisc::constant(name, arg)\n");
    }
	{
		char* name = (char*)SvPV(ST(0),na);
		ST(0) = sv_newmortal();
		sv_setiv(ST(0), constant(PERL_OBJECT_ARG name));
	}
	XSRETURN(1);
}


//	---------------------------------------------------------------
//		Modified Features...	Dave Roth <rothd@roth.net>
	
XS(XS_NT__AdminMisc_UserGetAttributes)
{
	dXSARGS;
	char buffer[UNLEN+1];
	LPWSTR lpwServer, lpwUser;
	char	*szServer = 0;
	PUSER_INFO_2 puiUser;

	if (items != 10)
	{
		croak("Usage: NT::AdminMisc::UserGetAttributes(server, userName, userFullName, password, passwordAge,\
					privilege, homeDir, comment, flags, scriptPath)\n");
    }
	{
		szServer = GetDC(SvPV(ST(0), na), FALSE);
		AllocWideName((char*) szServer, lpwServer);
		AllocWideName((char*)SvPV(ST(1),na), lpwUser);
		lastError = NetUserGetInfo(lpwServer, lpwUser, 2, (LPBYTE*)&puiUser);
		if(lastError == 0)
		{
			WCTMB(puiUser->usri2_full_name, buffer, sizeof(buffer));
			SETPV(2, buffer);
			WCTMB(puiUser->usri2_password, buffer, sizeof(buffer));
			SETPV(3, buffer);
			SETIV(4, puiUser->usri2_password_age);
			SETIV(5, puiUser->usri2_priv);
			WCTMB(puiUser->usri2_home_dir, buffer, sizeof(buffer));
			SETPV(6, buffer);
			WCTMB(puiUser->usri2_comment, buffer, sizeof(buffer));
			SETPV(7, buffer);
			SETIV(8, puiUser->usri2_flags);
			WCTMB(puiUser->usri2_script_path, buffer, sizeof(buffer));
			SETPV(9, buffer);
		}
		FreeWideName(lpwServer);
		FreeWideName(lpwUser);

		NetApiBufferFree(puiUser);
		if (szServer){
			delete [] szServer;
		}
	}
	RETURNRESULT(lastError == 0);
}

XS(XS_NT__AdminMisc_UserSetAttributes)
{
	dXSARGS;
	LPWSTR lpwServer, lpwUser;
	char	*szServer = 0;
	USER_INFO_2 uiUser;
	PUSER_INFO_2 puiUser;

	if (items != 10)
	{
		croak("Usage: NT::AdminMisc::UserSetAttributes(server, userName, userFullName, password, passwordAge,\
					privilege, homeDir, comment, flags, scriptPath)\n");
    }
	{
		szServer = GetDC((char *)SvPV(ST(0), na), FALSE);		
		AllocWideName((char*) szServer, lpwServer);
		AllocWideName((char*)SvPV(ST(1),na), lpwUser);
		
		lastError = NetUserGetInfo(lpwServer, lpwUser, 2, (LPBYTE*)&puiUser);
		if (lastError == 0){
			memcpy(&uiUser, puiUser, sizeof(USER_INFO_2));
			
			AllocWideName((char*)SvPV(ST(2),na), uiUser.usri2_full_name);
			AllocWideName((char*)SvPV(ST(3),na), uiUser.usri2_password);
			uiUser.usri2_password_age	= SvIV(ST(4));
			uiUser.usri2_priv			= SvIV(ST(5));
			AllocWideName((char*)SvPV(ST(6),na), uiUser.usri2_home_dir);
			AllocWideName((char*)SvPV(ST(7),na), uiUser.usri2_comment);
			uiUser.usri2_flags			= SvIV(ST(8));
			AllocWideName((char*)SvPV(ST(9),na), uiUser.usri2_script_path);
			
			lastError = NetUserSetInfo(lpwServer, lpwUser, 2, (LPBYTE)&uiUser, NULL);
				
			FreeWideName(uiUser.usri2_full_name);
			FreeWideName(uiUser.usri2_password);
			FreeWideName(uiUser.usri2_home_dir);
			FreeWideName(uiUser.usri2_comment);
			FreeWideName(uiUser.usri2_script_path);
		}
		FreeWideName(lpwUser);
		FreeWideName(lpwServer);
		NetApiBufferFree(puiUser);
		if (szServer){
			delete [] szServer;
		}
	}
	RETURNRESULT(lastError == 0);
}

XS(XS_NT__AdminMisc_GetHostName)
{
	dXSARGS;
	char	*szIP = 0;
	char	*szHost = 0;

	if (items != 1)
	{
		croak("Usage: NT::AdminMisc::GetHostName($IPAddress)\n");
    }
	szIP = SvPV(ST(0),na);
	PUSHMARK(sp);
	
	if (szHost = ResolveSiteName(szIP)){
		XPUSHs(sv_2mortal(newSVpv(szHost, strlen(szHost))));
	}else{
		XPUSHs(sv_2mortal(newSVnv((double)0)));
	}

	PUTBACK;
}

XS(XS_NT__AdminMisc_GetHostAddress)
{
	dXSARGS;
	char	*szIP = 0;
	char	*szHost = 0;

	if (items != 1)
	{
		croak("Usage: NT::AdminMisc::GetHostAddress($HostName)\n");
    }
	szHost = SvPV(ST(0),na);
	PUSHMARK(sp);
	
	if (szIP = ResolveSiteName(szHost)){
		XPUSHs(sv_2mortal(newSVpv(szIP, strlen(szIP))));
	}else{
		XPUSHs(sv_2mortal(newSVnv((double)0)));
	}

	PUTBACK;
}

XS(XS_NT__AdminMisc_DNSCache)
{
	dXSARGS;
	int		iTemp = iEnableDNSCache;

	if (items > 1)
	{
		croak("Usage: NT::AdminMisc::DNSCache([1|0])\n");
    }
	if (items){
		iTemp = SvIV(ST(0));
		iEnableDNSCache = (iTemp)? 1:0;
	}
	PUSHMARK(sp);

	XPUSHs(sv_2mortal(newSVnv((double)iEnableDNSCache)));
	
	PUTBACK;
}

XS(XS_NT__AdminMisc_DNSCacheSize)
{
	dXSARGS;
	int		iTemp = iDNSCacheLimit;

	if (items > 1)
	{
		croak("Usage: $Size = Win32::AdminMisc::DNSCacheSize([$Size])\n");
    }
	if (items){
		iTemp = SvIV(ST(0));
		if (iTemp < 0){
			iTemp = 0;
		}
		iEnableDNSCache = (iTemp)? 1:0;
		ResetDNSCache();
		iDNSCacheLimit = iTemp;
	}
	PUSHMARK(sp);

	XPUSHs(sv_2mortal(newSVnv((double)iDNSCacheLimit)));
	PUTBACK;
}

XS(XS_NT__AdminMisc_DNSCacheCount)
{
	dXSARGS;
	int		iTemp = iDNSCacheLimit;

	if (items > 1)
	{
		croak("Usage: $Size = Win32::AdminMisc::DNSCacheCount()\n");
    }
	PUSHMARK(sp);

	XPUSHs(sv_2mortal(newSVnv((double)iDNSCacheCount)));

	PUTBACK;
}


XS(XS_NT__AdminMisc_UserGetMiscAttributes)
{
	dXSARGS;
	char 	buffer[UNLEN+1];
	LPWSTR 	lpwServer, lpwUser;
	PUSER_INFO_3 puiUser;
	SV 		*sv, *nSv;
	int		iTemp;
	char	*szServer = 0;
	int		iError = 0;

	if (items != 3){
		croak("Usage: NT::AdminMisc::UserGetMiscAttributes($Domain, $User, \\%Attribs)\n");
    }
 	
	szServer = GetDC((char *)SvPV(ST(0), na), FALSE);
	AllocWideName((char*) szServer, lpwServer);
	AllocWideName((char*)SvPV(ST(1),na), lpwUser);
	sv = ST(2);
	if(SvROK(sv))
	{
		sv = SvRV(sv);
	}
	if(SvTYPE(sv) == SVt_PVHV)
	{
		hv_clear((HV*)sv);
	
		lastError = NetUserGetInfo(lpwServer, lpwUser, 3, (LPBYTE*)&puiUser);
		if(lastError == 0)
		{
			SV	*svTemp;

			for (iTemp = 0; iTemp < TOTAL_ACCOUNT_INFO; iTemp++){
				svTemp = MakeSVFromAccount(PERL_OBJECT_ARG puiUser, iTemp);

				iError += !(hv_store((HV *)sv, AccountInfoName[iTemp], strlen(AccountInfoName[iTemp]), svTemp, 0));
			}
			NetApiBufferFree(puiUser);
		}
		FreeWideName(lpwUser);
		FreeWideName(lpwServer);
   
	}
	if (szServer){
		delete [] szServer;
	}
	RETURNRESULT(lastError == 0);
}

XS(XS_NT__AdminMisc_UserSetMiscAttributes)
{
	dXSARGS;
	char buffer[UNLEN+1];
	LPWSTR lpwServer, lpwUser;
	char	*szValue = 0;
	DWORD	dValue, dAttrib = 0;
	PUSER_INFO_3 puiUser;
	SV *sv, *nSv;
	int	iTemp;
	int	iError = 0;
	char	*szServer = 0;
	DWORD	dError = 0;
	
	if ((items < 3) || (items & 1))
	{
		croak("Usage: NT::AdminMisc::UserSetMiscAttributes($Domain, $User, $Attribute, $Value[, $Attribute, $Value]...\n");
    }
	
	{
		szServer = GetDC((char *)SvPV(ST(0), na), FALSE);
		AllocWideName((char*) szServer, lpwServer);
		AllocWideName((char*)SvPV(ST(1),na), lpwUser);

		iTemp = 1;
		{
			lastError = NetUserGetInfo(lpwServer, lpwUser, 3, (LPBYTE*)&puiUser);
			if(!lastError){
				while(++iTemp < items && !iError){
					if (SvNIOK(ST(iTemp))){
						dAttrib = (DWORD) SvNV(ST(iTemp));
					}else{
						if (!(MapNameToConstant(SvPV(ST(iTemp),na), &dAttrib))){
							iError = 1;
							continue;
						}
					}
					if(SvPOK(ST(++iTemp))){
						szValue = (char *)SvPV(ST(iTemp),na);
					}else{				
						dValue = (DWORD) SvNV(ST(iTemp));
					}
					iError = !(SetUserInfo(PERL_OBJECT_ARG puiUser, dValue, szValue, (int) dAttrib));
				}

				if (iError){
					lastError = 1;
				}else{
					lastError = NetUserSetInfo(lpwServer, lpwUser, 3, (LPBYTE) puiUser, &dError);
				}
				FreeWideName(lpwServer);
				FreeWideName(lpwUser);

				NetApiBufferFree(puiUser);
			}
		}
		if (szServer){
			delete [] szServer;
		}
	}
	RETURNRESULT(lastError == 0);
}

SV *MakeSVFromAccount(PERL_OBJECT_PROTO PUSER_INFO_3 puiUser, int iTemp){
	SV*	sv = 0;
	char *szBuffer = 0;
	
	if (!(szBuffer = new char [TMP_BUFFER_SIZE])){
		return 0;
	}

	switch(iTemp){ 
		case 0:
			WCTMB(puiUser->usri3_name, szBuffer, TMP_BUFFER_SIZE);
			sv = newSVpv(szBuffer, strlen(szBuffer));
			break;

		case 1:
			WCTMB(puiUser->usri3_password, szBuffer, TMP_BUFFER_SIZE);
			sv = newSVpv(szBuffer, strlen(szBuffer));
			break;

		case 2:
			sv = newSVnv((double)puiUser->usri3_password_age);
			break;

		case 3:
			sv = newSVnv((double)puiUser->usri3_priv);
			break;

		case 4:
			WCTMB(puiUser->usri3_home_dir, szBuffer, TMP_BUFFER_SIZE);
			sv = newSVpv(szBuffer, strlen(szBuffer));
			break;
		
		case 5:
			WCTMB(puiUser->usri3_comment, szBuffer, TMP_BUFFER_SIZE);
			sv = newSVpv(szBuffer, strlen(szBuffer));
			break;
		
		case 6:
			sv = newSVnv((double)puiUser->usri3_flags); 
			break;

		case 7:
			WCTMB(puiUser->usri3_script_path, szBuffer, TMP_BUFFER_SIZE);
			sv = newSVpv(szBuffer, strlen(szBuffer));
			break;
		
		case 8:
			sv = newSVnv((double)puiUser->usri3_auth_flags);
			break;
		
		case 9:
			WCTMB(puiUser->usri3_full_name, szBuffer, TMP_BUFFER_SIZE);
			sv = newSVpv(szBuffer, strlen(szBuffer));
  			break;
		
		case 10:
			WCTMB(puiUser->usri3_usr_comment, szBuffer, TMP_BUFFER_SIZE);
			sv = newSVpv(szBuffer, strlen(szBuffer));
  			break;
		
		case 11:
			WCTMB(puiUser->usri3_parms, szBuffer, TMP_BUFFER_SIZE);
			sv = newSVpv(szBuffer, strlen(szBuffer));
  			break;
		
		case 12:
			WCTMB(puiUser->usri3_workstations, szBuffer, TMP_BUFFER_SIZE);
			sv = newSVpv(szBuffer, strlen(szBuffer));
  			break;
		
		case 13:
			sv = newSVnv((double)puiUser->usri3_last_logon);
  			break;
		
		case 14:
			sv = newSVnv((double)puiUser->usri3_last_logoff);
  			break;
		
		case 15:
			sv = newSVnv((double)puiUser->usri3_acct_expires);
  			break;
		
		case 16:
			sv = newSVnv((double)puiUser->usri3_max_storage);
  			break;
		
		case 17:
			sv = newSVnv((double)puiUser->usri3_units_per_week);
  			break;
		
		case 18:
			sv = newSVnv((double) *puiUser->usri3_logon_hours);
  			break;
		
		case 19:
			sv = newSVnv((double)puiUser->usri3_bad_pw_count);
  			break;
						 
		case 20:
			sv = newSVnv((double)puiUser->usri3_num_logons);
  			break;
		
		case 21:
			WCTMB(puiUser->usri3_logon_server, szBuffer, TMP_BUFFER_SIZE);
			sv = newSVpv(szBuffer, strlen(szBuffer));
  			break;
		
		case 22:
			sv = newSVnv((double)puiUser->usri3_country_code);
  			break;
		
		case 23:
			sv = newSVnv((double)puiUser->usri3_code_page);
  			break;
		
		case 24:
			sv = newSVnv((double)puiUser->usri3_user_id);
  			break;
		
		case 25:
			sv = newSVnv((double)puiUser->usri3_primary_group_id);
  			break;
		
		case 26:
			WCTMB(puiUser->usri3_profile, szBuffer, TMP_BUFFER_SIZE);
			sv = newSVpv(szBuffer, strlen(szBuffer));
  			break;
		
		case 27:
			WCTMB(puiUser->usri3_home_dir_drive, szBuffer, TMP_BUFFER_SIZE);
			sv = newSVpv(szBuffer, strlen(szBuffer));
  			break;
		
		case 28:
			sv = newSVnv((double)puiUser->usri3_password_expired);
			break;
	}
	if (szBuffer){
		delete [] szBuffer;
	}
	return sv;
}

int SetUserInfo(PERL_OBJECT_PROTO PUSER_INFO_3 puiUser, double dValue, char *szValue, int iTemp){
	LPWSTR lpwTemp = 0;
	int		iResult = 1;

	if (szValue){
		AllocWideName((char*)szValue, lpwTemp);
	}
	switch(iTemp){ 
		case 0:
			puiUser->usri3_name = lpwTemp;
			break;

		case 1:
			puiUser->usri3_password = lpwTemp;
			break;

		case 2:
			puiUser->usri3_password_age = (DWORD) dValue;
			break;

		case 3:
			puiUser->usri3_priv = (DWORD) dValue;
			break;

		case 4:
			puiUser->usri3_home_dir = lpwTemp;
			break;
		
		case 5:
			puiUser->usri3_comment = lpwTemp;
			break;
		
		case 6:
			puiUser->usri3_flags = (DWORD) dValue;
			break;

		case 7:
			puiUser->usri3_script_path = lpwTemp;
			break;
		
		case 8:
			puiUser->usri3_auth_flags = (DWORD) dValue;
			break;
		
		case 9:
			puiUser->usri3_full_name = lpwTemp;
  			break;
		
		case 10:
			puiUser->usri3_usr_comment = lpwTemp;
  			break;
		
		case 11:
			puiUser->usri3_parms = lpwTemp;
  			break;
		
		case 12:
			puiUser->usri3_workstations = lpwTemp;
			break;
		
		case 13:
			puiUser->usri3_last_logon = (DWORD) dValue;
  			break;
		
		case 14:
			puiUser->usri3_last_logoff = (DWORD) dValue;
  			break;
		
		case 15:
			puiUser->usri3_acct_expires = (DWORD) dValue;
  			break;
		
		case 16:
			puiUser->usri3_max_storage = (DWORD) dValue;
  			break;
		
		case 17:
			puiUser->usri3_units_per_week = (DWORD) dValue;
  			break;
		
		case 18:
			 *puiUser->usri3_logon_hours = (DWORD) dValue;
  			break;
		
		case 19:
			puiUser->usri3_bad_pw_count = (DWORD) dValue;
  			break;
						 
		case 20:
			puiUser->usri3_num_logons = (DWORD) dValue;
  			break;
		
		case 21:
			puiUser->usri3_logon_server = lpwTemp;
  			break;
		
		case 22:
			puiUser->usri3_country_code = (DWORD) dValue;
  			break;
		
		case 23:
			puiUser->usri3_code_page = (DWORD) dValue;
  			break;
		
		case 24:
			puiUser->usri3_user_id = (DWORD) dValue;
  			break;
		
		case 25:
			puiUser->usri3_primary_group_id = (DWORD) dValue;
  			break;
		
		case 26:
			puiUser->usri3_profile = lpwTemp;
  			break;
		
		case 27:
			puiUser->usri3_home_dir_drive = lpwTemp;
  			break;
		
		case 28:
			puiUser->usri3_password_expired = (DWORD) dValue;
			break;

		default:
			if (lpwTemp){
				FreeWideName(lpwTemp);
			}
			iResult = 0;
			break;
	}
/*		These blocks of memory must remain until commited so don't free them now.

	if (lpwTemp){
		FreeWideName(lpwTemp);
	}
*/
	return iResult;
}


XS(XS_NT__AdminMisc_GetProcessorInfo)
{
	dXSARGS;
	SYSTEM_INFO	sInfo;

	if ((items)){
		croak("Usage: Win32::AdminMisc::GetProcessorInfo()\n");
    }
	PUSHMARK(sp);
	GetSystemInfo(&sInfo);

	XPUSHs(sv_2mortal(newSVpv("OEMID", strlen("OEMID"))));
	XPUSHs(sv_2mortal(newSVnv((double)sInfo.dwOemId)));

	XPUSHs(sv_2mortal(newSVpv("ProcessorNum", strlen("ProcessorNum"))));
	XPUSHs(sv_2mortal(newSVnv((double)sInfo.dwNumberOfProcessors)));

	XPUSHs(sv_2mortal(newSVpv("ProcessorType", strlen("ProcessorType"))));
	XPUSHs(sv_2mortal(newSVnv((double)sInfo.dwProcessorType)));

	XPUSHs(sv_2mortal(newSVpv("PageSize", strlen("PageSize"))));
	XPUSHs(sv_2mortal(newSVnv((double)sInfo.dwPageSize)));

	XPUSHs(sv_2mortal(newSVpv("ProcessorLevel", strlen("ProcessorLevel"))));
	XPUSHs(sv_2mortal(newSVnv((double)sInfo.wProcessorLevel)));

	XPUSHs(sv_2mortal(newSVpv("ProcessorRevision", strlen("ProcessorRevision"))));
	XPUSHs(sv_2mortal(newSVnv((double)sInfo.wProcessorRevision)));

	PUTBACK;
}

XS(XS_NT__AdminMisc_GetMemoryInfo)
{
	dXSARGS;
	MEMORYSTATUS	sInfo;

	if ((items)){
		croak("Usage: Win32::AdminMisc::GetMemoryInfo()\n");
    }
	PUSHMARK(sp);
	GlobalMemoryStatus(&sInfo);

	XPUSHs(sv_2mortal(newSVpv("Load", strlen("Load"))));
	XPUSHs(sv_2mortal(newSVnv((double)sInfo.dwMemoryLoad)));

	XPUSHs(sv_2mortal(newSVpv("RAMTotal", strlen("RAMTotal"))));
	XPUSHs(sv_2mortal(newSVnv((double)sInfo.dwTotalPhys)));

	XPUSHs(sv_2mortal(newSVpv("RAMAvail", strlen("RAMAvail"))));
	XPUSHs(sv_2mortal(newSVnv((double)sInfo.dwAvailPhys)));

	XPUSHs(sv_2mortal(newSVpv("PageTotal", strlen("PageTotal"))));
	XPUSHs(sv_2mortal(newSVnv((double)sInfo.dwTotalPageFile)));

	XPUSHs(sv_2mortal(newSVpv("PageAvail", strlen("PageAvail"))));
	XPUSHs(sv_2mortal(newSVnv((double)sInfo.dwAvailPageFile)));

	XPUSHs(sv_2mortal(newSVpv("VirtTotal", strlen("VirtTotal"))));
	XPUSHs(sv_2mortal(newSVnv((double)sInfo.dwTotalVirtual)));

	XPUSHs(sv_2mortal(newSVpv("VirtAvail", strlen("VirtAvail"))));
	XPUSHs(sv_2mortal(newSVnv((double)sInfo.dwAvailVirtual)));

	PUTBACK;
}

									
XS(XS_NT__AdminMisc_GetDriveSpace)
{
	dXSARGS;
	char	*szDrive;
	OSVERSIONINFO	sInfo;
	BOOL	bFlag = TRUE;

	if ((items != 1)){
		croak("Usage: Win32::AdminMisc::GetDriveSpace($Drive)\n");
    }
	szDrive = SvPV(ST(0),na);
	PUSHMARK(sp);

	sInfo.dwOSVersionInfoSize = sizeof(OSVERSIONINFO);

		//	We have to check that we are running either NT or 
		//	Win 95 OEM Service Release 2 (OSR2) or higher to use
		//	GetDiskFreeSpaceEx()
	if (GetVersionEx(&sInfo)){
		if (sInfo.dwPlatformId == VER_PLATFORM_WIN32_WINDOWS){
			unsigned int wBuild;
			wBuild = sInfo.dwBuildNumber & 0x0000ffff;
			if (wBuild <= 1000){
					//	This is a pre OSR2 Win 95 machine!
				bFlag = FALSE;
			}
		}
	}

	if (bFlag){
		ULARGE_INTEGER	ulFreeBytesAvailableToCaller;
		ULARGE_INTEGER	ulTotalNumberOfBytes;
		ULARGE_INTEGER	ulTotalNumberOfFreeBytes;
		HINSTANCE		hDll;
		
		typedef BOOL (CALLBACK *Function) (
								char *zzDrive, 
								PULARGE_INTEGER	ulFreeBytesAvailableToCaller,
								PULARGE_INTEGER	ulTotalNumberOfBytes,
								PULARGE_INTEGER	ulTotalNumberOfFreeBytes);
		Function pGetDiskFreeSpaceEx;

			//	We can not rely on Win 95 (pre OSR2) to load up the KERNEL32.DLL
			//	and map to the GetDiskFreeSpaceEx() function. If we statically link to 
			//	this function it would error upon loading the extension.
			//	Since we can not rely on this we must check to make sure that we can use
			//	this function (hence the above checking code) then load the DLL and get
			//	the address to the function.
		if (hDll = LoadLibrary("Kernel32.dll")){
			if (pGetDiskFreeSpaceEx = (Function) GetProcAddress(hDll, "GetDiskFreeSpaceExA")){
				if ((*pGetDiskFreeSpaceEx)( 
						szDrive,
						(PULARGE_INTEGER) &ulFreeBytesAvailableToCaller, 
						(PULARGE_INTEGER) &ulTotalNumberOfBytes, 
						(PULARGE_INTEGER) &ulTotalNumberOfFreeBytes 
						)){
					char	szValue[20];

						//	Report Total Drive Size...
					sprintf(szValue, "%I64u", ulTotalNumberOfBytes.QuadPart);
					XPUSHs(sv_2mortal(newSVpv((char *) szValue, strlen(szValue))));
						//	Report Free Space...
					sprintf(szValue, "%I64u", ulTotalNumberOfFreeBytes.QuadPart);
					XPUSHs(sv_2mortal(newSVpv((char *) szValue, strlen(szValue))));
				}
			}
			FreeLibrary(hDll);
		}
	}else{
		DWORD	dSectorPerCluster;
		DWORD	dBytePerSector;
		DWORD	dFreeCluster;
		DWORD	dTotalCluster;
		if (GetDiskFreeSpace(
						szDrive, 
						&dSectorPerCluster, 
						&dBytePerSector,
						&dFreeCluster, 
						&dTotalCluster)){

				//	Report Total Drive Size...
			XPUSHs(sv_2mortal(newSViv((long)(dTotalCluster * dSectorPerCluster * dBytePerSector))));
				//	Report Free Space...
			XPUSHs(sv_2mortal(newSViv((long)(dFreeCluster * dSectorPerCluster * dBytePerSector))));
		}
	}
	PUTBACK;
}

XS(XS_NT__AdminMisc_GetDriveGeometry)
{
	dXSARGS;
	char	*szDrive;
	int		iTemp;
	DWORD	dResults[4];

	if ((items != 1)){
		croak("Usage: Win32::AdminMisc::GetDriveGeometry($Drive)\n");
    }
		//	This returns:
		//	(sectors/cluster, bytes/sector, free clusters, total clusters)

	szDrive = SvPV(ST(0),na);
	PUSHMARK(sp);
	if (GetDiskFreeSpace(szDrive, &dResults[0], &dResults[1],
								  &dResults[2], &dResults[3])){

			//	Report Total Drive Size...
		for (iTemp = 0; iTemp < 4; iTemp++){
			XPUSHs(sv_2mortal(newSVnv((double)dResults[iTemp])));
		}
	}
	PUTBACK;
}

XS(XS_NT__AdminMisc_GetDriveType)
{
	dXSARGS;
	char	*szDrive;

	if ((items != 1)){
		croak("Usage: Win32::AdminMisc::GetDriveType($Drive)\n");
    }
	szDrive = SvPV(ST(0),na);
	PUSHMARK(sp);
	XPUSHs(sv_2mortal(newSVnv((double)GetDriveType(szDrive))));
	PUTBACK;
}

XS(XS_NT__AdminMisc_GetDrives)
{
	dXSARGS;
	DWORD	dSize = (26 * 4);	//	26 drive letters * "x:\<NULL>"
	char	*szBuffer = 0;
	UINT	uiType;

	if ((items > 1)){
		croak("Usage: Win32::AdminMisc::GetDrives([$DriveType])\n");
    }
	PUSHMARK(sp);
	if (items){
		uiType = (UINT) SvNV(ST(0));
	}
	if (szBuffer = new char [dSize + 1]){
		if (GetLogicalDriveStrings(dSize, szBuffer)){
			UINT	uiTemp;
			char	*szDrive = szBuffer;

			while(*szDrive){
				uiTemp = GetDriveType(szDrive);		
				if ((!items) || (items && (uiTemp == uiType))){
					XPUSHs(sv_2mortal(newSVpv(szDrive, strlen(szDrive))));
				}
				szDrive = &szDrive[(strlen(szDrive) + 1)];
			}
		}
		delete [] szBuffer;
	}
	PUTBACK;
}

XS(XS_NT__AdminMisc_GetWinVersion)
{
	dXSARGS;
	char *szTemp;
	OSVERSIONINFO	sInfo;

	if ((items)){
		croak("Usage: Win32::AdminMisc::GetWinVersion()\n");
    }
	PUSHMARK(sp);
	sInfo.dwOSVersionInfoSize = sizeof(OSVERSIONINFO);
	if (GetVersionEx(&sInfo)){

		XPUSHs(sv_2mortal(newSVpv("Major", strlen("Major"))));
		XPUSHs(sv_2mortal(newSVnv((double)sInfo.dwMajorVersion)));

		XPUSHs(sv_2mortal(newSVpv("Minor", strlen("Minor"))));
		XPUSHs(sv_2mortal(newSVnv((double)sInfo.dwMinorVersion)));

		XPUSHs(sv_2mortal(newSVpv("Build", strlen("Build"))));
		XPUSHs(sv_2mortal(newSVnv((double)sInfo.dwBuildNumber)));

		switch(sInfo.dwPlatformId){
			case VER_PLATFORM_WIN32s:
				szTemp = "Win32s";
				break;
			
			case VER_PLATFORM_WIN32_WINDOWS:
				szTemp = "Win32_95";
				break;

			case VER_PLATFORM_WIN32_NT:
				szTemp = "Win32_NT";
				break;

			default:
				szTemp = "Not available";
		}
		XPUSHs(sv_2mortal(newSVpv("Platform", strlen("Platform"))));
		XPUSHs(sv_2mortal(newSVpv(szTemp, strlen(szTemp))));

		XPUSHs(sv_2mortal(newSVpv("CSD", strlen("CSD"))));
		XPUSHs(sv_2mortal(newSVpv((char *)sInfo.szCSDVersion, strlen((char *)sInfo.szCSDVersion))));
	}
	PUTBACK;
}

XS(XS_NT__AdminMisc_GetDC)
{
	dXSARGS;
	char	*szMachine = 0;

	if ((items > 1)){
		croak("Usage: Win32::AdminMisc::GetDC([$domain | $Server])\n");
    }
	PUSHMARK(sp);
	
	if (szMachine = GetDC((char *) (items)? SvPV(ST(0),na):0, FALSE)){
		XPUSHs(sv_2mortal(newSVpv(szMachine, strlen(szMachine))));
		delete [] szMachine;
	}else{
		XPUSHs((SV *) &sv_undef);
	}

	PUTBACK;
}

XS(XS_NT__AdminMisc_GetPDC)
{
	dXSARGS;
	char	*szMachine;

	if ((items > 1)){
		croak("Usage: Win32::AdminMisc::GetPDC([$domain | $Server])\n");
    }
	PUSHMARK(sp);
	
	if (szMachine = GetDC((char *) (items)? SvPV(ST(0),na):0, TRUE)){
		XPUSHs(sv_2mortal(newSVpv(szMachine, strlen(szMachine))));
		delete [] szMachine;
	}else{
		XPUSHs((SV *) &sv_undef);
	}

	PUTBACK;
}


XS(XS_NT__AdminMisc_ExitWindows)
{
	dXSARGS;
	BOOL	bResult;
	UINT	uFlags;
    HANDLE hToken;
    TOKEN_PRIVILEGES tkp;
	OSVERSIONINFO osviVerInfo;

	if ((items != 1)){
		croak("Usage: Win32::AdminMisc::ExitWindows($Flags)\n");
    }
	PUSHMARK(sp);
	
	uFlags = (UINT) SvIV(ST(0));

	osviVerInfo.dwOSVersionInfoSize = sizeof(OSVERSIONINFO);
	GetVersionEx(&osviVerInfo);
		//	Next code segment borrowed from the Microsoft Win32 SDK
	if ( ( osviVerInfo.dwPlatformId == VER_PLATFORM_WIN32_NT) && ((uFlags & EWX_REBOOT) || (uFlags & EWX_SHUTDOWN))){
		if (OpenProcessToken(GetCurrentProcess(), TOKEN_ADJUST_PRIVILEGES | TOKEN_QUERY, &hToken)){

			// Get the LUID for shutdown privilege
			if(LookupPrivilegeValue(NULL, TEXT("SeShutdownPrivilege"), &tkp.Privileges[0].Luid)){
				tkp.PrivilegeCount = 1;  // one privilege to set
				tkp.Privileges[0].Attributes = SE_PRIVILEGE_ENABLED;
	
				// Get shutdown privilege for this process.
				AdjustTokenPrivileges(hToken, FALSE, &tkp, 0, (PTOKEN_PRIVILEGES)NULL, 0);
			}
		}
    }

	bResult = ExitWindowsEx( uFlags, NULL);
	XPUSHs(newSViv((long) bResult));
	PUTBACK;
}


XS(XS_NT__AdminMisc_GetIdInfo)
{
	dXSARGS;
	char	*szCommandLine = GetCommandLine();
	DWORD	dBasePriority;
	int		dThreadPriority;

	
	if ((items)){
		croak("Usage: ($PID, $TID, $PIDPriority, $TIDPriority, $CommandLine) = Win32::AdminMisc::GetIDInfo()\n");
    }
	if (! szCommandLine){
		szCommandLine = "";
	}
	
	PUSHMARK(sp);
	
	XPUSHs(sv_2mortal(newSViv((long)GetCurrentProcessId())));
	XPUSHs(sv_2mortal(newSViv((long)GetCurrentThreadId())));
	
		//	These next two are not correct priority values and need to be
		//	modified!!!		roth	970529
	dBasePriority = GetPriorityClass(GetCurrentProcess());
	dThreadPriority = GetThreadPriority(GetCurrentThread());

	XPUSHs(sv_2mortal(newSViv((long) dBasePriority)));
	XPUSHs(sv_2mortal(newSViv((long) dThreadPriority)));

	XPUSHs(sv_2mortal(newSVpv((char *)szCommandLine, strlen(szCommandLine))));
	
		
	PUTBACK;
}


XS(XS_NT__AdminMisc_ReadINI)
{
	dXSARGS;
	char	*szString[4];
	char	*szBuffer;
	int		iTemp;
	DWORD	dSize = 10240;
	BOOL	bFlag = FALSE;

	if ((items != 3)){
		croak("Usage: Win32::AdminMisc::ReadINI($File, $Section, $Key)\n");
    }
	
	PUSHMARK(sp);

	if (szBuffer = new char [dSize]){

		for(iTemp = 0; iTemp < 4; iTemp++){
			szString[iTemp] = SvPV(ST(iTemp), na);
			if (! strlen(szString[iTemp])) szString[iTemp] = 0;
		}
		if (szString[0]){
			for (iTemp = strlen(szString[0]); iTemp >= 0; iTemp--){
				if (szString[0][iTemp] == '/') szString[0][iTemp] = '\\';
			}
			if (GetPrivateProfileString(szString[1], szString[2], "", szBuffer, dSize, szString[0])){	
				char	*szTemp = szBuffer;
				bFlag = TRUE;
				while(szTemp[0]){
					XPUSHs(sv_2mortal(newSVpv((char *) szTemp, strlen(szTemp))));
					szTemp = &szTemp[strlen(szTemp) + ((!szString[1] || !szString[2])? 1:0)];
				}
			}
		}
	}
	if (szBuffer){
		delete [] szBuffer;
	}
	PUTBACK;
}

XS(XS_NT__AdminMisc_WriteINI)
{
	dXSARGS;
	char	*szString[4];
	int		iTemp;
	BOOL	bFlag = FALSE;

	if ((items != 4)){
		croak("Usage: Win32::AdminMisc::WriteProfileString($File, $Section, $Key, $Data)\n");
    }
	
	PUSHMARK(sp);

	for(iTemp = 0; iTemp < 4; iTemp++){
		szString[iTemp] = SvPV(ST(iTemp), na);
		if (! strlen(szString[iTemp])) szString[iTemp] = 0;
	}

	if (szString[0]){
		for (iTemp = strlen(szString[0]); iTemp >= 0; iTemp--){
			if (szString[0][iTemp] == '/') szString[0][iTemp] = '\\';
		}

		if (WritePrivateProfileString(szString[1], szString[2], szString[3], szString[0])){	
			bFlag = TRUE;
		}
	}
	if (bFlag){
		XPUSHs(sv_2mortal(newSViv((long) 1)));
	}else{
		XPUSHs(&sv_undef);
	}

	PUTBACK;
}


XS(XS_NT__AdminMisc_SetPassword)
{
	dXSARGS;
	LPWSTR lpwServer, lpwUser;
	char	*szServer = 0;
	char	*szUser = 0;
	USER_INFO_1003 uiUser;
	DWORD	dError  = 0;

	if (items != 3)
	{
		croak("Usage: NT::AdminMisc::SetPassword(server, userName, password)\n");
    }
	{
		szServer = SvPV(ST(0), na);
		if (!strlen(szServer)){
			szServer = 0;
		}
			//	Specify the flag as TRUE since we want to grab the PDC!
		szServer = GetDC(szServer, TRUE);		
		AllocWideName((char*) szServer, lpwServer);
		AllocWideName((char*)SvPV(ST(1),na), lpwUser);
		
		memset(&uiUser, 0, sizeof(USER_INFO_1003));
			
		AllocWideName((char*)SvPV(ST(2),na), uiUser.usri1003_password);
			
		lastError = NetUserSetInfo(lpwServer, lpwUser, 1003, (LPBYTE)&uiUser, &dError);
				
		FreeWideName(uiUser.usri1003_password);
		FreeWideName(lpwUser);
		FreeWideName(lpwServer);
		if (szServer){
			delete [] szServer;
		}
	}
	RETURNRESULT(lastError == 0);
}

XS(XS_NT__AdminMisc_GetTOD)
{
	dXSARGS;
	LPWSTR lpwMachine;
	char	*szMachine = 0;
	TIME_OF_DAY_INFO	*sTime;
	DWORD	dError  = 0;
	NET_API_STATUS	nasResult;

	if (items != 1)
	{
		croak("Usage: NT::AdminMisc::GetTOD($Machine)\n");
    }
	{
		PUSHMARK(sp);

		szMachine = SvPV(ST(0), na);
		if (!strlen(szMachine)){
			szMachine = 0;
		}
		AllocWideName((char*) szMachine, lpwMachine);

		nasResult = NetRemoteTOD(lpwMachine, (LPBYTE *) &sTime);

		if (nasResult == NERR_Success){
			DWORD	dTZDelta;
			DWORD	dHour;

			//	dTotalSec = sTime->tod_elapsedt - ((sTime->tod_timezone == -1)? 0:(sTime->tod_timezone * 60));

				//	A timezone of -1 means the timezone is undefined.
			if (sTime->tod_timezone != -1){
					//	tod_timezone is a + or - value of minutes the
					//	timezone is off from GMT
				dTZDelta = (sTime->tod_timezone / 60);
			}
			dHour = sTime->tod_hours - dTZDelta;
			if (dHour < 0){
				dHour += 23;
			}
			if (dHour > 23){
				dHour -= 24;
			}
			/*
			if (GIMME_V == G_ARRAY){
				XPUSHs(newSViv(sTime->tod_secs));
				XPUSHs(newSViv(sTime->tod_mins));
				XPUSHs(newSViv(dHour));
				XPUSHs(newSViv(sTime->tod_day));
				XPUSHs(newSViv(sTime->tod_month - 1));
				XPUSHs(newSViv(sTime->tod_year - 1900));
				XPUSHs(newSViv(0));
				XPUSHs(newSViv(0));
			}else{
			*/
				XPUSHs(newSViv(	sTime->tod_elapsedt ));
			//	}
			NetApiBufferFree(sTime);
		}else{
			XPUSHs(&sv_undef);
		}
		FreeWideName(lpwMachine);
		PUTBACK;
	}
}

XS(XS_NT__AdminMisc_RenameUser)
{
	dXSARGS;
	char buffer[UNLEN+1];
	LPWSTR lpwServer, lpwUser, lpwNewUserName;
	char	*szValue = 0;
	DWORD	dValue, dAttrib = 0;
	USER_INFO_0 uiUser;
	char	*szServer = 0;
	DWORD	dError = 0;
	
	if (items != 3){
		croak("Usage: NT::AdminMisc::RenameUser($Domain, $Account, $NewAccountName)\n");
    }
	
	{
		szServer = GetDC((char *)SvPV(ST(0), na), FALSE);
		AllocWideName((char*) szServer, lpwServer);
		AllocWideName((char*)SvPV(ST(1),na), lpwUser);
		AllocWideName((char*)SvPV(ST(2),na), lpwNewUserName);

		uiUser.usri0_name = lpwNewUserName;
		lastError = NetUserSetInfo(lpwServer, lpwUser, 0, (LPBYTE) &uiUser, &dError);
		
		FreeWideName(lpwServer);
		FreeWideName(lpwUser);
		FreeWideName(lpwNewUserName);

		if (szServer){
			delete [] szServer;
		}
	}
	RETURNRESULT(lastError == 0);
}

char *ResolveFromSeconds(DWORD dTime){
	char	*szBuffer;
	int		iHour, iMin, iSec;

	if (szBuffer = new char [9]){
		iHour = dTime / 3600;
		dTime -= iHour * 3600;

		iMin  = (dTime / 60);
		dTime -= iMin * 60;

		iSec  = dTime;
		sprintf(szBuffer, "%02d:%02d:%02d", iHour, iMin, iSec);
	}
	return szBuffer;
}



DWORD ResolveToSeconds(char *szTime){
	DWORD	dTime = 0;
	char	szBuffer[50];
	char	*szTemp = 0;
	int		iHour = 0, iMin = 0, iSec = 0;

	memset(szBuffer, 0, 50);
	if (szTime){
		strncpy((char *) szBuffer, szTime, 49);
		for(int iTemp = strlen((char *) szBuffer); iTemp; iTemp--){
			szBuffer[iTemp - 1] = tolower((int) szBuffer[iTemp - 1]);
		}
		sscanf((char *) szBuffer, "%d:%d:%d", &iHour, &iMin, &iSec);
		if (strchr((char *) szBuffer, 'p') && iHour <= 12){
			iHour += 12;
		}
		dTime = (iHour * 60 * 60) + (iMin * 60) + iSec;
	}
	return dTime;
}

//	Test string:	p Win32::AdminMisc::ScheduleAdd('', "9:40pm", 1, 3, 17, "dir")
		
XS(XS_NT__AdminMisc_ScheduleAdd)
{
	dXSARGS;
	LPWSTR	lpwMachine, lpwCommand;
	AT_INFO	atInfo;
	char	*szCommand = 0, *szMachine = 0;
	DWORD	dJob= 0;
	DWORD	dError = TRUE;
	DWORD	dTime = 0;
	
	if (items != 6){
		croak("Usage: NT::AdminMisc::ScheduleAdd($Server, $Time, $DOM, $DOW, $Flags, $Command)\n");
    }
	
	PUSHMARK(SP);
	szMachine = (char *)SvPV(ST(0), na);
	AllocWideName((char*) szMachine, lpwMachine);
	if (SvTYPE(ST(1)) == SVt_IV ){
		dTime = (DWORD) SvIV(ST(1));
	}else{
		dTime = ResolveToSeconds(SvPV(ST(1),na));
	}
	
	atInfo.JobTime = ((DWORD) dTime) * 1000;
	atInfo.DaysOfMonth = (DWORD) SvIV(ST(2));
	atInfo.DaysOfWeek = (DWORD) SvIV(ST(3));
	atInfo.Flags = (UCHAR) SvIV(ST(4));

	szCommand = (char *) SvPV(ST(5),na);
	AllocWideName((char*) szCommand, lpwCommand);
	atInfo.Command = lpwCommand;

	dError = NetScheduleJobAdd( lpwMachine, (BYTE*) &atInfo, &dJob);
	
	FreeWideName(lpwMachine);
	FreeWideName(lpwCommand);

	if (dError){
		XPUSHs(&sv_undef);
	}else{
		XPUSHs(sv_2mortal(newSViv((long)dJob)));
	}
	PUTBACK;
}

XS(XS_NT__AdminMisc_ScheduleDel)
{
	dXSARGS;
	LPWSTR	lpwMachine;
	char	*szMachine = 0;
	DWORD	dJobMin = 0, dJobMax = 0;
	DWORD	dError = TRUE;
	
	if (items < 2 || items > 3){
		croak("Usage: NT::AdminMisc::ScheduleDel($Server, $JobNum [, $MaxJobNum])\n");
    }
	
	{

		szMachine = (char *)SvPV(ST(0), na);
		AllocWideName((char*) szMachine, lpwMachine);
		dJobMin = (DWORD) SvIV(ST(1));
		if (items == 3){
			dJobMax = (DWORD) SvIV(ST(2));
		}else{
			dJobMax = dJobMin;
		}

		dError = NetScheduleJobDel(	lpwMachine, 
			(dJobMin < dJobMax)? dJobMin:dJobMax,
			(dJobMin < dJobMax)? dJobMax:dJobMin);
		
		FreeWideName(lpwMachine);
	}
	RETURNRESULT(dError == 0);
}

XS(XS_NT__AdminMisc_ScheduleGet)
{
	dXSARGS;
	LPWSTR	lpwMachine;
	char	*szValue = 0;
	PAT_INFO	atInfo;
	char	szCommand[2048], *szMachine = 0;
	DWORD	dJob= 0;
	HV		*hv = 0;
	DWORD	dError = TRUE;
	
	if (items != 3){
		croak("Usage: NT::AdminMisc::ScheduleGet($Server, $JobNum, \\%Job)\n");
    }
	
	{
		hv = (HV*) ST(2);
		if(SvROK(hv)){
			hv = (HV*) SvRV((SV*) hv);
		}
		if(SvTYPE(hv) == SVt_PVHV){
			char	*szTemp;
			hv_clear((HV*) hv);
		
			szMachine = (char *)SvPV(ST(0), na);
			AllocWideName((char*) szMachine, lpwMachine);
			dJob = (DWORD) SvIV(ST(1));			

			dError = NetScheduleJobGetInfo( lpwMachine, dJob, (LPBYTE*) &atInfo);

			if (szTemp = ResolveFromSeconds(atInfo->JobTime/1000)){
				hv_store(hv, "Time", strlen("Time"), newSVpv(szTemp, strlen(szTemp)), 0);
			}else{
				hv_store(hv, "Time", strlen("Time"), newSVpv("N/A", 3), 0);
			}
			hv_store(hv, "DOM", strlen("DOM"), newSViv((long) atInfo->DaysOfMonth), 0);
			hv_store(hv, "DOW", strlen("DOW"), newSViv((long) atInfo->DaysOfWeek), 0);
			hv_store(hv, "Flags", strlen("Flags"), newSViv((long) atInfo->Flags), 0);

			WCTMB(atInfo->Command, szCommand, 2048);
			hv_store(hv, "Command", strlen("Command"), newSVpv((char*) szCommand, na), 0);

			FreeWideName(lpwMachine);
			NetApiBufferFree(atInfo);
			if (szTemp) delete [] szTemp;
		}
	}
	RETURNRESULT( dError == 0);
}

XS(XS_NT__AdminMisc_ScheduleList)
{
	dXSARGS;
	LPWSTR	lpwMachine;												   
	char	*szValue = 0;
	PAT_ENUM	atInfo;
	char	*szCommand[2048], *szMachine = 0;
	DWORD	dJob= 0, dRead = 0, dRemain = 0, dTotal = 0, dResume = 0;
	HV	*hv = 0;
	AV	*av = 0;
	DWORD	dError = TRUE;
	
	if (items < 1 || items > 2){
		croak("Usage: NT::AdminMisc::ScheduleList($Server [, \\%hash])\n");
    }
	
	PUSHMARK(SP);

	{
		szMachine = (char *)SvPV(ST(0), na);
		AllocWideName((char*) szMachine, lpwMachine);

		
		if (items == 2){
			hv = (HV*) ST(1);
			if(SvROK(hv)){
				hv = (HV*) SvRV((SV*) hv);
			}
			if(SvTYPE(hv) == SVt_PVHV){
				hv_clear((HV*) hv);
			}
		}
		do{
			dError = NetScheduleJobEnum( lpwMachine, (LPBYTE *) &atInfo, 4096, &dRead, &dRemain, &dResume);
			if (dError == 0){
				while(dRead--){
					dTotal++;
					if (hv){
						char	*szTemp;
						HV		*hvTemp = newHV();
						if (szTemp = ResolveFromSeconds(atInfo[dRead].JobTime/1000)){
							hv_store(hvTemp, "Time", strlen("Time"), newSVpv(szTemp, strlen(szTemp)), 0);
						}else{
							hv_store(hvTemp, "Time", strlen("Time"), newSVpv("N/A", 3), 0);
						}
						hv_store(hvTemp, "DOM", strlen("DOM"), newSViv((long) atInfo[dRead].DaysOfMonth), 0);
						hv_store(hvTemp, "DOW", strlen("DOW"), newSViv((long) atInfo[dRead].DaysOfWeek), 0);
						hv_store(hvTemp, "Flags", strlen("Flags"), newSViv((long) atInfo[dRead].Flags), 0);

						WCTMB(atInfo[dRead].Command, (char *)szCommand, 2048);
						hv_store(hvTemp, "Command", strlen("Command"), newSVpv((char*) szCommand, strlen((char *)szCommand)), 0);

						sprintf((char *)szCommand, "%d", atInfo[dRead].JobId);
						hv_store(hv, (char *) szCommand, strlen((char *) szCommand), (SV*) newRV((SV*) hvTemp), 0);
						
						if (szTemp) delete [] szTemp;
					}
				}
				NetApiBufferFree(atInfo);
			}
		}while(dResume);

		FreeWideName(lpwMachine);
	}
	if ((dError != 0) && (! dTotal)){
		XPUSHs((SV*) &sv_undef);
	}else{
		XPUSHs(newSViv(dTotal));
	}
	PUTBACK;
}

XS(XS_NT__AdminMisc_Exist)
{
	dXSARGS;
	char	*szPath, *szTemp;
	int		iError = -1;
	
	if (items != 1){
		croak("Usage: NT::AdminMisc::Exist($File)\n");
    }
	
	{

		szTemp = szPath = (char *)SvPV(ST(0), na);
		while(*szTemp){
			if (*szTemp == '/'){
				*szTemp = '\\';
			}
			szTemp++;
		}

		iError = access(szPath, 0);
	}
	RETURNRESULT(iError == 0);
}

XS(XS_NT__AdminMisc_GetFileInfo)
{
	dXSARGS;
	char	*szPath, *szTemp;
	int		iError = -1;
	DWORD	dTemp, dSize;
	void	*pBuffer;
	HV		*hv = 0;
	BOOL	bResult = FALSE;
	
	if (items != 2){
		croak("Usage: NT::AdminMisc::GetFileInfo($File, \\%Info)\n");
    }
	
	szTemp = szPath = (char *)SvPV(ST(0), na);
	hv = (HV*) ST(1);
	if(SvROK(hv)){
		hv = (HV*) SvRV((SV*) hv);
	}
	if(SvTYPE(hv) == SVt_PVHV){
		hv_clear((HV*) hv);
	}

	if (hv){
		while(*szTemp){
			if (*szTemp == '/'){
				*szTemp = '\\';
			}
			szTemp++;
		}
		if (dSize = GetFileVersionInfoSize( szPath, &dTemp)){
			if (pBuffer = new char [dSize]){
				if (GetFileVersionInfo(szPath, dTemp, dSize, pBuffer)){
					UINT	dBufSize;
					char	*szBuffer;
					char	szTemp[50];					
					SV		*sv;

					if (VerQueryValue(pBuffer, 
							TEXT( "\\VarFileInfo\\Translation"), 
							(void **) &szBuffer, 
							&dBufSize)){
						dTemp = (((PWORD) szBuffer)[0]) << 16;
						dTemp |= ((PWORD) szBuffer)[1];

						AddFileValue( PERL_OBJECT_ARG dTemp, "CompanyName", "Company", hv, pBuffer);
						AddFileValue( PERL_OBJECT_ARG dTemp, "FileVersion", "Version", hv, pBuffer);
						AddFileValue( PERL_OBJECT_ARG dTemp, "InternalName", "InternalName", hv, pBuffer);
						AddFileValue( PERL_OBJECT_ARG dTemp, "LegalCopyright", "Copyright", hv, pBuffer);
						AddFileValue( PERL_OBJECT_ARG dTemp, "OriginalFilename", "OriginalFilename", hv, pBuffer);
						AddFileValue( PERL_OBJECT_ARG dTemp, "ProductName", "ProductName", hv, pBuffer);
						AddFileValue( PERL_OBJECT_ARG dTemp, "ProductVersion", "ProductVersion", hv, pBuffer);
						bResult = TRUE;
					}
				}
			}
		}
	}
	RETURNRESULT( bResult );
}

XS(XS_NT__AdminMisc_SetEnvVar)
{
	dXSARGS;
	int		iType = ENV_SYSTEM;
	BOOL	bResult = FALSE;
	DWORD	dTime = 5000;		//	Default to 5 seconds timeout
	
	if (items < 2 || items > 4){
		croak("Usage: NT::AdminMisc::SetEnvVar($Name, $Value [, $Type [, $Timeout]])\n");
    }
	
	if (items > 2){
		iType = (int) SvIV(ST(2));
	}
	if (items > 3){
		dTime = (DWORD) SvIV(ST(3));
	}
	bResult = ProcessEnvVar(ENV_MODIFY, iType, (char *) SvPV(ST(0), na), (char *) SvPV(ST(1), na), dTime);

	RETURNRESULT( bResult );
}
	
XS(XS_NT__AdminMisc_DelEnvVar)
{
	dXSARGS;
	int		iType = ENV_SYSTEM;
	BOOL	bResult = FALSE;
	DWORD	dTime = 0;
	
	if (items < 1 || items > 3){
		croak("Usage: NT::AdminMisc::DelEnvVar($Name [, $Type [, $Timeout]])\n");
    }

	if (items > 1){
		iType = (int) SvIV(ST(1));
	}
	if (items > 2){
		iType = (DWORD) SvIV(ST(2));
	}

	bResult = ProcessEnvVar(ENV_DELETE, iType, (char *) SvPV(ST(0), na), 0, dTime);

	RETURNRESULT( bResult );
}
	
XS(XS_NT__AdminMisc_GetEnvVar)
{
	dXSARGS;
	int		iType = ENV_SYSTEM;
	char	szValue[ENV_BUFFER_SIZE] = { 0 };
	BOOL	bResult = FALSE;
	
	if (items < 1 || items > 2){
		croak("Usage: NT::AdminMisc::GetEnvVar($Name [, $Type])\n");
    }

	PUSHMARK(sp);

	if (items > 1){
		iType = (int) SvIV(ST(1));
	}

	bResult = ProcessEnvVar(ENV_QUERY, iType, (char *) SvPV(ST(0), na), szValue, 0);
	
	if (bResult){
		XPUSHs(sv_2mortal(newSVpv(szValue, strlen(szValue))));
	}else{
		XPUSHs(&sv_undef);
	}

	PUTBACK;
//	RETURNRESULT( bResult );
}


BOOL ProcessEnvVar(int iFunction, int iType, char *szName, char *szValue, DWORD dTime)
{
	char	*szKey = 0;
	HKEY	hRoot = 0, hKey = 0;
	BOOL	bResult = FALSE, bUpdate = FALSE;
	DWORD	dResult;
	DWORD	dTimeout = 5000;	//	We will default to waiting 5 seconds.
	
	switch(iType){
		case ENV_SYSTEM:
			hRoot = HKEY_LOCAL_MACHINE;
			szKey = ENV_SYSTEM_PATH;
			break;
		case ENV_USER:
			hRoot = HKEY_CURRENT_USER;
			szKey = ENV_USER_PATH;
			break;

		default:
			hRoot = 0;
			szKey = 0;
	}
	if (dTime != 0){
			//	We want to round up to the next second.
		dTimeout = dTime * 1000;
	}
	
	if (hRoot){
		int	iTemp, iCount = 0;

		if (RegOpenKeyEx(hRoot, szKey, 0, KEY_SET_VALUE | KEY_QUERY_VALUE, &hKey) == ERROR_SUCCESS){
			switch (iFunction){
				case ENV_DELETE:
					if (RegDeleteValue(hKey, szName) == ERROR_SUCCESS){
						bUpdate = bResult = TRUE;
					}
					break;

				case ENV_MODIFY:
					
					for(iTemp = strlen(szValue); iTemp; iTemp--){
						if (szValue[iTemp - 1] == '%') ++iCount;
					}

					if (RegSetValueEx(hKey, szName, 0, (iCount)? REG_EXPAND_SZ:REG_SZ, (BYTE *) szValue, strlen(szValue) + 1) == ERROR_SUCCESS){
						bUpdate = bResult = TRUE;
					}
					break;

				case ENV_QUERY:
					{
						DWORD	dType, dSize = ENV_BUFFER_SIZE;
						if (RegQueryValueEx(hKey, szName, 0, &dType, (LPBYTE) szValue, &dSize) == ERROR_SUCCESS){
							bResult = TRUE;
						}
					}

				default:
					break;
			}
		}
	}
	if (bUpdate){
		SendMessageTimeout(	HWND_BROADCAST, 
							WM_WININICHANGE, 
							0, 
							(LPARAM) "Environment",
							SMTO_ABORTIFHUNG,
							dTimeout,
							&dResult);
	}

	return bResult;
}





XS(boot_Win32__AdminMisc)
{
	dXSARGS;
	char* file = __FILE__;

	newXS("Win32::AdminMisc::constant", XS_NT__AdminMisc_constant, file);
	newXS("Win32::AdminMisc::GetError", XS_NT__AdminMisc_GetError, file);
	newXS("Win32::AdminMisc::UserGetAttributes", XS_NT__AdminMisc_UserGetAttributes, file);
	newXS("Win32::AdminMisc::UserSetAttributes", XS_NT__AdminMisc_UserSetAttributes, file);

	newXS("Win32::AdminMisc::GetLogonName", XS_NT__AdminMisc_GetLogonName, file);
	newXS("Win32::AdminMisc::LogoffAsUser", XS_NT__AdminMisc_LogoffAsUser, file);
	newXS("Win32::AdminMisc::LogonAsUser", XS_NT__AdminMisc_LogonAsUser, file);
	newXS("Win32::AdminMisc::UserCheckPassword", XS_NT__AdminMisc_UserCheckPassword, file);
	newXS("Win32::AdminMisc::UserChangePassword", XS_NT__AdminMisc_UserChangePassword, file);
	newXS("Win32::AdminMisc::CreateProcessAsUser", XS_NT__AdminMisc_CreateProcessAsUser, file);

	newXS("Win32::AdminMisc::GetHostName",			XS_NT__AdminMisc_GetHostName, file);
	newXS("Win32::AdminMisc::gethostbyname",		XS_NT__AdminMisc_GetHostName, file);
	newXS("Win32::AdminMisc::GetHostAddress",		XS_NT__AdminMisc_GetHostName, file);
	newXS("Win32::AdminMisc::gethostbyaddr",		XS_NT__AdminMisc_GetHostName, file);
	newXS("Win32::AdminMisc::DNSCache",				XS_NT__AdminMisc_DNSCache, file);
	newXS("Win32::AdminMisc::DNSCacheSize",			XS_NT__AdminMisc_DNSCacheSize, file);
	newXS("Win32::AdminMisc::DNSCacheCount", 		XS_NT__AdminMisc_DNSCacheCount, file);

	newXS("Win32::AdminMisc::UserGetMiscAttributes",XS_NT__AdminMisc_UserGetMiscAttributes, file);
	newXS("Win32::AdminMisc::UserSetMiscAttributes",XS_NT__AdminMisc_UserSetMiscAttributes, file);

	newXS("Win32::AdminMisc::GetDriveSpace",		XS_NT__AdminMisc_GetDriveSpace, file);
	newXS("Win32::AdminMisc::GetDrives",			XS_NT__AdminMisc_GetDrives, file);
	newXS("Win32::AdminMisc::GetDriveGeometry",		XS_NT__AdminMisc_GetDriveGeometry, file);
	newXS("Win32::AdminMisc::GetDriveType",			XS_NT__AdminMisc_GetDriveType, file);
	newXS("Win32::AdminMisc::GetProcessorInfo",		XS_NT__AdminMisc_GetProcessorInfo, file);
	newXS("Win32::AdminMisc::GetMemoryInfo",		XS_NT__AdminMisc_GetMemoryInfo, file);
	newXS("Win32::AdminMisc::GetDC",				XS_NT__AdminMisc_GetDC, file);
	newXS("Win32::AdminMisc::GetPDC",				XS_NT__AdminMisc_GetPDC, file);
	newXS("Win32::AdminMisc::GetWinVersion",		XS_NT__AdminMisc_GetWinVersion, file);
	newXS("Win32::AdminMisc::GetIdInfo",			XS_NT__AdminMisc_GetIdInfo, file);
	newXS("Win32::AdminMisc::ExitWindows",			XS_NT__AdminMisc_ExitWindows, file);
	newXS("Win32::AdminMisc::WriteINI",				XS_NT__AdminMisc_WriteINI, file);
	newXS("Win32::AdminMisc::ReadINI",				XS_NT__AdminMisc_ReadINI, file);

	newXS("Win32::AdminMisc::ShowWindow",			XS_NT__AdminMisc_ShowWindow, file);
	newXS("Win32::AdminMisc::GetStdHandle",			XS_NT__AdminMisc_GetStdHandle, file);

	newXS("Win32::AdminMisc::SetPassword",			XS_NT__AdminMisc_SetPassword, file);
	newXS("Win32::AdminMisc::GetComputerName",		XS_NT__AdminMisc_GetComputerName, file);
	newXS("Win32::AdminMisc::SetComputerName",		XS_NT__AdminMisc_SetComputerName, file);
	newXS("Win32::AdminMisc::GetTOD",				XS_NT__AdminMisc_GetTOD, file);
	newXS("Win32::AdminMisc::RenameUser",			XS_NT__AdminMisc_RenameUser, file);
	newXS("Win32::AdminMisc::ScheduleAdd",			XS_NT__AdminMisc_ScheduleAdd, file);
	newXS("Win32::AdminMisc::ScheduleDel",			XS_NT__AdminMisc_ScheduleDel, file);
	newXS("Win32::AdminMisc::ScheduleGet",			XS_NT__AdminMisc_ScheduleGet, file);
	newXS("Win32::AdminMisc::ScheduleList",			XS_NT__AdminMisc_ScheduleList, file);
	newXS("Win32::AdminMisc::Exist",				XS_NT__AdminMisc_Exist, file);
	newXS("Win32::AdminMisc::GetFileInfo",			XS_NT__AdminMisc_GetFileInfo, file);
	newXS("Win32::AdminMisc::SetEnvVar",			XS_NT__AdminMisc_SetEnvVar, file);
	newXS("Win32::AdminMisc::DelEnvVar",			XS_NT__AdminMisc_DelEnvVar, file);
	newXS("Win32::AdminMisc::GetEnvVar",			XS_NT__AdminMisc_GetEnvVar, file);


	//	End of new Features.
	ST(0) = &sv_yes;
	XSRETURN(1);
}

/* ===============  DLL Specific  Functions  ===================  */

BOOL WINAPI DllMain(HINSTANCE  hinstDLL, DWORD fdwReason, LPVOID  lpvReserved){
	BOOL	bResult = 1;
	switch(fdwReason){
		case DLL_PROCESS_ATTACH:
			ghDLL = hinstDLL;
				/*
					Initialize the Winsock
				*/
			if (wsErrorStatus = WSAStartup(0x0101, &wsaData)){
				iWinsockActive = 0;
			}else{
				iWinsockActive = 1;
				ResetDNSCache();
			}
				//	Allocate a TLS slot and check for an error.
			if ((gdTlsSlot = TlsAlloc()) == 0xFFFFFFFF){
				bResult = FALSE;
			}

			break;

			case DLL_THREAD_ATTACH:
				TlsSetValue(gdTlsSlot, 0);
				break;

			case DLL_THREAD_DETACH:
					//	Clear the TLS slot for this thread	
				TlsSetValue(gdTlsSlot, 0);
				break;
			
		case DLL_PROCESS_DETACH:
			if (TlsGetValue(gdTlsSlot)){
				LogoffImpersonatedUser(0);
			}
			if (iWinsockActive){
				WSACleanup();
			}
			ResetDNSCache();
			TlsFree(gdTlsSlot);
			break;

	}
	return bResult;
}



/*

  TODO:
	-	Activeware MUST remove the "<Unknown>" domain when Win32::DomainName()
		is called and you are unable to determine the domain name.

	-	Test on a live domain connection:
		- The result of Get(P)DC() with '', domain and a server name.

*/
