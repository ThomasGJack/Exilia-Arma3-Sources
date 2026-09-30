////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.52
//'now' is Sat Jan 13 04:49:56 2018 : 'file' last modified on Sat Jan 13 04:49:56 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class OPTRE_Frigate : config.bin{
class CfgPatches
{
	class atm_Popoff
	{
		units[] = {"atm_popoff"};
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
	class atm_popoff: Popoff_Objet
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "ATM";
		model = "\atm_popoff\atm_popoff.p3d";
		aggregateReflectors[] =
		{
			{"Light_1"}
		};
		author = "Popoff";
		// icon = "\WHships\Imperium\data\apocalypse_icon_ca.paa";
		// picture = "\WHships\Imperium\data\apocalypse_icon_ca.paa";
		// editorPreview = "\WHships\Imperium\data\apocalypse_preview_ca.paa";
		mapSize = 450;
		editorCategory = "Popoff_creation";
		editorSubcategory = "Batiment";



		class Reflectors
		{
			class Light_1
			{
				color[]				= {2500,4000,6000};
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
		};

		class UserActions
		{
			class porte_1
			{
			  displayName ="Ouvrir";
			  position = "porte_1_trigger";
			  radius = 1.3;
			  onlyForPlayer = 0;
			  condition="(MissionNameSpace getVariable[""License_civ_brinks"",false]) && this animationPhase ""porte_1"" == 1";
			  statement = "[this] spawn Popoff_fnc_ouvriratm";
			};
			class cporte_1: porte_1
			{
			  displayName ="Fermer";
			  condition = "this animationSourcePhase ""porte_1"" == 0";
			  statement = ([this] spawn Popoff_fnc_fermeratm);
			};
				class recharger_atm
				{
				  displayName ="recharger 50 000";
				  position = "porte_1_trigger";
				  radius = 1.3;
				  onlyForPlayer = 0;
				  condition = "this animationSourcePhase ""porte_1"" == 0";
				  statement = ([this] spawn Popoff_fnc_rechargeratm);
				};
				class decharger_atm
				{
				  displayName ="retirer 50 000";
				  position = "porte_1_trigger";
				  radius = 1.3;
				  onlyForPlayer = 0;
				  condition = "this animationSourcePhase ""porte_1"" == 0";
				  statement = ([this] spawn Popoff_fnc_dechargeratm);
				};
				class compter_atm
				{
				  displayName ="Faire les comptes";
				  position = "porte_1_trigger";
				  radius = 1.3;
				  onlyForPlayer = 0;
				  condition = "this animationSourcePhase ""porte_1"" == 0";
				  statement = ([this] spawn Popoff_fnc_compteratm);
				};
				class voler_atm
				{
				  displayName ="Voler l'argent";
				  position = "porte_1_trigger";
				  radius = 1.1;
				  onlyForPlayer = 0;
				  condition="!(MissionNameSpace getVariable[""License_civ_brinks"",false]) && this animationPhase ""porte_1"" == 0";
				  statement = ([this] spawn Popoff_fnc_voleratm);
				};
				class forcer_atm
				{
					displayName ="poser explosifs et déclancher";
				  position = "porte_1_trigger";
				  radius = 1.1;
				  onlyForPlayer = 0;
					condition="!(MissionNameSpace getVariable[""License_civ_brinks"",false]) && this animationPhase ""porte_1"" == 1";
				  statement = ([this] spawn Popoff_fnc_forceratm);
				};
				class cash_atm
				{
					displayName ="ATM";
				  position = "cash_atm";
				  radius = 1.1;
				  onlyForPlayer = 0;
					condition="alive player";
				  statement = ([this] call Popoff_fnc_atmMenu);
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
			class coffre_1
			{
				source = "user";
				animPeriod = 15;
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

	};
};



	class abris_atm: Popoff_Objet
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Abris ATM";
		model = "\atm_popoff\abris_atm.p3d";
		aggregateReflectors[] =
		{
			{"Light_1"}
		};
		author = "Popoff";
		// icon = "\WHships\Imperium\data\apocalypse_icon_ca.paa";
		// picture = "\WHships\Imperium\data\apocalypse_icon_ca.paa";
		// editorPreview = "\WHships\Imperium\data\apocalypse_preview_ca.paa";
		mapSize = 450;
		editorCategory = "Popoff_creation";
		editorSubcategory = "Batiment";



