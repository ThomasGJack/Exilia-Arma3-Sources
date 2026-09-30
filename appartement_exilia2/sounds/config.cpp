////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.52
//'now' is Sat Jan 13 04:49:56 2018 : 'file' last modified on Sat Jan 13 04:49:56 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_
#include "basicdefines_A3.hpp"
#include "config_macros_glass.hpp"

//Class OPTRE_Frigate : config.bin{
class CfgPatches
{
	class Popoff_creation
	{
		units[] = {"appartement_exilia","appartement_exilia_annexe"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_static_f"};
	};
};

// already defines somewhere else

class CfgVehicles
{
	class House_F;
	class Popoff_Objet: House_F
	{
		scope = 0;
		scopeCurator = 0;
		armor = 999999;
		armorStructural = 999;
		// vehicleClass = "MACROSS_UNSC_Object_class";
		model = "\A3\Weapons_F\empty.p3d";
		author = "Popoff";
		class DestructionEffects{};
	};
	class appartement_exilia: Popoff_Objet
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Appartements";
		model = "\appartement_exilia\appartement_exilia.p3d";
		aggregateReflectors[] =
		{
			{"Light_1","Light_2","Light_3","Light_4"}
		};
		author = "Popoff";
		// icon = "\WHships\Imperium\data\apocalypse_icon_ca.paa";
		// picture = "\WHships\Imperium\data\apocalypse_icon_ca.paa";
		// editorPreview = "\WHships\Imperium\data\apocalypse_preview_ca.paa";
		mapSize = 450;
		editorCategory = "Popoff_creation";



		class Reflectors
		{
			class Light_1
			{
				color[]				= {1000,1000,1000};
				ambient[]			= {2.5,4,6};
				intensity			= 2;
				size				= 1;					/// size of the light point seen from distance
				innerAngle			= 100;					/// angle of full light
				outerAngle			= 165;					/// angle of some light
				coneFadeCoef		= 4;					/// attenuation of light between the above angles

				position			= "Light_1_pos";		/// memory point for start of the light and flare
				direction			= "Light_1_dir";		/// memory point for the light direction
				hitpoint			= "Light_1_hitpoint";	/// point(s) in hitpoint lod for the light (hitPoints are created by engine)
				selection			= "Light_1_hide";		/// selection for artificial glow around the bulb, not much used any more

				useFlare			= true;
				flareSize			= 0.2;
				flareMaxDistance	= 130;

				class Attenuation
				{
					start			= 0;
					constant		= 0;
					linear			= 0;
					quadratic		= 0.3;

					hardLimitStart	= 50;
					hardLimitEnd	= 65;
				};
			};
			class Light_2: Light_1
			{
				position			= "Light_2_pos";
				direction			= "Light_2_dir";
				hitpoint			= "Light_2_hitpoint";
				selection			= "Light_2_hide";
			};
			class Light_3: Light_1
			{
				position			= "Light_3_pos";
				direction			= "Light_3_dir";
				hitpoint			= "Light_3_hitpoint";
				selection			= "Light_3_hide";
			};
			class Light_4: Light_1
			{
				position			= "Light_4_pos";
				direction			= "Light_4_dir";
				hitpoint			= "Light_4_hitpoint";
				selection			= "Light_4_hide";
			};
		};

		class UserActions
		{
			class porte_1
			{
			  displayName ="Ouvrir";
			  position = "porte_1_trigger";
			  radius = 1.3;
			  onlyForPlayer = 0;
				condition="(true) && this animationPhase ""porte_1"" == 1";
			  statement = "this animateSource [""porte_1"",0]";
			};
			class cporte_1: porte_1
			{
			  displayName ="Fermer";
			  condition = "this animationSourcePhase ""porte_1"" == 0";
			  statement = "this animateSource [""porte_1"",1]";
			};
			class porte_2
			{
			  displayName ="Ouvrir";
			  position = "porte_2_trigger";
			  radius = 1.3;
			  onlyForPlayer = 0;
				condition="(true) && this animationPhase ""porte_2"" == 1";
			  statement = "this animateSource [""porte_2"",0]";
			};
			class cporte_2: porte_2
			{
			  displayName ="Fermer";
			  condition = "this animationSourcePhase ""porte_2"" == 0";
			  statement = "this animateSource [""porte_2"",1]";
			};
			class porte_3
			{
			  displayName ="Ouvrir";
			  position = "porte_3_trigger";
			  radius = 1.3;
			  onlyForPlayer = 0;
				condition="(true) && this animationPhase ""porte_3"" == 1";
			  statement = "this animateSource [""porte_3"",0]";
			};
			class cporte_3: porte_3
			{
			  displayName ="Fermer";
			  condition = "this animationSourcePhase ""porte_3"" == 0";
			  statement = "this animateSource [""porte_3"",1]";
			};
			class porte_4
			{
			  displayName ="Ouvrir";
			  position = "porte_4_trigger";
			  radius = 1.3;
			  onlyForPlayer = 0;
				condition="(true) && this animationPhase ""porte_4"" == 1";
			  statement = "this animateSource [""porte_4"",0]";
			};
			class cporte_4: porte_4
			{
			  displayName ="Fermer";
			  condition = "this animationSourcePhase ""porte_4"" == 0";
			  statement = "this animateSource [""porte_4"",1]";
			};
			class entree1
			{
			  displayName ="Ouvrir";
			  position = "entree1_trigger";
			  radius = 1.3;
			  onlyForPlayer = 0;
				condition="(true) && this animationPhase ""entree1"" == 1";
			  statement = "this animateSource [""entree1"",0]";
			};
			class centree1: entree1
			{
			  displayName ="Fermer";
			  condition = "this animationSourcePhase ""entree1"" == 0";
			  statement = "this animateSource [""entree1"",1]";
			};
			class fenetre1
			{
			  displayName ="Ouvrir fenetre";
			  position = "fenetre1_trigger";
			  radius = 1.3;
			  onlyForPlayer = 0;
				condition="(true) && this animationPhase ""fenetre1"" == 1";
			  statement = "this animateSource [""fenetre1"",0]";
			};
			class cfenetre1: fenetre1
			{
			  displayName ="Fermer fenetre";
			  condition = "this animationSourcePhase ""fenetre1"" == 0";
			  statement = "this animateSource [""fenetre1"",1]";
			};
			class fenetre2
			{
			  displayName ="Ouvrir fenetre";
			  position = "fenetre2_trigger";
			  radius = 1.3;
			  onlyForPlayer = 0;
			  condition="(true) && this animationPhase ""fenetre2"" == 1";
			  statement = "this animateSource [""fenetre2"",0]";
			};
			class cfenetre2: fenetre2
			{
			  displayName ="Fermer fenetre";
			  condition = "this animationSourcePhase ""fenetre2"" == 0";
			  statement = "this animateSource [""fenetre2"",1]";
			};
			class fenetre3
			{
			  displayName ="Ouvrir fenetre";
			  position = "fenetre3_trigger";
			  radius = 1.3;
			  onlyForPlayer = 0;
			  condition="(true) && this animationPhase ""fenetre3"" == 1";
			  statement = "this animateSource [""fenetre3"",0]";
			};
			class cfenetre3: fenetre3
			{
			  displayName ="Fermer fenetre";
			  condition = "this animationSourcePhase ""fenetre3"" == 0";
			  statement = "this animateSource [""fenetre3"",1]";
			};
			class fenetre4
			{
			  displayName ="Ouvrir fenetre";
			  position = "fenetre4_trigger";
			  radius = 1.3;
			  onlyForPlayer = 0;
			  condition="(true) && this animationPhase ""fenetre4"" == 1";
			  statement = "this animateSource [""fenetre4"",0]";
			};
			class cfenetre4: fenetre4
			{
			  displayName ="Fermer fenetre";
			  condition = "this animationSourcePhase ""fenetre4"" == 0";
			  statement = "this animateSource [""fenetre4"",1]";
			};
			class fenetre5
			{
			  displayName ="Ouvrir fenetre";
			  position = "fenetre5_trigger";
			  radius = 1.3;
			  onlyForPlayer = 0;
			  condition="(true) && this animationPhase ""fenetre5"" == 1";
			  statement = "this animateSource [""fenetre5"",0]";
			};
			class cfenetre5: fenetre5
			{
			  displayName ="Fermer fenetre";
			  condition = "this animationSourcePhase ""fenetre5"" == 0";
			  statement = "this animateSource [""fenetre5"",1]";
			};
			class fenetre6
			{
			  displayName ="Ouvrir fenetre";
			  position = "fenetre6_trigger";
			  radius = 1.3;
			  onlyForPlayer = 0;
			  condition="(true) && this animationPhase ""fenetre6"" == 1";
			  statement = "this animateSource [""fenetre6"",0]";
			};
			class cfenetre6: fenetre6
			{
			  displayName ="Fermer fenetre";
			  condition = "this animationSourcePhase ""fenetre6"" == 0";
			  statement = "this animateSource [""fenetre6"",1]";
			};
		};
		class DestructionEffects: DestructionEffects
		{
			class Ruin
			{
				simulation = ruin;
				type = \appartement_exilia\Test_House_01_ruins_F.p3d; // Path to model of ruin used when total damage of the house reaches 1
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
		class HitPoints // Entities representing destructible subparts of the house
		{
			class Hitzone_1_hitpoint
			{
				armor = 20;
				material = -1;
				name = Dam_1; // Name of selection in Hit-points lod in p3d
				visual = DamT_1; // Name of selection in resolution lods in p3d that will have it's textures and materials switched (according to "class Damage definitions") based on damage of this hitpoint
				passThrough = 1.0; // Coefficient for how much damage done to this hitpoints is also done to total damage of the house
				radius = 0.375; // Radius of spheres around each vertex of this hitpoint in Hit-points lod. These spheres represent the volume from which this hitpoint takes damage
				convexComponent = Dam_1;
				explosionShielding = 50; // Multiplier for damage taken from explosives
				minimalHit = 0.001; // Minimal damage that can be dealt to the hitpoint. Any lower damage is ignored

