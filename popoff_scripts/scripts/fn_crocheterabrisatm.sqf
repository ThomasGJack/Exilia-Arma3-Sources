if !("crochet_popoff" in Magazines Player) exitWith {hint "Tu n'as pas de crochets sur toi!"};
_abrisatm = (getPos player) nearestObject "abris_atm";

for "_i" from 0 to 5 do {
	player switchmove "vehicle_passenger_stand_1_Aim_Pistol_FromBinoc";
	sleep 2;
};

player switchmove "";
_abrisatm animate ["porte_1",0];
