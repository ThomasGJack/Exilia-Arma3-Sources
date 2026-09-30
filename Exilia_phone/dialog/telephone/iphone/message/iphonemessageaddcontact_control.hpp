class ADDCONTACT_BTN_ANNULER: Exilia_RscButtonInvisible
{
	idc = 10621;
	tooltip = "Annuler";
	onButtonClick="[2] call Exilia_Phone_fnc_Iphone_Main";
	x = 0.789896 * safezoneW + safezoneX;
	y = 0.365852 * safezoneH + safezoneY;
	w = 0.0458333 * safezoneW;
	h = 0.0219914 * safezoneH;
};
class ADDCONTACT_EDIT_NAME: Exilia_RscEditInvisible
{
	idc = 10622;
	text = "";
	x = 0.832292 * safezoneW + safezoneX;
	y = 0.427428 * safezoneH + safezoneY;
	w = 0.1375 * safezoneW;
	h = 0.0329871 * safezoneH;
};
class ADDCONTACT_EDIT_NUMBER: Exilia_RscEditInvisible
{
	idc = 10623;
	text = "";
	x = 0.8575 * safezoneW + safezoneX;
	y = 0.504398 * safezoneH + safezoneY;
	w = 0.114583 * safezoneW;
	h = 0.0329871 * safezoneH;
};
class ADDCONTACT_BTN_OK: Exilia_RscButtonInvisible
{
	idc = 10624;
	tooltip = "Valider";
	onButtonClick = "[0] spawn Exilia_fnc_addcontact;";
	x = 0.964063 * safezoneW + safezoneX;
	y = 0.365852 * safezoneH + safezoneY;
	w = 0.0171875 * safezoneW;
	h = 0.0219914 * safezoneH;
};