				class DestructionEffects //
				{
					class Dust
					{
						simulation = particles; // Visual effect
						type = HousePartDust; // Class of this particular effect, defined in CfgCloudlets
						position = Dam_1_effects; // Point of origin for this effect, defined in Memory lod in p3d
						intensity = 1;
						interval = 1;
						lifeTime = 0.01;
					};
					class Dust2: Dust
					{
						type = HousePartDustLong;
					};
					class Walls: Dust
					{
						type = HousePartWall;
					};
					class DamageAround
					{
						simulation = damageAround; // Effect dealing damage in a radius
						type = DamageAroundHousePart; // Class of this particular effect, defined in CfgDamageAround
						position = Dam_1_effects;
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
				};
			};
			class Hitzone_2_hitpoint: Hitzone_1_hitpoint
			{
				name = Dam_2;
				convexComponent = Dam_2;

				class DestructionEffects: DestructionEffects
				{
					class Dust: Dust
					{
						position = Dam_2_effects;
					};
					class Dust2: Dust2
					{
						position = Dam_2_effects;
					};
					class Walls: Walls
					{
						position = Dam_2_effects;
					};
					class DamageAround: DamageAround
					{
						position = Dam_2_effects;
					};
				};
			};

			// Hitpoint of each window, defined using macros from config_macros_glass.hpp to avoid a giant wall of text due to having 14 particle effects each.
			// In practice they are defined in the same manner as the hitpoints above. These follow Glass_#_hitpoint naming trend.
			// First parameter being number id, second being a value for armor parameter and third being a value for radius parameter.
			BIG_GLASS_HITPOINT(1,0.01,0.175)
			BIG_GLASS_HITPOINT(2,0.01,0.175)
			DOOR_GLASS_HITPOINT(3,0.01,0.175)
			DOOR_GLASS_HITPOINT(4,0.01,0.175)
			DOOR_GLASS_HITPOINT(5,0.01,0.175)
			NORMAL_GLASS_HITPOINT(6,0.01,0.175)
			NORMAL_GLASS_HITPOINT(7,0.01,0.175)
			NORMAL_GLASS_HITPOINT(8,0.01,0.175)
		};
		class Damage
		{
			// Texture pairs (below 0.5 health and 0.5+) for switching visuals (can also use generated)
			tex[] =
			{
				// Window textures
				"A3\Structures_F\Data\Windows\window_set_CA.paa",
				"A3\Structures_F\Data\Windows\destruct_half_window_set_CA.paa",

				// Grey color
				"#(argb,8,8,3)color(0.501961,0.501961,0.501961,1.0,co)",
				"#(argb,8,8,3)color(0.294118,0.294118,0.294118,1.0,co)",

				// Brown color
				"#(argb,8,8,3)color(0.501961,0.25098,0,1.0,co)",
				"#(argb,8,8,3)color(0.392157,0.196078,0,1.0,co)",

				// Yellow color
				"#(argb,8,8,3)color(1,1,0.501961,1.0,co)",
				"#(argb,8,8,3)color(0.513725,0.513725,0.203922,1.0,co)",

				// Light grey color
				"#(argb,8,8,3)color(0.752941,0.752941,0.752941,1.0,co)",
				"#(argb,8,8,3)color(0.478431,0.478431,0.478431,1.0,co)",

				// Red color
				"#(argb,8,8,3)color(1,0,0,1.0,co)",
				"#(argb,8,8,3)color(0.701961,0,0,1.0,co)"
			};

			// Unlike textures, materials are not in pairs but in triplets (health: 0 - 0.49, 0.5 - 0.99, 1)
			mat[] =
			{
				"A3\Structures_F\Data\Windows\window_set.rvmat",
				"A3\Structures_F\Data\Windows\destruct_half_window_set.rvmat",
				"A3\Structures_F\Data\Windows\destruct_full_window_set.rvmat"
			};
		};

		class AnimationSources
		{
			class porte_1
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
			};
			class porte_2
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
			};
			class porte_3
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
			};
			class porte_4
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
			};
			class fenetre1
			{
				source = "user";
				animPeriod = 2;
				initPhase = 1;
			};
			class fenetre2
			{
				source = "user";
				animPeriod = 2;
				initPhase = 1;
			};
			class fenetre3
			{
				source = "user";
				animPeriod = 2;
				initPhase = 1;
			};
			class fenetre4
			{
				source = "user";
				animPeriod = 2;
				initPhase = 1;
			};
			class fenetre5
			{
				source = "user";
				animPeriod = 2;
				initPhase = 1;
			};
			class fenetre6
			{
				source = "user";
				animPeriod = 2;
				initPhase = 1;
			};
			class entree1
			{
				source = "user";
				animPeriod = 2;
				initPhase = 1;
			};
			class entree2
			{
				source = "user";
				animPeriod = 2;
				initPhase = 1;
			};

