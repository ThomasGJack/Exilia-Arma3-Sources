#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class Exilia_objects
	{
		requiredAddons[]={"Exilia_Data"};
		requiredVersion=0.1;
		units[]={"Exilia_Parking","Exilia_Vignes"};
		weapons[]={};
	};
};

class CfgVehicles
{

	class Ruins_F;
	class House;
	class House_F: House{};

	class Exilia_Parking: House_F
	{
		scope=2;
		editorCategory="Exilia_Objects";
		editorSubcategory="Exilia_Ville";
		displayName="Place de parking";
		model="\Exilia_objects\parking.p3d";
		vehicleClass="Structures";
		mapSize=24;
		cost=100;
		armor=400000;
	};
	
	class Exilia_Parking_Boat: Exilia_Parking
	{
		scope=2;
		displayName="Place de parking pour bateaux";
	};
	
	class Exilia_Vignes: House_F
	{
		scope=2;
		editorCategory="Exilia_Objects";
		editorSubcategory="Exilia_Bush";
		displayName="Vignes";
		model="\a3\vegetation_f_argo\bushes\b_vitis_vinifera_f.p3d";
		vehicleClass="Structures";
		mapSize=24;
		cost=100;
		armor=40;
	};
};