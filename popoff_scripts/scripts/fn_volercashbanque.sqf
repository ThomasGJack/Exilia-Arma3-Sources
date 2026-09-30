_banque = getPos player nearestObject "banque_popoff";
_banque animate ["argent_coffre",1];
[1,0,1000000,"vol cash banque"] call exilia_fnc_money;