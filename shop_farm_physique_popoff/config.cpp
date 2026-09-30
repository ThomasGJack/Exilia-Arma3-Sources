#include "BIS_AddonInfo.hpp"
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
		units[] = {"shop_boucherie","shop_matierepremiere","shop_matierepremiere2","coffre_matprem"};
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
	class shop_boucherie: Popoff_Objet
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Boucherie";
		model = "\shop_farm_physique_popoff\shop_boucherie.p3d";
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

		class AnimationSources
		{
			class v1
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

class stand_marche: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "stand_marche";
	model = "\shop_farm_physique_popoff\stand_marche.p3d";
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
		class stand_marche
		{
			displayName ="Action a rajouter pour le futur, laissé pour éviter de supprimer pour refaire apres";
			position = "trigger_vente";
			radius = 3;
			onlyForPlayer = 0;
			condition = "alive player";
			statement = ([this] spawn Popoff_fnc_boucherieMenu);
		};
	};

	class AnimationSources
	{
		class v1
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


class stock_sang: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "stock_sang";
	model = "\shop_farm_physique_popoff\stock_sang.p3d";
	aggregateReflectors[] =
	{
		{""}
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
    displayName ="Fermer";
    position = "porte_1_trigger";
    radius = 2.5;
    onlyForPlayer = 0;
    condition = "((this animationSourcePhase ""porte_1"" == 1) && (alive player))";
    statement = "this animateSource [""porte_1"",0]";
  };

  class cporte_1: porte_1
  {
    displayName ="Ouvrir";
    condition = "((this animationSourcePhase ""porte_1"" == 0) && (alive player))";
    statement = "this animateSource [""porte_1"",1]";
  };
	};

	class AnimationSources
	{
		class v1
		{
			source = "user";
			animPeriod = 1;
			initPhase = 1;
		};
    class porte_1
		{
			source = "user";
			animPeriod = 1;
			initPhase = 0;
		};
	};
};



class stock_saline: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "stock_saline";
	model = "\shop_farm_physique_popoff\stock_saline.p3d";
	aggregateReflectors[] =
	{
		{""}
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
    displayName ="Fermer";
    position = "porte_1_trigger";
    radius = 2.5;
    onlyForPlayer = 0;
    condition = "((this animationSourcePhase ""porte_1"" == 1) && (alive player))";
    statement = "this animateSource [""porte_1"",0]";
  };

  class cporte_1: porte_1
  {
    displayName ="Ouvrir";
    condition = "((this animationSourcePhase ""porte_1"" == 0) && (alive player))";
    statement = "this animateSource [""porte_1"",1]";
  };
	};

	class AnimationSources
	{
		class v1
		{
			source = "user";
			animPeriod = 1;
			initPhase = 1;
		};
    class porte_1
		{
			source = "user";
			animPeriod = 1;
			initPhase = 0;
		};
	};
};

class palette_ciment: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "palette_ciment";
	model = "\shop_farm_physique_popoff\palette_ciment.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};
};


class palette_charbon: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "palette_charbon";
	model = "\shop_farm_physique_popoff\palette_charbon.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};
};

class palette_soufre: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "palette_soufre";
	model = "\shop_farm_physique_popoff\palette_soufre.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};
};



class Lingots_fer: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "Lingots_fer";
	model = "\shop_farm_physique_popoff\Lingots_fer.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};
};


class Lingots_cuivre: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "Lingots_cuivre";
	model = "\shop_farm_physique_popoff\Lingots_cuivre.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};
};

class Lingots_plastic: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "Lingots_plastic";
	model = "\shop_farm_physique_popoff\Lingots_plastic.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};
};

class Lingots_argent: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "Lingots_argent";
	model = "\shop_farm_physique_popoff\Lingots_argent.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};
};

class Lingots_or: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "Lingots_or";
	model = "\shop_farm_physique_popoff\Lingots_or.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};
};

class casiers_salades: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "casiers_salades";
	model = "\shop_farm_physique_popoff\casiers_salades.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};
};




class casiers_carottes: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "casiers_carottes";
	model = "\shop_farm_physique_popoff\casiers_carottes.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};

};




