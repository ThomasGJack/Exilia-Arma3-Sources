/*
*	Script: Telephone Iphone
*	Autheur: Nirawin29 (John Vazquez)
*
*	Description: Fonction Pour Affiché tous les control servant pour la partie contact
*
*	Parametres:	Aucun
*
*	Return: Rien
*
*/
#include "..\..\Defines.hpp"

phoneModeActual = 2;
ctrlShow[MESSAGE_CONTACT_BACKGROUND,true];
ctrlShow[MESSAGE_CONTACT_LISTBOX_CONTACT,true];
ctrlShow[MESSAGE_CONTACT_TEXT_NAME,true];
ctrlShow[MESSAGE_CONTACT_TEXT_INITIAL,true];
ctrlShow[MESSAGE_CONTACT_TEXT_NUMBER,true];
ctrlShow[MESSAGE_CONTACT_BTN_MESSAGE,true];
ctrlShow[MESSAGE_CONTACT_BTN_APPEL,true];
ctrlShow[MESSAGE_CONTACT_BTN_CONTACT_SUPR,true];
ctrlShow[MESSAGE_CONTACT_BTN_CONTACT_ADD,true];
ctrlShow[MESSAGE_CONTACT_BTN_ANNULER,true];
ctrlsettext[MESSAGE_CONTACT_TEXT_NAME,name player];
ctrlsettext[MESSAGE_CONTACT_TEXT_INITIAL,(((name player) splitString "") select 0)];
ctrlsettext[MESSAGE_CONTACT_TEXT_NUMBER,(call compile Exilia_num)];
lbclear 3003;


{
	_pseudo = _x select 0;
	_numero = _x select 1;
	_picture = "global\ico_reseau-off.paa";
	_string = format["%1 - (%2)",_pseudo,_numero];
	_index = lbAdd [3003,_string];
	lbSetData [3003,_index,format["%1",_numero]];

	switch (_numero) do {
		case "22": {
			{
				if ((_x getVariable "Exilia_adminlevel") >=1) then {
					if ("Mattaust_Phone" in (items _x + assignedItems _x)) then {
							_picture = "global\ico_reseau-on.paa";
					};
				};
			} forEach playableUnits;
		};
		case "17": {
			if ((west countSide playableUnits) > 0) then {
					_picture = "global\ico_reseau-on.paa";
			};
		};
		case "18": {
			if ((independent countSide playableUnits) > 0) then {
					_picture = "global\ico_reseau-on.paa";
			};
		};
		case "12": {
			{
				if (_x getVariable "license_civ_dep") then {
					if ("Mattaust_Phone" in (items _x + assignedItems _x)) then {
							_picture = "global\ico_reseau-on.paa";
					};
				};
			} forEach playableUnits;
		};
		case default {
			{
				if (str(_numero) == (_x getVariable "Kira_Exilia_num")) then {
					if ("Mattaust_Phone" in (items _x + assignedItems _x)) then {
						diag_log format["CELLPHONE CASE DEFAULT %1 : %2",str(_numero),_x getVariable "Kira_Exilia_num"];
						_picture = "global\ico_reseau-on.paa";
					};
				};
			} forEach playableUnits;
		};
	};

	lbSetPictureRight [3003,_index,_picture];
	lbSetCurSel [3003,0];
} forEach Exilia_numcontact;