			// Animation sources for windows
			class Glass_1_source
			{
				source = Hit; // "Hit" = value of this source is the health of an entity
				hitpoint = Glass_1_hitpoint; // Specifies health of what is the control value of this animation; "Glass_1_hitpoint" being the class defined in class Hitpoints
				raw = 1;
			};
			class Glass_2_source: Glass_1_source
			{
				hitpoint = Glass_2_hitpoint;
			};
			class Glass_3_source: Glass_1_source
			{
				hitpoint = Glass_3_hitpoint;
			};
			class Glass_4_source: Glass_1_source
			{
				hitpoint = Glass_4_hitpoint;
			};
			class Glass_5_source: Glass_1_source
			{
				hitpoint = Glass_5_hitpoint;
			};
			class Glass_6_source: Glass_1_source
			{
				hitpoint = Glass_6_hitpoint;
			};
			class Glass_7_source: Glass_1_source
			{
				hitpoint = Glass_7_hitpoint;
			};
			class Glass_8_source: Glass_1_source
			{
				hitpoint = Glass_8_hitpoint;
			};
		};
		class MarkerLights
		{
			class Light_1
			{
				color[]				= {30.0, 30.0, 30.0};		/// approximate colour of standard lights
				ambient[]			= {0.01, 0.0, 0.0};		/// nearly a white one
				intensity			= 3;					/// strength of the light
				name				= "Light_1_pos";		/// name of
				blinking = true;
				blinkingPattern[] = {0.1, 0.9};
				blinkingStartsOn = true;
				blinkingPatternGuarantee = true;

				useFlare			= true;					/// does the light use flare?
				flareSize			= 0.2;					/// how big is the flare
				flareMaxDistance	= 100;					/// how far can you see the flare

				activeLight			= true;					/// engine counts this one as an active light into limit of lights
				dayLight			= false;				/// it doesn't shine during the day
				drawLight			= false;				/// doesn't create a specific face for flare

				class Attenuation
				{
					start			= 0;
					constant		= 2;
					linear			= 10;
					quadratic		= 20;

					hardLimitStart	= 5;					/// it is good to have some limit otherwise the light would shine to infinite distance
					hardLimitEnd	= 6;					/// this allows adding more lights into scene
				};
			};
			  class Light_2
			  {
			    color[]				= {30.0, 30.0, 30.0};		/// approximate colour of standard lights
			    ambient[]			= {0.01, 0.0, 0.0};		/// nearly a white one
			    intensity			= 3;					/// strength of the light
			    name				= "Light_2_pos";		/// name of
			    blinking = true;
				blinkingPattern[] = {0.1, 0.9};
				blinkingStartsOn = true;
				blinkingPatternGuarantee = true;

			    useFlare			= true;					/// does the light use flare?
			    flareSize			= 0.2;					/// how big is the flare
			    flareMaxDistance	= 100;					/// how far can you see the flare

			    activeLight			= true;					/// engine counts this one as an active light into limit of lights
			    dayLight			= false;				/// it doesn't shine during the day
			    drawLight			= false;				/// doesn't create a specific face for flare

			    class Attenuation
			    {
			      start			= 0;
			      constant		= 2;
			      linear			= 10;
			      quadratic		= 20;

			      hardLimitStart	= 5;					/// it is good to have some limit otherwise the light would shine to infinite distance
			      hardLimitEnd	= 6;					/// this allows adding more lights into scene
			    };
			  };
				  class Light_3
				  {
				    color[]				= {30.0, 30.0, 30.0};		/// approximate colour of standard lights
				    ambient[]			= {0.01, 0.0, 0.0};		/// nearly a white one
				    intensity			= 3;					/// strength of the light
				    name				= "Light_3_pos";		/// name of
				    blinking = true;
					blinkingPattern[] = {0.1, 0.9};
					blinkingStartsOn = true;
					blinkingPatternGuarantee = true;

				    useFlare			= true;					/// does the light use flare?
				    flareSize			= 0.2;					/// how big is the flare
				    flareMaxDistance	= 100;					/// how far can you see the flare

				    activeLight			= true;					/// engine counts this one as an active light into limit of lights
				    dayLight			= false;				/// it doesn't shine during the day
				    drawLight			= false;				/// doesn't create a specific face for flare

				    class Attenuation
				    {
				      start			= 0;
				      constant		= 2;
				      linear			= 10;
				      quadratic		= 20;

				      hardLimitStart	= 5;					/// it is good to have some limit otherwise the light would shine to infinite distance
				      hardLimitEnd	= 6;					/// this allows adding more lights into scene
				    };
				  };
					  class Light_4
					  {
					    color[]				= {30.0, 30.0, 30.0};		/// approximate colour of standard lights
					    ambient[]			= {0.01, 0.0, 0.0};		/// nearly a white one
					    intensity			= 3;					/// strength of the light
					    name				= "Light_4_pos";		/// name of
					    blinking = true;
						blinkingPattern[] = {0.1, 0.9};
						blinkingStartsOn = true;
						blinkingPatternGuarantee = true;

					    useFlare			= true;					/// does the light use flare?
					    flareSize			= 0.2;					/// how big is the flare
					    flareMaxDistance	= 100;					/// how far can you see the flare

					    activeLight			= true;					/// engine counts this one as an active light into limit of lights
					    dayLight			= false;				/// it doesn't shine during the day
					    drawLight			= false;				/// doesn't create a specific face for flare

					    class Attenuation
					    {
					      start			= 0;
					      constant		= 2;
					      linear			= 10;
					      quadratic		= 20;

					      hardLimitStart	= 5;					/// it is good to have some limit otherwise the light would shine to infinite distance
					      hardLimitEnd	= 6;					/// this allows adding more lights into scene
					    };
					  };

	};
};


