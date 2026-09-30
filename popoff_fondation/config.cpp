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
			class test
			{
						units[] = {"objets8"};
						weapons[] = {};
						requiredVersion  = 1.0;
			};
};
class CfgVehicleClasses
{
			class tuto
			{
						displayName = "tuto";
			};
};
class CfgVehicles
{
			class All {};
			class Static: All {};
			class Building: Static {};
			class fondation_1: Building
			{
						model = "\popoff_fondation\fondation_1";
						scope = 2;
						displayName = "Fondation_1";
						vehicleclass = "tuto";
			};
};
