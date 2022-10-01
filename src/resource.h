/* * * * * * * *\
	RESOURCE.H -
		Written by Freedom, 2022
	DESCRIPTION -
		This file contains the resource definitions for the Program Manager.
		NO DEPENDENCIES!
\* * * * * * * */

// Pragmas
#pragma once

// Icon Library
#define PROGMANICON		1
#define DOSAPPICON		2
#define WORDICON		3
#define SHEETICON		4
#define DATAICON		5
#define COMMICON		6
#define ITEMICON		7
#define PERSGROUPICON	8
#define COMMGROUPICON	9
#define GROUPICON		10
#define WINDOWSICON		11
#define MSDOSICON		12
#define RUNDLGICON		13
#define CONSOLEICON		14

// Hotkey Definitions
#define HOTKEY_TASKMAN	51
#define HOTKEY_SYSTRAY	52
#define HOTKEY_RUNFILE	53

// Dialogs IDs
#define ABOUTDLG		3101
#define BROWSEDLG		3102
#define CHOOSERDLG		3103
#define GROUPDLG		3105
#define ICONDLG			3106
#define ITEMDLG			3107
#define MOVECOPYDLG		3108
#define RUNDLG			3109
#define HOTKEYDLG		3110
#define RUNBROWSEDLG	3111
#define NEWLOGOFFDLG	3112
#define UPDATEGROUPSDLG	3113

#define IDD_TEXT			-1
#define IDD_NAME			3200
#define IDD_COMMAND			3201
#define IDD_ICON			3202
#define IDD_MINIMIZE		3203
#define IDD_NEXT			3204
#define IDD_LOAD			3205
#define IDD_SAVESETTINGS	3211
#define IDD_BROWSE			3212
#define IDD_FILES			3213
#define IDD_DIRS			3214
#define IDD_MOVETITLE1		3215
#define IDD_ITEM			3216
#define IDD_PERSGROUP		3217
#define IDD_COMMONGROUP		3218
#define IDD_GROUPS			3219
#define IDD_PATH			IDD_COMMAND
#define IDD_CONFIG			3221
#define IDD_DIR				3222
#define IDD_PREV			3223
#define IDD_HOTKEY			3224
#define IDD_STARTUP			3225
#define IDD_CURICON			3226
#define IDD_HELP			3227
#define IDD_GROUP			3228
#define IDOK2				3230
#define IDCANCEL2			3231
#define IDD_NEWVDM			3232

// From TaskMan
#define IDD_TMTEXT          3999
#define IDD_TASKLISTBOX     4300
#define IDD_TERMINATE       4301
#define IDD_CASCADE         4302
#define IDD_TILE            4303
#define IDD_ARRANGEICONS    4304
#define IDD_RUN             4305
#define IDD_TMPATH          4306
#define IDD_CLTEXT          4307
#define IDD_SWITCH          4308

// Menu Commands
#define IDM_FILE				0
#define IDM_NEW					101
#define IDM_NEWITEM				102
#define IDM_NEWGROUP			103
#define IDM_NEWCOMMGROUP		104
#define IDM_OPEN				105
#define IDM_MOVE				106
#define IDM_COPY				107
#define IDM_DELETE				108
#define IDM_PROPS				109
#define IDM_RUN					110
#define IDM_EXIT				111
#define IDM_SAVE                112
#define IDM_SYSTRAY				113
#define IDM_TASKMGR				114
#define IDM_SHUTDOWN			115

#define IDM_OPTIONS				1
#define IDM_AUTOARRANGE			201
#define IDM_MINONRUN			202
#define IDM_HOTKEY				203
#define IDM_SAVESETTINGS		204
#define IDM_SAVENOW				205
#define IDM_ANSIGROUPS			206

#define IDM_WINDOW				2
#define IDM_CASCADE				301
#define IDM_TILE				302
#define IDM_TILEHORIZONTALLY	303
#define IDM_ARRANGEICONS		304

#define IDM_CHILDSTART          310

#define IDM_HELP				3
#define IDM_HELPINDEX			401
#define IDM_HELPHELP			402
#define IDM_ABOUT				403
#define IDM_HELPSEARCH			404

