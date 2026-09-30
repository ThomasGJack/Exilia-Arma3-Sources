#include "basicdefines_A3.hpp"
class DefaultEventhandlers;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class CfgPatches
{
	class popoff_man_AddOn_Cars
	{
		units[]= {"popoff_man"};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={};
	};
};
class CfgFactionClasses
{
	class Exilia
	{
		displayName = "Exilia Vehicule exclusifs";
		priority = 8;
		side = 1;
		icon = "\exilia_benne\cars\data\textures\ch89.paa";
	};
};

class CfgVehicleClasses
{
	class EXilia_chantier
	{
		displayName = "chantier";
	};
};

class CfgEditorSubcategories
{
	class EXilia_chantier
	{
		displayName = "chantier";
	};
};
class CfgVehicles
{
	class Car;
	class Car_F: Car
	{
		class HitPoints /// we want to use hitpoints predefined for all cars
		{
			class HitLFWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRF2Wheel;
			class HitBody;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
		};
		class EventHandlers;



				class AnimationSources
				{
					class mouvement_1
					{
						source = "user";
						animPeriod = 8;
						initPhase = 1;
					};
					class mouvement_14
					{
						source = "user";
						animPeriod = 2;
						initPhase = 1;
					};
					class v1
					{
						source = "user";
						animPeriod = 2;
						initPhase = 1;
					};
				};
	};

	class popoff_man_base_F: Car_F
	{
		model 	= "\exilia_benne\exilia_benne";  /// simple path to model
		picture	= "\A3\soft_f_gamma\Hatchback_01\Data\UI\portrait_car_CA.paa";
		Icon	= "\A3\soft_f_gamma\Hatchback_01\Data\UI\map_car_CA.paa";
		selectionBrakeLights = "brzdove svetlo";
		selectionBackLights = "zadni svetlo";
		displayName = "chantier_popoff_man"; /// displayed in Editor
		editorSubcategory = "EXilia_chantier";
		vehicleClass = "EXilia_chantier";
		hiddenSelections[] = {"camo1","camo2","lb-left-takedown","lb-front-blue-1","lb-front-blue-2","lb-front-red-2","lb-front-red-1","lb-right-takedown","lb-right-front-corner","lb-right-back-corner","projo","lb-back-red-2","lb-back-red-3","lb-back-blue-3","lb-back-blue-2","lb-back-blue-1","lb-left-back-corner","lb-back-yellow-1","lb-back-yellow-2","lb-back-yellow-3","lb-back-yellow-4","lb-back-yellow-5","lb-back-yellow-6","lb-left-alley","lb-right-alley","lb-ion-blue","lb-ion-red","radar_patrol_c","radar_patrol_d","radar_patrol_u","radar_fast_c","radar_fast_d","radar_fast_u","radar_target_c","radar_target_d","radar_target_u"};
		terrainCoef 	= 2.0; 	/// different surface affects this car more, stick to tarmac
		turnCoef 		= 2.5; 	/// should match the wheel turn radius
		precision 		= 10; 	/// how much freedom has the AI for its internal waypoints - lower number means more precise but slower approach to way
		brakeDistance 	= 3.0; 	/// how many internal waypoints should the AI plan braking in advance
		acceleration 	= 15; 	/// how fast acceleration does the AI think the car has

		fireResistance 	= 5; 	/// lesser protection against fire than tanks
		armor 			= 120; 	/// just some protection against missiles, collisions and explosions
		cost			= 50000; /// how likely is the enemy going to target this vehicle
		weapons[]=
		{
			"TruckHorn3"
		};
		maximumLoad=300;
		transportMaxWeapons=2;
		transportMaxMagazines=30;
		transportMaxBackpacks=1;
		transportSoldier 		= 2; /// number of cargo except driver

