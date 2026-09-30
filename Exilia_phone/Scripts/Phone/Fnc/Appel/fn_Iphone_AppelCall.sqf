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
private ["_PlayerInfoPlayer","_PlayerInfoExilia_Num","_playerInfoName","_PlayerInfo","_PlayerInfoExilia_numContact","_ProprioTrouver"];


params [
	["_mode",0,[0]],
	["_data",[],[[],0,true,objNull]]
];
switch (_mode) do { 
	case 1 : {
		if ((count _data) < 1) exitWith {};
		//TelSearchPlayerEnd = true;
		_PlayerInfoPlayer = _data select 0;
		_PlayerInfoExilia_Num = _data select 1;
		_PlayerInfoExilia_numContact = _data select 2;
		_PlayerCallIsAnonyme = _data select 3;
		_playerInfoName = _PlayerInfoExilia_Num;

		{
			_name = _x select 0;
			_number = _x select 1;
			if (_number == _PlayerInfoExilia_Num) exitWith {
				_playerInfoName = _name;
			};
		} forEach Exilia_numContact;
		call Exilia_Phone_Fnc_Iphone_Clear; 
		ctrlSetText[APPEL_CALL_APPELLANT,_playerInfoName];
		ctrlShow[APPEL_CALL_BACKGROUND,true];
		ctrlShow[APPEL_CALL_APPELLANT,true];
		ctrlShow[APPEL_CALL_BTN_HP,true];
		ctrlShow[APPEL_CALL_BTN_CONTACT,true];
		ctrlShow[APPEL_CALL_BTN_END,true];
		ctrlShow[APPEL_CALL_BTN_MUTE,true];
		player setVariable ["Exilia_Request_Call",true,true];
		player setVariable ["Exilia_calling_with",_PlayerInfoPlayer,true];
		_PlayerInfoPlayer setVariable ["Exilia_Request_Call",true,true];
		_PlayerInfoPlayer setVariable ["Exilia_Request_Call_Number",Exilia_Num,true];
		_PlayerInfoPlayer setVariable ["Exilia_calling_with",player,true];
		[9,player,"Son_Appel",60] call Exilia_Phone_fnc_Iphone_Sonnerie;
		[1,_PlayerInfoPlayer] remoteExec ["Exilia_Phone_fnc_Iphone_Sonnerie",_PlayerInfoPlayer];
		[MAINFNC_APPELREQUEST,_PlayerCallIsAnonyme] remoteExec ["Exilia_Phone_Fnc_Iphone_Main",_PlayerInfoPlayer];

	};  
	default {
		_NumTel = ctrlText APPEL_CLAVIER_TEXT_NUMBER;
		_masque = ["#31#",_NumTel] call BIS_fnc_inString;
		_ProprioTrouver = false;
		{
			if (_x != player) then {
				[player,_NumTel,_masque] remoteExec ["Exilia_Phone_fnc_Iphone_GetNumbersInfo",_x];
			};
		} forEach playableUnits;

	}; 
};