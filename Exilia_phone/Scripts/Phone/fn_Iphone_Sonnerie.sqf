/*
*	1 - play sonnerie player
*	2 - stop sonnerie
* 	3 - remote sonnerie other
*
*	5 - play notif player
*	6 - stop notif player
* 	7 - remote notif other
*
*	9 - sound Local start
*	10 - sound local stop
*
*
*
*

*/



params [
	["_mode",1,[0]],
	["_player",player,[objNull]],
	["_soundname","ERROR",[""]],
	["_soundtime",-1,[0]]
];

_playerUID = getPlayerUID _player;

switch ( _mode) do { 

	case 1: {
		_PointSon = "Exilia_vide_Phone" createVehicle (getpos _player);
		_PointSon attachTo[_player,[0,0,2]];
		_soundNumber = profileNamespace getVariable ["Exilia_Phone_Sonnerie",0];
		_SoundArray = (getArray(configFile >> "CfgExiliaPhone" >> "Exilia_Phone_sonnerieList")) select _soundNumber;
		_SoundName = _SoundArray select 1;
		_SoundTime = _SoundArray select 2;
		_player setVariable ["SonnerieName",_SoundName,true];
		_player setVariable ["SonnerieObject",_PointSon,true];
		[3,_player] remoteExec ["Exilia_Phone_fnc_Iphone_Sonnerie",-2];
		[_SoundTime,_player] spawn {
			_time = time + (_this select 0);
			_player = _this select 1;
			while {true} do {
				waitUntil {((time >= _time) || !(_player getVariable ["Exilia_Request_Call",false]))};
				[2,_player] call Exilia_Phone_fnc_Iphone_Sonnerie;
				if !(_player getVariable ["Exilia_in_call",false]) then {
					if !(isnull (findDISPLAY DISPLAY)) then {
						[72] call Exilia_Phone_fnc_Iphone_Main;
					};
				};
				if (true) exitWith {};
				sleep 0.5;
			};
		};
	};
	case 2: {
		_point = _player getVariable ["SonnerieObject",objNull]; 
		if (isnull _point) exitWith {systemChat "2-2 ERROR";};
		detach _point;
		_point setdamage 1;
		deleteVehicle _point;
		_player setVariable ["SonnerieName",nil,true];
		_player setVariable ["SonnerieObject",nil,true];
	}; 

	case 3: {
		if (isNull _player) exitWith {systemChat "3-1 ERROR";};
		_SoundName = _player getVariable ["SonnerieName","ERROR"]; 
		_PointSon = _player getVariable ["SonnerieObject",objNull];

		if (isnull _PointSon) exitWith {systemChat "3-3 ERROR";};
		if (_SoundName isEqualTo "ERROR") exitWith {systemChat "3-4 ERROR";};
		_PointSon say3D _SoundName;
	}; 

	case 5: {
		_PointSon = "Exilia_vide_Phone" createVehicle (getpos _player);
		_PointSon attachTo[_player,[0,0,2]];
		_soundNumber = profileNamespace getVariable ["Exilia_Phone_Notifications",0];
		_SoundArray = (getArray(configFile >> "CfgExiliaPhone" >> "Exilia_Phone_NotifList")) select _soundNumber;
		_SoundName = _SoundArray select 1;
		_player setVariable ["NotifName",_SoundName,true];
		_player setVariable ["NotifObject",_PointSon,true];
		[7,_player] remoteExec ["Exilia_Phone_fnc_Iphone_Sonnerie",-2];
		[_player] spawn {
			_player = _this select 0;
			sleep 5;
			[6,_player] call Exilia_Phone_fnc_Iphone_Sonnerie;
		};
	};

	case 6: {
		_point = _player getVariable ["NotifObject",objNull]; 
		if (isnull _point) exitWith {systemChat "2-2 ERROR";};
		detach _point;
		_point setdamage 1;
		deleteVehicle _point;
		_player setVariable ["NotifName",nil,true];
		_player setVariable ["NotifObject",nil,true];
	};

	case 7: {
		if (isNull _player) exitWith {systemChat "3-1 ERROR";};
		_SoundName = _player getVariable ["NotifName","ERROR"]; 
		_PointSon = _player getVariable ["NotifObject",objNull];

		if (isnull _PointSon) exitWith {systemChat "3-3 ERROR";};
		if (_SoundName isEqualTo "ERROR") exitWith {systemChat "3-3 ERROR";};
		_PointSon say3D _SoundName;
	}; 


	case 9: {
		if (_soundname == "ERROR") exitWith {};
		if (_soundtime == -1) exitWith {};
		private ["_SoundArray"];
		_PointSon = "Exilia_vide_Phone" createVehicle (getpos _player);
		_PointSon attachTo[_player,[0,0,2]];
		
		_player setVariable ["SoundLocalName",_soundname,true];
		_player setVariable ["SoundLocalObject",_PointSon,true];
		_PointSon say3D _soundname;
		if ((_soundtime == 0) || (_soundtime == 60)) then {
			[_player,_soundtime] spawn {
				_player = _this select 0;
				_soundTime = _this select 1;
				_newtime = time + _soundTime + 5;
				waitUntil {(!(_player getVariable ["Exilia_Request_Call",false]) || (time >= _newtime))};
				[10,_player] call Exilia_Phone_fnc_Iphone_Sonnerie;
			};
		} else {
			[_soundtime,_player] spawn {
				_soundtime = _this select 0;
				_player = _this select 1;
				sleep _soundtime;
				[10,_player] call Exilia_Phone_fnc_Iphone_Sonnerie;
			};
		};
	};

	case 10: {
		_point = _player getVariable ["SoundLocalObject",objNull]; 
		if (isnull _point) exitWith {systemChat "2-2 ERROR";};
		detach _point;
		_point setdamage 1;
		deleteVehicle _point;
		_player setVariable ["SoundLocalName",nil,true];
		_player setVariable ["SoundLocalObject",nil,true];
	};
};