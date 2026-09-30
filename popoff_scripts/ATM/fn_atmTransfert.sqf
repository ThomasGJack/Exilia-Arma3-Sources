/*
*	Name: AtmTransfert
*   Author: Alex Popoff
*	Description: ****
*
*
*			PARAMETRES:
*
*			0 = _mode
*				0 = retrait d'argent dans l'atm
*				1 = depot d'argent dans l'atm
*
*
*/

private ["_display","_atm","_atmCashValue","_atmCashRestant"];
params [
	["_mode",0,[0]],
	["_value",0,[0]]
];

_atm = CW_Atm;
_atmCashValue = _atm getVariable ["cash_disponible",-1];
if (_atmCashValue < 0) then {
	_atmCashValue = (random [10000, 100000, 500000]);
	_atm setVariable ["cash_disponible",_atmCashValue,true];
};

_display = ((findDisplay 9999) displayCtrl 1610);

if ((player getVariable ["antispam",0]) > 0) exitWith {
	_display ctrlSetTextColor [1, 0, 0, 1];
	_message = "Opération en cours...";
	ctrlSetText [1610,_message];
	[] spawn {
		sleep 1;
		[] call popoff_fnc_atmMenuUpdate;
	};
};
player setVariable ["antispam", 1,true];

switch (_mode) do
{
	case 0:
	{
		if(exilia_atmbank < _value) exitWith {
			_display ctrlSetTextColor [1, 0, 0, 1];
			_message = "Vous n'avez pas assez d'argent sur votre compte en banque !";
			_display ctrlSetText _message;
		};
		if ((_atmCashValue < (0 + _value))) exitWith {
			_display ctrlSetTextColor [1, 0, 0, 1];
			_message = "Ce montant n'est pas disponible !";
			_display ctrlSetText _message;
		};
		_atmCashRestant = _atmCashValue - _value;
		_atm setVariable ["cash_disponible",_atmCashRestant,true];
		[1,0,_value,"Transfert ATM"] call exilia_fnc_money;
		[0,1,_value,"Transfert ATM"] call exilia_fnc_money;
		hint format ["Vous venez de retirer %1$",_value];
		[] call popoff_fnc_atmMenuUpdate;
	};

	case 1:
	{
		if(exilia_Cash < _value) exitWith {
			_display ctrlSetTextColor [1, 0, 0, 1];
			_message = "Vous n'avez pas assez de liquide sur vous";
			_display ctrlSetText _message;
		};
		if ((_atmCashValue > (1000000 - _value))) exitWith {
			_display ctrlSetTextColor [1, 0, 0, 1];
			_message = "L'ATM est plein, va à la banque ou attends le passage des convoyeurs pour déposer plus de cash !";
			_display ctrlSetText _message;
		};
		_atmCashRestant = _atmCashValue + _value;
		_atm setVariable ["cash_disponible",_atmCashRestant,true];
		[0,0,_value,"Transfert ATM"] call exilia_fnc_money;
		[1,1,_value,"Transfert ATM"] call exilia_fnc_money;
		hint format ["Vous venez de déposer %1$",_value];
		[] call popoff_fnc_atmMenuUpdate;
	};

	default {
		_display ctrlSetTextColor [1, 0, 0, 1];
		_message = "Une erreur est survenue veuillez contacter la banque !";
		_display ctrlSetText _message;
	};
};

[] spawn {
	sleep 1;
	player setVariable ["antispam", 0,true];
};