class casiers_choux: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "casiers_choux";
	model = "\shop_farm_physique_popoff\casiers_choux.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};

};


class casiers_tomates: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "casiers_tomates";
	model = "\shop_farm_physique_popoff\casiers_tomates.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};

};

class rattelier_pioches: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "rattelier_pioches";
	model = "\shop_farm_physique_popoff\rattelier_pioches.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};

};

class rattelier_pelles: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "rattelier_pelles";
	model = "\shop_farm_physique_popoff\rattelier_pelles.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};

};
class rattelier_haches: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "rattelier_haches";
	model = "\shop_farm_physique_popoff\rattelier_haches.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};

};
class rattelier_masses: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "rattelier_masses";
	model = "\shop_farm_physique_popoff\rattelier_masses.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};

};

class rattelier_bull: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "rattelier_bull";
	model = "\shop_farm_physique_popoff\rattelier_bull.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};
};

class rattelier_bullb: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "rattelier_bullb";
	model = "\shop_farm_physique_popoff\rattelier_bullb.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};
};

class rattelier_cz75: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "rattelier_cz75";
	model = "\shop_farm_physique_popoff\rattelier_cz75.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};
};


class rattelier_deagle: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "rattelier_deagle";
	model = "\shop_farm_physique_popoff\rattelier_deagle.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};
};

class rattelier_deaglem: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "rattelier_deaglem";
	model = "\shop_farm_physique_popoff\rattelier_deaglem.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};
};

class rattelier_deagles: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "rattelier_deagles";
	model = "\shop_farm_physique_popoff\rattelier_deagles.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};
};

class rattelier_fn57: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "rattelier_fn57";
	model = "\shop_farm_physique_popoff\rattelier_fn57.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};
};

class rattelier_fnp45: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "rattelier_fnp45";
	model = "\shop_farm_physique_popoff\rattelier_fnp45.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};
};

class rattelier_fnp45t: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "rattelier_fnp45t";
	model = "\shop_farm_physique_popoff\rattelier_fnp45t.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};
};

class rattelier_g17: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "rattelier_g17";
	model = "\shop_farm_physique_popoff\rattelier_g17.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};
};


class rattelier_g19: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "rattelier_g19";
	model = "\shop_farm_physique_popoff\rattelier_g19.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};
};

class rattelier_g19t: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "rattelier_g19t";
	model = "\shop_farm_physique_popoff\rattelier_g19t.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};
};

class rattelier_gsh18: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "rattelier_gsh18";
	model = "\shop_farm_physique_popoff\rattelier_gsh18.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};
};

class rattelier_kimber: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "rattelier_kimber";
	model = "\shop_farm_physique_popoff\rattelier_kimber.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};
};

class rattelier_kimber_nw: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "rattelier_kimber_nw";
	model = "\shop_farm_physique_popoff\rattelier_kimber_nw.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};
};
class rattelier_m9: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "rattelier_m9";
	model = "\shop_farm_physique_popoff\rattelier_m9.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};
};
class rattelier_m9c: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "rattelier_m9c";
	model = "\shop_farm_physique_popoff\rattelier_m9c.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};
};
class rattelier_m1911: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "rattelier_m1911";
	model = "\shop_farm_physique_popoff\rattelier_m1911.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};
};
class rattelier_mak: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "rattelier_mak";
	model = "\shop_farm_physique_popoff\rattelier_mak.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};
};
class rattelier_mateba: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "rattelier_mateba";
	model = "\shop_farm_physique_popoff\rattelier_mateba.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};
};
class rattelier_mk2: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "rattelier_mk2";
	model = "\shop_farm_physique_popoff\rattelier_mk2.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};
};
class rattelier_p226: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "rattelier_p226";
	model = "\shop_farm_physique_popoff\rattelier_p226.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};
};
class rattelier_python: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "rattelier_python";
	model = "\shop_farm_physique_popoff\rattelier_python.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};
};
class rattelier_TT33: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "rattelier_TT33";
	model = "\shop_farm_physique_popoff\rattelier_TT33.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};
};
class rattelier_ttracker: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "rattelier_ttracker";
	model = "\shop_farm_physique_popoff\rattelier_ttracker.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};
};
class rattelier_usp: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "rattelier_usp";
	model = "\shop_farm_physique_popoff\rattelier_usp.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};
};
class rattelier_uspm: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "rattelier_uspm";
	model = "\shop_farm_physique_popoff\rattelier_uspm.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};
};
class rattelier_vp70: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "rattelier_vp70";
	model = "\shop_farm_physique_popoff\rattelier_vp70.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};
};
class rattelier_muzi: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "rattelier_muzi";
	model = "\shop_farm_physique_popoff\rattelier_muzi.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};
};
class rattelier_tec9: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "rattelier_tec9";
	model = "\shop_farm_physique_popoff\rattelier_tec9.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};
};
class rattelier_vz61: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "rattelier_vz61";
	model = "\shop_farm_physique_popoff\rattelier_vz61.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};
};
class rattelier_LVOA_C_Black: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "rattelier_LVOA_C_Black";
	model = "\shop_farm_physique_popoff\rattelier_LVOA_C_Black.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};
};
class rattelier_LVOA_C_Black_TOB: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "rattelier_LVOA_C_Black_TOB";
	model = "\shop_farm_physique_popoff\rattelier_LVOA_C_Black_TOB.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};
};