		/// some values from parent class to show how to set them up
		wheelDamageRadiusCoef 	= 0.9; 			/// for precision tweaking of damaged wheel size
		wheelDestroyRadiusCoef 	= 0.4;			/// for tweaking of rims size to fit ground
		maxFordingDepth 		= 0.5;			/// how high water would damage the engine of the car
		waterResistance 		= 1;			/// if the depth of water is bigger than maxFordingDepth it starts to damage the engine after this time
		crewCrashProtection		= 0.25;			/// multiplier of damage to crew of the vehicle => low number means better protection
		driverLeftHandAnimName 	= "drivewheel"; /// according to what bone in model of car does hand move
		driverRightHandAnimName = "drivewheel";	/// beware, non-existent bones may cause game crashes (even if the bones are hidden during play)

		class AnimationSources;

		class TransportItems /// some first aid kits in trunk according to safety regulations
		{
			item_xx(FirstAidKit,4);
		};

		class Turrets{}; /// doesn't have any gunner nor commander
		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel	{armor=0.125; passThrough=0;}; /// it is easier to destroy wheels than hull of the vehicle
			class HitLF2Wheel: HitLF2Wheel	{armor=0.125; passThrough=0;};

			class HitRFWheel: HitRFWheel	{armor=0.125; passThrough=0;};
			class HitRF2Wheel: HitRF2Wheel 	{armor=0.125; passThrough=0;};

			class HitFuel 			{armor=0.50; material=-1; name="fueltank"; visual=""; passThrough=0.2;}; /// correct points for fuel tank, some of the damage is aFRLied to the whole
			class HitEngine 		{armor=0.50; material=-1; name="engine"; visual=""; passThrough=0.2;};
			class HitBody: HitBody 	{name = "body"; visual="camo1"; passThrough=1;}; /// all damage to the hull is aFRLied to total damage

			class HitGlass1: HitGlass1 {armor=0.25;}; /// it is pretty easy to puncture the glass but not so easy to remove it
			class HitGlass2: HitGlass2 {armor=0.25;};
			class HitGlass3: HitGlass3 {armor=0.25;};
			class HitGlass4: HitGlass4 {armor=0.25;};
		};

		driverAction 		= driver_high01; /// what action is going the driver take inside the vehicle. Non-existent action makes the vehicle inaccessible
		cargoAction[]=
		{
			"passenger_apc_generic01",
			"passenger_apc_generic01"

		};
		getInAction 		= GetInLow; 		/// how does driver look while getting in
		getOutAction 		= GetOutLow; 		/// and out
		cargoGetInAction[] 	= {"GetInLow"}; 	/// and the same for the rest, if the array has fewer members than the count of crew, the last one is used for the rest
		cargoGetOutAction[] = {"GetOutLow"}; 	/// that means all use the same in this case

		#include "sounds.hpp"	/// sounds are in a separate file to make this one simple
		#include "pip.hpp"		/// PiPs are in a separate file to make this one simple
		#include "physx.hpp"	/// PhysX settings are in a separate file to make this one simple

		class PlayerSteeringCoefficients /// steering sensitivity configuration
		{
			 turnIncreaseConst 	= 0.3; // basic sensitivity value, higher value = faster steering
			 turnIncreaseLinear = 1.0; // higher value means less sensitive steering in higher speed, more sensitive in lower speeds
			 turnIncreaseTime 	= 1.0; // higher value means smoother steering around the center and more sensitive when the actual steering angle gets closer to the max. steering angle

			 turnDecreaseConst 	= 5.0; // basic caster effect value, higher value = the faster the wheels align in the direction of travel
			 turnDecreaseLinear = 3.0; // higher value means faster wheel re-centering in higher speed, slower in lower speeds
			 turnDecreaseTime 	= 0.0; // higher value means stronger caster effect at the max. steering angle and weaker once the wheels are closer to centered position

			 maxTurnHundred 	= 0.9 ; // coefficient of the maximum turning angle @ 100km/h; limit goes linearly to the default max. turn. angle @ 0km/h
		};

