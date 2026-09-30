class Settings_Text_Name: Exilia_RscTextBlack
{
	idc = 10544;
	text = "";
	x = 0.832292 * safezoneW + safezoneX;
	y = 0.521991 * safezoneH + safezoneY;
	w = 0.131771 * safezoneW;
	h = 0.0329871 * safezoneH;
};

class Settings_TEXT_Initial: Exilia_RscText
{
	idc = 10545;
	text = "";
	sizeEx = 0.08;
	font = "PuristaSemiBold"
	x = 0.799062 * safezoneW + safezoneX;
	y = 0.525 * safezoneH + safezoneY;
	w = 0.0286458 * safezoneW;
	h = 0.0439828 * safezoneH;
};

class Slider_1: Exilia_RscXSliderH
{
	idc = 2901;
	onSliderPosChanged = "[0,_this select 1] call Exilia_fnc_s_onSliderChange;";
	x = 0.850625 * safezoneW + safezoneX;
	y = 0.613 * safezoneH + safezoneY;
	w = 0.08 * safezoneW;
	h = 0.0329871 * safezoneH;
};

class Edit_1: Exilia_RscEdit {
    idc = 2902;
    text = "";
    onChar = "[_this select 0, _this select 1,'ground',false] call Exilia_fnc_s_onChar;";
    onKeyUp = "[_this select 0, _this select 1,'ground',true] call Exilia_fnc_s_onChar;";
    x = 0.938 * safezoneW + safezoneX;
	y = 0.62 * safezoneH + safezoneY;
    w = .08;
    h = .04;
};

class Slider_2: Exilia_RscXSliderH
{
	idc = 2911;
	onSliderPosChanged = "[1,_this select 1] call Exilia_fnc_s_onSliderChange;";
	x = 0.850625 * safezoneW + safezoneX;
	y = 0.656 * safezoneH + safezoneY;
	w = 0.08 * safezoneW;
	h = 0.0329871 * safezoneH;
};

class Edit_2: Exilia_RscEdit {
    idc = 2912;
    text = "";
    onChar = "[_this select 0, _this select 1,'ground',false] call Exilia_fnc_s_onChar;";
    onKeyUp = "[_this select 0, _this select 1,'ground',true] call Exilia_fnc_s_onChar;";
    x = 0.938 * safezoneW + safezoneX;
	y = 0.66 * safezoneH + safezoneY;
    w = .08;
    h = .04;
};

class Slider_3: Exilia_RscXSliderH
{
	idc = 2921;
	onSliderPosChanged = "[2,_this select 1] call Exilia_fnc_s_onSliderChange;";
	x = 0.850625 * safezoneW + safezoneX;
	y = 0.696 * safezoneH + safezoneY;
	w = 0.08 * safezoneW;
	h = 0.0329871 * safezoneH;
};

class Edit_3: Exilia_RscEdit {
    idc = 2922;
    text = "";
    onChar = "[_this select 0, _this select 1,'ground',false] call Exilia_fnc_s_onChar;";
    onKeyUp = "[_this select 0, _this select 1,'ground',true] call Exilia_fnc_s_onChar;";
    x = 0.938 * safezoneW + safezoneX;
	y = 0.7025 * safezoneH + safezoneY;
    w = 0.08;
    h = 0.04;
};

class Combo_Fond: Exilia_RscCombo
{
	idc = 2931;
	onLBSelChanged = "[1,_this select 1] call Exilia_Phone_fnc_Iphone_Settings_LbBackground;";
	x = 0.87125 * safezoneW + safezoneX;
	y = 0.741 * safezoneH + safezoneY;
	w = 0.113437 * safezoneW;
	h = 0.033 * safezoneH;
};


class Combo_Sonnerie: Exilia_RscCombo
{
	idc = 2932;
	onLBSelChanged = "[2,_this select 1] call Exilia_Phone_fnc_Iphone_Settings_LbBackground;";
	x = 0.87125 * safezoneW + safezoneX;
	y = 0.780 * safezoneH + safezoneY;
	w = 0.113437 * safezoneW;
	h = 0.033 * safezoneH;
};

class Combo_Notif: Exilia_RscCombo
{
	idc = 2933;
	onLBSelChanged = "[3,_this select 1] call Exilia_Phone_fnc_Iphone_Settings_LbBackground;";
	x = 0.87125 * safezoneW + safezoneX;
	y = 0.821 * safezoneH + safezoneY;
	w = 0.113437 * safezoneW;
	h = 0.033 * safezoneH;
};