class compteur_box: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "compteur électrique";
	model = "\appartement_exilia\compteur_box.p3d";
	aggregateReflectors[] =
	{
		{}
	};
	author = "Popoff";
	// icon = "\WHships\Imperium\data\apocalypse_icon_ca.paa";
	// picture = "\WHships\Imperium\data\apocalypse_icon_ca.paa";
	// editorPreview = "\WHships\Imperium\data\apocalypse_preview_ca.paa";
	mapSize = 450;
	editorCategory = "Popoff_creation";




	class UserActions
	{
		class porte_1
		{
			displayName ="Ouvrir";
			position = "porte_1_trigger";
			radius = 1.3;
			onlyForPlayer = 0;
			condition="(true) && this animationPhase ""porte_1"" == 1";
			statement = "this animateSource [""porte_1"",0]";
		};
		class cporte_1: porte_1
		{
			displayName ="Fermer";
			condition = "this animationSourcePhase ""porte_1"" == 0";
			statement = "this animateSource [""porte_1"",1]";
		};
	};

	class AnimationSources
	{
		class porte_1
		{
			source = "user";
			animPeriod = 1;
			initPhase = 1;
		};
		class cache_1
		{
			source = "user";
			animPeriod = 1;
			initPhase = 1;
		};
	};
	class MarkerLights
	{
		class Light_1
		{
			color[]				= {30.0, 30.0, 30.0};		/// approximate colour of standard lights
			ambient[]			= {0.01, 0.0, 0.0};		/// nearly a white one
			intensity			= 3;					/// strength of the light
			name				= "Light_1_pos";		/// name of


			useFlare			= true;					/// does the light use flare?
			flareSize			= 0.2;					/// how big is the flare
			flareMaxDistance	= 100;					/// how far can you see the flare

			activeLight			= true;					/// engine counts this one as an active light into limit of lights
			dayLight			= false;				/// it doesn't shine during the day
			drawLight			= false;				/// doesn't create a specific face for flare

			class Attenuation
			{
				start			= 0;
				constant		= 2;
				linear			= 10;
				quadratic		= 20;

				hardLimitStart	= 5;					/// it is good to have some limit otherwise the light would shine to infinite distance
				hardLimitEnd	= 6;					/// this allows adding more lights into scene
			};
		};
			class Light_2
			{
				color[]				= {30.0, 30.0, 30.0};		/// approximate colour of standard lights
				ambient[]			= {0.01, 0.0, 0.0};		/// nearly a white one
				intensity			= 3;					/// strength of the light
				name				= "Light_2_pos";		/// name of


				useFlare			= true;					/// does the light use flare?
				flareSize			= 0.2;					/// how big is the flare
				flareMaxDistance	= 100;					/// how far can you see the flare

				activeLight			= true;					/// engine counts this one as an active light into limit of lights
				dayLight			= false;				/// it doesn't shine during the day
				drawLight			= false;				/// doesn't create a specific face for flare

				class Attenuation
				{
					start			= 0;
					constant		= 2;
					linear			= 10;
					quadratic		= 20;

					hardLimitStart	= 5;					/// it is good to have some limit otherwise the light would shine to infinite distance
					hardLimitEnd	= 6;					/// this allows adding more lights into scene
				};
			};
				class Light_3
				{
					color[]				= {30.0, 30.0, 30.0};		/// approximate colour of standard lights
					ambient[]			= {0.01, 0.0, 0.0};		/// nearly a white one
					intensity			= 3;					/// strength of the light
					name				= "Light_3_pos";		/// name of


					useFlare			= true;					/// does the light use flare?
					flareSize			= 0.2;					/// how big is the flare
					flareMaxDistance	= 100;					/// how far can you see the flare

					activeLight			= true;					/// engine counts this one as an active light into limit of lights
					dayLight			= false;				/// it doesn't shine during the day
					drawLight			= false;				/// doesn't create a specific face for flare

					class Attenuation
					{
						start			= 0;
						constant		= 2;
						linear			= 10;
						quadratic		= 20;

						hardLimitStart	= 5;					/// it is good to have some limit otherwise the light would shine to infinite distance
						hardLimitEnd	= 6;					/// this allows adding more lights into scene
					};
				};
					class Light_4
					{
						color[]				= {30.0, 30.0, 30.0};		/// approximate colour of standard lights
						ambient[]			= {0.01, 0.0, 0.0};		/// nearly a white one
						intensity			= 3;					/// strength of the light
						name				= "Light_4_pos";		/// name of


						useFlare			= true;					/// does the light use flare?
						flareSize			= 0.2;					/// how big is the flare
						flareMaxDistance	= 100;					/// how far can you see the flare

						activeLight			= true;					/// engine counts this one as an active light into limit of lights
						dayLight			= false;				/// it doesn't shine during the day
						drawLight			= false;				/// doesn't create a specific face for flare

						class Attenuation
						{
							start			= 0;
							constant		= 2;
							linear			= 10;
							quadratic		= 20;

							hardLimitStart	= 5;					/// it is good to have some limit otherwise the light would shine to infinite distance
							hardLimitEnd	= 6;					/// this allows adding more lights into scene
						};
					};

};
};




class appartement_rez: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "appartement_rez";
	model = "\appartement_exilia\appartement_rez.p3d";
	aggregateReflectors[] =
	{
		{"Light_1","Light_2","Light_3","Light_4"}
	};
	author = "Popoff";
	// icon = "\WHships\Imperium\data\apocalypse_icon_ca.paa";
	// picture = "\WHships\Imperium\data\apocalypse_icon_ca.paa";
	// editorPreview = "\WHships\Imperium\data\apocalypse_preview_ca.paa";
	mapSize = 450;
	editorCategory = "Popoff_creation";



	class Reflectors
	{
		class Light_1
		{
			color[]				= {1000,1000,1000};
			ambient[]			= {2.5,4,6};
			intensity			= 2;
			size				= 1;					/// size of the light point seen from distance
			innerAngle			= 100;					/// angle of full light
			outerAngle			= 165;					/// angle of some light
			coneFadeCoef		= 4;					/// attenuation of light between the above angles

			position			= "Light_1_pos";		/// memory point for start of the light and flare
			direction			= "Light_1_dir";		/// memory point for the light direction
			hitpoint			= "Light_1_hitpoint";	/// point(s) in hitpoint lod for the light (hitPoints are created by engine)
			selection			= "Light_1_hide";		/// selection for artificial glow around the bulb, not much used any more

			useFlare			= true;
			flareSize			= 0.2;
			flareMaxDistance	= 130;

			class Attenuation
			{
				start			= 0;
				constant		= 0;
				linear			= 0;
				quadratic		= 0.3;

				hardLimitStart	= 50;
				hardLimitEnd	= 65;
			};
		};
		class Light_2: Light_1
		{
			position			= "Light_2_pos";
			direction			= "Light_2_dir";
			hitpoint			= "Light_2_hitpoint";
			selection			= "Light_2_hide";
		};
		class Light_3: Light_1
		{
			position			= "Light_3_pos";
			direction			= "Light_3_dir";
			hitpoint			= "Light_3_hitpoint";
			selection			= "Light_3_hide";
		};
		class Light_4: Light_1
		{
			position			= "Light_4_pos";
			direction			= "Light_4_dir";
			hitpoint			= "Light_4_hitpoint";
			selection			= "Light_4_hide";
		};
	};

	class UserActions
	{
		class porte_1
		{
			displayName ="Ouvrir";
			position = "porte_1_trigger";
			radius = 1.3;
			onlyForPlayer = 0;
			condition="(true) && this animationPhase ""porte_1"" == 1";
			statement = "this animateSource [""porte_1"",0]";
		};
		class cporte_1: porte_1
		{
			displayName ="Fermer";
			condition = "this animationSourcePhase ""porte_1"" == 0";
			statement = "this animateSource [""porte_1"",1]";
		};
			class porte_d_1
			{
				displayName ="Ouvrir";
				position = "porte_d_1_trigger";
				radius = 1.3;
				onlyForPlayer = 0;
				condition="(true) && this animationPhase ""porte_d_1"" == 1";
				statement = "this animateSource [""porte_d_1"",0]";
			};
			class cporte_d_1: porte_d_1
			{
				displayName ="Fermer";
				condition = "this animationSourcePhase ""porte_d_1"" == 0";
				statement = "this animateSource [""porte_d_1"",1]";
			};
	};

	class AnimationSources
	{
		class porte_1
		{
			source = "user";
			animPeriod = 1;
			initPhase = 1;
		};
			class porte_d_1
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
			};
		class porte_2
		{
			source = "user";
			animPeriod = 1;
			initPhase = 1;
		};
		class porte_3
		{
			source = "user";
			animPeriod = 1;
			initPhase = 1;
		};
		class porte_4
		{
			source = "user";
			animPeriod = 1;
			initPhase = 1;
		};
		class porte_5
		{
			source = "user";
			animPeriod = 1;
			initPhase = 1;
		};
		class porte_6
		{
			source = "user";
			animPeriod = 1;
			initPhase = 1;
		};
	};
	class MarkerLights
	{
		class Light_1
		{
			color[]				= {30.0, 30.0, 30.0};		/// approximate colour of standard lights
			ambient[]			= {0.01, 0.0, 0.0};		/// nearly a white one
			intensity			= 3;					/// strength of the light
			name				= "Light_1_pos";		/// name of


			useFlare			= true;					/// does the light use flare?
			flareSize			= 0.2;					/// how big is the flare
			flareMaxDistance	= 100;					/// how far can you see the flare

			activeLight			= true;					/// engine counts this one as an active light into limit of lights
			dayLight			= false;				/// it doesn't shine during the day
			drawLight			= false;				/// doesn't create a specific face for flare

			class Attenuation
			{
				start			= 0;
				constant		= 2;
				linear			= 10;
				quadratic		= 20;

				hardLimitStart	= 5;					/// it is good to have some limit otherwise the light would shine to infinite distance
				hardLimitEnd	= 6;					/// this allows adding more lights into scene
			};
		};
			class Light_2
			{
				color[]				= {30.0, 30.0, 30.0};		/// approximate colour of standard lights
				ambient[]			= {0.01, 0.0, 0.0};		/// nearly a white one
				intensity			= 3;					/// strength of the light
				name				= "Light_2_pos";		/// name of


				useFlare			= true;					/// does the light use flare?
				flareSize			= 0.2;					/// how big is the flare
				flareMaxDistance	= 100;					/// how far can you see the flare

				activeLight			= true;					/// engine counts this one as an active light into limit of lights
				dayLight			= false;				/// it doesn't shine during the day
				drawLight			= false;				/// doesn't create a specific face for flare

				class Attenuation
				{
					start			= 0;
					constant		= 2;
					linear			= 10;
					quadratic		= 20;

					hardLimitStart	= 5;					/// it is good to have some limit otherwise the light would shine to infinite distance
					hardLimitEnd	= 6;					/// this allows adding more lights into scene
				};
			};
				class Light_3
				{
					color[]				= {30.0, 30.0, 30.0};		/// approximate colour of standard lights
					ambient[]			= {0.01, 0.0, 0.0};		/// nearly a white one
					intensity			= 3;					/// strength of the light
					name				= "Light_3_pos";		/// name of


					useFlare			= true;					/// does the light use flare?
					flareSize			= 0.2;					/// how big is the flare
					flareMaxDistance	= 100;					/// how far can you see the flare

					activeLight			= true;					/// engine counts this one as an active light into limit of lights
					dayLight			= false;				/// it doesn't shine during the day
					drawLight			= false;				/// doesn't create a specific face for flare

					class Attenuation
					{
						start			= 0;
						constant		= 2;
						linear			= 10;
						quadratic		= 20;

						hardLimitStart	= 5;					/// it is good to have some limit otherwise the light would shine to infinite distance
						hardLimitEnd	= 6;					/// this allows adding more lights into scene
					};
				};
					class Light_4
					{
						color[]				= {30.0, 30.0, 30.0};		/// approximate colour of standard lights
						ambient[]			= {0.01, 0.0, 0.0};		/// nearly a white one
						intensity			= 3;					/// strength of the light
						name				= "Light_4_pos";		/// name of


						useFlare			= true;					/// does the light use flare?
						flareSize			= 0.2;					/// how big is the flare
						flareMaxDistance	= 100;					/// how far can you see the flare

						activeLight			= true;					/// engine counts this one as an active light into limit of lights
						dayLight			= false;				/// it doesn't shine during the day
						drawLight			= false;				/// doesn't create a specific face for flare

						class Attenuation
						{
							start			= 0;
							constant		= 2;
							linear			= 10;
							quadratic		= 20;

							hardLimitStart	= 5;					/// it is good to have some limit otherwise the light would shine to infinite distance
							hardLimitEnd	= 6;					/// this allows adding more lights into scene
						};
					};

};
};

