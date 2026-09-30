class LISTBOX_contacts: Exilia_RscListBoxBlack
{
	idc = 3003;
	size = 0.7 * safezoneH;
	x = 0.789895 * safezoneW + safezoneX;
	y = 0.596763 * safezoneH + safezoneY;
	w = 0.189062 * safezoneW;
	h = 0.318876 * safezoneH;
};

class TEXT_name: Exilia_RscTextBlack
{
	idc = 2404;
	text = "";
	x = 0.831146 * safezoneW + safezoneX;
	y = 0.506597 * safezoneH + safezoneY;
	w = 0.143229 * safezoneW;
	h = 0.0329871 * safezoneH;
};
class TEXT_Initial: Exilia_RscText
{
	idc = 2405;
	text = "";
	sizeEx = 0.08;
	font = "PuristaSemiBold"
	x = 0.799062 * safezoneW + safezoneX;
	y = 0.507 * safezoneH + safezoneY;
	w = 0.0286458 * safezoneW;
	h = 0.0439828 * safezoneH;
};

class TEXT_Number_player: Exilia_RscTextBlack
{
	idc = 2406;
	text = "";
	x = 0.831146 * safezoneW + safezoneX;
	y = 0.532987 * safezoneH + safezoneY;
	w = 0.0859375 * safezoneW;
	h = 0.0219914 * safezoneH;
};

class BTN_message: Exilia_RscButtonInvisible
{
	idc = 3011;
	onButtonClick = "[1,(lbData[3003,(lbCurSel 3003)])] spawn Exilia_fnc_sendMsg;";
	x = 0.964063 * safezoneW + safezoneX;
	y = 0.414233 * safezoneH + safezoneY;
	w = 0.0171875 * safezoneW;
	h = 0.0329871 * safezoneH;
	colorBackground[] = {0,0,0,0};
	tooltip = "Ecrire un message au contact";
};

class BTN_Contact_Appel: Exilia_RscButtonInvisible
{
	idc = 3012;
	onButtonClick = "ctrlSetText [10725,(lbData[3003,(lbCurSel 3003)])];[23] call Exilia_Phone_fnc_Iphone_Main";
	x = 0.943438 * safezoneW + safezoneX;
	y = 0.4164 * safezoneH + safezoneY;
	w = 0.0154688 * safezoneW;
	h = 0.033 * safezoneH;
	colorBackground[] = {0,0,0,0};
	tooltip = "Appeler le contact";
};


class BTN_contactSupr: Exilia_RscButtonInvisible
{
	idc = 3009;
	onButtonClick = "[(lbCurSel 3003)] call Exilia_fnc_removecontact";
	x = 0.949167 * safezoneW + safezoneX;
	y = 0.363653 * safezoneH + safezoneY;
	w = 0.0171875 * safezoneW;
	h = 0.0219914 * safezoneH;
	colorBackground[] = {0,0,0,0};
	tooltip = "Supprimer le contact";
};

class BTN_contactADD: Exilia_RscButtonInvisible
{
	idc = 3007;
	onButtonClick = "[8] call Exilia_Phone_fnc_Iphone_Main";
	x = 0.966355 * safezoneW + safezoneX;
	y = 0.363653 * safezoneH + safezoneY;
	w = 0.0171875 * safezoneW;
	h = 0.0219914 * safezoneH;
	colorBackground[] = {0,0,0,0};
	tooltip = "Ajouté un contact";
};

class BTN_ContactAnnuler: Exilia_RscButtonInvisible
{
	idc = 3008;
	onButtonClick = "[1] call Exilia_Phone_fnc_Iphone_Main";
	tooltip = "Annuler";
	x = 0.78875 * safezoneW + safezoneX;
	y = 0.359255 * safezoneH + safezoneY;
	w = 0.0401042 * safezoneW;
	h = 0.0219914 * safezoneH;
};