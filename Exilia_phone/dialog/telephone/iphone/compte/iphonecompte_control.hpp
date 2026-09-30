class TEXT_Montant: Exilia_RscTextBlack
{
	idc = 10571;
	text = "0";
	x = 0.8395 * safezoneW + safezoneX;
	y = 0.56 * safezoneH + safezoneY;
	w = 0.0773437 * safezoneW;
	h = 0.0329871 * safezoneH;
	sizeEx = 0.028 * safezoneH;
	style = 2;
};

class EDIT_Montant: Exilia_RscEdit
{
	idc = 45041;
	text = "";
	x = 0.864031 * safezoneW + safezoneX;
	y = 0.6495 * safezoneH + safezoneY;
	w = 0.09 * safezoneW;
	h = 0.021 * safezoneH;
};

class COMBI_PlayerList: Exilia_RscCombo
{
	idc = 45042;
	x = 0.883 * safezoneW + safezoneX;
	y = 0.6865 * safezoneH + safezoneY;
	w = 0.071 * safezoneW;
	h = 0.0195 * safezoneH;
};
class BTN_Valider: Exilia_RscButtonMenu
{
	idc = 10574;
	text = "Valider le virement"; //--- ToDo: Localize;
	onButtonClick = "[1] call Exilia_fnc_bankTransfer";
	x = 0.822781 * safezoneW + safezoneX;
	y = 0.715 * safezoneH + safezoneY;
	w = 0.128906 * safezoneW;
	h = 0.0219914 * safezoneH;
	style = 0+2;
};