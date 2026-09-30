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

	_numberRequest = player getVariable ["Exilia_Request_Call_Number","ERROR"];
	_playerInfoName = call compile _numberRequest;
	_time = [0, "HH:MM:SS"] call BIS_fnc_secondsToString;
	ctrlSetText[APPEL_INPROGRESS_TIME,_time];
	
	{
		_name = _x select 0;
		_number = _x select 1;
		
		if (_number == _playerInfoName) exitWith {
			_playerInfoName = _name;
		};
	} forEach Exilia_numContact;
	
	ctrlSetText[APPEL_INPROGRESS_APPELLANT,_playerInfoName];

	ctrlShow[APPEL_INPROGRESS_BACKGROUND,true];
	ctrlShow[APPEL_INPROGRESS_APPELLANT,true];
	ctrlShow[APPEL_INPROGRESS_TIME,true];
	ctrlShow[APPEL_INPROGRESS_BTN_HP,true];
	ctrlShow[APPEL_INPROGRESS_BTN_CONTACT,true];
	ctrlShow[APPEL_INPROGRESS_BTN_END,true];
	ctrlShow[APPEL_INPROGRESS_BTN_MUTE,true];

	if !(missionNamespace getVariable ["appelInProgress",false]) then {
		missionNamespace setVariable ["appelInProgress",true];
		[] spawn {
			_time = time;
			while {true} do {
				_timeCalcule = time - _time;
				_timeAff = [_timeCalcule, "HH:MM:SS"] call BIS_fnc_secondsToString;
				ctrlSetText[APPEL_INPROGRESS_TIME,_timeAff];
				if !(player getVariable ["Exilia_in_call",false]) exitWith {
					missionNamespace setVariable ["appelInProgress",nil];
					[50] call Exilia_Phone_Fnc_Iphone_Main;
				};
				systemChat format["Time 1: %1",time];
				sleep 0.2;
				systemChat format["Time 1: %1",time];
			};	
		};
	};


