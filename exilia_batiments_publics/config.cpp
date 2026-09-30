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
		units[] = {"wc_publics"};
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
	class wc_publics: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "WC publics";
	model = "\exilia_batiments_publics\wc_publics.p3d";
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
			color[]				= {183,1,246};
			ambient[]			= {2.5,4,6};
			intensity			= 2;
			size				= 1;					/// size of the light point seen from distance
			innerAngle			= 100;					/// angle of full light
			outerAngle			= 165;					/// angle of some light
			coneFadeCoef		= 4;					/// attenuation of light between the above angles

			position			= "Light_1_pos";		/// memory point for start of the light and flare
			direction			= "Light_1_dir";		/// memory point for the light direction
			hitpoint			= "Light_1_hitpoint";	/// point(s) in hitpoint lod for the light (hitPoints are created by engine)

			useFlare			= false;
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
			color[]				= {183,1,246};
			ambient[]			= {2.5,4,6};
			intensity			= 2;
			size				= 1;					/// size of the light point seen from distance
			innerAngle			= 100;					/// angle of full light
			outerAngle			= 165;					/// angle of some light
			coneFadeCoef		= 4;					/// attenuation of light between the above angles

			position			= "Light_2_pos";		/// memory point for start of the light and flare
			direction			= "Light_2_dir";		/// memory point for the light direction
			hitpoint			= "Light_2_hitpoint";	/// point(s) in hitpoint lod for the light (hitPoints are created by engine)

			useFlare			= false;
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

		class porte_1
		{
			displayName ="Ouvrir";
			position = "porte_1_trigger";
			radius = 1.5;
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
			radius = 1.5;
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
		class porte_3
		{
		  displayName ="Ouvrir";
		  position = "porte_3_trigger";
			radius = 1.5;
		  onlyForPlayer = 0;
		  condition = "((this animationSourcePhase ""porte_3"" == 1) && (alive player))";
		  statement = "this animateSource [""porte_3"",0]";
		};
		class cporte_3: porte_3
		{
		  displayName ="Fermer";
		  condition = "((this animationSourcePhase ""porte_3"" == 0) && (alive player))";
		  statement = "this animateSource [""porte_3"",1]";
		};
		class porte_4
		{
		  displayName ="Ouvrir";
		  position = "porte_4_trigger";
			radius = 1.5;
		  onlyForPlayer = 0;
		  condition = "((this animationSourcePhase ""porte_4"" == 1) && (alive player))";
		  statement = "this animateSource [""porte_4"",0]";
		};
		class cporte_4: porte_4
		{
		  displayName ="Fermer";
		  condition = "((this animationSourcePhase ""porte_4"" == 0) && (alive player))";
		  statement = "this animateSource [""porte_4"",1]";
		};
		class porte_5
		{
		  displayName ="Ouvrir";
		  position = "porte_5_trigger";
			radius = 1.5;
		  onlyForPlayer = 0;
		  condition = "((this animationSourcePhase ""porte_5"" == 1) && (alive player))";
		  statement = "this animateSource [""porte_5"",0]";
		};
		class cporte_5: porte_5
		{
		  displayName ="Fermer";
		  condition = "((this animationSourcePhase ""porte_5"" == 0) && (alive player))";
		  statement = "this animateSource [""porte_5"",1]";
		};
		class porte_6
		{
		  displayName ="Ouvrir";
		  position = "porte_6_trigger";
			radius = 1.5;
		  onlyForPlayer = 0;
		  condition = "((this animationSourcePhase ""porte_6"" == 1) && (alive player))";
		  statement = "this animateSource [""porte_6"",0]";
		};
		class cporte_6: porte_6
		{
		  displayName ="Fermer";
		  condition = "((this animationSourcePhase ""porte_6"" == 0) && (alive player))";
		  statement = "this animateSource [""porte_6"",1]";
		};
		class porte_7
		{
		  displayName ="Ouvrir";
		  position = "porte_7_trigger";
			radius = 1.5;
		  onlyForPlayer = 0;
		  condition = "((this animationSourcePhase ""porte_7"" == 1) && (alive player))";
		  statement = "this animateSource [""porte_7"",0]";
		};
		class cporte_7: porte_7
		{
		  displayName ="Fermer";
		  condition = "((this animationSourcePhase ""porte_7"" == 0) && (alive player))";
		  statement = "this animateSource [""porte_7"",1]";
		};
		class porte_8
		{
		  displayName ="Ouvrir";
		  position = "porte_8_trigger";
			radius = 1.5;
		  onlyForPlayer = 0;
		  condition = "((this animationSourcePhase ""porte_8"" == 1) && (alive player))";
		  statement = "this animateSource [""porte_8"",0]";
		};
		class cporte_8: porte_8
		{
		  displayName ="Fermer";
		  condition = "((this animationSourcePhase ""porte_8"" == 0) && (alive player))";
		  statement = "this animateSource [""porte_8"",1]";
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
		class porte_7
		{
			source = "user";
			animPeriod = 1;
			initPhase = 1;
		};
		class porte_8
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
			color[]				= {0.0, 0.0, 0.5};		/// approximate colour of standard lights
			ambient[]			= {0.01, 0.0, 0.0};		/// nearly a white one
			intensity			= 10;					/// strength of the light
			name				= "Light_1_pos";		/// name of


			useFlare			= false;					/// does the light use flare?
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
			color[]				= {0.0, 0.0, 0.5};		/// approximate colour of standard lights
			ambient[]			= {0.01, 0.0, 0.0};		/// nearly a white one
			intensity			= 10;					/// strength of the light
			name				= "Light_2_pos";		/// name of


			useFlare			= false;					/// does the light use flare?
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
