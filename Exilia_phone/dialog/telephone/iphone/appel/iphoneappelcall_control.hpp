
class Text_Call_Appellant: Exilia_RscText
{
	idc = 10901;
	colorText[] = {1.8,1.8,1.8,1};
	SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.5)";
	style = 2;
	text = "ERROR"; //--- ToDo: Localize;
	x = 0.785656 * safezoneW + safezoneX;
	y = 0.385 * safezoneH + safezoneY;
	w = 0.201094 * safezoneW;
	h = 0.06 * safezoneH;
};
class BTN_Call_End: Exilia_RscButtonInvisible
{
	idc = 10904;
	tooltip = "Racrocher";
	onButtonClick = "(player getVariable [""Exilia_calling_with"",player]) setVariable [""Exilia_Request_Call"",nil,true];(player getVariable [""Exilia_calling_with"",player]) setVariable [""Exilia_calling_with"",nil,true];(player getVariable [""Exilia_calling_with"",player]) setVariable [""Exilia_in_call"",nil,true];(player getVariable [""Exilia_calling_with"",player]) setVariable [""Exilia_Call_Time"",nil,true];player setVariable [""Exilia_Request_Call"",nil,true];player setVariable [""Exilia_in_call"",nil,true];player setVariable [""Exilia_Call_Time"",nil,true];[50] call Exilia_Phone_Fnc_Iphone_Main;[] remoteExec [""Exilia_Phone_fnc_Iphone_Main"",(player getVariable [""Exilia_calling_with"",player])];player setVariable [""Exilia_calling_with"",nil,true];";				
	x = 0.864989 * safezoneW + safezoneX;
	y = 0.78149 * safezoneH + safezoneY;
	w = 0.0412417 * safezoneW;
	h = 0.0659743 * safezoneH;
};