/*
*	Script: Telephone Iphone
*	Autheur: Nirawin29 (John Vazquez)
*
*	Description: Fonction principal
*
*	Parametres:
*		
*		0: _Mode:
*			-
*		
		1: _Data:
*
*	Return: Rien
*
*/

#include "..\..\script_macros.hpp"
#include "Defines.hpp"

params [
	["_mode",0,[0]],
	["_data",0,[[],0,true,objNull]],
	["_mode2",0,[[],0,true,objNull]]
];

disableSerialization;




switch (_mode) do {
	case MAINFNC_MESSAGE: {call Exilia_Phone_Fnc_Iphone_Clear; [_data,_mode2] call Exilia_Phone_Fnc_Iphone_MessageMain};
	case MAINFNC_CONTACT: {call Exilia_Phone_Fnc_Iphone_Clear; call Exilia_Phone_Fnc_Iphone_Contact};
	case MAINFNC_MESSAGESEND: {call Exilia_Phone_Fnc_Iphone_Clear; call Exilia_Phone_Fnc_Iphone_MessageSend};
	case MAINFNC_BOURSE: {call Exilia_Phone_Fnc_Iphone_Clear; call Exilia_Phone_Fnc_Iphone_Bourse};
	case MAINFNC_COMPTE: {call Exilia_Phone_Fnc_Iphone_Clear; call Exilia_Phone_Fnc_Iphone_Compte};
	case MAINFNC_MAP: {call Exilia_Phone_Fnc_Iphone_Clear; call Exilia_Phone_Fnc_Iphone_Map};
	case MAINFNC_SETTINGS: {call Exilia_Phone_Fnc_Iphone_Clear; call Exilia_Phone_Fnc_Iphone_Settings};
	case MAINFNC_CONTACTADD: {call Exilia_Phone_Fnc_Iphone_Clear; call Exilia_Phone_Fnc_Iphone_ContactAdd};
	case MAINFNC_APPELCLAVIER: {call Exilia_Phone_Fnc_Iphone_Clear; call Exilia_Phone_Fnc_Iphone_AppelClavier};
	case MAINFNC_APPELCLAVIERADDNUMBER: {[_data] call Exilia_Phone_Fnc_Iphone_AppelClavierAddNumber};
	case MAINFNC_APPELCLAVIERERASENUMBER: {call Exilia_Phone_Fnc_Iphone_AppelClavierEraseNumber};
	case MAINFNC_APPELCALL: {[_data,_mode2] call Exilia_Phone_Fnc_Iphone_AppelCall};
	case MAINFNC_APPELDENIED: {call Exilia_Phone_Fnc_Iphone_Clear; call Exilia_Phone_Fnc_Iphone_AppelDenied};
	case MAINFNC_APPELEND: {[] spawn Exilia_Phone_Fnc_Iphone_AppelEnd};
	case MAINFNC_APPELINPROGRESS: {call Exilia_Phone_Fnc_Iphone_Clear; call Exilia_Phone_Fnc_Iphone_AppelInProgress};
	case MAINFNC_APPELREQUEST: {call Exilia_Phone_Fnc_Iphone_Clear; [0,_data] call Exilia_Phone_Fnc_Iphone_AppelRequest};
	case MAINFNC_APPELREQUESTOK: {[1] call Exilia_Phone_Fnc_Iphone_AppelRequest};
	case MAINFNC_APPELREQUESTDENIED: {[2] call Exilia_Phone_Fnc_Iphone_AppelRequest};
	case default {
		
		if (isnull (findDISPLAY DISPLAY)) then {
			createDialog "Phone_Iphone";
		};
		_arrayIMGS = getArray(configFile >> "CfgExiliaPhone" >> "Exilia_Phone_backgroundList");
		_imgSelect = profileNamespace getVariable ["Exilia_Phone_BG",0];
		_imgArray = _arrayIMGS select _imgSelect;
		_img = _imgArray select 1;
		ctrlSetText [10501,_img];
		[] call Exilia_Phone_Fnc_Iphone_Clear;
		[] call Exilia_Phone_fnc_Iphone_Home;

		if (player getVariable ["Exilia_in_call",false]) exitWith {
			[MAINFNC_APPELINPROGRESS] call Exilia_Phone_fnc_Iphone_Main;
		};

		if (player getVariable ["Exilia_Request_Call",false]) exitWith {
			[MAINFNC_APPELREQUEST] call Exilia_Phone_fnc_Iphone_Main;
		};
	};
};
