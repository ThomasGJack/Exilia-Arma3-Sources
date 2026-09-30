class Edit_MessageEdit: Exilia_RscEditInvisible
{
	idc = 3103;
	text = "";
	x = 0.855 * safezoneW + safezoneX;
	y = 0.695931 * safezoneH + safezoneY;
	w = 0.095 * safezoneW;
	h = 0.0239828 * safezoneH;
};
class BTN_EnvoieMessage: Exilia_RscButtonInvisible
{
	idc = 3104;
	onButtonClick = "[0] call Exilia_fnc_cellphonesendMessage";
	tooltip = "Envoyer le  message";
	x = 0.958906 * safezoneW + safezoneX;
	y = 0.697923 * safezoneH + safezoneY;
	w = 0.020625 * safezoneW;
	h = 0.0329871 * safezoneH;
};

class Edit_Number: Exilia_RscEditInvisible
{
	idc = 3105;
	text = "";
	x = 0.812 * safezoneW + safezoneX;
	y = 0.415 * safezoneH + safezoneY;
	w = 0.118594 * safezoneW;
	h = 0.0219914 * safezoneH;
};

class BTN_annuler: Exilia_RscButtonInvisible
{
	idc = 3106;
	tooltip = "Annuler";
	onButtonClick = "[1] call Exilia_Phone_fnc_Iphone_Main";
	x = 0.941146 * safezoneW + safezoneX;
	y = 0.368051 * safezoneH + safezoneY;
	w = 0.0401042 * safezoneW;
	h = 0.0219914 * safezoneH;
};