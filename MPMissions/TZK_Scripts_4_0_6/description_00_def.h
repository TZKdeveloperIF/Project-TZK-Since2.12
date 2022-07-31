
// Gui related

// Fonts
#define FontS "tahomaB24"
#define FontM "tahomaB36"

#define FontHTML "courierNewB64"
#define FontHTMLBold "courierNewB64"
#define FontMAP "courierNewB64"
#define FontMAIN "SteelfishB64"
#define FontMAINCZ "SteelfishB64CE"
#define FontTITLE "SteelfishB128"
#define FontTITLEHalf "SteelfishB64"
#define FontBOOK "garamond64"
#define FontNOTES "AudreysHandI48"

#define DEFAULTFONT						"CourierNewB64"
#define SMALLFONT						"Garamond64"
#define VERYSMALLFONT					"SteelfishB64"
#define BOLDFONT						"TahomaB48"

// Control types
#define CT_STATIC						0
#define CT_BUTTON						1
#define CT_EDIT							2
#define CT_SLIDER						3
#define CT_COMBO						4
#define CT_LISTBOX					5
#define CT_TOOLBOX					6
#define CT_CHECKBOXES				7
#define CT_PROGRESS					8
#define CT_HTML							9
#define CT_STATIC_SKEW			10
#define CT_ACTIVETEXT				11
#define CT_TREE							12
#define CT_3DSTATIC					20
#define CT_3DACTIVETEXT			21
#define CT_3DLISTBOX				22
#define CT_3DHTML						23
#define CT_3DSLIDER					24
#define CT_3DEDIT						25
#define CT_OBJECT						80
#define CT_OBJECT_ZOOM			81
#define CT_OBJECT_CONTAINER	82
#define CT_OBJECT_CONT_ANIM	83
#define CT_USER							99

// Static styles
#define ST_HPOS						0x0F
#define ST_LEFT						0
#define ST_RIGHT					1
#define ST_CENTER					2
#define ST_UP							3
#define ST_DOWN						4
#define ST_VCENTER				5

#define ST_TYPE						0xF0
#define ST_SINGLE					0
#define ST_MULTI					16
#define ST_TITLE_BAR			32
#define ST_PICTURE				48
#define ST_FRAME					64
#define ST_BACKGROUND			80
#define ST_GROUP_BOX			96
#define ST_GROUP_BOX2			112
#define ST_HUD_BACKGROUND	128
#define ST_TILE_PICTURE		144
#define ST_WITH_RECT			160
#define ST_LINE						176

#define ST_SHADOW					256
#define ST_NO_RECT				512

#define ST_TITLE					ST_TITLE_BAR + ST_CENTER

// Predefined controls
#define IDC_OK						1
#define IDC_CANCEL				2


// Control IDs

// generic IDs
#define IDC_UNDEFINED 0
#define IDC_DEFAULT 9999

#define IDC_TITLE 100

#define IDC 200

#define IDC_BTN 200
#define IDC_LBL 300
#define IDC_TEXT 400
#define IDC_LB 500
#define IDC_CB 600
#define IDC_BG 700

#define IDC_BTN_0 101
#define IDC_BTN_1 102
#define IDC_BTN_2 103
#define IDC_BTN_3 104
#define IDC_BTN_4 105
#define IDC_TEXT_BTN_0 106
#define IDC_TEXT_BTN_1 107
#define IDC_TEXT_BTN_2 108
#define IDC_TEXT_BTN_3 109
#define IDC_TEXT_BTN_4 110
#define IDC_LB_1 111
#define IDC_LB_2 112
#define IDC_LB_3 113
#define IDC_TEXT_LB_1 114
#define IDC_TEXT_LB_2 115
#define IDC_TEXT_LB_3 116
#define IDC_CB_0 117
#define IDC_CB_1 118
#define IDC_CB_2 119
#define IDC_CB_3 120
#define IDC_CB_4 121
#define IDC_TEXT_CB_0 122
#define IDC_TEXT_CB_1 123
#define IDC_TEXT_CB_2 124
#define IDC_TEXT_CB_3 125
#define IDC_TEXT_CB_4 126
#define IDC_BG_LB_1 127
#define IDC_BG_LB_2 128
#define IDC_BG_LB_3 129

#define IDC_TEXT_MENU_NAME 300
#define IDC_TEXT_MENU_STATUS 301
#define IDC_TEXT_PLAYER_MONEY 302
#define IDC_CB_GROUPS 303
#define IDC_TEXT_GROUP_SIZE 304
#define IDC_TEXT_GROUP_MONEY 305
#define IDC_BTN_BUY 306
#define IDC_BTN_BUY_MANNED 307
#define IDC_BTN_BUY_BG 314
#define IDC_BTN_BUY_MANNED_BG 315