		/// memory points where do tracks of the wheel appear
		// front left track, left offset
		memoryPointTrackFLL = "TrackFLL";
		// front left track, right offset
		memoryPointTrackFLR = "TrackFLR";
		// back left track, left offset
		memoryPointTrackBLL = "TrackBLL";
		// back left track, right offset
		memoryPointTrackBLR = "TrackBLR";
		// front right track, left offset
		memoryPointTrackFRL = "TrackFRL";
		// front right track, right offset
		memoryPointTrackFRR = "TrackFRR";
		// back right track, left offset
		memoryPointTrackBRL = "TrackBRL";
		// back right track, right offset
		memoryPointTrackBRR = "TrackBRR";

		class Damage /// damage changes material in specific places (visual in hitPoint)
		{
			tex[]={};
			mat[]=
			{
				"A3\data_f\glass_veh_int.rvmat", 		/// material mapped in model
				"A3\data_f\Glass_veh_damage.rvmat", 	/// changes to this one once damage of the part reaches 0.5
				"A3\data_f\Glass_veh_damage.rvmat",		/// changes to this one once damage of the part reaches 1

				"A3\data_f\glass_veh.rvmat",			/// another material
				"A3\data_f\Glass_veh_damage.rvmat",		/// changes into different ones
				"A3\data_f\Glass_veh_damage.rvmat"
			};
		};

		class Exhausts /// specific exhaust effects for the car
		{
			class Exhaust1 /// the car has two exhausts - each on one side
			{
				position 	= "exhaust";  		/// name of initial memory point
				direction 	= "exhaust_dir";	/// name of memory point for exhaust direction
				effect 		= "ExhaustsEffect";	/// what particle effect is it going to use
			};
		};

		class Reflectors	/// only front lights are considered to be reflectors to save CPU
		{
			class LightCarHeadL01 	/// lights on each side consist of two bulbs with different flares
			{
				color[] 		= {1900, 1800, 1700};		/// approximate colour of standard lights
				ambient[]		= {5, 5, 5};				/// nearly a white one
				position 		= "LightCarHeadL01";		/// memory point for start of the light and flare
				direction 		= "LightCarHeadL01_end";	/// memory point for the light direction
				hitpoint 		= "Light_L";				/// point(s) in hitpoint lod for the light (hitPoints are created by engine)
				selection 		= "Light_L";				/// selection for artificial glow around the bulb, not much used any more
				size 			= 1;						/// size of the light point seen from distance
				innerAngle 		= 100;						/// angle of full light
				outerAngle 		= 179;						/// angle of some light
				coneFadeCoef 	= 10;						/// attenuation of light between the above angles
				intensity 		= 1;						/// strength of the light
				useFlare 		= true;						/// does the light use flare?
				dayLight 		= false;					/// switching light off during day saves CPU a lot
				flareSize 		= 1.0;						/// how big is the flare

				class Attenuation
				{
					start 			= 1.0;
					constant 		= 0;
					linear 			= 0;
					quadratic 		= 0.25;
					hardLimitStart 	= 30;		/// it is good to have some limit otherwise the light would shine to infinite distance
					hardLimitEnd 	= 60;		/// this allows adding more lights into scene
				};
			};

