
params [
	["_player",objNull,[objNull]],
	["_data","",[""]],
	["_isanonyme",false,[false]]
];

if (_data == (call compile Exilia_Num)) then {
	[23,1,[player,(call compile Exilia_Num),Exilia_numContact,_isanonyme]] remoteExec ["Exilia_Phone_Fnc_Iphone_Main",_player];
};	