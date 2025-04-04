// args: dialog index

if (localize {TZK_LANG_MOVE} == "移动") then {
	if (1 == _this) then {
		ctrlSetText [IDC + 10, "  TZK任务设置1"];
		ctrlSetText [IDC + 11, "  效果"];
		ctrlSetText [IDC + 12, "  功能"];
		ctrlSetText [IDC + 13, "  菜单"];
	};
	if (2 == _this) then {
		ctrlSetText [IDC + 10, "  TZK任务设置2"];
		ctrlSetText [IDC + 11, "  对话框"];
		ctrlSetText [IDC + 12, "  环境"];
		ctrlSetText [IDC + 13, "  控制"];
	};
};