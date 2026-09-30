
class Text_Request_Appellant: Exilia_RscText
{
	idc = 12101;
	colorText[] = {1.8,1.8,1.8,1};
	SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.5)";
	style = 2;
	text = "Numéro Inconnue"; //--- ToDo: Localize;
	x = 0.785656 * safezoneW + safezoneX;
	y = 0.385 * safezoneH + safezoneY;
	w = 0.201094 * safezoneW;
	h = 0.06 * safezoneH;
};

class BTN_Request_Allow: Exilia_RscButtonInvisible
{
	idc = 12110;
	tooltip = "Décrocher";
	onButtonClick = "[71] call Exilia_Phone_fnc_Iphone_Main";
	x = 0.916541 * safezoneW + safezoneX;
	y = 0.783689 * safezoneH + safezoneY;
	w = 0.0412417 * safezoneW;
	h = 0.0879657 * safezoneH;
};

class BTN_Request_Denied: Exilia_RscButtonInvisible
{
	idc = 12111;
	tooltip = "Racrocher";
	onButtonClick = "[72] call Exilia_Phone_fnc_Iphone_Main";
	x = 0.814468 * safezoneW + safezoneX;
	y = 0.783689 * safezoneH + safezoneY;
	w = 0.0412417 * safezoneW;
	h = 0.0879657 * safezoneH;
};