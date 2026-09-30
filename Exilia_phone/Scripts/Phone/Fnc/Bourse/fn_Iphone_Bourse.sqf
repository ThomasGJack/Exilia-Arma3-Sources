/*
*	Script: Telephone Iphone
*	Autheur: Nirawin29 (John Vazquez)
*
*	Description: Fonction Pour Affiché tous les control servant pour la bourse
*
*	Parametres:	Aucun
*
*	Return: Rien
*
*/
#include "..\..\Defines.hpp"

phoneModeActual = 4;
ctrlShow[BOURSE_BACKGROUND,true];
ctrlShow[BOURSE_LISTBOX_ITEMS,true];
ctrlShow[BOURSE_BTN_REFRESH,true];
ctrlShow[BOURSE_TEXT_ACHAT,true];
ctrlShow[BOURSE_TEXT_MONTANT_ACHAT,true];
[] spawn Exilia_fnc_LoadIntoListbox;