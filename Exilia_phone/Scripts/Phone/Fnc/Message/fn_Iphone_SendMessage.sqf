/*
*	Script: Telephone Iphone
*	Autheur: Nirawin29 (John Vazquez)
*
*	Description: Fonction Pour Affiché tous les control servant pour le clavier du menu Appel
*
*	Parametres:	Aucun
*
*	Return: Rien
*
*/
#include "..\..\Defines.hpp"

private["_display","_units","_type","_value","_pseudo","_numero","_count"];
params[
	["_mode",0,[0]],
	["_tempnumber","",[""]]
];
[3] call Exilia_Phone_Fnc_Iphone_Main;
disableSerialization;
waitUntil {!isNull findDisplay DISPLAY};
_display = findDisplay DISPLAY;

switch (_mode) do {
	case 1: {
		if !(_tempnumber == "") then {
			ctrlSetText [MESSAGE_SEND_EDIT_NUMBER, _tempnumber];
		} else {
			ctrlSetText [MESSAGE_SEND_EDIT_NUMBER, ""];
		};
	};

	case default
	{
		ctrlSetText [MESSAGE_SEND_EDIT_NUMBER, ""];
	};
};