#define IDC_TEXT_PLAYER_MONEY_EQUIPMENT 309
#define IDC_TEXT_PLAYER_COST_EQUIPMENT 310

#define IDC_BTN_BUILD 316
#define IDC_BTN_BUILD_BG 317
#define IDC_TEXT_WORKERS 318
#define IDC_BTN_UNDO 319
#define IDC_BTN_UNDO_BG 320
#define IDC_BTN_ALIGN 321

#define IDC_TEXT_RESPAWN_TYPE 330
#define IDC_TEXT_RESPAWN_POS 331
#define IDC_BTN_RESPAWN_MHQ 332
#define IDC_TEXT_RESPAWN_MHQ 333
#define IDC_BTN_RESPAWN_STRUCT 334
#define IDC_CB_RESPAWN_STRUCT 344

#define IDC_BTN_DRIVER 345
#define IDC_BTN_GUNNER 346
#define IDC_BTN_COMMANDER 347

#define IDC_BG_DRIVER_SELECTED 348
#define IDC_BG_GUNNER_SELECTED 349
#define IDC_BG_COMMANDER_SELECTED 350

#define IDC_TEXT_STRUCT_INFO 353

#define IDC_LB_PRIM 354
#define IDC_LB_PRIM_AMMO 355
#define IDC_LB_SEC 356
#define IDC_LB_SEC_AMMO 357
#define IDC_PIC_PRIM 358
#define IDC_PIC_SEC 359

#define IDC_LB_HG 360
#define IDC_LB_HG_AMMO 361
#define IDC_PIC_PRIM_ONLY 362
#define IDC_PIC_HG 363
#define IDC_PIC_OPT 364
#define IDC_LB_EQ 366
#define IDC_LB_Opt 367

#define IDC_PIC_GEN_1 400
#define IDC_PIC_GEN_2 411
#define IDC_PIC_GEN_3 420
#define IDC_PIC_GEN_4 428
#define IDC_PIC_GEN_5 435
#define IDC_PIC_GEN_6 441
#define IDC_PIC_HG_1 450
#define IDC_PIC_HG_2 454
#define IDC_PIC_HG_3 458
#define IDC_PIC_HG_4 460

#define IDC_LB_TEMPLATES 461

// options dialog
#define IDC_TEXT_GrantedStatus_Granted 498
#define IDC_TEXT_GrantedStatus_Denied 499
#define IDC_TEXT_MONEY 500
#define IDC_TEXT_SCORE 501
#define IDC_LB_UNITS 502
#define IDC_LB_TRANSFER_TARGET 503
#define IDC_LB_TRANSFER_AMOUNT 504
#define IDC_CB_PLAYERINCOME 505
#define IDC_CB_AIRESPAWN 506
#define IDC_LB_UPGRADES 507
#define IDC_TEXT_TOWNS 508
#define IDC_BTN_UPGRADE 509
#define IDC_TEXT_INCOME 510
#define IDC_BTN_COMMANDAI 511
#define IDC_BTN_VEHICLEACTIONS 512
#define IDC_CB_AIMARKERS 513
#define IDC_BTN_COMMANDERTRANSFER 514
#define IDC_CB_COMMANDER 515
#define IDC_CB_REPORTS 516

#define IDC_TEXT_GAMETIME_Options 517
#define IDC_TEXT_GAMETIME_Timelimit_Options 518
#define IDC_TEXT_YOURORDER_Options 519

// leaderboard dialog
#define IDC_LB_GROUP 600
#define IDC_LB_INFANTRY 601
#define IDC_LB_VEHICLE 602
#define IDC_LB_MHQ 603
#define IDC_LB_STRUCT 604
#define IDC_LB_TOWN 605
#define IDC_LB_TOTAL 606
#define IDC_LB_SIDE 607
#define IDC_LB_INFANTRYSIDE 608
#define IDC_LB_VEHICLESIDE 609
#define IDC_LB_MHQSIDE 610
#define IDC_LB_STRUCTSIDE 611
#define IDC_LB_TOWNSIDE 612
#define IDC_LB_TOTALSIDE 613

// stats dialog
#define IDC_TEXT_MONEYWEST 700
#define IDC_LB_STRUCTSWEST 701
#define IDC_LB_UNITSWEST 702
#define IDC_TEXT_MONEYEAST 703
#define IDC_LB_STRUCTSEAST 704
#define IDC_LB_UNITSEAST 705

