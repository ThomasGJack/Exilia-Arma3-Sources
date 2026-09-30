/*
*	Script: Telephone Iphone
*	Autheur: Nirawin29 (John Vazquez)
*
*	Description: Fonction Pour replacer le telephone a l'ancienne position si il y'en a une
*				 Si aucune ancienne position defini alors le telephone ce place a la position
*				 par default (en bas a droite)
*
*	Parametres:	Aucun
*
*	Return: Rien
*
*/
#include "Defines.hpp"

{
	_pos = profileNamespace getVariable "AllPosCellPhoneControls" select _forEachIndex;
	_posX = _pos select 0;
	_posY = _pos select 1;

	_x ctrlSetPosition [_posX,_posY];
	_x ctrlCommit 0;
} forEach (allControls (findDISPLAY DISPLAY));