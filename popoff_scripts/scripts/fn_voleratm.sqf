_atm = getPos player nearestObject "atm_popoff";

_var = _atm getVariable ["cash_disponible",-1];
if (_var < 0) then {
	_var = (random [10000, 100000, 500000]);
	_atm setVariable ["cash_disponible",_var,true];
};

_ATMLists = ["atm_1","atm_2","atm_3","atm_4"];

{
	_atm animate [_x,1];
} forEach _ATMLists;

[1,0,_var*0.1,"vol d'atm"] call exilia_fnc_money;

_atm setVariable ["cash_disponible",0];
