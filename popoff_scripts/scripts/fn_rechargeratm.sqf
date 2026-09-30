_malette = getPos player nearestObject "popoff_malette";
_atm = getPos player nearestObject "atm_popoff";
_ATMLists = ["atm_1","atm_2","atm_3","atm_4"];

{
	_atm animate [_x,0];
} forEach _ATMLists;

_var = _atm getVariable ["cash_disponible",-1];
if (_var < 0) then {
	_var = (random [10000, 100000, 500000]);
	_atm setVariable ["cash_disponible",_var,true];
};


if !((count nearestObjects [player, ["popoff_malette"], 3]) > 0) exitwith {hint "il n'y a aucune malette de convoyeur à proximité pour effectuer l'opération !" };
if (count attachedObjects player > 0) exitwith { hint "Dépose la malette au sol avant !"; };


if (_var>950000) exitWith {Hint "L'ATM est plein !"};
_atm setVariable ["cash_disponible",(_var+50000),true];
deletevehicle _malette;
_atm = getPos player nearestObject "atm_popoff";

if (_var<750000) then {_atm animate ["atm_4",1];};
if (_var<500000) then {_atm animate ["atm_3",1];};
if (_var<250000) then {_atm animate ["atm_2",1];};
if (_var<50000) then {_atm animate ["atm_1",1];};
