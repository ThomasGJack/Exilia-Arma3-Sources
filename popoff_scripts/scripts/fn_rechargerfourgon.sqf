if (vehicle player != player) exitwith {hint "Vous êtes dans un vehicule, opération impossible"};
_malette = getPos player nearestObject "popoff_malette";

_fourgon = getPos player nearestObject "sprinter_popoff_brinks";




if !((count nearestObjects [player, ["popoff_malette"], 3]) > 0) exitwith {hint "il n'y a aucune malette de convoyeur à proximité pour effectuer l'opération !" };
if (count attachedObjects player > 0) exitwith { hint "Dépose la malette au sol avant !"; };
_var = _fourgon getVariable ["cash_disponible",0];
if (_var>1950000) exitWith {Hint "Le fourgon est plein !"};
_modif = cursortarget getVariable ["cash_disponible",0];
cursortarget setVariable ["cash_disponible",_modif +50000];
deletevehicle _malette;
_fourgon = getPos player nearestObject "sprinter_popoff_brinks";

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
