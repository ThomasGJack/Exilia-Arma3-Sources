hint "prochainement";
_banque = nearestObject [player, "banque_popoff"];

player switchmove "Acts_HeliCargo_loop";
player attachTo [_banque, [-15.15, -12.3, 0.85] ];
player setdir 90;
sleep 18;
_banque animate ["crotte_1",1];
player switchmove "";
player attachTo [_banque, [-14.9, -12.3, 0.85] ];
detach player;
