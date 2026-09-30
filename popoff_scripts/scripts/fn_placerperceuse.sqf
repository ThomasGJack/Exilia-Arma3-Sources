if !("perceuse_popoff_2" in Magazines Player) exitWith {hint "Tu n'as pas de perceuse sur toi!"};
player removeitem "perceuse_popoff_2";
_perceuse = "perceuse_popoff" createVehicle position player;
_banque = getPos player nearestObject "banque_popoff";
_perceuse attachTo [_banque, [-4.16, 8.0, -0.4] ];
