if !("tnt_popoff_2" in Magazines Player) exitWith {hint "Tu n'as pas d'explosifs sur toi!"};
_fourgon = getPos player nearestObject "sprinter_popoff_brinks";
player removeitem "tnt_popoff_2";
tnt_1 = "tnt_popoff" createVehicle position player;
tnt_1 attachTo [_fourgon, [1.05, 1.9, -0.2] ];
tnt_1 setdir 270;



tnt_3 = "ClaymoreDirectionalMine_Remote_Ammo_Scripted" createVehicle position player;
tnt_3 attachTo [_fourgon, [0.7, 1.9, -1.1] ];

for "_i" from 10 to 1 step -1 do {
    hint format["Explosion dans %1",_i];
    sleep 1;
};

_fourgon allowdamage false;
hint "";
_fric_1 = "sac_fric" createVehicle position player;
_fric_1 attachTo [_fourgon, [1.3, 1.8, -1.4] ];
_fric_1 addAction["Récupérer argent",Popoff_fnc_argentfourgon];
detach _fric_1;
_fourgon animate ["fb_1",1];
_fourgon animate ["fb_2",1];
_fourgon animate ["fb_3",1];
_fourgon animate ["fb_4",1];
_fourgon animate ["fb_5",1];
_fourgon animate ["fb_6",1];
_fourgon animate ["fb_7",1];
_fourgon animate ["fb_8",1];
_fourgon animate ["fb_9",1];
_fourgon animate ["fb_10",1];




tnt_3 setdamage 1;
deletevehicle tnt_1;
_fourgon allowdamage true;
_fourgon setdamage 0.8;
