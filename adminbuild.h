
	//	THIS MAY NEED TO BE REMOVED IF YOU ARE USING THE CORE DISTRIBUTION
#include "build.h"
	//	+----------------------------------------------------------------+


#define	VERSION_HI		"971022"

#define	AdminMisc	100

#ifdef	CORE
	#undef		PERLVER
	#define		PERLVER	"the Core Distribution of Win32 Perl"
	#define		FILE_EXTENSION	"DLL"
#else	//	CORE
	#define		FILE_EXTENSION	"PLL"
	#ifndef		NT_BUILD_NUMBER
		#define		PERLVER	"Win32 Perl"
	#else
		#define		PERLVER "Win32 Perl build " NT_BUILD_NUMBER
	#endif
#endif	//	CORE

#ifdef	NT_BUILD_NUMBER
#define		VERSION_LO	NT_BUILD_NUMBER
#else
#define		VERSION_LO		"XXX"
#endif	//	NT_BUILD_NUMBER

#ifdef	VERSION_RELEASE
#define		VERSION_TYPE	"Release"
#else
#define		VERSION_TYPE	"Beta"
#endif

#ifdef	VERSION_BETA
#define		VERSION_TYPE	"Beta"
#endif

#if _DEBUG
#define		DEBUGGING	"Debug"
#else
#define		DEBUGGING	""
#endif

#define	VER_FILEVERSION	HIWORD(VERSION_HI),LOWORD(VERSION_HI), HIWORD(VERSION_LO), LOWORD(VERSION_LO)
#define	VER_PRODVERSION	HIWORD(VERSION_HI),LOWORD(VERSION_HI), HIWORD(VERSION_LO), LOWORD(VERSION_LO)

#define INTERNALNAME	"Win32::AdminMisc"

#define	VERNAME			"AdminMisc extension for Win32 Perl"
#define VERSION_NUM		VERSION_HI
#define	VERSION			VERSION_NUM " " VERSION_TYPE
#define VERDATE			__DATE__
#define VERTIME			__TIME__
#define VERAUTH     	"Dave Roth <rothd@roth.net>"
#define VERCRED			"Copyright (c) 1996-1997 " VERAUTH "."	
#define VERCOMMENT		"This version requires " PERLVER "."

#define RC_COMMENTS		VERNAME "\r\n----\r\n" VERCOMMENT "\0"
#define	RC_COMPANY		"Roth Consulting\r\nhttp://www.roth.net/consult\0"
#define	RC_FILEDESC		INTERNALNAME " (for " PERLVER ")\0"
#define RC_FILEVER		VERSION "\0"
#define	RC_INTNAME		INTERNALNAME " " DEBUGGING "\0"
#define	RC_COPYRIGHT	"\251 1996-1997 by " VERAUTH "\0"
#define	RC_FILENAME		"ADMINMISC." FILE_EXTENSION "\0"
#define	RC_PBUILD		VERSION_NUM " " VERSION_TYPE " " DEBUGGING "\0"
#define	RC_PRODNAME		VERNAME "\0"
#define	RC_PRODVER		VERSION "\0"			  

