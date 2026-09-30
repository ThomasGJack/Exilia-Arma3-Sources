/*
*	Script: Telephone Iphone
*	Autheur: Nirawin29 (John Vazquez)
*
*	Description: Fonction Pour Affiché tous les control servant pour la partie contact add
*
*	Parametres:	Aucun
*
*	Return: Rien
*
*/
#include "..\..\Defines.hpp"

ctrlShow[MESSAGE_ADDCONTACT_BACKGROUND,true];
ctrlShow[MESSAGE_ADDCONTACT_BTN_ANNULER,true];
ctrlShow[MESSAGE_ADDCONTACT_BTN_OK,true];
ctrlShow[MESSAGE_ADDCONTACT_EDIT_NAME,true];
ctrlShow[MESSAGE_ADDCONTACT_EDIT_NUMBER,true];

((findDISPLAY 10500) DISPLAYCtrl MESSAGE_ADDCONTACT_EDIT_NAME) ctrlSetText "";
((findDISPLAY 10500) DISPLAYCtrl MESSAGE_ADDCONTACT_EDIT_NUMBER) ctrlSetText "";
switch (_mode2) do {
	case 2 : {
		((findDISPLAY 10500) DISPLAYCtrl MESSAGE_ADDCONTACT_EDIT_NUMBER) ctrlSetText _data;
	};
	case default {};
};