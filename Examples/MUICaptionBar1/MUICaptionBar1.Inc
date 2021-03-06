include windows.inc
include user32.inc
include kernel32.inc
include gdi32.inc
include shell32.inc
include comctl32.inc
include comdlg32.inc
include masm32.inc

includelib user32.lib
includelib kernel32.lib
includelib gdi32.lib
includelib shell32.lib
includelib comctl32.lib
includelib comdlg32.lib
includelib masm32.lib

include ModernUI.inc
includelib ModernUI.lib

include ModernUI_CaptionBar.inc
includelib ModernUI_CaptionBar.lib


;-----------------------------------------------------------------------------------------
; MUICaptionBar Prototypes
;-----------------------------------------------------------------------------------------
WinMain                 PROTO :DWORD,:DWORD,:DWORD,:DWORD
WndProc                 PROTO :DWORD,:DWORD,:DWORD,:DWORD


.CONST
;-----------------------------------------------------------------------------------------
; MUICaptionBar Constants
;-----------------------------------------------------------------------------------------

ICO_MAIN                EQU 100

ICO_MUI_MENU            EQU 101
ICO_MUI_TALK            EQU 102


; Main Dialog
IDD_DIALOG              EQU 1000
IDC_CAPTIONBAR          EQU 1001

IDC_CAPBTNMENU          EQU 1098
IDC_CAPBTNSUPPORT       EQU 1099

; Main Menu 
IDM_MENU                EQU 10000
IDM_FILE_EXIT           EQU 10001
IDM_HELP_ABOUT          EQU 10101



.DATA
;-----------------------------------------------------------------------------------------
; MUICaptionBar Initialized Data
;-----------------------------------------------------------------------------------------
ClassName               DB 'DLGCLASS',0
AppName                 DB 'MUICaptionBar Example #1',0
AboutMsg                DB 'www.LetTheLight.in',13,10,'Copyright � fearless 2016',0





.DATA?
;-----------------------------------------------------------------------------------------
; MUICaptionBar Uninitialized Data
;-----------------------------------------------------------------------------------------
icc                     INITCOMMONCONTROLSEX <>
hInstance               DD ?
CommandLine             DD ?
hWnd                    DD ?
hCaptionBar             DD ?
hIcoMain                DD ?
hCapBtnMenu             DD ?
hCapBtnSupport          DD ?


