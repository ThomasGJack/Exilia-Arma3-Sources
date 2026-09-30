
_atm = cursortarget;
money = _atm getVariable ["cash_disponible",-1];
if (money < 0) then {
	money = (random [10000, 100000, 500000]);
	_atm setVariable ["cash_disponible",money,true];
};

hint format["Il y a actuellement %1 € dans le coffre de la cible !",money call popoff_fnc_numberText];
sleep 5;
hint "";