; The name of the installer
Name "MusicTracker Plugin for Pidgin"

; The file to write
OutFile "pidgin-musictracker-${VERSION}.exe"

; The default installation directory
InstallDir $PROGRAMFILES\Pidgin

;--------------------------------

; Pages

Page directory
Page instfiles

;--------------------------------

; The stuff to install
Section "" ;No components page, name is not important

  ; Set output path to the installation directory.
  SetOutPath $INSTDIR
  
  ; Put files there
  File /oname=plugins\musictracker.dll ..\src\musictracker.dll
  File /oname=wmpuice.dll wmpuice.dll

  RegDLL wmpuice.dll  

SectionEnd ; end the section

