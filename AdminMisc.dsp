# Microsoft Developer Studio Project File - Name="AdminMisc" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 5.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Dynamic-Link Library" 0x0102

CFG=AdminMisc - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "AdminMisc.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "AdminMisc.mak" CFG="AdminMisc - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "AdminMisc - Win32 Release" (based on\
 "Win32 (x86) Dynamic-Link Library")
!MESSAGE "AdminMisc - Win32 Debug" (based on\
 "Win32 (x86) Dynamic-Link Library")
!MESSAGE "AdminMisc - Win32 Release Build 310" (based on\
 "Win32 (x86) Dynamic-Link Library")
!MESSAGE "AdminMisc - Win32 Release Core Dist" (based on\
 "Win32 (x86) Dynamic-Link Library")
!MESSAGE "AdminMisc - Win32 Release Build 307" (based on\
 "Win32 (x86) Dynamic-Link Library")
!MESSAGE "AdminMisc - Win32 Release Build 110" (based on\
 "Win32 (x86) Dynamic-Link Library")
!MESSAGE 

# Begin Project
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
MTL=midl.exe
RSC=rc.exe

!IF  "$(CFG)" == "AdminMisc - Win32 Release"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "out"
# PROP Intermediate_Dir "out"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MT /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /YX /FD /c
# ADD CPP /nologo /MT /W3 /GX /O2 /I "c:\source\include\perl" /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "MSWIN32" /D "PERL_OBJECT" /D "EMBED" /YX /FD /c
# ADD BASE MTL /nologo /D "NDEBUG" /mktyplib203 /o NUL /win32
# ADD MTL /nologo /D "NDEBUG" /mktyplib203 /o NUL /win32
# ADD BASE RSC /l 0x409 /d "NDEBUG"
# ADD RSC /l 0x409 /fo"AdminMisc.res" /i "c:\source\include\perl" /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:windows /dll /machine:I386
# ADD LINK32 version.lib kernel32.lib user32.lib gdi32.lib advapi32.lib shell32.lib netapi32.lib wsock32.lib /nologo /subsystem:windows /dll /machine:I386 /out:"c:\perl\lib\auto\win32\adminmisc\AdminMisc.pll"

!ELSEIF  "$(CFG)" == "AdminMisc - Win32 Debug"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "out"
# PROP Intermediate_Dir "out"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MTd /W3 /Gm /GX /Zi /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /YX /FD /c
# ADD CPP /nologo /MTd /W3 /Gm /GX /Zi /Od /I "e:\source\include\perl" /I "e:\source\include\perl\inc" /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "MSWIN32" /D "PERL_OBJECT" /D "EMBED" /YX /FD /c
# ADD BASE MTL /nologo /D "_DEBUG" /mktyplib203 /o NUL /win32
# ADD MTL /nologo /D "_DEBUG" /mktyplib203 /o NUL /win32
# ADD BASE RSC /l 0x409 /d "_DEBUG"
# ADD RSC /l 0x409 /fo"AdminMisc.res" /i "e:\source\include\perl" /i "e:\source\include\perl\inc" /d "_DEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:windows /dll /debug /machine:I386 /pdbtype:sept
# ADD LINK32 winspool.lib comdlg32.lib version.lib kernel32.lib user32.lib gdi32.lib advapi32.lib shell32.lib netapi32.lib wsock32.lib /nologo /subsystem:windows /dll /debug /machine:I386 /out:"c:\perl\lib\auto\win32\adminmisc\AdminMisc.pll" /pdbtype:sept

!ELSEIF  "$(CFG)" == "AdminMisc - Win32 Release Build 310"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "AdminMis"
# PROP BASE Intermediate_Dir "AdminMis"
# PROP BASE Ignore_Export_Lib 0
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "out\310"
# PROP Intermediate_Dir "out\310"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MT /W3 /GX /O2 /I "c:\source\include\perl" /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "MSWIN32" /D "PERL_OBJECT" /D "EMBED" /YX /FD /c
# ADD CPP /nologo /MT /W3 /GX /O2 /I "e:\source\include\perl\310" /I "e:\source\include\perl\310\inc" /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "MSWIN32" /D "PERL_OBJECT" /D "EMBED" /YX /FD /c
# ADD BASE MTL /nologo /D "NDEBUG" /mktyplib203 /o NUL /win32
# ADD MTL /nologo /D "NDEBUG" /mktyplib203 /o NUL /win32
# ADD BASE RSC /l 0x409 /fo"AdminMisc.res" /i "c:\source\include\perl" /d "NDEBUG"
# ADD RSC /l 0x409 /fo"AdminMisc.res" /i "e:\source\include\perl\310" /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib advapi32.lib shell32.lib netapi32.dll /nologo /subsystem:windows /dll /machine:I386 /out:"c:\perl\lib\auto\win32\adminmisc\adminMisc.pll"
# ADD LINK32 version.lib kernel32.lib user32.lib gdi32.lib advapi32.lib shell32.lib netapi32.lib wsock32.lib /nologo /subsystem:windows /dll /machine:I386 /out:"bin\AdminMisc_310.pll"