// String Table Definitions
#define IDS_APPTITLE            1
#define IDS_PMCLASS             2
#define IDS_GROUPCLASS          3
#define IDS_ITEMCLASS           4
#define IDS_DATAFILE            5
#define IDS_SETTINGS            7
#define IDS_CONFIRMDELTITLE     40        /* Must be > 32 */
#define IDS_CONFIRMDELITEMMSG   41
#define IDS_CONFIRMDELGROUPMSG  42
#define IDS_NOICONSTITLE        50
#define IDS_NOICONSMSG          51
#define IDS_BADPATHTITLE        52
#define IDS_BADPATHMSG          53
#define IDS_NETPATHTITLE        54
#define IDS_REMOVEPATHTITLE     55
#define IDS_PATHWARNING         56
#define IDS_EXECERRTITLE        60
#define IDS_UNKNOWNMSG          61
#define IDS_NOMEMORYMSG         62
#define IDS_FILENOTFOUNDMSG     63
#define IDS_MANYOPENFILESMSG    64
#define IDS_NOASSOCMSG          65
#define IDS_MULTIPLEDSMSG       66
#define IDS_ASSOCINCOMPLETE     67
#define IDS_COPYDLGTITLE        70
#define IDS_COPYDLGTITLE1       71
#define IDS_GROUPS              72
#define IDS_NOGRPFILE           73
#define IDS_LOWMEM              74
#define IDS_BADFILE             75
#define IDS_CANTWRITEGRP        76
#define IDS_GROUPFILEERR        77
#define IDS_GRPISRO             78
#define IDS_EXTRACTERROR        79
#define IDS_EEGROUPRO           80
#define IDS_CANTWRITEGRPS       81
#define IDS_OOMEXITTITLE        110
#define IDS_OOMEXITMSG          111
#define IDS_GROUPRO             112
#define IDS_CANTRENAMETITLE     113
#define IDS_CANTRENAMEMSG       114
#define IDS_TOOMANYITEMS        115
#define IDS_OS2APPMSG           116
#define IDS_NEWWINDOWSMSG       117
#define IDS_PMODEONLYMSG        118
#define IDS_ALREADYLOADED       119
#define IDS_STARTUP             120
#define IDS_PLUS                121
#define IDS_GRPHASCHANGED       122
#define IDS_NONE                123
#define IDS_EXIT                124
#define IDS_DUPHOTKEYTTL        125
#define IDS_DUPHOTKEYMSG        126
#define IDS_BROWSE              127
#define IDS_NEWITEMPROGS        128
#define IDS_TOOMANYGROUPS       129
#define IDS_ACCESSDENIED        130
#define IDS_DDEFAIL             131
#define IDS_LOWMEMONINIT        132
#define IDS_PIFINIFILE          133
#define IDS_PIFSECTION          134
#define IDS_EXECSETUP           135
#define IDS_WINHELPERR          136
#define IDS_PIFADDINFO          137

#define IDS_BADPATHMSG2	        138
#define IDS_BADPATHMSG3	        139
#define IDS_LOWMEMONEXIT        140
#define IDS_WININIERR           141
#define IDS_STARTUPERR          142
#define IDS_CMDLINEERR          143
#define IDS_ITEMINGROUP         144
#define IDS_LOWMEMONEXTRACT     145
#define IDS_DEFICONSFILE        146
#define IDS_COMPRESSEDEXE       147
#define IDS_INVALIDDLL          148
#define IDS_SHAREERROR          149
#define IDS_CANTWRITEGRPDISK	150
#define IDS_COMMDLGLOADERR      151
#define IDS_NOICONSMSG1	    	152
#define IDS_NOGRPFILE2          153

#define IDS_REGISTRYERROR       164
#define IDS_ERRORDELETEGROUP    165
#define IDS_LOGOFFERROR         166

#define IDS_COMMONGRPSUFFIX     167
#define IDS_COMMONGROUPPROP     168
#define IDS_COMMONGROUPERR      169
#define IDS_NOCOMMONGRPS        170

#define IDS_DEFAULTSTARTUP      173
#define IDS_TOOMANYCOMMONGROUPS 174

#define IDS_TASKMGR				175
#define IDS_SYSTRAY				176
#define IDS_SHUTDOWN			177
#define IDS_RUN					178

#define IDS_MSGBOXSTR1          179
#define IDS_MSGBOXSTR2          180

#define IDS_INSUFFICIENTQUOTA   181

#define IDS_ANSIGROUPSMENU      182

