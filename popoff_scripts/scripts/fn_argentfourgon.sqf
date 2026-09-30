
_fourgon = getPos player nearestObject "sprinter_popoff_brinks";
_var = _fourgon getVariable ["cash_disponible",0];


[1,0,_var*0.1,"Vol fourgon"] call exilia_fnc_money;
_fric_2 = getPos player nearestObject "sac_fric";
deletevehicle _fric_2;

_fourgon setVariable ["cash_disponible",0];
