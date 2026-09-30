/*
*	Script: Telephone Iphone
*	Autheur: Nirawin29 (John Vazquez)
*
*	Description: Fonction Pour Affiché tous les control servant pour la banque
*
*	Parametres:	Aucun
*
*	Return: Rien
*
*/
#include "..\..\Defines.hpp"

phoneModeActual = 5;
ctrlShow[COMPTE_BACKGROUND,true];
ctrlShow[COMPTE_TEXT_MONTANT,true];
ctrlShow[COMPTE_EDIT_MONTANT,true];
ctrlShow[COMPTE_COMBO_PLAYERLIST,true];
ctrlShow[COMPTE_BTN_VALIDER,true];
_units = ((findDISPLAY DISPLAY) DISPLAYCtrl COMPTE_COMBO_PLAYERLIST);
lbClear _units;
{
    _name = _x getVariable ["realname",name _x];
    if (alive _x && (!(_name isEqualTo profileName))) then {
        switch (side _x) do {
            case west: {_type = "Cop"};
            case civilian: {_type = "Civ"};
            case independent: {_type = "EMS"};
        };
        _units lbAdd format["%1 (%2)",_x getVariable ["realname",name _x],_type];
        _units lbSetData [(lbSize _units)-1,str(_x)];
    };
} forEach playableUnits;

_montant = [(missionNamespace getVariable ["Exilia_atmbank",0])] call BIS_fnc_numberText;
ctrlSetText[COMPTE_TEXT_MONTANT,_montant];


