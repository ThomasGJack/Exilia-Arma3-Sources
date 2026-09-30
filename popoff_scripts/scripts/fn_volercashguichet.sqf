_caisse = getPos player nearestObject "caisse_guichet_popoff";

for "_i" from 15 to 1 step -1 do {
    hint format["Crochetage en cours dans %1",_i];
    player switchmove "vehicle_passenger_stand_1_Aim_Pistol_FromBinoc";
    sleep 2;
    player switchmove "";
};

cursortarget  animate ["tiroir_1",0.9];
_caisse  animate ["tiroir_1",0.9];
sleep 5;

[1,0,15000,"vol cash guichet"] call exilia_fnc_money;
_caisse animate ["fric_1",1.0];

player switchmove "";

_banque = getPos player nearestObject "banque_popoff";
_banque setVariable ["braco_en_cours",true];
while {_banque getVariable ["braco_en_cours",true];} do {
	_banque say "alarm_opfor";
	sleep 5;
};

player switchmove "";