			class LightCarHeadR01: LightCarHeadL01
			{
				position 	= "LightCarHeadR01";
				direction 	= "LightCarHeadR01_end";
				hitpoint 	= "Light_R";
				selection 	= "Light_R";
			};
			class PP1: LightCarHeadR01
			{
				position 	= "PP1";
				direction 	= "PP1_end";
				FlareSize 	= 1.5;
				intensity 		= 150;						/// strength of the light
				class Attenuation
				{
					start 			= 0;
					constant 		= 0;
					linear 			= 0;
					quadratic 		= 0.25;
					hardLimitStart 	= 25;		/// it is good to have some limit otherwise the light would shine to infinite distance
					hardLimitEnd 	= 150;		/// this allows adding more lights into scene
				};
			};
			class PP2: LightCarHeadR01
			{
				position 	= "PP2";
				direction 	= "PP2_end";
				FlareSize 	= 1.5;
				intensity 		= 150;						/// strength of the light
				class Attenuation
				{
					start 			= 0;
					constant 		= 0;
					linear 			= 0;
					quadratic 		= 0.25;
					hardLimitStart 	= 25;		/// it is good to have some limit otherwise the light would shine to infinite distance
					hardLimitEnd 	= 150;		/// this allows adding more lights into scene
				};
			};
			  class GyroLightL01 	/// lights on each side consist of two bulbs with different flares
			  {
			    color[] 		= {1000, 500, 100};		/// approximate colour of standard lights
			    ambient[]		= {5, 5, 5};				/// nearly a white one
			    position 		= "GyroLightL01";		/// memory point for start of the light and flare
			    direction 		= "GyroLightL01_end";	/// memory point for the light direction
			    hitpoint 		= "Light_L";				/// point(s) in hitpoint lod for the light (hitPoints are created by engine)
			    selection 		= "Light_L";				/// selection for artificial glow around the bulb, not much used any more
			    size 			= 1;						/// size of the light point seen from distance
			    innerAngle 		= 100;						/// angle of full light
			    outerAngle 		= 179;						/// angle of some light
			    coneFadeCoef 	= -1;						/// attenuation of light between the above angles
			    intensity 		= 1;						/// strength of the light
			    useFlare 		= true;						/// does the light use flare?
			    dayLight 		= false;					/// switching light off during day saves CPU a lot
			    flareSize 		= 1.0;						/// how big is the flare

			    class Attenuation
			    {
			      start 			= 1.0;
			      constant 		= 0;
			      linear 			= 0;
			      quadratic 		= 0.25;
			      hardLimitStart 	= 30;		/// it is good to have some limit otherwise the light would shine to infinite distance
			      hardLimitEnd 	= 60;		/// this allows adding more lights into scene
			    };
			  };

			  class GyroLightL02: GyroLightL01
			  {
			    position 	= "GyroLightL02";
			    direction 	= "GyroLightL02_end";
			  };

			  class GyroLightL03: GyroLightL01
			  {
			    position 	= "GyroLightL03";
			    direction 	= "GyroLightL03_end";
			  };

			  class GyroLightL04: GyroLightL01
			  {
			    position 	= "GyroLightL04";
			    direction 	= "GyroLightL04_end";
			  };

			  class GyroLightR01: GyroLightL01
			  {
			    position 	= "GyroLightR01";
			    direction 	= "GyroLightR01_end";
			  };

			  class GyroLightR02: GyroLightL01
			  {
			    position 	= "GyroLightR02";
			    direction 	= "GyroLightR02_end";
			  };

			  class GyroLightR03: GyroLightL01
			  {
			    position 	= "GyroLightR03";
			    direction 	= "GyroLightR03_end";
			  };

			  class GyroLightR04: GyroLightL01
			  {
			    position 	= "GyroLightR04";
			    direction 	= "GyroLightR04_end";
			  };
		};

		aggregateReflectors[] = {{"PP1"},{"PP2"},{"PP3"},{"PP4"},{"LightCarHeadL01"},{"GyroLightL01"},{"GyroLightL02"},{"GyroLightL03"},{"GyroLightL04"},{"GyroLightR01"},{"GyroLightR02"},{"GyroLightR03"},{"GyroLightR04"}, {"LightCarHeadR01"}}; /// aggregating reflectors helps the engine a lot
		/// it might be even good to aggregate all lights into one source as it is done for most of the cars


		// Must be kept as fail-safe in case of issue with the function

		// Definition of texture sources (skins), used for the VhC (Vehicle customization)
		// Also, because the Garage uses the VhC, it will make them available from the garage
		// [_textureSourceClass1, _probability1, _textureSourceClass2, _probability2, ...]
		// Default behavior of the VhC is to select one of these sources, with a weighted random