class tas_de_sable: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "tas_de_sable";
	model = "\shop_farm_physique_popoff\tas_de_sable.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};

};




class etagere_telephone: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "etagere_telephone";
	model = "\shop_farm_physique_popoff\etagere_telephone.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};

};
class ortolan: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "ortolan";
	model = "\shop_farm_physique_popoff\ortolan.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};

};

class doublecreme: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "doublecreme";
	model = "\shop_farm_physique_popoff\doublecreme.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};

};

class ficello: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "ficello";
	model = "\shop_farm_physique_popoff\ficello.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};

};


class fourme: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "fourme";
	model = "\shop_farm_physique_popoff\fourme.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};

};


class allege: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "allege";
	model = "\shop_farm_physique_popoff\allege.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};

};

class folepi: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "folepi";
	model = "\shop_farm_physique_popoff\folepi.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};

};

class president: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "president";
	model = "\shop_farm_physique_popoff\president.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};

};
class parmesan: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "parmesan";
	model = "\shop_farm_physique_popoff\parmesan.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};

};
class petitbrie: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "petitbrie";
	model = "\shop_farm_physique_popoff\petitbrie.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};

};
class presidentemental: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "presidentemental";
	model = "\shop_farm_physique_popoff\presidentemental.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};

};
class chabichou: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "chabichou";
	model = "\shop_farm_physique_popoff\chabichou.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};

};
class apericube: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "apericube";
	model = "\shop_farm_physique_popoff\apericube.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};

};
class roblochon: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "roblochon";
	model = "\shop_farm_physique_popoff\roblochon.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};

};
class fausseraclette: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "fausseraclette";
	model = "\shop_farm_physique_popoff\fausseraclette.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};

};
class fromagepizza: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "fromagepizza";
	model = "\shop_farm_physique_popoff\fromagepizza.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};

};
class carreest: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "carreest";
	model = "\shop_farm_physique_popoff\carreest.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};

};
class cancoillotte: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "cancoillotte";
	model = "\shop_farm_physique_popoff\cancoillotte.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};

};
class gruyererape: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "gruyererape";
	model = "\shop_farm_physique_popoff\gruyererape.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};

};
class chavroux: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "chavroux";
	model = "\shop_farm_physique_popoff\chavroux.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};

};
class saintagur: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "saintagur";
	model = "\shop_farm_physique_popoff\saintagur.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};

};
class kiri: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "kiri";
	model = "\shop_farm_physique_popoff\kiri.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};

};
class coeurartichaut: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "coeurartichaut";
	model = "\shop_farm_physique_popoff\coeurartichaut.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};

};
class coeurartichautboite: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "coeurartichautboite";
	model = "\shop_farm_physique_popoff\coeurartichautboite.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};

};
class aspergeboite: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "aspergeboite";
	model = "\shop_farm_physique_popoff\aspergeboite.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};

};
class champi: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "champi";
	model = "\shop_farm_physique_popoff\champi.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};

};
class haricotsverts: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "haricotsverts";
	model = "\shop_farm_physique_popoff\haricotsverts.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};

};
class aspergeconserve: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "aspergeconserve";
	model = "\shop_farm_physique_popoff\aspergeconserve.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};

};
class coeurpalmier: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "coeurpalmier";
	model = "\shop_farm_physique_popoff\coeurpalmier.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};

};
class haricotsverts2: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "haricotsverts2";
	model = "\shop_farm_physique_popoff\haricotsverts2.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};

};

