class Button_Appel: Exilia_RscButtonInvisible
{
	idc = 10513;
	text = "";
	onButtonClick = "[20] call Exilia_Phone_fnc_Iphone_Main";
	tooltip = "Appel";
	x = 0.791785 * safezoneW + safezoneX;
	y = 0.854062 * safezoneH + safezoneY;
	w = 0.0360865 * safezoneW;
	h = 0.0549786 * safezoneH;
};

class Button_Message: Exilia_RscButtonInvisible
{
	idc = 10514;
	text = "";
	onButtonClick = "[1] call Exilia_Phone_fnc_Iphone_Main";
	tooltip = "Message";
	x = 0.831996 * safezoneW + safezoneX;
	y = 0.854062 * safezoneH + safezoneY;
	w = 0.0360865 * safezoneW;
	h = 0.0549786 * safezoneH;
};
class Button_Sync_Data: Exilia_RscButtonInvisible
{
	idc = 10515;
	text = "";
	onButtonClick = "[] call SOCK_fnc_syncData;";
	tooltip = "Sync Data";
	x = 0.910355 * safezoneW + safezoneX;
	y = 0.854062 * safezoneH + safezoneY;
	w = 0.0360865 * safezoneW;
	h = 0.0549786 * safezoneH;
};
class Button_Settings: Exilia_RscButtonInvisible
{
	idc = 10516;
	text = "";
	onButtonClick = "[7] call Exilia_Phone_fnc_Iphone_Main";
	tooltip = "Settings";
	x = 0.949534 * safezoneW + safezoneX;
	y = 0.854062 * safezoneH + safezoneY;
	w = 0.0360865 * safezoneW;
	h = 0.0549786 * safezoneH;
};
class Button_Contact: Exilia_RscButtonInvisible
{
	idc = 10518;
	text = "";
	tooltip = "Contact";
	onButtonClick = "[2] call Exilia_Phone_fnc_Iphone_Main";
	x = 0.871175 * safezoneW + safezoneX;
	y = 0.854062 * safezoneH + safezoneY;
	w = 0.0360865 * safezoneW;
	h = 0.0549786 * safezoneH;
};

class Button_Map: Exilia_RscButtonInvisible
{
	idc = 10517;
	text = "";
	tooltip = "Map";
	onButtonClick = "[6] call Exilia_Phone_fnc_Iphone_Main";
	x = 0.793906 * safezoneW + safezoneX;
	y = 0.368051 * safezoneH + safezoneY;
	w = 0.0360865 * safezoneW;
	h = 0.0549786 * safezoneH;
};

class Button_Compte: Exilia_RscButtonInvisible
{
	idc = 10519;
	text = "";
	tooltip = "Gestion des comptes";
	onButtonClick = "[5] call Exilia_Phone_fnc_Iphone_Main";
	x = 0.840312 * safezoneW + safezoneX;
	y = 0.368051 * safezoneH + safezoneY;
	w = 0.0360865 * safezoneW;
	h = 0.0549786 * safezoneH;
};