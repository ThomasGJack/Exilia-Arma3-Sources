if !("tnt_popoff_2" in Magazines Player) exitWith {hint "Tu n'as pas d'explosifs sur toi!"};
_atm = getPos player nearestObject "atm_popoff";
player removeitem "tnt_popoff_2";
tnt_1 = "tnt_popoff" createVehicle position player;
tnt_1 attachTo [_atm, [0.2, 1.13, -0.3] ];
tnt_1 setdir 180;
tnt_2 = "ClaymoreDirectionalMine_Remote_Ammo_Scripted" createVehicle position player;
tnt_2 attachTo [_atm, [0.2, 0.9, -0.3] ];
tnt_2 setdir 180;


for "_i" from 10 to 1 step -1 do {
    hint format["Explosion dans %1",_i];
    sleep 1;
};


hint "";
tnt_2 setdamage 1;
deletevehicle tnt_1;

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
_atm animate ["porte_1",0];
_atm say "porte_1";