class lentilles: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "lentilles";
	model = "\shop_farm_physique_popoff\lentilles.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};

};
class macedoine: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "macedoine";
	model = "\shop_farm_physique_popoff\macedoine.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};

};
class peteuxrouge: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "peteuxrouge";
	model = "\shop_farm_physique_popoff\peteuxrouge.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};

};
class ratatouille: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "ratatouille";
	model = "\shop_farm_physique_popoff\ratatouille.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};

};
class peteuxblanc2: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "peteuxblanc2";
	model = "\shop_farm_physique_popoff\peteuxblanc2.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};

};
class peteuxblanc: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "peteuxblanc";
	model = "\shop_farm_physique_popoff\peteuxblanc.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};

};
class petitspois: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "petitspois";
	model = "\shop_farm_physique_popoff\petitspois.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};

};
class poirot: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "poirot";
	model = "\shop_farm_physique_popoff\poirot.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};

};
class poischiches: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "poischiches";
	model = "\shop_farm_physique_popoff\poischiches.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};

};
class tomateconserve: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "tomateconserve";
	model = "\shop_farm_physique_popoff\tomateconserve.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};

};
class tomatebocal: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "tomatebocal";
	model = "\shop_farm_physique_popoff\tomatebocal.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};

};
class poussesojavegan: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "poussesojavegan";
	model = "\shop_farm_physique_popoff\poussesojavegan.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};

};
class petite_bouteille_eau: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "petite_bouteille_eau";
	model = "\shop_farm_physique_popoff\petite_bouteille_eau.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};

};
class grande_bouteille_eau: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "grande_bouteille_eau";
	model = "\shop_farm_physique_popoff\grande_bouteille_eau.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};

};
class ratatouillebocal: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "ratatouillebocal";
	model = "\shop_farm_physique_popoff\ratatouillebocal.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};

};

class stock_morphine: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "stock_morphine";
	model = "\shop_farm_physique_popoff\stock_morphine.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};

};
class stock_epi: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "stock_epi";
	model = "\shop_farm_physique_popoff\stock_epi.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};

};
class stock_adenosine: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "stock_adenosine";
	model = "\shop_farm_physique_popoff\stock_adenosine.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};

};
class stock_atropine: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "stock_atropine";
	model = "\shop_farm_physique_popoff\stock_atropine.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};

};
class stock_bandage1: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "stock_bandage1";
	model = "\shop_farm_physique_popoff\stock_bandage1.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};

};

class stock_bandage2: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "stock_bandage2";
	model = "\shop_farm_physique_popoff\stock_bandage2.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};

};
class stock_bandage3: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "stock_bandage3";
	model = "\shop_farm_physique_popoff\stock_bandage3.p3d";
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
		class v1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 0;
		};
	};

};
class shop_matierepremiere: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "Shop matière première (fer-cuivre)";
	model = "\shop_farm_physique_popoff\shop_matierepremiere.p3d";
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
		class porte_3
		{
			displayName ="Ouvrir coffre";
			position = "porte_3_trigger";
			radius = 1.5;
			onlyForPlayer = 0;
			condition = "((this animationSourcePhase ""porte_3"" == 1) && (alive player))";
			statement = "this animateSource [""porte_3"",0]";
		};

		class cporte_3: porte_3
		{
			displayName ="Fermer coffre";
			condition = "((this animationSourcePhase ""porte_3"" == 0) && (alive player))";
			statement = "this animateSource [""porte_3"",1]";
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
		class porte_3
		{
			source = "user";
			animPeriod = 1;
			initPhase = 1;
		};
		class garage_1
		{
			source = "user";
			animPeriod = 5;
			initPhase = 1;
		};
		class garage_2
		{
			source = "user";
			animPeriod = 5;
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