class ascenseur_cage: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "ascenseur";
	model = "\appartement_exilia\ascenseur_cage.p3d";
	aggregateReflectors[] =
	{
		{"Light_1","Light_2","Light_3","Light_4"}
	};
	author = "Popoff";
	// icon = "\WHships\Imperium\data\apocalypse_icon_ca.paa";
	// picture = "\WHships\Imperium\data\apocalypse_icon_ca.paa";
	// editorPreview = "\WHships\Imperium\data\apocalypse_preview_ca.paa";
	mapSize = 450;
	editorCategory = "Popoff_creation";



	class Reflectors
	{
		class Light_1
		{
			color[]				= {1000,1000,1000};
			ambient[]			= {2.5,4,6};
			intensity			= 2;
			size				= 1;					/// size of the light point seen from distance
			innerAngle			= 100;					/// angle of full light
			outerAngle			= 165;					/// angle of some light
			coneFadeCoef		= 4;					/// attenuation of light between the above angles

			position			= "Light_1_pos";		/// memory point for start of the light and flare
			direction			= "Light_1_dir";		/// memory point for the light direction
			hitpoint			= "Light_1_hitpoint";	/// point(s) in hitpoint lod for the light (hitPoints are created by engine)
			selection			= "Light_1_hide";		/// selection for artificial glow around the bulb, not much used any more

			useFlare			= true;
			flareSize			= 0.2;
			flareMaxDistance	= 130;

			class Attenuation
			{
				start			= 0;
				constant		= 0;
				linear			= 0;
				quadratic		= 0.3;

				hardLimitStart	= 50;
				hardLimitEnd	= 65;
			};
		};
		class Light_2: Light_1
		{
			position			= "Light_2_pos";
			direction			= "Light_2_dir";
			hitpoint			= "Light_2_hitpoint";
			selection			= "Light_2_hide";
		};
		class Light_3: Light_1
		{
			position			= "Light_3_pos";
			direction			= "Light_3_dir";
			hitpoint			= "Light_3_hitpoint";
			selection			= "Light_3_hide";
		};
		class Light_4: Light_1
		{
			position			= "Light_4_pos";
			direction			= "Light_4_dir";
			hitpoint			= "Light_4_hitpoint";
			selection			= "Light_4_hide";
		};
	};

	class UserActions
	{
		class porte_1
		{
			displayName ="Ouvrir";
			position = "porte_1_trigger";
			radius = 1.3;
			onlyForPlayer = 0;
			condition="(true) && this animationPhase ""porte_1"" == 1";
			statement = "this animateSource [""porte_1"",0]";
		};
		class cporte_1: porte_1
		{
			displayName ="Fermer";
			condition = "this animationSourcePhase ""porte_1"" == 0";
			statement = "this animateSource [""porte_1"",1]";
		};
	};

	class AnimationSources
	{
		class porte_1
		{
			source = "user";
			animPeriod = 1;
			initPhase = 1;
		};
			class ascenseur_1
			{
				source = "user";
				animPeriod = 10;
				initPhase = 0;
			};
		class porte_2
		{
			source = "user";
			animPeriod = 1;
			initPhase = 1;
		};
		class porte_3
		{
			source = "user";
			animPeriod = 1;
			initPhase = 1;
		};
		class porte_4
		{
			source = "user";
			animPeriod = 1;
			initPhase = 1;
		};
		class porte_5
		{
			source = "user";
			animPeriod = 1;
			initPhase = 1;
		};
		class porte_6
		{
			source = "user";
			animPeriod = 1;
			initPhase = 1;
		};
	};
	class MarkerLights
	{
		class Light_1
		{
			color[]				= {30.0, 30.0, 30.0};		/// approximate colour of standard lights
			ambient[]			= {0.01, 0.0, 0.0};		/// nearly a white one
			intensity			= 3;					/// strength of the light
			name				= "Light_1_pos";		/// name of


			useFlare			= true;					/// does the light use flare?
			flareSize			= 0.2;					/// how big is the flare
			flareMaxDistance	= 100;					/// how far can you see the flare

			activeLight			= true;					/// engine counts this one as an active light into limit of lights
			dayLight			= false;				/// it doesn't shine during the day
			drawLight			= false;				/// doesn't create a specific face for flare

			class Attenuation
			{
				start			= 0;
				constant		= 2;
				linear			= 10;
				quadratic		= 20;

				hardLimitStart	= 5;					/// it is good to have some limit otherwise the light would shine to infinite distance
				hardLimitEnd	= 6;					/// this allows adding more lights into scene
			};
		};
			class Light_2
			{
				color[]				= {30.0, 30.0, 30.0};		/// approximate colour of standard lights
				ambient[]			= {0.01, 0.0, 0.0};		/// nearly a white one
				intensity			= 3;					/// strength of the light
				name				= "Light_2_pos";		/// name of


				useFlare			= true;					/// does the light use flare?
				flareSize			= 0.2;					/// how big is the flare
				flareMaxDistance	= 100;					/// how far can you see the flare

				activeLight			= true;					/// engine counts this one as an active light into limit of lights
				dayLight			= false;				/// it doesn't shine during the day
				drawLight			= false;				/// doesn't create a specific face for flare

				class Attenuation
				{
					start			= 0;
					constant		= 2;
					linear			= 10;
					quadratic		= 20;

					hardLimitStart	= 5;					/// it is good to have some limit otherwise the light would shine to infinite distance
					hardLimitEnd	= 6;					/// this allows adding more lights into scene
				};
			};
				class Light_3
				{
					color[]				= {30.0, 30.0, 30.0};		/// approximate colour of standard lights
					ambient[]			= {0.01, 0.0, 0.0};		/// nearly a white one
					intensity			= 3;					/// strength of the light
					name				= "Light_3_pos";		/// name of


					useFlare			= true;					/// does the light use flare?
					flareSize			= 0.2;					/// how big is the flare
					flareMaxDistance	= 100;					/// how far can you see the flare

					activeLight			= true;					/// engine counts this one as an active light into limit of lights
					dayLight			= false;				/// it doesn't shine during the day
					drawLight			= false;				/// doesn't create a specific face for flare

					class Attenuation
					{
						start			= 0;
						constant		= 2;
						linear			= 10;
						quadratic		= 20;

						hardLimitStart	= 5;					/// it is good to have some limit otherwise the light would shine to infinite distance
						hardLimitEnd	= 6;					/// this allows adding more lights into scene
					};
				};
					class Light_4
					{
						color[]				= {30.0, 30.0, 30.0};		/// approximate colour of standard lights
						ambient[]			= {0.01, 0.0, 0.0};		/// nearly a white one
						intensity			= 3;					/// strength of the light
						name				= "Light_4_pos";		/// name of


						useFlare			= true;					/// does the light use flare?
						flareSize			= 0.2;					/// how big is the flare
						flareMaxDistance	= 100;					/// how far can you see the flare

						activeLight			= true;					/// engine counts this one as an active light into limit of lights
						dayLight			= false;				/// it doesn't shine during the day
						drawLight			= false;				/// doesn't create a specific face for flare

						class Attenuation
						{
							start			= 0;
							constant		= 2;
							linear			= 10;
							quadratic		= 20;

							hardLimitStart	= 5;					/// it is good to have some limit otherwise the light would shine to infinite distance
							hardLimitEnd	= 6;					/// this allows adding more lights into scene
						};
					};

};
};
class appartement_etage: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "appartement_etage";
	model = "\appartement_exilia\appartement_etage.p3d";
	aggregateReflectors[] =
	{
		{"Light_1","Light_2","Light_3","Light_4"}
	};
	author = "Popoff";
	// icon = "\WHships\Imperium\data\apocalypse_icon_ca.paa";
	// picture = "\WHships\Imperium\data\apocalypse_icon_ca.paa";
	// editorPreview = "\WHships\Imperium\data\apocalypse_preview_ca.paa";
	mapSize = 450;
	editorCategory = "Popoff_creation";



	class Reflectors
	{
		class Light_1
		{
			color[]				= {1000,1000,1000};
			ambient[]			= {2.5,4,6};
			intensity			= 2;
			size				= 1;					/// size of the light point seen from distance
			innerAngle			= 100;					/// angle of full light
			outerAngle			= 165;					/// angle of some light
			coneFadeCoef		= 4;					/// attenuation of light between the above angles

			position			= "Light_1_pos";		/// memory point for start of the light and flare
			direction			= "Light_1_dir";		/// memory point for the light direction
			hitpoint			= "Light_1_hitpoint";	/// point(s) in hitpoint lod for the light (hitPoints are created by engine)
			selection			= "Light_1_hide";		/// selection for artificial glow around the bulb, not much used any more

			useFlare			= true;
			flareSize			= 0.2;
			flareMaxDistance	= 130;

			class Attenuation
			{
				start			= 0;
				constant		= 0;
				linear			= 0;
				quadratic		= 0.3;

				hardLimitStart	= 50;
				hardLimitEnd	= 65;
			};
		};
		class Light_2: Light_1
		{
			position			= "Light_2_pos";
			direction			= "Light_2_dir";
			hitpoint			= "Light_2_hitpoint";
			selection			= "Light_2_hide";
		};
		class Light_3: Light_1
		{
			position			= "Light_3_pos";
			direction			= "Light_3_dir";
			hitpoint			= "Light_3_hitpoint";
			selection			= "Light_3_hide";
		};
		class Light_4: Light_1
		{
			position			= "Light_4_pos";
			direction			= "Light_4_dir";
			hitpoint			= "Light_4_hitpoint";
			selection			= "Light_4_hide";
		};
	};

	class MarkerLights
	{
		class Light_1
		{
			color[]				= {30.0, 30.0, 30.0};		/// approximate colour of standard lights
			ambient[]			= {0.01, 0.0, 0.0};		/// nearly a white one
			intensity			= 3;					/// strength of the light
			name				= "Light_1_pos";		/// name of


			useFlare			= true;					/// does the light use flare?
			flareSize			= 0.2;					/// how big is the flare
			flareMaxDistance	= 100;					/// how far can you see the flare

			activeLight			= true;					/// engine counts this one as an active light into limit of lights
			dayLight			= false;				/// it doesn't shine during the day
			drawLight			= false;				/// doesn't create a specific face for flare

			class Attenuation
			{
				start			= 0;
				constant		= 2;
				linear			= 10;
				quadratic		= 20;

				hardLimitStart	= 5;					/// it is good to have some limit otherwise the light would shine to infinite distance
				hardLimitEnd	= 6;					/// this allows adding more lights into scene
			};
		};
			class Light_2
			{
				color[]				= {30.0, 30.0, 30.0};		/// approximate colour of standard lights
				ambient[]			= {0.01, 0.0, 0.0};		/// nearly a white one
				intensity			= 3;					/// strength of the light
				name				= "Light_2_pos";		/// name of


				useFlare			= true;					/// does the light use flare?
				flareSize			= 0.2;					/// how big is the flare
				flareMaxDistance	= 100;					/// how far can you see the flare

				activeLight			= true;					/// engine counts this one as an active light into limit of lights
				dayLight			= false;				/// it doesn't shine during the day
				drawLight			= false;				/// doesn't create a specific face for flare

				class Attenuation
				{
					start			= 0;
					constant		= 2;
					linear			= 10;
					quadratic		= 20;

					hardLimitStart	= 5;					/// it is good to have some limit otherwise the light would shine to infinite distance
					hardLimitEnd	= 6;					/// this allows adding more lights into scene
				};
			};
				class Light_3
				{
					color[]				= {30.0, 30.0, 30.0};		/// approximate colour of standard lights
					ambient[]			= {0.01, 0.0, 0.0};		/// nearly a white one
					intensity			= 3;					/// strength of the light
					name				= "Light_3_pos";		/// name of


					useFlare			= true;					/// does the light use flare?
					flareSize			= 0.2;					/// how big is the flare
					flareMaxDistance	= 100;					/// how far can you see the flare

					activeLight			= true;					/// engine counts this one as an active light into limit of lights
					dayLight			= false;				/// it doesn't shine during the day
					drawLight			= false;				/// doesn't create a specific face for flare

					class Attenuation
					{
						start			= 0;
						constant		= 2;
						linear			= 10;
						quadratic		= 20;

						hardLimitStart	= 5;					/// it is good to have some limit otherwise the light would shine to infinite distance
						hardLimitEnd	= 6;					/// this allows adding more lights into scene
					};
				};
					class Light_4
					{
						color[]				= {30.0, 30.0, 30.0};		/// approximate colour of standard lights
						ambient[]			= {0.01, 0.0, 0.0};		/// nearly a white one
						intensity			= 3;					/// strength of the light
						name				= "Light_4_pos";		/// name of


						useFlare			= true;					/// does the light use flare?
						flareSize			= 0.2;					/// how big is the flare
						flareMaxDistance	= 100;					/// how far can you see the flare

						activeLight			= true;					/// engine counts this one as an active light into limit of lights
						dayLight			= false;				/// it doesn't shine during the day
						drawLight			= false;				/// doesn't create a specific face for flare

						class Attenuation
						{
							start			= 0;
							constant		= 2;
							linear			= 10;
							quadratic		= 20;

							hardLimitStart	= 5;					/// it is good to have some limit otherwise the light would shine to infinite distance
							hardLimitEnd	= 6;					/// this allows adding more lights into scene
						};
					};

};
};



