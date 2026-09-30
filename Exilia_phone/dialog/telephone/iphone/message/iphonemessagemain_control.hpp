class BTN_NewMessage: Exilia_RscButtonInvisible
{
	idc = 3006;
	tooltip = "Envoyer un nouveau message";
	onButtonCLick = "[0] spawn Exilia_fnc_sendMsg;";
	x = 0.964063 * safezoneW + safezoneX;
	y = 0.357056 * safezoneH + safezoneY;
	w = 0.020625 * safezoneW;
	h = 0.0329871 * safezoneH;
};

class BTN_ReplyMessage: Exilia_RscButtonInvisible
{
	idc = 3025;
	tooltip = "Repondre au message";
	onButtonCLick = "[1,((call compile (((findDisplay 10500) displayctrl 3004) lnbData [(lnbCurSelRow 3004),0])) select 5)] spawn Exilia_fnc_sendMsg;";
	x = 0.938281 * safezoneW + safezoneX;
	y = 0.357056 * safezoneH + safezoneY;
	w = 0.020625 * safezoneW;
	h = 0.0329871 * safezoneH;
};

class BTN_Contact: Exilia_RscButtonInvisible
{
	idc = 3026;
	tooltip = "Contacts";
	onButtonCLick = "[2] call Exilia_Phone_fnc_Iphone_Main";
	x = 0.913646 * safezoneW + safezoneX;
	y = 0.359255 * safezoneH + safezoneY;
	w = 0.0229167 * safezoneW;
	h = 0.0329871 * safezoneH;
};

class BTN_add_contact: Exilia_RscButtonInvisible
{
	idc = 3012;
	tooltip = "Ajouté aux contacts";
	onButtonClick = "if (((call compile (((findDisplay 10500) displayctrl 3004) lnbData [(lnbCurSelRow 3004),0])) select 3) == ((call compile (((findDisplay 10500) displayctrl 3004) lnbData [(lnbCurSelRow 3004),0])) select 5)) then {[8,((call compile (((findDisplay 10500) displayctrl 3004) lnbData [(lnbCurSelRow 3004),0])) select 5),2] call Exilia_fnc_Iphone_cellphone;}else{hint ""Ce numéro est déja dans vos contacts"";};";
	x = 0.786458 * safezoneW + safezoneX;
	y = 0.361454 * safezoneH + safezoneY;
	w = 0.0916667 * safezoneW;
	h = 0.0219914 * safezoneH;
};
class BTN_supr_message: Exilia_RscButtonInvisible
{
	idc = 3010;
	tooltip = "Supprimer le message";
	onButtonClick = "[(lbCurSel 3004)] call Exilia_fnc_removeMsg;";
	x = 0.933125 * safezoneW + safezoneX;
	y = 0.416432 * safezoneH + safezoneY;
	w = 0.0515625 * safezoneW;
	h = 0.0219914 * safezoneH;
};

class ListboxHistoryMessage: Exilia_RscListNBox
{
	idc = 3004;
	onLBSelChanged = "[(lbCurSel 3004)] call Exilia_fnc_messageShow;";
	//onLBDblClick = "hint str(_this)";
	x = 0.78875 * safezoneW + safezoneX;
	y = 0.442822 * safezoneH + safezoneY;
	w = 0.195 * safezoneW;
	h = 0.269395 * safezoneH;
	columns[] = {0,1.5};
	colorbackground[] = {0,0,0,0.1};
};

class ListboxHistoryTittle: Exilia_RscText
{
	idc = 3002;
	text = "";
	Style = 16;
	x = 0.78875 * safezoneW + safezoneX;
	y = 0.693 * safezoneH + safezoneY;
	w = 0.195 * safezoneW;
	h = 0.0219914 * safezoneH;
	colorbackground[] = {0,0,0,0.4};
	colortext[] = {1,1,1,1};
};

class ListboxHistoryMessageView: Exilia_RscTextBlack
{
	idc = 3005;
	text = "";
	Style = 16;
	x = 0.78875 * safezoneW + safezoneX;
	y = 0.717 * safezoneH + safezoneY;
	w = 0.195 * safezoneW;
	h = 0.1926 * safezoneH;
	colorbackground[] = {1,1,1,0.1};
	colorText[] = {0, 0, 0, 1};
};

