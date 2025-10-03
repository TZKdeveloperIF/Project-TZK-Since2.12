class CommandAIDialog: Menu {
	idd = -1;
	movingEnable = true;
	controlsBackground[] = {Sub_BG_Light, Sub_BG};
	objects[] = { };
	controls[] = {
		CommandAITitle, GroupOrdersLabel, GroupOrders, 
		Setting0Label, Setting0, Setting1Label, Setting1, Setting2Label, Setting2, Setting3Label, Setting3, 
		Setting4Label, Setting4, 
		Setting5Label, Setting5, 
		Setting11Label, Setting11, Setting12Label, Setting12, Setting13Label, Setting13, Setting14Label, Setting14, Setting15Label, Setting15, Setting16Label, Setting16, Setting17Label, Setting17, Setting18Label, Setting18, SendOrder, OrderLabel, Order, Exit, Setting19Label, Setting19, Setting20Label, Setting20, Setting21Label, Setting21, 
		Setting22Label, Setting22, 
		Setting23Label, Setting23, Setting24Label, Setting24, Setting25Label, Setting25, 
		Setting0Pic, Setting1Pic, Setting2Pic, Setting3Pic, 
		Setting5Pic, Setting6Pic, 
		Setting11Pic, Setting12Pic, Setting13Pic, Setting14Pic, Setting15Pic, Setting16Pic, Setting17Pic, Setting18Pic, Setting19Pic, Setting20Pic, Setting21Pic, 
		Setting22Pic, 
		Setting23Pic, Setting24Pic, Setting25Pic,

		Param0Label, Param0, Param1Label, Param1, Param2Label, Param2, 

		FactoryLabel, 
		FactoryComboBox0, FactoryComboBox1, FactoryComboBox2, FactoryComboBox3, 
		FactoryPic0, FactoryPic1, FactoryPic2, FactoryPic3, 
		TypeLabel, 
		TypeComboBox0, TypeComboBox1, TypeComboBox2, TypeComboBox3, 
		TypePic0, TypePic1, TypePic2, TypePic3, 
		NumComboBox0, NumComboBox1, NumComboBox2, NumComboBox3, 
		TemporaryDialog, 
	};

	class Sub_BG: BackgroundWindow {
		x = 0.0;
		y = 0.0;
		w = 1.0;
		h = 0.71;
	};
	class Sub_BG_Light: Light_BG_Window {
		x = 0.0;
		y = 0.0;
		w = 1.0;
		h = 0.71;
	};
	class Sub_BG_Dark: Dark_BG_Window {
		x = 0.0;
		y = 0.0;
		w = 1.0;
		h = 0.71;
	};

	class CommandAITitle: Title {
		style = ST_CENTER;
		x = 0.0;
		y = 0.0;
		w = 1.0;
		text = "AI Group Orders";
	};

	class GroupOrdersLabel: Label {
		x = 0.0;
		y = 0.02;
		text = "Group, Current Order";
	};

	class GroupOrders: ListBox {
		idc = IDC+0;
		x = 0.0;
		y = 0.05;
		w = 0.6;
		h = 0.30
	};
	class SettingLabel: Label {
		SizeEx = 0.021;
	};
	class SettingComboBox: ComboBox {
		colortext[] = {0.22,0.2,0.3,1};
		SizeEx = 0.021;
	};

	class Setting0Label: SettingLabel {
		idc = IDC+100;
		x = 0.6;
		y = 0.02;
		w = 0.4;
		text = "Setting0";
	};
	class Setting0Pic: Setting0Label {
		idc = IDC + 300;
		style = ST_PICTURE;
		text = "";
	};
	class Setting0: SettingComboBox {
		idc = IDC+200;
		x = 0.6;
		y = 0.05;
		w = 0.1;
	};
	class Setting1Label: SettingLabel {
		idc = IDC+101;
		x = 0.7;
		y = 0.02;
		w = 0.1;
		text = "Setting1";
	};
	class Setting1Pic: Setting1Label {
		idc = IDC + 301;
		style = ST_PICTURE;
		text = "";
	};
	class Setting1: SettingComboBox {
		idc = IDC+201
		x = 0.7;
		y = 0.05;
		w = 0.1;
	};
	class Setting2Label: SettingLabel {
		idc = IDC+102;
		x = 0.8;
		y = 0.02;
		w = 0.1;
		text = "Setting2";
	};
	class Setting2Pic: Setting2Label {
		idc = IDC + 302;
		style = ST_PICTURE;
		text = "";
	};
	class Setting2: SettingComboBox {
		idc = IDC+202;
		x = 0.8;
		y = 0.05;
		w = 0.1;
	};
	class Setting3Label: SettingLabel {
		idc = IDC+103;
		x = 0.9;
		y = 0.02;
		w = 0.1;
		text = "Setting3";
	};
	class Setting3Pic: Setting3Label {
		idc = IDC + 303;
		style = ST_PICTURE;
		text = "";
	};
	class Setting3: SettingComboBox {
		idc = IDC+203
		x = 0.9;
		y = 0.05;
		w = 0.1;
	};

	class Setting4Label: SettingLabel {
		idc = IDC+104;
		x = 0.6;
		y = 0.09;
		w = 0.2;
		text = "Setting4";
	};
	class Setting4Pic: Setting4Label {
		idc = IDC + 304;
		style = ST_PICTURE;
		text = "";
	};
	class Setting4: SettingComboBox {
		idc = IDC+204;
		x = 0.6;
		y = 0.12;
		w = 0.1;
	};
	class Setting5Label: SettingLabel {
		idc = IDC+105;
		x = 0.7;
		y = 0.09;
		w = 0.1;
		text = "Setting5";
	};
	class Setting5Pic: Setting5Label {
		idc = IDC + 305;
		style = ST_PICTURE;
		text = "";
	};
	class Setting5: SettingComboBox {
		idc = IDC+205;
		x = 0.7;
		y = 0.12;
		w = 0.1;
	};
	class Setting6Label: SettingLabel {
		idc = IDC+106;
		x = 0.8;
		y = 0.09;
		w = 0.2;
		text = "Setting6";
	};
	class Setting6Pic: Setting6Label {
		idc = IDC + 306;
		style = ST_PICTURE;
		text = "";
	};
	class Setting6: SettingComboBox {
		idc = IDC+206;
		x = 0.8;
		y = 0.12;
		w = 0.2;
	};


	class Setting7Label: SettingLabel {
		idc = IDC+107;
		x = 0.8
		y = 0.16
		w = 0.2
		text = "Setting7";
	};
	class Setting7Pic: Setting7Label {
		idc = IDC + 307;
		style = ST_PICTURE;
		text = "";
	};
	class Setting7: SettingComboBox {
		idc = IDC+207;
		x = 0.8
		y = 0.19
		w = 0.1
	};
	class Setting8Label: SettingLabel {
		idc = IDC+108;
		x = 0.9
		y = 0.16
		w = 0.1
		text = "Setting8";
	};
	class Setting8Pic: Setting8Label {
		idc = IDC + 308;
		style = ST_PICTURE;
		text = "";
	};
	class Setting8: SettingComboBox {
		idc = IDC+208;
		x = 0.9
		y = 0.19
		w = 0.1
	};
	class Setting9Label: SettingLabel {
		idc = IDC+109;
		x = 0.8
		y = 0.23
		w = 0.2
		text = "Setting9";
	};
	class Setting9Pic: Setting9Label {
		idc = IDC + 309;
		style = ST_PICTURE;
		text = "";
	};
	class Setting9: SettingComboBox {
		idc = IDC+209;
		x = 0.8
		y = 0.26
		w = 0.1
	};
	class Setting10Label: SettingLabel {
		idc = IDC+110;
		x = 0.9
		y = 0.23
		w = 0.1
		text = "Setting10";
	};
	class Setting10Pic: Setting10Label {
		idc = IDC + 310;
		style = ST_PICTURE;
		text = "";
	};
	class Setting10: SettingComboBox {
		idc = IDC+210;
		x = 0.9
		y = 0.26
		w = 0.1
	};

	class Setting11Label: SettingLabel {
		idc = IDC+111;
		x = 0.6
		y = 0.16
		w = 0.1
		text = "Setting11";
	};
	class Setting11Pic: Setting11Label {
		idc = IDC + 311;
		style = ST_PICTURE;
		text = "";
	};
	class Setting11: SettingComboBox {
		idc = IDC+211;
		x = 0.6
		y = 0.19
		w = 0.1
	};
	class Setting12Label: SettingLabel {
		idc = IDC+112;
		x = 0.7
		y = 0.16
		w = 0.1
		text = "Setting12";
	};
	class Setting12Pic: Setting12Label {
		idc = IDC + 312;
		style = ST_PICTURE;
		text = "";
	};
	class Setting12: SettingComboBox {
		idc = IDC+212;
		x = 0.7
		y = 0.19
		w = 0.1
	};
	class Setting13Label: SettingLabel {
		idc = IDC+113;
		x = 0.6
		y = 0.23
		w = 0.1
		text = "Setting13";
	};
	class Setting13Pic: Setting13Label {
		idc = IDC + 313;
		style = ST_PICTURE;
		text = "";
	};
	class Setting13: SettingComboBox {
		idc = IDC+213;
		x = 0.6
		y = 0.26
		w = 0.1
	};
	class Setting14Label: SettingLabel {
		idc = IDC+114;
		x = 0.7
		y = 0.23
		w = 0.1
		text = "Setting14";
	};
	class Setting14Pic: Setting14Label {
		idc = IDC + 314;
		style = ST_PICTURE;
		text = "";
	};
	class Setting14: SettingComboBox {
		idc = IDC+214;
		x = 0.7
		y = 0.26
		w = 0.1
	};

	class Setting15Label: SettingLabel {
		idc = IDC+115;
		x = 0.8
		y = 0.30
		w = 0.1
		text = "Setting15";
	};
	class Setting15Pic: Setting15Label {
		idc = IDC + 315;
		style = ST_PICTURE;
		text = "";
	};
	class Setting15: SettingComboBox {
		idc = IDC+215;
		x = 0.8
		y = 0.33
		w = 0.1
	};
	class Setting16Label: SettingLabel {
		idc = IDC+116;
		x = 0.8
		y = 0.37
		w = 0.1
		text = "Setting16";
	};
	class Setting16Pic: Setting16Label {
		idc = IDC + 316;
		style = ST_PICTURE;
		text = "";
	};
	class Setting16: SettingComboBox {
		idc = IDC+216;
		x = 0.8
		y = 0.40
		w = 0.1
	};
	class Setting17Label: SettingLabel {
		idc = IDC+117;
		x = 0.8
		y = 0.44
		w = 0.1
		text = "Setting17";
	};
	class Setting17Pic: Setting17Label {
		idc = IDC + 317;
		style = ST_PICTURE;
		text = "";
	};
	class Setting17: SettingComboBox {
		idc = IDC+217;
		x = 0.8
		y = 0.47
		w = 0.1
	};
	class Setting18Label: SettingLabel {
		idc = IDC+118;
		x = 0.9
		y = 0.30
		w = 0.1
		text = "Setting18";
	};
	class Setting18Pic: Setting18Label {
		idc = IDC + 318;
		style = ST_PICTURE;
		text = "";
	};
	class Setting18: SettingComboBox {
		idc = IDC+218;
		x = 0.9
		y = 0.33
		w = 0.1
	};
	class Setting19Label: SettingLabel {
		idc = IDC+119;
		x = 0.9
		y = 0.37
		w = 0.1
		text = "Setting19";
	};
	class Setting19Pic: Setting19Label {
		idc = IDC + 319;
		style = ST_PICTURE;
		text = "";
	};
	class Setting19: SettingComboBox {
		idc = IDC+219;
		x = 0.9
		y = 0.40
		w = 0.1
	};
	class Setting20Label: SettingLabel {
		idc = IDC+120;
		x = 0.9
		y = 0.44
		w = 0.1
		text = "Setting20";
	};
	class Setting20Pic: Setting20Label {
		idc = IDC + 320;
		style = ST_PICTURE;
		text = "";
	};
	class Setting20: SettingComboBox {
		idc = IDC+220;
		x = 0.9
		y = 0.47
		w = 0.1
	};
	class Setting21Label: SettingLabel {
		idc = IDC+121;
		x = 0.8
		y = 0.51
		w = 0.1
		text = "Setting21";
	};
	class Setting21Pic: Setting21Label {
		idc = IDC + 321;
		style = ST_PICTURE;
		text = "";
	};
	class Setting21: SettingComboBox {
		idc = IDC+221;
		x = 0.8
		y = 0.54
		w = 0.1
	};
	class Setting22Label: SettingLabel {
		idc = IDC+122;
		x = 0.9
		y = 0.51
		w = 0.1
		text = "Setting22";
	};
	class Setting22Pic: Setting22Label {
		idc = IDC + 322;
		style = ST_PICTURE;
		text = "";
	};
	class Setting22: SettingComboBox {
		idc = IDC+222;
		x = 0.9
		y = 0.54
		w = 0.1
	};
	class Setting23Label: SettingLabel {
		idc = IDC+123;
		x = 0.8
		y = 0.58
		w = 0.2
		text = "Setting23";
	};
	class Setting23Pic: Setting23Label {
		idc = IDC + 323;
		style = ST_PICTURE;
		text = "";
	};
	class Setting23: SettingComboBox {
		idc = IDC+223;
		x = 0.8
		y = 0.61
		w = 0.1
	};
	class Setting24Label: SettingLabel {
		idc = IDC+124;
		x = 0.9
		y = 0.58
		w = 0.2
		text = "Setting24";
	};
	class Setting24Pic: Setting24Label {
		idc = IDC + 324;
		style = ST_PICTURE;
		text = "";
	};
	class Setting24: SettingComboBox {
		idc = IDC+224;
		x = 0.9
		y = 0.61
		w = 0.1
	};
	class Setting25Label: SettingLabel {
		idc = IDC+125;
		x = 0.6
		y = 0.30
		w = 0.1
		text = "Setting25";
	};
	class Setting25Pic: Setting25Label {
		idc = IDC + 325;
		style = ST_PICTURE;
		text = "";
	};
	class Setting25: SettingComboBox {
		idc = IDC+225;
		x = 0.6
		y = 0.33
		w = 0.1
	};
	class TemporaryDialog: Button {
		idc = IDC + 13;
		x = 0.65
		y = 0.0
		w = 0.3
		h = 0.03
		text = "Concurrent Order"
		action = "btnTemporaryOrder = true"
	};

	class OrderLabel: Label {
		idc = IDC+1;
		x = 0.0;
		y = 0.38;
		w = 0.1;
		text = "Order";
	};


	class SendOrder: Button {
		idc = IDC+2
		x = 0.1
		y = 0.38
		w = 0.1
		h = 0.03
		text = "Send"
		action = "btnSendOrder = true"
	};

	class Order: ListBox {
		idc = IDC+3
		x = 0.0;
		y = 0.41;
		w = 0.2;
		h = 10*0.03;
	};

	class Param0Label: Label {
		idc = IDC+4
		x = 0.2;
		y = 0.38;
		w = 0.2;
		text = "Param0";
	};

	class Param0: ListBox {
		idc = IDC+5
		x = 0.2;
		y = 0.41;
		w = 0.2;
		h = 10*0.03;
	};

	// narrow the order parameters
	// Expected that no more group order with long second/third parameters
	class Param1Label: TextField {
		idc = IDC+6
		x = 0.4;
		y = 0.36;
		w = 0.1;
		h = 0.05;
		SizeEx = 0.023;
		text = "Param1";
	};
	class Param1: ListBox {
		idc = IDC+7
		x = 0.4;
		y = 0.41;
		w = 0.1;
		h = 10*0.03;
	};
	class Param2Label: TextField {
		idc = IDC+8
		x = 0.5;
		y = 0.36;
		w = 0.1;
		h = 0.05;
		SizeEx = 0.023;
		text = "Param2";
	};
	class Param2: ListBox {
		idc = IDC+9
		x = 0.5;
		y = 0.41;
		w = 0.1;
		h = 10*0.03;
	};

	class Exit: Button {
		x = 0.95
		y = 0.0
		w = 0.05
		h = 0.03
		text = "Exit"
		action = "closeDialog 0"
	};

	class FactoryLabel: Label {
		idc = IDC + 16 * 1 + 0;
		x = 0.82;
		y = 0.09;
		w = 0.16;
		text = "Auto Buy Factories";
		SizeEx = 0.021;
	};
	class AutoBuyComboBoxBase: ComboBox {
		colortext[] = {0.22,0.2,0.3,1};
		SizeEx = 0.023;

		// wholeHeight = 0.12;
		// style = ST_UP; // useless
		h = 0.03;
	};
	class FactoryComboBox0: AutoBuyComboBoxBase {
		idc = IDC + 16 * 4 + 0;
		x = 0.84;
		y = 0.13 + 0.0433 * 0;
		w = 0.16;
	};
	class FactoryComboBox1: FactoryComboBox0 {
		idc = IDC + 16 * 4 + 1;
		y = 0.13 + 0.0433 * 1;
	};
	class FactoryComboBox2: FactoryComboBox0 {
		idc = IDC + 16 * 4 + 2;
		y = 0.13 + 0.0433 * 2;
	};
	class FactoryComboBox3: FactoryComboBox0 {
		idc = IDC + 16 * 4 + 3;
		y = 0.13 + 0.0433 * 3;
	};
	class FactoryPic0: Label {
		idc = IDC + 16 * 5 + 0;
		style = ST_PICTURE;
		colorText[] = {1,1,1,1}; // background color for texture
		text = "";
		x = 0.80;
		y = 0.13 + 0.0433 * 0;
		w = 0.04;
		h = 0.03;
	};
	class FactoryPic1: FactoryPic0 {
		idc = IDC + 16 * 5 + 1;
		y = 0.13 + 0.0433 * 1;
	};
	class FactoryPic2: FactoryPic0 {
		idc = IDC + 16 * 5 + 2;
		y = 0.13 + 0.0433 * 2;
	};
	class FactoryPic3: FactoryPic0 {
		idc = IDC + 16 * 5 + 3;
		y = 0.13 + 0.0433 * 3;
	};

	class TypeLabel: Label {
		idc = IDC + 16 * 1 + 1;
		x = 0.62;
		y = 0.37;
		w = 0.20;
		text = "Auto Buy Type";
		SizeEx = 0.021;
	};
	class TypeComboBox0: AutoBuyComboBoxBase {
		idc = IDC + 16 * 32 + 0;
		x = 0.64;
		y = 0.41 + 0.04 * 0;
		w = 0.10;
	};
	class TypePic0: FactoryPic0 {
		idc = IDC + 16 * 33 + 0;
		x = 0.60;
		y = 0.41 + 0.04 * 0;
	};
	class TypeComboBox1: TypeComboBox0 {
		idc = IDC + 16 * 32 + 1;
		y = 0.41 + 0.04 * 1;
	};
	class TypeComboBox2: TypeComboBox0 {
		idc = IDC + 16 * 32 + 2;
		y = 0.41 + 0.04 * 2;
	};
	class TypeComboBox3: TypeComboBox0 {
		idc = IDC + 16 * 32 + 3;
		y = 0.41 + 0.04 * 3;
	};
	class TypePic1: TypePic0 {
		idc = IDC + 16 * 33 + 1;
		y = 0.41 + 0.04 * 1;
	};
	class TypePic2: TypePic0 {
		idc = IDC + 16 * 33 + 2;
		y = 0.41 + 0.04 * 2;
	};
	class TypePic3: TypePic0 {
		idc = IDC + 16 * 33 + 3;
		y = 0.41 + 0.04 * 3;
	};
	class NumComboBox0: AutoBuyComboBoxBase {
		idc = IDC + 16 * 34 + 0;
		x = 0.64 + 0.10;
		y = 0.41 + 0.04 * 0;
		w = 0.04;
	};
	class NumComboBox1: NumComboBox0 {
		idc = IDC + 16 * 34 + 1;
		y = 0.41 + 0.04 * 1;
	};
	class NumComboBox2: NumComboBox0 {
		idc = IDC + 16 * 34 + 2;
		y = 0.41 + 0.04 * 2;
	};
	class NumComboBox3: NumComboBox0 {
		idc = IDC + 16 * 34 + 3;
		y = 0.41 + 0.04 * 3;
	};
};