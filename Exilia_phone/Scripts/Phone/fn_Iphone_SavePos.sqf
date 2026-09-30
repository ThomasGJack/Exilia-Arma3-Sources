/*
*	Script: Telephone Iphone
*	Autheur: Nirawin29 (John Vazquez)
*
*	Description: Fonction Pour sauvegarder la position du telephone quand on le quitte
*
*	Parametres:	Aucun
*
*	Return: Rien
*
*/

#include "Defines.hpp"


_AllPosCellPhoneControls = [];
_AllControls = (allControls (findDISPLAY DISPLAY));

{
	_pos = ctrlPosition _x;
	_AllPosCellPhoneControls pushBack _pos;
} forEach _AllControls;

profileNamespace setVariable ["AllPosCellPhoneControls",_AllPosCellPhoneControls];
