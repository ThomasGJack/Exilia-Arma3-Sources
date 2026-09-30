#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class Exilia_Immo
	{
		units[] = {"Pancarte_Immo"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_static_f"};
	};
};


class CfgVehicles
{
	class House_F;
	class Pancarte_Immo: House_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Pancarte immo";
		model = "\Exilia_Immo\Pancarte_immo.p3d";
		author = "Popoff1888,Théo,nirawin29";
		mapSize = 450;
		hiddenSelections[] = {"camo_1","camo_2","camo_3","camo_4","camo_5","camo_6","camo_7","camo_8"};
        hiddenSelectionsTextures[] = {"","","","","","","","",""};
	};

	class Camera_Domme: House_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Camera Domme";
		model = "\Exilia_Immo\camera_dome.p3d";
		author = "Popoff1888,nirawin29";
		mapSize = 450;
	};
};