		class Reflectors
		{
			class Light_1
			{
				color[]				= {2500,4000,6000};
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
		};

		class UserActions
		{
			class porte_1
			{
			  displayName ="Ouvrir";
			  position = "porte_1_trigger";
			  radius = 1.3;
			  onlyForPlayer = 0;
				condition="(MissionNameSpace getVariable[""License_civ_brinks"",false]) && this animationPhase ""porte_1"" == 1";
			  statement = "this animateSource [""porte_1"",0];playSound3D [""popoff_core\sounds\open_door_1.ogg"", this, false, getPosASL this, 5]";
			};
			class porte_1_1
			{
				displayName ="Crocheter";
			  position = "porte_1_trigger";
			  radius = 1.3;
			  onlyForPlayer = 0;
				condition="!(MissionNameSpace getVariable[""License_civ_brinks"",false]) && this animationPhase ""porte_1"" == 1";
			  statement = ([this] spawn Popoff_fnc_crocheterabrisatm);
			};
			class cporte_1: porte_1
			{
			  displayName ="Fermer";
			  condition = "this animationSourcePhase ""porte_1"" == 0";
			  statement = "this animateSource [""porte_1"",1];playSound3D [""popoff_core\sounds\open_door_1.ogg"", this, false, getPosASL this, 5]";
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
			class coffre_1
			{
				source = "user";
				animPeriod = 15;
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

	};
};




class caisse_guichet_popoff: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "caisse_guichet_popoff";
	model = "\atm_popoff\caisse_guichet_popoff.p3d";
	aggregateReflectors[] =
	{

	};
	author = "Popoff";
	// icon = "\WHships\Imperium\data\apocalypse_icon_ca.paa";
	// picture = "\WHships\Imperium\data\apocalypse_icon_ca.paa";
	// editorPreview = "\WHships\Imperium\data\apocalypse_preview_ca.paa";
	mapSize = 450;
	editorCategory = "Popoff_creation";
	editorSubcategory = "Batiment";



	class UserActions
	{
		class tiroir_1
		{
			displayName ="Fracturer";
			position = "tiroir_1_trigger";
			radius = 1.3;
			onlyForPlayer = 0;
			condition="!(MissionNameSpace getVariable[""License_civ_brinks"",false]) && this animationPhase ""fric_1"" == 0";
			statement = ([this] spawn Popoff_fnc_volercashguichet);
		};
		class ctiroir_1: tiroir_1
		{
			displayName ="Fermer";
			condition = "this animationSourcePhase ""tiroir_1"" == 0.9";
			statement = "this animateSource [""tiroir_1"",0];playSound3D [""popoff_core\sounds\open_door_1.ogg"", this, false, getPosASL this, 5]";
		};
	};

	class AnimationSources
	{
		class tiroir_1
		{
			source = "user";
			animPeriod = 1;
			initPhase = 0;
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

	};
};






	class popoff_malette: Popoff_Objet
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "popoff malette";
		model = "\atm_popoff\popoff_malette.p3d";
		aggregateReflectors[] =
		{

		};
		author = "Popoff";
		// icon = "\WHships\Imperium\data\apocalypse_icon_ca.paa";
		// picture = "\WHships\Imperium\data\apocalypse_icon_ca.paa";
		// editorPreview = "\WHships\Imperium\data\apocalypse_preview_ca.paa";
		mapSize = 450;
		editorCategory = "Popoff_creation";
		editorSubcategory = "Batiment";



		class UserActions
		{
			class casser_malette
			{
			  displayName ="Fracturer malette";
			  position = "trigger_malette_convoyeur";
			  radius = 1.3;
			  onlyForPlayer = 0;
			  condition="!(MissionNameSpace getVariable[""License_civ_brinks"",false])";
			  statement = ([this] spawn Popoff_fnc_fracturermalette);
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
			class coffre_1
			{
				source = "user";
				animPeriod = 15;
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

	};
};




};
