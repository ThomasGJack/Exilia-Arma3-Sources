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
			class popoff_fissure_route: Building
			{
						model = "\objets_simple_popoff\3d\popoff_fissure_route";
						scope = 2;
						displayName = "popoff_fissure_route";
						vehicleclass = "ModPopoff";
			};
			class sac_fric: Building
			{
						model = "\objets_simple_popoff\3d\sac_fric";
						scope = 2;
						displayName = "sac_fric";
						vehicleclass = "ModPopoff";
			};
			class popoff_portique: Building
			{
						model = "\objets_simple_popoff\3d\popoff_portique";
						scope = 2;
						displayName = "popoff_portique";
						vehicleclass = "ModPopoff";
			};
			class voiturebloc: Building
			{
						model = "\objets_simple_popoff\3d\voiturebloc";
						scope = 2;
						displayName = "voiturebloc";
						vehicleclass = "ModPopoff";
			};
			class fondation_1: Building
			{
						model = "\objets_simple_popoff\3d\fondation_1";
						scope = 2;
						displayName = "fondation_1";
						vehicleclass = "ModPopoff";
			};
};
