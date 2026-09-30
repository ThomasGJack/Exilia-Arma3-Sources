
_atm = getPos player nearestObject "atm_popoff";


_var = _atm getVariable ["cash_disponible",0];
if (_var<50000) exitWith {Hint "L'ATM est vide !"};
_modif = cursortarget getVariable ["cash_disponible",0];
cursortarget setVariable ["cash_disponible",_modif -50000];
_malette = "popoff_malette" createVehicle position player;
_malette attachTo [_atm, [0.8, 1.2, -1.2]];
_malette setdir 70;
detach _malette;
_malette addAction["Porter malette",Popoff_fnc_portermalette];
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

if (_var<750000) then {_atm animate ["atm_4",1];};
if (_var<500000) then {_atm animate ["atm_3",1];};
if (_var<250000) then {_atm animate ["atm_2",1];};
if (_var<50000) then {_atm animate ["atm_1",1];};
