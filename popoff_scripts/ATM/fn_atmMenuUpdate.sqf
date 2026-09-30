disableSerialization;
waitUntil {!isNull (findDisplay 9999);};
_ATM_HS = CW_Atm getVariable ["Atm_HS",false];
if (_ATM_HS) exitWith {
	ctrlSetText [1610,"Hors Service !"];
	((findDisplay 9999) displayCtrl 1610) ctrlSetTextColor [1, 0, 0, 1];
	ctrlShow[1600,false];
	ctrlShow[1601,false];
	ctrlShow[1602,false];
	ctrlShow[1603,false];
	ctrlShow[1604,false];
	ctrlShow[1605,false];
	ctrlShow[1606,false];
	ctrlShow[1607,false];
	ctrlShow[1608,false];
	ctrlShow[1609,false];
};

_atmbankdispotest = format ["%1$ sur votre compte",([exilia_atmbank] call popoff_fnc_numberText)];
ctrlSetText [1610,_atmbankdispotest];

if (exilia_atmbank <= 0) then {
	((findDisplay 9999) displayCtrl 1610) ctrlSetTextColor [1, 0, 0, 1];
} else {
	((findDisplay 9999) displayCtrl 1610) ctrlSetTextColor [0, 1, 0, 1];
};