// Context Menus
#define IDCM_ITEM		1001
#define IDCM_GROUP		1002
#define PMACCELS		1004
#define PROGMANMENU		1005

// Help Definitions
#define IDH_HELPFIRST		5000

#define IDH_SYSMENU	        (IDH_HELPFIRST + 2000)
#define IDH_MBFIRST	        (IDH_HELPFIRST + 2001)
#define IDH_RUNBROWSEDLG	(IDH_HELPFIRST + 2001)
#define IDH_PROPBROWSEDLG	(IDH_HELPFIRST + 2002)
#define IDH_ICONBROWSEDLG	(IDH_HELPFIRST + 2003)
#define IDH_MOVEDLG         (IDH_HELPFIRST + 2004)
#define IDH_COPYDLG         (IDH_HELPFIRST + 2005)
#define IDH_PROG_NOT_FOUND	(IDH_HELPFIRST + 2006)
#define IDH_PROG_NOT_FOUND_BROWSE	(IDH_HELPFIRST + 2007)
#define IDH_MBLAST	        (IDH_HELPFIRST + 2099)

#define IDH_SYSMENUCHILD        (IDH_HELPFIRST + 2100)

#define IDH_DLGFIRST	(IDH_HELPFIRST + 3000)
#define IDH_ABOUTDLG 	(IDH_DLGFIRST + ABOUTDLG)
#define IDH_BROWSEDLG 	(IDH_DLGFIRST + BROWSEDLG)
#define IDH_CHOOSERDLG 	(IDH_DLGFIRST + CHOOSERDLG)
#define IDH_GROUPDLG 	(IDH_DLGFIRST + GROUPDLG)
#define IDH_ICONDLG 	(IDH_DLGFIRST + ICONDLG)
#define IDH_ITEMDLG 	(IDH_DLGFIRST + ITEMDLG)
#define IDH_RUNDLG 	    (IDH_DLGFIRST + RUNDLG)
#define IDH_UPDATEGRPDLG (IDH_HELPFIRST + UPDATEGROUPSDLG);


#define IDH_FILE		(IDH_HELPFIRST + IDM_FILE)
#define IDH_NEW			(IDH_HELPFIRST + IDM_NEW )
#define IDH_OPEN		(IDH_HELPFIRST + IDM_OPEN)
#define IDH_MOVE		(IDH_HELPFIRST + IDM_MOVE)
#define IDH_COPY		(IDH_HELPFIRST + IDM_COPY)
#define IDH_DELETE		(IDH_HELPFIRST + IDM_DELETE)
#define IDH_PROPS		(IDH_HELPFIRST + IDM_PROPS)
#define IDH_RUN			(IDH_HELPFIRST + IDM_RUN)
#define IDH_EXIT		(IDH_HELPFIRST + IDM_EXIT)
#define IDH_SHUTDOWN	(IDH_HELPFIRST + IDM_SHUTDOWN)
#define IDH_SAVE		(IDH_HELPFIRST + IDM_SAVE)
#define IDH_OPTIONS		(IDH_HELPFIRST + IDM_OPTIONS)
#define IDH_AUTOARRANGE	(IDH_HELPFIRST + IDM_AUTOARRANGE )
#define IDH_MINONRUN	(IDH_HELPFIRST + IDM_MINONRUN)
#define IDH_SAVESETTINGS	(IDH_HELPFIRST + IDM_SAVESETTINGS)
#define IDH_SAVENOW		(IDH_HELPFIRST + IDM_SAVENOW)
#define IDH_WINDOW		(IDH_HELPFIRST + IDM_WINDOW)
#define IDH_CASCADE		(IDH_HELPFIRST + IDM_CASCADE)
#define IDH_TILE		(IDH_HELPFIRST + IDM_TILE)
#define IDH_ARRANGEICONS	(IDH_HELPFIRST + IDM_ARRANGEICONS)

#define IDH_CHILDSTART 	(IDH_HELPFIRST + IDM_CHILDSTART)
#define IDH_HELPGENERAL	(IDH_HELPFIRST + IDM_HELP)
#define IDH_HELPINDEX 	(IDH_HELPFIRST + IDM_HELPINDEX)
#define IDH_HELPSEARCH 	(IDH_HELPFIRST + IDM_HELPSEARCH)
#define IDH_HELPHELP 	(IDH_HELPFIRST + IDM_HELPHELP)
