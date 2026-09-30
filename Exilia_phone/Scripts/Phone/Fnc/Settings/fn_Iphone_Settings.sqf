/*
*	Script: Telephone Iphone
*	Autheur: Nirawin29 (John Vazquez)
*
*	Description: Fonction Pour Affiché tous les control servant pour les settings
*
*	Parametres:	Aucun
*
*	Return: Rien
*
*/
#include "..\..\Defines.hpp"

phoneModeActual = 7;

ctrlShow[SETINGS_BACKGROUND,true];
ctrlShow[SETTINGS_TEXT_NAME,true];
ctrlShow[SETTINGS_TEXT_INITIAL,true];
ctrlShow[SETINGS_SLIDER_1,true];
ctrlShow[SETINGS_SLIDER_2,true];
ctrlShow[SETINGS_SLIDER_3,true];
ctrlShow[COMBO_TEXT_4,true];
ctrlShow[COMBO_TEXT_5,true]; //
ctrlShow[COMBO_TEXT_6,true]; //
ctrlShow[SETINGS_EDIT_1,true];
ctrlShow[SETINGS_EDIT_2,true];
ctrlShow[SETINGS_EDIT_3,true];
ctrlShow[SETINGS_TEXT_1,true];
ctrlShow[SETINGS_TEXT_2,true];
ctrlShow[SETINGS_TEXT_3,true];
ctrlShow[SETINGS_TEXT_4,true];
ctrlShow[SETINGS_TEXT_5,true]; //
ctrlShow[SETINGS_TEXT_6,true]; //
ctrlsettext[SETTINGS_TEXT_NAME,name player];
ctrlsettext[SETTINGS_TEXT_INITIAL,(((name player) splitString "") select 0)];
[] call Exilia_fnc_settingsMenu;
lbclear COMBO_TEXT_4;
lbclear COMBO_TEXT_5;
lbclear COMBO_TEXT_6;


{
	lbadd[COMBO_TEXT_4,(_x select 0)];
} forEach (getArray(configFile >> "CfgExiliaPhone" >> "Exilia_Phone_backgroundList"));

{
	lbadd[COMBO_TEXT_5,(_x select 0)];
} forEach (getArray(configFile >> "CfgExiliaPhone" >> "Exilia_Phone_sonnerieList"));

{
	lbadd[COMBO_TEXT_6,(_x select 0)];
} forEach (getArray(configFile >> "CfgExiliaPhone" >> "Exilia_Phone_NotifList"));

lbSetCurSel [COMBO_TEXT_4,(profileNamespace getVariable ["Exilia_Phone_BG",0])];
lbSetCurSel [COMBO_TEXT_5,(profileNamespace getVariable ["Exilia_Phone_Sonnerie",0])];
lbSetCurSel [COMBO_TEXT_6,(profileNamespace getVariable ["Exilia_Phone_Notifications",0])];