		class MFD /// Clocks on the car board
		{
			class ClockHUD
			{
				#include "cfgHUD.hpp"
			};
		};
		class UserActions
		{
			class ClignotantsGaucheAllumer
			{
				displayName="<t color='#fff000'>Clignotants Gauches ON(A)</t>";
				displayNameDefault="<t color='#fff000'>Allumer les clignotants gauches</t>";
				priority=3;
				radius=20;
				position="drivewheel";
				showWindow=0;
				onlyForPlayer=1;
				shortcut="LeanLeft";
				condition="(driver this == player) && (alive this) && (this animationPhase ""ClignotantsGaucheStart"" == 0) && isEngineOn this";
				statement="vehicle player animate [""ClignotantsGaucheStart"", 1];";
			};
			class ClignotantsGaucheEteindre
			{
				displayName="<t color='#fff000'>Clignotants Gauches OFF(A)</t>";
				displayNameDefault="<t color='#fff000'>Eteindre les clignotants gauches</t>";
				priority=3;
				radius=20;
				position="drivewheel";
				showWindow=0;
				onlyForPlayer=1;
				shortcut="LeanLeft";
				condition="(driver this == player) && (alive this) && (this animationPhase ""ClignotantsGaucheStart"" != 0)";
				statement="vehicle player animate [""ClignotantsGaucheStart"", 0];";
			};
			class ClignotantsDroitAllumer
			{
				displayName="<t color='#fff000'>Clignotants Droits ON(E)</t>";
				displayNameDefault="<t color='#fff000'>Allumer les clignotants droits</t>";
				priority=3;
				radius=20;
				position="drivewheel";
				showWindow=0;
				onlyForPlayer=1;
				shortcut="LeanRight";
				condition="(driver this == player) && (alive this) && (this animationPhase ""ClignotantsDroitStart"" == 0) && isEngineOn this";
				statement="vehicle player animate [""ClignotantsDroitStart"", 1];";
			};
			class ClignotantsDroitEteindre
			{
				displayName="<t color='#fff000'>Clignotants Droits OFF(E)</t>";
				displayNameDefault="<t color='#fff000'>Eteindre les clignotants droits</t>";
				priority=3;
				radius=20;
				position="drivewheel";
				showWindow=0;
				onlyForPlayer=1;
				shortcut="LeanRight";
				condition="(driver this == player) && (alive this) && (this animationPhase ""ClignotantsDroitStart"" != 0)";
				statement="vehicle player animate [""ClignotantsDroitStart"", 0];";
			};
			class PPf
			{
				displayName = "<t color='#0094ff'>Feux de route</t>";
				position = "drivewheel";
				radius = 2;
				onlyForPlayer = 0;
				condition = "player IN this && this animationPhase ""PP"" <= 0.5";
				statement = "this animate [""PP"",1]";
			};
			class PP
			{
				displayName = "<t color='#2d9900'>Feux de croisement</t>";
				position = "drivewheel";
				radius = 2;
				onlyForPlayer = 0;
				condition = "player IN this && this animationPhase ""PP"" > 0.5";
				statement = "this animate [""PP"",0]";
			};
		  class gyropharef
		  {
		    displayName = "<t color='#0000ff'>Gyrophares ON (M)</t>";
		    position = "drivewheel";
		    radius = 2;
		    onlyForPlayer = 0;
		    condition = "(driver this == player) && (alive this) && (this animationPhase ""lampg1"" <= 0.5)";
		    shortcut="buldTerrainLower5m";
		    showWindow=0;
		    statement = "this animate [""lampg1"",1]";
		  };
		  class gyrophare
		  {
		    displayName = "<t color='#0000ff'>Gyrophares OFF (M)</t>";
		    position = "drivewheel";
		    radius = 2;
		    onlyForPlayer = 0;
		    condition = "(driver this == player) && (alive this) && (this animationPhase ""lampg1"" > 0.5)";
		    shortcut="buldTerrainLower5m";
		    showWindow=0;
		    statement = "this animate [""lampg1"",0]";
		  };
		};
	};
	class popoff_man: popoff_man_base_F
	{
		scope = 2;
		side = 3;
		faction = "Exilia";
		crew = "C_man_1";
		displayName = "Camion benne Man";
	};
};
