if (vehicle player != player) exitwith {hint "Vous êtes dans un vehicule, opération impossible"};
_fourgon = getPos player nearestObject "sprinter_popoff_brinks";






_var = _fourgon getVariable ["cash_disponible",0];
if (_var<50000) exitWith {Hint "Le fourgon est vide !"};
_modif = cursortarget getVariable ["cash_disponible",0];
cursortarget setVariable ["cash_disponible",_modif -50000];
_malette = "popoff_malette" createVehicle position player;
_malette attachTo [_fourgon, [1.6, 1.4, -1.2]];
detach _malette;
_malette addAction["Porter malette",Popoff_fnc_portermalette];
_fourgon = getPos player nearestObject "sprinter_popoff_brinks";
_fourgonLists = ["fb_1","fb_2","fb_3","fb_4","fb_5","fb_6","fb_7","fb_8","fb_9","fb_10"];


{
	_fourgon animate [_x,0];
} forEach _fourgonLists;

_var = _fourgon getVariable ["cash_disponible",-1];
_fourgon animate ["fb_10",0];
_fourgon animate ["fb_9",0];
_fourgon animate ["fb_8",0];
_fourgon animate ["fb_7",0];
_fourgon animate ["fb_6",0];
_fourgon animate ["fb_5",0];
_fourgon animate ["fb_4",0];
_fourgon animate ["fb_3",0];
_fourgon animate ["fb_2",0];
_fourgon animate ["fb_1",0];

if (_var<1800000) then {_fourgon animate ["fb_1",1];};
if (_var<1600000) then {_fourgon animate ["fb_2",1];};
if (_var<1400000) then {_fourgon animate ["fb_3",1];};
if (_var<1200000) then {_fourgon animate ["fb_4",1];};
if (_var<1000000) then {_fourgon animate ["fb_5",1];};
if (_var<800000) then {_fourgon animate ["fb_6",1];};
if (_var<600000) then {_fourgon animate ["fb_7",1];};
if (_var<400000) then {_fourgon animate ["fb_8",1];};
if (_var<200000) then {_fourgon animate ["fb_9",1];};
if (_var<50000) then {_fourgon animate ["fb_10",1];};
