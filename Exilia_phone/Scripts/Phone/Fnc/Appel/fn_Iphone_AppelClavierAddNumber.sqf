/*
*	Script: Telephone Iphone
*	Autheur: Nirawin29 (John Vazquez)
*
*	Description: Fonction Pour ajout" un chifre au numéros sur le clavier
*
*	Parametres:	
*		(0) _data: Numéros a ajouté (number)
*					0 - "0"
*					1 - "1"
*					2 - "2"
*					3 - "3"
*					4 - "4"
*					5 - "5"
*					6 - "6"
*					7 - "7"
*					8 - "8"
*					9 - "9"
*					10 - "*"
*					11 - "#"
*
*	Return: Rien
*
*/
#include "..\..\Defines.hpp"

Params [
	["_data",0,[0]]
];


_NumTel = ctrlText APPEL_CLAVIER_TEXT_NUMBER;
_masque = ["#31#",_NumTel] call BIS_fnc_inString;
_maxNumbersInNum = 10;

if (_data isEqualTo 10) then {_data = "*"};
if (_data isEqualTo 11) then {_data = "#"};

if (_masque) then {
	_maxNumbersInNum = 14;		
};
if (((count _NumTel)+1) <= _maxNumbersInNum) then {
	_NumTel = format ["%1%2",_NumTel,_data];
};

ctrlSetText [APPEL_CLAVIER_TEXT_NUMBER,_NumTel];
