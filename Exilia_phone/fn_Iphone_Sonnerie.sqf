systemChat "0-1";
params [
	["_mode",1,[0]],
	["_player",objNull,[objNull]]
];

_playerUID = getPlayerUID _player;
systemChat "0-2";
systemChat str(_mode);
systemChat str(_player);
systemChat _playerUID;

switch ( _mode) do { 

	case 1: {
		systemChat "1-1";
		_PointSon = "Exilia_vide_Phone" createVehicle (getpos player);
		_PointSon attachTo[player,[0,0,0.5],"chest"];
		_SoundName = "Nokia3310";
		systemChat "1-2";
		player setVariable ["SonnerieName",_SoundName,true];
		player setVariable ["SonnerieObject",_PointSon,true];
		systemChat "1-3";
		_PointSon say3D _SoundName;
		systemChat "1-4";
		[3,player] remoteExecCall ["Phone_Iphone_fnc_Iphone_sonnerie",(call compile format["-%1",clientOwner])];
		systemChat "1-5";
	}; 

	case 2: {
		systemChat "2-1";
		_point = player getVariable ["SonnerieObject",objNull]; 
		systemChat "2-2";
		is (isnull _point) exitWith {systemChat "2-2 ERROR";};
		detach _point;
		_point setdamage 1;
		deleteVehicle _point;
		systemChat "2-3";
		player setVariable ["SonnerieName",nil,true];
		player setVariable ["SonnerieObject",nil,true];
		systemChat "2-4";
	}; 

	case 3: {
		systemChat "3-1";
		if (isNull _player) exitWith {systemChat "3-1 ERROR";};
		systemChat "3-2";
		_PointSon = _player getVariable ["SonnerieName",objNull]; 
		_SoundName = _player getVariable ["SonnerieObject","ERROR"];
		systemChat "3-3";
		if (isnull _PointSon) exitWith {systemChat "3-3 ERROR";};
		systemChat "3-4";
		if (_SoundName isEqualTo "ERROR") exitWith {systemChat "3-3 ERROR";};
		systemChat "3-4";
		_PointSon say3D _SoundName;
		systemChat "3-5";
	}; 
};