_fracturer_malette = getPos player nearestObject "popoff_malette";

if (95 > random 100) then {
	_fracturer_malette = getPos player nearestObject "popoff_malette";
	_grenade = "SmokeShellPurple" createVehicle position _fracturer_malette;
	_grenade attachTo [_fracturer_malette, [0, 0, 0] ];
	sleep 10;
	
	deletevehicle _grenade;
	sleep 2;
	deletevehicle _fracturer_malette;
	hint "";
} else {
	[1,0,10000,"fracture malette convoyeur"] call exilia_fnc_money;
	deletevehicle _grenade;
	sleep 2;
	deletevehicle _fracturer_malette;
	hint "";
};
