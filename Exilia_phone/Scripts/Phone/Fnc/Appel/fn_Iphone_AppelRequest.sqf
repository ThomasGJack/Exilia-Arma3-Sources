/*
*	Script: Telephone Iphone
*	Autheur: Nirawin29 (John Vazquez)
*
*	Description: Fonction Pour Affiché tous les control servant pour le rejet d'appel
*
*	Parametres:	Aucun
*
*	Return: Rien
*
*/
#include "..\..\Defines.hpp"
private["_playerInfoName"];
params [
	["_mode",0,[0]],
	["_isAnonyme",false,[false]]
];

switch (_mode) do { 
	case 1 :{
		(player getVariable ["Exilia_calling_with",player]) setVariable ["Exilia_in_call",true,true];
		(player getVariable ["Exilia_calling_with",player]) setVariable ["Exilia_Request_Call_Number",Exilia_Num,true];
		(player getVariable ["Exilia_calling_with",player]) setVariable ["Exilia_Request_Call",nil,true];
		player setVariable ["Exilia_in_call",true,true];
		player setVariable ["Exilia_Request_Call",nil,true];

		[MAINFNC_APPELINPROGRESS] call Exilia_Phone_fnc_Iphone_Main;
		[MAINFNC_APPELINPROGRESS] remoteExec ["Exilia_Phone_Fnc_Iphone_Main",(player getVariable ["Exilia_calling_with",player])];
		[2,player] call Exilia_Phone_fnc_Iphone_Sonnerie;
		[10,(player getVariable ["Exilia_calling_with",player])] call Exilia_Phone_fnc_Iphone_Sonnerie;
	}; 
	case 2 : {
		[10,(player getVariable ["Exilia_calling_with",player])] call Exilia_Phone_fnc_Iphone_Sonnerie;
		(player getVariable ["Exilia_calling_with",player]) setVariable ["Exilia_Request_Call",nil,true];
		(player getVariable ["Exilia_calling_with",player]) setVariable ["Exilia_calling_with",nil,true];
		(player getVariable ["Exilia_calling_with",player]) setVariable ["Exilia_in_call",nil,true];
		(player getVariable ["Exilia_calling_with",player]) setVariable ["Exilia_Call_Time",nil,true];
		[] remoteExec ["Exilia_Phone_fnc_Iphone_Main",(player getVariable ["Exilia_calling_with",player])];
		player setVariable ["Exilia_Request_Call",nil,true];
		player setVariable ["Exilia_calling_with",nil,true];
		player setVariable ["Exilia_in_call",nil,true];
		player setVariable ["Exilia_Call_Time",nil,true];
		[2,player] call Exilia_Phone_fnc_Iphone_Sonnerie;
		[] call Exilia_Phone_fnc_Iphone_Main;
	}; 
	default {

		_numberRequest = player getVariable ["Exilia_Request_Call_Number","ERROR"];
		_playerInfoName = call compile _numberRequest;
		
		{
			_name = _x select 0;
			_number = _x select 1;
			
			if (_number == _playerInfoName) exitWith {
				_playerInfoName = _name;
			};
		} forEach Exilia_numContact;
		
		if (_isAnonyme) then {
			_playerInfoName = "Appel Anonyme";
		};
		ctrlSetText[APPEL_REQUEST_APPELLANT,_playerInfoName];
		ctrlShow[APPEL_REQUEST_BACKGROUND,true];
		ctrlShow[APPEL_REQUEST_APPELLANT,true];
		ctrlShow[APPEL_REQUEST_BTN_ALLOW,true];
		ctrlShow[APPEL_REQUEST_BTN_DENIED,true];
		ctrlEnable[GLOBAL_BTN_HOME,false];
	}; 
};