// cam dialogs: spectator, unit cam, sat cam, bullet cam
#define IDC_BTN_SHOWLOG 900
#define IDC_LB_LOG 901
#define IDC_BTN_SHOWGROUPS 902
#define IDC_LB_GROUPLEADERS 903
#define IDC_LB_GROUPMEMBERS 904
#define IDC_SL_ANGLEVERT 905
#define IDC_SL_DISTANCE 906
#define IDC_SL_ANGLEHORZ 907
#define IDC_BG_LOG 908
#define IDC_BG_GROUPS 909
#define IDC_BTN_LOCKDIR 910
#define IDC_BTN_SHOWALL 911
#define IDC_TEXT_TRACKING 912
#define IDC_BTN_LEFT 913
#define IDC_BTN_RIGHT 914
#define IDC_BTN_REAR 915
#define IDC_BTN_FRONT 916
#define IDC_BTN_NEAR 917
#define IDC_BTN_FAR 918
#define IDC_TEXT_GAMETIME 919
#define IDC_BTN_TOP 920
#define IDC_BTN_SHOWMAP 921
#define IDC_BTN_TRACK 922
#define IDC_TEXT_MAPPOS 923
#define IDC_BTN_NORTH 924
#define IDC_BTN_SOUTH 925
#define IDC_BTN_WEST 926
#define IDC_BTN_EAST 927
#define IDC_BTN_LEADERBOARD 928
#define IDC_BTN_STATS 929
#define IDC_TEXT_TRACKINGBOTTOM 930
#define IDC_TEXT_GAMETIMEBOTTOM 931
#define IDC_BTN_SHOWINFO 932
#define IDC_INFO 933
#define IDC_UNIT 934
#define IDC_BTN_UseNVG 935
#define IDC_BTN_QUIT 936
#define IDC_BTN_MARK 937

#define IDC_SL_ZVIEW 947
#define IDC_SL_ROTATION 948
#define IDC_SL_ZOOM 949
#define IDC_SL_ACCELERATE 950

// command ai dialog
#define IDC_LB_GROUPORDERS 1000
#define IDC_BTN_SENDORDER 1001
#define IDC_TEXT_ORDER 1002
#define IDC_CB_ORDER 1003
#define IDC_TEXT_PARAM0LABEL 1004
#define IDC_CB_PARAM0 1005
#define IDC_TEXT_PARAM1LABEL 1006
#define IDC_CB_PARAM1 1007

// flight altitude dialog
#define IDC_LB_ALTITUDES 1100

// command player dialog
#define IDC_PLAYER_ORDER_CURRENT 1200
#define IDC_PLAYER_ORDER_ORDERLABEL 1201
#define IDC_PLAYER_ORDER_SENDORDER 1202
#define IDC_PLAYER_ORDER_ORDER 1203
#define IDC_PLAYER_ORDER_PAR0LABEL 1204
#define IDC_PLAYER_ORDER_PAR0 1205
#define IDC_PLAYER_ORDER_PAR1LABEL 1206
#define IDC_PLAYER_ORDER_PAR1 1207

// Dark and Light BackGround
#define IDC_DialogBG_CR 1160
#define IDC_DialogBG_Light 1161
#define IDC_DialogBG_Dark 1162

// New definition should also be contained in "\TZK_Scripts_4_0_4\Player\InitGUIControlIDs.sqs" for dialog controlling.

// https://community.bistudio.com/wiki/Arma:_GUI_Configuration#Control_Types for Control Types (CT_...)
// https://community.bistudio.com/wiki/Arma:_GUI_Configuration#Control_Styles for Control Styles (ST_...)

// Colors
#define COLOR_MENU_BG {0.5,0.5,0.5,0.75}
#define COLOR_BTN_BG {0.8,0.8,0.8,1}
#define COLOR_BTN_TEXT {0,0,0,1}
#define COLOR_TITLE_BG {0,0,0,1}
#define COLOR_TITLE_TEXT {1,1,1,1}
#define COLOR_LABEL_TEXT {0.2,0.2,0.2,1}
#define COLOR_DATA_BG {0.7,0.7,0.7,1}
#define COLOR_DATA_TEXT {0,0,0,0.84}
#define COLOR_SELECTED_BG {0.2,0.2,0.2,1}
#define COLOR_SELECTED_TEXT {1,1,0.2,1}
#define COLOR_SELECTED_TEXT_L {0.686, 0.686, 0.686, 1}
#define COLOR_CLICKABLE_BG {0.55,0.55,0.55,1}
#define COLOR_CLICKABLE_BG_L {0.372,0.372,0.372,1}
#define COLOR_LB_TEXT {0.3,0.3,0.3,1}

// ==================================== Refering the SP Mission: "INFERNO KOLGUJEV". ====================================
// #define FontM "tahomaB36"
// #define FontHTML "CourierNewB64"
#define COLOR_TZK_MENU_BG_1 {0.5, 0.5, 0.5, 0.35}
#define COLOR_TZK_MENU_BG_2 {0.8, 0.8, 0.8, 0.15}
#define COLOR_TZK_MENU_BG_3 {0.8, 0.8, 0.8, 0.55}
