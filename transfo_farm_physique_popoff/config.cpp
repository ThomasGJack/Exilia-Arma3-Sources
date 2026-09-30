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
		units[] = {"broyeur_beton"};
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
	class broyeur_beton: Popoff_Objet
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Boucherie";
		maximumLoad=1500;
		transportMaxWeapons=9;
		transportMaxMagazines=300;
		transportMaxBackpacks=3;
		model = "\transfo_farm_physique_popoff\broyeur_beton.p3d";
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
			class broyeur_beton_1
			{
				displayName ="Broyer pierre";
				position = "trigger_broyeur";
				radius = 3;
				onlyForPlayer = 0;
				condition = "((this animationSourcePhase ""broyeur_1"" == 0) && (alive player))";
			  statement = ([this] spawn Popoff_fnc_broyeur_beton);
			};
		};

		class AnimationSources
		{
			class broyeur_1
			{
				source = "user";
				animPeriod = 10;
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


class machine_usinage: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "machine_usinage";
	model = "\transfo_farm_physique_popoff\machine_usinage.p3d";
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

	class AnimationSources
	{
		class mouvement_1
		{
			source = "user";
			animPeriod = 5;
			initPhase = 0;
		};
	};
};


class Bananier: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "Bananier";
	model = "\transfo_farm_physique_popoff\Bananier.p3d";
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
		class action_1
		{
			displayName ="action a rajouter pour l'objet cible";
			position = "aucun";
			radius = 1.3;
			onlyForPlayer = 0;
			condition="(true) && this animationPhase ""porte_1"" == 1";
			statement = "this animateSource [""porte_1"",0]";
		};
	};

	class AnimationSources
	{
		class mouvement_1
		{
			source = "user";
			animPeriod = 16;
			initPhase = 0;
		};
	};

};


class broyeur_voiture: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "broyeur_voiture";
	model = "\transfo_farm_physique_popoff\broyeur_voiture.p3d";
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
		class action_1
		{
			displayName ="action a rajouter pour l'objet cible";
			position = "aucun";
			radius = 1.3;
			onlyForPlayer = 0;
			condition="(true) && this animationPhase ""porte_1"" == 1";
			statement = "this animateSource [""porte_1"",0]";
		};
	};

	class AnimationSources
	{
		class mouvement_1
		{
			source = "user";
			animPeriod = 16;
			initPhase = 0;
		};
		class mouvement_2
		{
			source = "user";
			animPeriod = 14;
			initPhase = 0;
		};
		class mouvement_3
		{
			source = "user";
			animPeriod = 1;
			initPhase = 1;
		};
		class mouvement_4
		{
			source = "user";
			animPeriod = 14;
			initPhase = 0;
		};
		class mouvement_5
		{
			source = "user";
			animPeriod = 14;
			initPhase = 0;
		};
		class mouvement_6
		{
			source = "user";
			animPeriod = 14;
			initPhase = 0;
		};
		class mouvement_7
		{
			source = "user";
			animPeriod = 14;
			initPhase = 0;
		};
		class cache_1
		{
			source = "user";
			animPeriod = 0. 1;
			initPhase = 1;
		};
	};

};


class scierie_popoff: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "scierie";
	model = "\transfo_farm_physique_popoff\scierie_popoff.p3d";
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
		class action_1
		{
			displayName ="action a rajouter pour l'objet cible";
			position = "aucun";
			radius = 1.3;
			onlyForPlayer = 0;
			condition="(true) && this animationPhase ""porte_1"" == 1";
			statement = "this animateSource [""porte_1"",0]";
		};
	};

	class AnimationSources
	{
		class mouvement_1
		{
			source = "user";
			animPeriod = 15;
			initPhase = 0;
		};
		class mouvement_2
		{
			source = "user";
			animPeriod = 10;
			initPhase = 1;
		};
		class mouvement_3
		{
			source = "user";
			animPeriod = 10;
			initPhase = 1;
		};
		class cache_1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 1;
		};
	};

};
};






};
