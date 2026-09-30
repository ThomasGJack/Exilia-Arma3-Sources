enum {
	   DESTRUCTENGINE = 2 ,
	   DESTRUCTDEFAULT = 6 ,
	   DESTUCTWRECK = 7 ,
	   DESTRUCTTREE = 3 ,
	   DESTRUCTTENT = 4 ,
	   STABILIZEDINAXISX = 1 ,
	   STABILIZEDINAXESXYZ = 4 ,
	   STABILIZEDINAXISY = 2 ,
	   STABILIZEDINAXESBOTH = 3 ,
	   DESTRUCTNO = 0 ,
	   STABILIZEDINAXESNONE = 0 ,
	   DESTRUCTMAN = 5 ,
	   DESTRUCTBUILDING=1 ,
};

class CfgPatches
{
			class Item_popoff
			{
						units[] = {"objets8"};
						weapons[] = {};
						requiredVersion  = 1.0;
			};
};
class CfgVehicleClasses
{
			class ModPopoff
			{
						displayName = "ModPopoff";
			};
};
class CfgVehicles
{
			class All {};
			class Static: All {};
			class Building: Static {};
			class exilia_tarmak_noir_1: Building
			{
						model = "\popoff_Farm_mapping\3d\exilia_tarmak_noir_1";
						scope = 2;
						displayName = "exilia_tarmak_noir_1";
						vehicleclass = "ModPopoff";
			};
			class exilia_tarmak_noir_2: Building
			{
						model = "\popoff_Farm_mapping\3d\exilia_tarmak_noir_2";
						scope = 2;
						displayName = "exilia_tarmak_noir_2";
						vehicleclass = "ModPopoff";
			};
			class exilia_tarmak_noir_3: Building
			{
						model = "\popoff_Farm_mapping\3d\exilia_tarmak_noir_3";
						scope = 2;
						displayName = "exilia_tarmak_noir_3";
						vehicleclass = "ModPopoff";
			};
			class exilia_tarmak_cailou_1: Building
			{
			      model = "\popoff_Farm_mapping\3d\exilia_tarmak_cailou_1";
			      scope = 2;
			      displayName = "exilia_tarmak_cailou_1";
			      vehicleclass = "ModPopoff";
			};
			class exilia_tarmak_cailou_2: Building
			{
			      model = "\popoff_Farm_mapping\3d\exilia_tarmak_cailou_2";
			      scope = 2;
			      displayName = "exilia_tarmak_cailou_2";
			      vehicleclass = "ModPopoff";
			};
			class exilia_tarmak_cailou_3: Building
			{
			      model = "\popoff_Farm_mapping\3d\exilia_tarmak_cailou_3";
			      scope = 2;
			      displayName = "exilia_tarmak_cailou_3";
			      vehicleclass = "ModPopoff";
			};
			class exilia_tarmak_solchateau_1: Building
			{
			      model = "\popoff_Farm_mapping\3d\exilia_tarmak_solchateau_1";
			      scope = 2;
			      displayName = "exilia_tarmak_solchateau_1";
			      vehicleclass = "ModPopoff";
			};
			class exilia_tarmak_solchateau_2: Building
			{
			      model = "\popoff_Farm_mapping\3d\exilia_tarmak_solchateau_2";
			      scope = 2;
			      displayName = "exilia_tarmak_solchateau_2";
			      vehicleclass = "ModPopoff";
			};
			class exilia_tarmak_solchateau_3: Building
			{
			      model = "\popoff_Farm_mapping\3d\exilia_tarmak_solchateau_3";
			      scope = 2;
			      displayName = "exilia_tarmak_solchateau_3";
			      vehicleclass = "ModPopoff";
			};
			class exilia_tarmak_herbe_1: Building
			{
			      model = "\popoff_Farm_mapping\3d\exilia_tarmak_herbe_1";
			      scope = 2;
			      displayName = "exilia_tarmak_herbe_1";
			      vehicleclass = "ModPopoff";
			};
			class exilia_tarmak_herbe_2: Building
			{
			      model = "\popoff_Farm_mapping\3d\exilia_tarmak_herbe_2";
			      scope = 2;
			      displayName = "exilia_tarmak_herbe_2";
			      vehicleclass = "ModPopoff";
			};
			class exilia_tarmak_herbe_3: Building
			{
			      model = "\popoff_Farm_mapping\3d\exilia_tarmak_herbe_3";
			      scope = 2;
			      displayName = "exilia_tarmak_herbe_3";
			      vehicleclass = "ModPopoff";
			};
			class exilia_tarmak_pelouse_1: Building
			{
			      model = "\popoff_Farm_mapping\3d\exilia_tarmak_pelouse_1";
			      scope = 2;
			      displayName = "exilia_tarmak_pelouse_1";
			      vehicleclass = "ModPopoff";
			};
			class exilia_tarmak_pelouse_2: Building
			{
			      model = "\popoff_Farm_mapping\3d\exilia_tarmak_pelouse_2";
			      scope = 2;
			      displayName = "exilia_tarmak_pelouse_2";
			      vehicleclass = "ModPopoff";
			};
			class exilia_tarmak_pelouse_3: Building
			{
			      model = "\popoff_Farm_mapping\3d\exilia_tarmak_pelouse_3";
			      scope = 2;
			      displayName = "exilia_tarmak_pelouse_3";
			      vehicleclass = "ModPopoff";
			};
			class exilia_tarmak_sol_sable_pierre_1: Building
			{
			      model = "\popoff_Farm_mapping\3d\exilia_tarmak_sol_sable_pierre_1";
			      scope = 2;
			      displayName = "exilia_tarmak_sol_sable_pierre_1";
			      vehicleclass = "ModPopoff";
			};
			class exilia_tarmak_sol_sable_pierre_2: Building
			{
			      model = "\popoff_Farm_mapping\3d\exilia_tarmak_sol_sable_pierre_2";
			      scope = 2;
			      displayName = "exilia_tarmak_sol_sable_pierre_2";
			      vehicleclass = "ModPopoff";
			};
			class exilia_tarmak_sol_sable_pierre_3: Building
			{
			      model = "\popoff_Farm_mapping\3d\exilia_tarmak_sol_sable_pierre_3";
			      scope = 2;
			      displayName = "exilia_tarmak_sol_sable_pierre_3";
			      vehicleclass = "ModPopoff";
			};
};
