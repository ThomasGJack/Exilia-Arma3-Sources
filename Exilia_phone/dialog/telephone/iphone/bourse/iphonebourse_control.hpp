class Listbox_Items : Exilia_RscListBox
{
	idc = 7055;
	onLBSelChanged = "[] spawn {[] call Exilia_fnc_DisplayPrices;};";
	x = 0.788751 * safezoneW + safezoneX;
	y = 0.394441 * safezoneH + safezoneY;
	w = 0.194792 * safezoneW;
	h = 0.483811 * safezoneH;

};

class BTN_Refresh: Exilia_RscButtonInvisible
{
	idc = 10562;
	//tooltip = "Rafraichir";
	x = 0.960968 * safezoneW + safezoneX;
	y = 0.361453 * safezoneH + safezoneY;
	w = 0.020625 * safezoneW;
	h = 0.0329871 * safezoneH;
};

class Text_Montant_Achat: Exilia_RscText
{
	idc = 7056;
	text = "Merci de séléctioner un item";
	x = 0.848 * safezoneW + safezoneX;
	y = 0.8895 * safezoneH + safezoneY;
	w = 0.15 * safezoneW;
	h = 0.0219914 * safezoneH;
};
