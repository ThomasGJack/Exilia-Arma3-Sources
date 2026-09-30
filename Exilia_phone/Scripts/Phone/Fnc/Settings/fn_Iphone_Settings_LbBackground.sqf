#include "..\..\Defines.hpp"
systemChat str(_this);

switch (_this select 0) do { 
	case 1: {
		if ((_this select 1) == -1) exitWith {};
		profileNamespace setVariable ["Exilia_Phone_BG",(_this select 1)];
	}; 
	case 2: {
		if ((_this select 1) == -1) exitWith {};
		profileNamespace setVariable ["Exilia_Phone_Sonnerie",(_this select 1)];
	}; 
	case 3: {
		if ((_this select 1) == -1) exitWith {};
		profileNamespace setVariable ["Exilia_Phone_Notifications",(_this select 1)];
	}; 
};