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
systemChat format["APPELEND: %1",time];
call Exilia_Phone_Fnc_Iphone_Clear;
ctrlShow[APPEL_END_BACKGROUND,true];

_numberRequest = player getVariable ["Exilia_Request_Call_Number","ERROR"];
_playerInfoName = call compile _numberRequest;

{
	_name = _x select 0;
	_number = _x select 1;
	
	if (_number == _playerInfoName) exitWith {
		_playerInfoName = _name;
	};
} forEach Exilia_numContact;

ctrlSetText[APPEL_END_APPELLANT,_playerInfoName];
ctrlShow[APPEL_END_APPELLANT,true];
sleep 1;

(player getVariable ["Exilia_calling_with",player]) setVariable ["Exilia_Request_Call",nil,true];
(player getVariable ["Exilia_calling_with",player]) setVariable ["Exilia_calling_with",nil,true];
(player getVariable ["Exilia_calling_with",player]) setVariable ["Exilia_in_call",nil,true];
(player getVariable ["Exilia_calling_with",player]) setVariable ["Exilia_Call_Time",nil,true];

player setVariable ["Exilia_Request_Call",nil,true];
player setVariable ["Exilia_Request_Call_Number",nil,true];
player setVariable ["Exilia_calling_with",nil,true];
player setVariable ["Exilia_in_call",nil,true];
player setVariable ["Exilia_Call_Time",nil,true];

		
[] call Exilia_Phone_Fnc_Iphone_Main;