!ELSEIF  "$(CFG)" == "AdminMisc - Win32 Release Core Dist"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "AdminMi0"
# PROP BASE Intermediate_Dir "AdminMi0"
# PROP BASE Ignore_Export_Lib 0
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "out\core"
# PROP Intermediate_Dir "out\core"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MT /W3 /GX /O2 /I "c:\source\include\perl" /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "MSWIN32" /D "PERL_OBJECT" /D "EMBED" /YX /FD /c
# ADD CPP /nologo /MT /W3 /GX /O2 /I "e:\source\include\perl\core" /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "MSWIN32" /D "CORE" /YX /FD /c
# ADD BASE MTL /nologo /D "NDEBUG" /mktyplib203 /o NUL /win32
# ADD MTL /nologo /D "NDEBUG" /mktyplib203 /o NUL /win32
# ADD BASE RSC /l 0x409 /fo"AdminMisc.res" /i "c:\source\include\perl" /d "NDEBUG"
# ADD RSC /l 0x409 /fo"AdminMisc.res" /i "e:\source\include\perl\core" /i "e:\source\include\perl\core\inc" /d "NDEBUG" /d "CORE"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib advapi32.lib shell32.lib netapi32.dll /nologo /subsystem:windows /dll /machine:I386 /out:"c:\perl\lib\auto\win32\adminmisc\adminMisc.pll"
# ADD LINK32 perl.lib version.lib kernel32.lib user32.lib gdi32.lib advapi32.lib shell32.lib netapi32.lib wsock32.lib /nologo /subsystem:windows /dll /machine:I386 /out:"bin\adminmisc_core.dll" /libpath:"e:\source\lib\perl\core"

!ELSEIF  "$(CFG)" == "AdminMisc - Win32 Release Build 307"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "AdminMi1"
# PROP BASE Intermediate_Dir "AdminMi1"
# PROP BASE Ignore_Export_Lib 0
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "out\307"
# PROP Intermediate_Dir "out\307"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MT /W3 /GX /O2 /I "c:\source\include\perl\310" /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "MSWIN32" /D "PERL_OBJECT" /D "EMBED" /YX /FD /c
# ADD CPP /nologo /MT /W3 /GX /O2 /I "e:\source\include\perl\307" /I "e:\source\include\perl\307\inc" /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "MSWIN32" /D "PERL_OBJECT" /D "EMBED" /YX /FD /c
# ADD BASE MTL /nologo /D "NDEBUG" /mktyplib203 /o NUL /win32
# ADD MTL /nologo /D "NDEBUG" /mktyplib203 /o NUL /win32
# ADD BASE RSC /l 0x409 /fo"AdminMisc.res" /i "c:\source\include\perl\310" /d "NDEBUG"
# ADD RSC /l 0x409 /fo"AdminMisc.res" /i "e:\source\include\perl\307" /i "e:\source\include\perl\307\inc" /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 version.lib kernel32.lib user32.lib gdi32.lib advapi32.lib shell32.lib netapi32.lib wsock32.lib /nologo /subsystem:windows /dll /machine:I386 /out:"c:\perl\lib\auto\win32\adminmisc\AdminMisc310.pll"
# ADD LINK32 version.lib kernel32.lib user32.lib gdi32.lib advapi32.lib shell32.lib netapi32.lib wsock32.lib /nologo /subsystem:windows /dll /machine:I386 /out:"bin\AdminMisc_307.pll"

!ELSEIF  "$(CFG)" == "AdminMisc - Win32 Release Build 110"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "AdminMi2"
# PROP BASE Intermediate_Dir "AdminMi2"
# PROP BASE Ignore_Export_Lib 0
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "out\110"
# PROP Intermediate_Dir "out\110"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MT /W3 /GX /O2 /I "c:\source\include\perl\310" /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "MSWIN32" /D "PERL_OBJECT" /D "EMBED" /YX /FD /c
# ADD CPP /nologo /MT /W3 /GX /O2 /I "c:\source\include\perl\110" /I "e:\source\include\perl\110\inc" /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "MSWIN32" /D "PERL_OBJECT" /D "EMBED" /YX /FD /c
# ADD BASE MTL /nologo /D "NDEBUG" /mktyplib203 /o NUL /win32
# ADD MTL /nologo /D "NDEBUG" /mktyplib203 /o NUL /win32
# ADD BASE RSC /l 0x409 /fo"AdminMisc.res" /i "c:\source\include\perl\310" /d "NDEBUG"
# ADD RSC /l 0x409 /fo"AdminMisc.res" /i "c:\source\include\perl\110" /i "e:\source\include\perl\110\inc" /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 version.lib kernel32.lib user32.lib gdi32.lib advapi32.lib shell32.lib netapi32.lib wsock32.lib /nologo /subsystem:windows /dll /machine:I386 /out:"c:\perl\lib\auto\win32\adminmisc\AdminMisc310.pll"
# ADD LINK32 version.lib kernel32.lib user32.lib gdi32.lib advapi32.lib shell32.lib netapi32.lib wsock32.lib /nologo /subsystem:windows /dll /machine:I386 /out:"bin\AdminMisc_110.pll"

!ENDIF 

# Begin Target

# Name "AdminMisc - Win32 Release"
# Name "AdminMisc - Win32 Debug"
# Name "AdminMisc - Win32 Release Build 310"
# Name "AdminMisc - Win32 Release Core Dist"
# Name "AdminMisc - Win32 Release Build 307"
# Name "AdminMisc - Win32 Release Build 110"
# Begin Source File

SOURCE=.\adminmisc.cpp
# End Source File
# Begin Source File

SOURCE=.\ADMINMISC.DEF
# End Source File
# Begin Source File

SOURCE=.\AdminMisc.RC

!IF  "$(CFG)" == "AdminMisc - Win32 Release"

!ELSEIF  "$(CFG)" == "AdminMisc - Win32 Debug"

!ELSEIF  "$(CFG)" == "AdminMisc - Win32 Release Build 310"

!ELSEIF  "$(CFG)" == "AdminMisc - Win32 Release Core Dist"

!ELSEIF  "$(CFG)" == "AdminMisc - Win32 Release Build 307"

!ELSEIF  "$(CFG)" == "AdminMisc - Win32 Release Build 110"

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\DNS.CPP
# End Source File
# End Target
# End Project
