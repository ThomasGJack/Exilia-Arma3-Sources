if !("crochet_popoff" in Magazines Player) exitWith {hint "Tu n'as pas de crochets sur toi!"};
_banque = getPos player nearestObject "banque_popoff";
banque_popoff_1 = _banque;

for "_i" from 0 to 5 do {
	player switchmove "vehicle_passenger_stand_1_Aim_Pistol_FromBinoc";
	sleep 2;
};

player switchmove "";
_banque animate ["porte_1",0];
_banque setVariable ["braco_en_cours",true];
while {banque_popoff_1 getVariable ["braco_en_cours",true];} do {
	banque_popoff_1 say "alarm_opfor";
	sleep 5;
};
