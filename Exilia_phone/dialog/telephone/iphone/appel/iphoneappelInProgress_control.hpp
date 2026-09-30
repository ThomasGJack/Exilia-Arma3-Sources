
class Text_InProgress_Appellant: Exilia_RscText
{
	idc = 11101;
	colorText[] = {1.8,1.8,1.8,1};
	SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.5)";
	style = 2;
	text = "Numéro inconnue"; //--- ToDo: Localize;
	x = 0.785656 * safezoneW + safezoneX;
	y = 0.385 * safezoneH + safezoneY;
	w = 0.201094 * safezoneW;
	h = 0.06 * safezoneH;
};

class Text_InProgress_Time: Exilia_RscText
{
	idc = 11102;
	colorText[] = {1.8,1.8,1.8,1};
	SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	style = 2;
	text = "00:00:00"; //--- ToDo: Localize;
	x = 0.807251 * safezoneW + safezoneX;
	y = 0.41 * safezoneH + safezoneY;
	w = 0.16 * safezoneW;
	h = 0.06 * safezoneH;
};
/*
class BTN_InProgress_HP: Exilia_RscButtonInvisible
{
	idc = 11110;
	//tooltip = "Haut-Parleur";
	x = 0.916541 * safezoneW + safezoneX;
	y = 0.537384 * safezoneH + safezoneY;
	w = 0.0515521 * safezoneW;
	h = 0.0879657 * safezoneH;
};
*/
class BTN_InProgress_End: Exilia_RscButtonInvisible
{
	idc = 11112;
	tooltip = "Racrocher";
	onButtonClick = "(player getVariable [""Exilia_calling_with"",player]) setVariable [""Exilia_in_call"",false,true];player setVariable [""Exilia_in_call"",false,true];";
	x = 0.864989 * safezoneW + safezoneX;
	y = 0.78149 * safezoneH + safezoneY;
	w = 0.0412417 * safezoneW;
	h = 0.0659743 * safezoneH;
};
/*
class BTN_InProgress_Mute: Exilia_RscButtonInvisible
{
	idc = 11113;
	//tooltip = "Silence";
	x = 0.805189 * safezoneW + safezoneX;
	y = 0.537386 * safezoneH + safezoneY;
	w = 0.0515521 * safezoneW;
	h = 0.0879657 * safezoneH;
};
*/