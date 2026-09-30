
_malette = "popoff_malette" createVehicle position player;
_banque = nearestObject [player, "banque_popoff"];
_malette attachTo [_banque, [-3, 8.8, -1.47] ];
_malette addAction["Porter malette",Popoff_fnc_portermalette];
detach _malette;
