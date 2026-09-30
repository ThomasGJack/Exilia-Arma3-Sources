_atm = getPos player nearestObject "atm_popoff";

_atm animate ["porte_1",1];
_atm say "porte_1";
sleep 1;
_ATMLists = ["atm_1","atm_2","atm_3","atm_4"];

{
	_atm animate [_x,1];
} forEach _ATMLists;