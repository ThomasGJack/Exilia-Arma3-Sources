////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.52
//'now' is Sat Jan 13 04:49:56 2018 : 'file' last modified on Sat Jan 13 04:49:56 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class OPTRE_Frigate : config.bin{
class CfgPatches
{
	class Popoff_creation
	{
		units[] = {"shop_boucherie","quincaillerie_popoff","quincaillerie_popoff2","coffre_matprem"};
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
	class quincaillerie_popoff: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "Quincaillerie";
	model = "\quincaillerie_popoff\quincaillerie_popoff.p3d";
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
			color[]				= {200,300,300};
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
			flareMaxDistance	= 50;

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
		class Light_2
		{
			color[]				= {250,400,600};
			ambient[]			= {2.5,4,6};
			intensity			= 2;
			size				= 1;					/// size of the light point seen from distance
			innerAngle			= 100;					/// angle of full light
			outerAngle			= 165;					/// angle of some light
			coneFadeCoef		= 4;					/// attenuation of light between the above angles

			position			= "Light_2_pos";		/// memory point for start of the light and flare
			direction			= "Light_2_dir";		/// memory point for the light direction
			hitpoint			= "Light_2_hitpoint";	/// point(s) in hitpoint lod for the light (hitPoints are created by engine)
			selection			= "Light_2_hide";		/// selection for artificial glow around the bulb, not much used any more

			useFlare			= true;
			flareSize			= 0.2;
			flareMaxDistance	= 50;

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
	};

	class UserActions
	{
		class shop_vente_mp
		{
			displayName ="Vendre marchandise";
			position = "trigger_vente";
			radius = 3;
			onlyForPlayer = 0;
			condition = "alive player";
			statement = ([this] spawn Popoff_fnc_matierepremiereMenu);
		};
		class shop_achat_mp
		{
			displayName ="Achat marchandise";
			position = "trigger_achat";
			radius = 3;
			onlyForPlayer = 0;
			condition = "alive player";
			statement = ([this] spawn Popoff_fnc_matierepremiereMenu2);
		};
		class porte_1
		{
			displayName ="Ouvrir";
			position = "porte_1_trigger";
			radius = 3;
			onlyForPlayer = 0;
			condition = "((this animationSourcePhase ""porte_1"" == 1) && (alive player))";
			statement = "this animateSource [""porte_1"",0]";
		};

		class cporte_1: porte_1
		{
			displayName ="Fermer";
			condition = "((this animationSourcePhase ""porte_1"" == 0) && (alive player))";
			statement = "this animateSource [""porte_1"",1]";
		};
		class porte_2
		{
			displayName ="Ouvrir";
			position = "porte_2_trigger";
			radius = 2;
			onlyForPlayer = 0;
			condition = "((this animationSourcePhase ""porte_2"" == 1) && (alive player))";
			statement = "this animateSource [""porte_2"",0]";
		};

		class cporte_2: porte_2
		{
			displayName ="Fermer";
			condition = "((this animationSourcePhase ""porte_2"" == 0) && (alive player))";
			statement = "this animateSource [""porte_2"",1]";
		};
		class garage_1
		{
			displayName ="Ouvrir quai 1";
			position = "garage_1_trigger";
			radius = 3;
			onlyForPlayer = 0;
			condition = "this animationSourcePhase ""garage_1"" == 1";
			statement = "this animateSource [""garage_1"",0]";
		};

		class c_garage_1: garage_1
		{
			displayName ="Fermer quai 1";
			condition = "this animationSourcePhase ""garage_1"" == 0";
			statement = "this animateSource [""garage_1"",1]";
		};
		class garage_2
		{
			displayName ="Ouvrir quai 2";
			position = "garage_1_trigger";
			radius = 3;
			onlyForPlayer = 0;
			condition = "this animationSourcePhase ""garage_2"" == 1";
			statement = "this animateSource [""garage_2"",0]";
		};

		class c_garage_2: garage_2
		{
			displayName ="Fermer quai 2";
			condition = "this animationSourcePhase ""garage_2"" == 0";
			statement = "this animateSource [""garage_2"",1]";
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
		class garage_1
		{
			source = "user";
			animPeriod = 2;
			initPhase = 1;
		};
		class garage_2
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
			color[]				= {0.0, 0.0, 0.0};		/// approximate colour of standard lights
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
			color[]				= {0.0, 0.0, 0.0};		/// approximate colour of standard lights
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