class volet_1: Popoff_Objet
{
			model = "\appartement_exilia\volet_1";
			scope = 2;
			displayName = "volets roulants";

			class AnimationSources
			{
				class volet_1
				{
					source = "user";
					animPeriod = 1;
					initPhase = 1;
				};
			};
};



class tab: Popoff_Objet
{
	model = "\appartement_exilia\tab";
	scope = 2;
	displayName = "Tablette construction";
};





class parking_grand: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "parking_grand";
	model = "\appartement_exilia\parking_grand.p3d";
	aggregateReflectors[] =
	{
		{"Light_1","Light_2","Light_3","Light_4"}
	};
	author = "Popoff";
	// icon = "\WHships\Imperium\data\apocalypse_icon_ca.paa";
	// picture = "\WHships\Imperium\data\apocalypse_icon_ca.paa";
	// editorPreview = "\WHships\Imperium\data\apocalypse_preview_ca.paa";
	mapSize = 450;
	editorCategory = "Popoff_creation";



	class Reflectors
	{
		class Light_1
		{
			color[]				= {1000,1000,1000};
			ambient[]			= {2.5,4,6};
			intensity			= 2;
			size				= 1;					/// size of the light point seen from distance
			innerAngle			= 100;					/// angle of full light
			outerAngle			= 165;					/// angle of some light
			coneFadeCoef		= 4;					/// attenuation of light between the above angles

			position			= "Light_1_pos";		/// memory point for start of the light and flare
			direction			= "Light_1_dir";		/// memory point for the light direction
			hitpoint			= "Light_1_hitpoint";	/// point(s) in hitpoint lod for the light (hitPoints are created by engine)
			selection			= "Light_1_hide";		/// selection for artificial glow around the bulb, not much used any more

			useFlare			= true;
			flareSize			= 0.2;
			flareMaxDistance	= 130;

			class Attenuation
			{
				start			= 0;
				constant		= 0;
				linear			= 0;
				quadratic		= 0.3;

				hardLimitStart	= 50;
				hardLimitEnd	= 65;
			};
		};
		class Light_2: Light_1
		{
			position			= "Light_2_pos";
			direction			= "Light_2_dir";
			hitpoint			= "Light_2_hitpoint";
			selection			= "Light_2_hide";
		};
		class Light_3: Light_1
		{
			position			= "Light_3_pos";
			direction			= "Light_3_dir";
			hitpoint			= "Light_3_hitpoint";
			selection			= "Light_3_hide";
		};
		class Light_4: Light_1
		{
			position			= "Light_4_pos";
			direction			= "Light_4_dir";
			hitpoint			= "Light_4_hitpoint";
			selection			= "Light_4_hide";
		};
	};

	class UserActions
	{
		class porte_1
		{
			displayName ="Ouvrir";
			position = "porte_1_trigger";
			radius = 1.3;
			onlyForPlayer = 0;
			condition="(side player == west) && this animationPhase ""porte_1"" == 1";
			statement = "this animateSource [""porte_1"",0]";
		};
		class cporte_1: porte_1
		{
			displayName ="Fermer";
			condition = "this animationSourcePhase ""porte_1"" == 0";
			statement = "this animateSource [""porte_1"",1]";
		};
			class porte_2
			{
				displayName ="Ouvrir";
				position = "porte_2_trigger";
				radius = 1.3;
				onlyForPlayer = 0;
				condition="(side player == west) && this animationPhase ""porte_2"" == 1";
				statement = "this animateSource [""porte_2"",0]";
			};
			class cporte_2: porte_2
			{
				displayName ="Fermer";
				condition = "this animationSourcePhase ""porte_2"" == 0";
				statement = "this animateSource [""porte_2"",1]";
			};
	};

	class AnimationSources
	{
		class porte_1
		{
			source = "user";
			animPeriod = 1;
			initPhase = 1;
		};
		class porte_2
		{
			source = "user";
			animPeriod = 1;
			initPhase = 1;
		};
	};

	class MarkerLights
	{
		class Light_1
		{
			color[]				= {30.0, 30.0, 30.0};		/// approximate colour of standard lights
			ambient[]			= {0.01, 0.0, 0.0};		/// nearly a white one
			intensity			= 3;					/// strength of the light
			name				= "Light_1_pos";		/// name of


			useFlare			= true;					/// does the light use flare?
			flareSize			= 0.2;					/// how big is the flare
			flareMaxDistance	= 100;					/// how far can you see the flare

			activeLight			= true;					/// engine counts this one as an active light into limit of lights
			dayLight			= false;				/// it doesn't shine during the day
			drawLight			= false;				/// doesn't create a specific face for flare

			class Attenuation
			{
				start			= 0;
				constant		= 2;
				linear			= 10;
				quadratic		= 20;

				hardLimitStart	= 5;					/// it is good to have some limit otherwise the light would shine to infinite distance
				hardLimitEnd	= 6;					/// this allows adding more lights into scene
			};
		};
			class Light_2
			{
				color[]				= {30.0, 30.0, 30.0};		/// approximate colour of standard lights
				ambient[]			= {0.01, 0.0, 0.0};		/// nearly a white one
				intensity			= 3;					/// strength of the light
				name				= "Light_2_pos";		/// name of


				useFlare			= true;					/// does the light use flare?
				flareSize			= 0.2;					/// how big is the flare
				flareMaxDistance	= 100;					/// how far can you see the flare

				activeLight			= true;					/// engine counts this one as an active light into limit of lights
				dayLight			= false;				/// it doesn't shine during the day
				drawLight			= false;				/// doesn't create a specific face for flare

				class Attenuation
				{
					start			= 0;
					constant		= 2;
					linear			= 10;
					quadratic		= 20;

					hardLimitStart	= 5;					/// it is good to have some limit otherwise the light would shine to infinite distance
					hardLimitEnd	= 6;					/// this allows adding more lights into scene
				};
			};
				class Light_3
				{
					color[]				= {30.0, 30.0, 30.0};		/// approximate colour of standard lights
					ambient[]			= {0.01, 0.0, 0.0};		/// nearly a white one
					intensity			= 3;					/// strength of the light
					name				= "Light_3_pos";		/// name of


					useFlare			= true;					/// does the light use flare?
					flareSize			= 0.2;					/// how big is the flare
					flareMaxDistance	= 100;					/// how far can you see the flare

					activeLight			= true;					/// engine counts this one as an active light into limit of lights
					dayLight			= false;				/// it doesn't shine during the day
					drawLight			= false;				/// doesn't create a specific face for flare

					class Attenuation
					{
						start			= 0;
						constant		= 2;
						linear			= 10;
						quadratic		= 20;

						hardLimitStart	= 5;					/// it is good to have some limit otherwise the light would shine to infinite distance
						hardLimitEnd	= 6;					/// this allows adding more lights into scene
					};
				};
					class Light_4
					{
						color[]				= {30.0, 30.0, 30.0};		/// approximate colour of standard lights
						ambient[]			= {0.01, 0.0, 0.0};		/// nearly a white one
						intensity			= 3;					/// strength of the light
						name				= "Light_4_pos";		/// name of


						useFlare			= true;					/// does the light use flare?
						flareSize			= 0.2;					/// how big is the flare
						flareMaxDistance	= 100;					/// how far can you see the flare

						activeLight			= true;					/// engine counts this one as an active light into limit of lights
						dayLight			= false;				/// it doesn't shine during the day
						drawLight			= false;				/// doesn't create a specific face for flare

						class Attenuation
						{
							start			= 0;
							constant		= 2;
							linear			= 10;
							quadratic		= 20;

							hardLimitStart	= 5;					/// it is good to have some limit otherwise the light would shine to infinite distance
							hardLimitEnd	= 6;					/// this allows adding more lights into scene
						};
					};

};
};




	class appartement_exilia_toit: Popoff_Objet
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "toit des appartements";
		model = "\appartement_exilia\appartement_toit.p3d";
		aggregateReflectors[] =
		{
			{"Light_1","Light_2"}
		};
		author = "Popoff";
		// icon = "\WHships\Imperium\data\apocalypse_icon_ca.paa";
		// picture = "\WHships\Imperium\data\apocalypse_icon_ca.paa";
		// editorPreview = "\WHships\Imperium\data\apocalypse_preview_ca.paa";
		mapSize = 450;
		editorCategory = "Popoff_creation";



		class Reflectors
		{
			class Light_1
			{
				color[]				= {100,100,100};
				ambient[]			= {2.5,4,6};
				intensity			= 2;
				size				= 1;					/// size of the light point seen from distance
				innerAngle			= 100;					/// angle of full light
				outerAngle			= 165;					/// angle of some light
				coneFadeCoef		= 4;					/// attenuation of light between the above angles

				position			= "Light_1_pos";		/// memory point for start of the light and flare
				direction			= "Light_1_dir";		/// memory point for the light direction
				hitpoint			= "Light_1_hitpoint";	/// point(s) in hitpoint lod for the light (hitPoints are created by engine)
				selection			= "Light_1_hide";		/// selection for artificial glow around the bulb, not much used any more

				useFlare			= true;
				flareSize			= 0.2;
				flareMaxDistance	= 130;

				class Attenuation
				{
					start			= 0;
					constant		= 0;
					linear			= 0;
					quadratic		= 0.3;

					hardLimitStart	= 50;
					hardLimitEnd	= 65;
				};
			};
			class Light_2: Light_1
			{
				position			= "Light_2_pos";
				direction			= "Light_2_dir";
				hitpoint			= "Light_2_hitpoint";
				selection			= "Light_2_hide";
			};
		};

		class UserActions
		{
			class porte_1
			{
			  displayName ="Ouvrir";
			  position = "porte_1_trigger";
			  radius = 1.3;
			  onlyForPlayer = 0;
				condition="(true) && this animationPhase ""porte_1"" == 1";
			  statement = "this animateSource [""porte_1"",0]";
			};
			class cporte_1: porte_1
			{
			  displayName ="Fermer";
			  condition = "this animationSourcePhase ""porte_1"" == 0";
			  statement = "this animateSource [""porte_1"",1]";
			};
		};

		class AnimationSources
		{
			class porte_1
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
			};
			class porte_2
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
			};
			class porte_3
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
			};
			class porte_4
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
			};
			class porte_5
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
			};
			class porte_6
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
			};
			class cellule1
			{
				source = "user";
				animPeriod = 2;
				initPhase = 1;
			};
			class cellule2
			{
				source = "user";
				animPeriod = 2;
				initPhase = 1;
			};
			class entree1
			{
				source = "user";
				animPeriod = 2;
				initPhase = 1;
			};
			class entree2
			{
				source = "user";
				animPeriod = 2;
				initPhase = 1;
			};
		};
		class MarkerLights
		{
			class Light_1
			{
				color[]				= {0.0, 0.0, 255.0};		/// approximate colour of standard lights
				ambient[]			= {0.01, 0.0, 0.0};		/// nearly a white one
				intensity			= 10;					/// strength of the light
				name				= "Light_1_pos";		/// name of


				useFlare			= true;					/// does the light use flare?
				flareSize			= 1.0;					/// how big is the flare
				flareMaxDistance	= 1000;					/// how far can you see the flare

				activeLight			= true;					/// engine counts this one as an active light into limit of lights
				dayLight			= false;				/// it doesn't shine during the day
				drawLight			= false;				/// doesn't create a specific face for flare

				class Attenuation
				{
					start			= 0;
					constant		= 2;
					linear			= 10;
					quadratic		= 20;

					hardLimitStart	= 5;					/// it is good to have some limit otherwise the light would shine to infinite distance
					hardLimitEnd	= 6;					/// this allows adding more lights into scene
				};
			};
			  class Light_2
			  {
			    color[]				= {255.0, 255.0, 255.0};		/// approximate colour of standard lights
			    ambient[]			= {0.01, 0.0, 0.0};		/// nearly a white one
			    intensity			= 10;					/// strength of the light
			    name				= "Light_2_pos";		/// name of


			    useFlare			= true;					/// does the light use flare?
			    flareSize			= 1.0;					/// how big is the flare
			    flareMaxDistance	= 1000;					/// how far can you see the flare

			    activeLight			= true;					/// engine counts this one as an active light into limit of lights
			    dayLight			= false;				/// it doesn't shine during the day
			    drawLight			= false;				/// doesn't create a specific face for flare

			    class Attenuation
			    {
			      start			= 0;
			      constant		= 2;
			      linear			= 10;
			      quadratic		= 20;

			      hardLimitStart	= 5;					/// it is good to have some limit otherwise the light would shine to infinite distance
			      hardLimitEnd	= 6;					/// this allows adding more lights into scene
			    };
			  };

	};
};




};
