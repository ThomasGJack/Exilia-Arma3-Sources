#include "BIS_AddonInfo.hpp"
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
			class digicode
			{
						displayName = "digicode";
			};
};
class CfgVehicles
{
			class All {};
			class Static: All {};
			class Building: Static {};
			class digicode: Building
			{
						model = "\digicode\digicode";
						scope = 2;
						displayName = "digicode";
						class AnimationSources
						{

						};
						hiddenSelections[] =
						{
						        "Camo_1"
						};
						hiddenSelectionsTextures[] =
						{
							"\digicode\texture\digicode.paa"
						};
			};
			class digicode2: Building
			{
						model = "\digicode\digicode2";
						scope = 2;
						displayName = "digicode2";
						vehicleclass = "digicode";
			};
			class digicode3: Building
			{
						model = "\digicode\digicode3";
						scope = 2;
						displayName = "digicode3";
						vehicleclass = "digicode";
			};
			class digicode4: Building
			{
						model = "\digicode\digicode4";
						scope = 2;
						displayName = "digicode4";
						vehicleclass = "digicode";
			};
			class obstruction_visible: Building
			{
						model = "\digicode\obstruction_visible";
						scope = 2;
						displayName = "obstruction_visible";
						vehicleclass = "digicode";
			};
			class obstruction_invisible: Building
			{
						model = "\digicode\obstruction_invisible";
						scope = 2;
						displayName = "obstruction_invisible";
						vehicleclass = "digicode";
			};
};
