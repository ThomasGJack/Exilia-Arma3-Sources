disableSerialization;
createDialog "Popoff_ATM_Dialog";
waitUntil {!isNull (findDisplay 9999);};
params [
	["_target",objNull,[objNull]]
];
CW_Atm = _target;

_atm = CW_Atm;
_atmCashValue = _atm getVariable ["cash_disponible",-1];
if (_atmCashValue < 0) then {
	_atmCashValue = (random [10000, 100000, 500000]);
	_atm setVariable ["cash_disponible",_atmCashValue,true];
};

[] call popoff_fnc_atmMenuUpdate;