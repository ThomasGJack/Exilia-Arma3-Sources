if (count attachedObjects player > 0) exitwith { hint "Tu portes déjà un objet !"; };
_malette = getPos player nearestObject "popoff_malette";


_malette attachTo [player, [-0.0, 0.01, -0.28],"lefthand" ];
_malette setdir 90;
player addaction ["Déposer malette",popoff_fnc_posermalette];
