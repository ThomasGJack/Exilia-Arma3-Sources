/*
*	Script: Telephone Iphone
*	Autheur: Nirawin29 (John Vazquez)
*
*	Description: Fonction Pour ajout" un chifre au numéros sur le clavier
*
*	Parametres:	Aucun
*
*	Return: Rien
*
*/
#include "..\..\Defines.hpp"


_NumTel = ctrlText APPEL_CLAVIER_TEXT_NUMBER;
_NumTel = _NumTel splitstring "";
{
	if (_x isEqualTo " ") then {
		_NumTel deleteAt _forEachIndex;
	};
} forEach _NumTel;
_NumTel deleteAt (count _NumTel-1);
_NumTel = _NumTel joinString "";
ctrlSetText [APPEL_CLAVIER_TEXT_NUMBER,_NumTel];
