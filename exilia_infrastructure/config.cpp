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
		units[] = {"exilia_infrastructure","exilia_infrastructure_annexe"};
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
	class feux_exilia_1: Popoff_Objet
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "feux_exilia_1";
		model = "\exilia_infrastructure\feux_exilia_1.p3d";
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




		class AnimationSources
		{
			class cache_1
			{
				source = "user";
				animPeriod = 0.1;
				initPhase = 1;
			};
			class cache_2
			{
				source = "user";
				animPeriod = 0.1;
				initPhase = 1;
			};
			class cache_3
			{
				source = "user";
				animPeriod = 0.1;
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
};


class feux_exilia_2: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "feux_exilia_2";
	model = "\exilia_infrastructure\feux_exilia_2.p3d";
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




	class AnimationSources
	{
		class cache_1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 1;
		};
		class cache_2
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 1;
		};
		class cache_3
		{
			source = "user";
			animPeriod = 0.1;
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
};

class feuxpieton_exilia_1: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "feuxpieton_exilia_1";
	model = "\exilia_infrastructure\feuxpieton_exilia_1.p3d";
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




	class AnimationSources
	{
		class cache_1
		{
			source = "user";
			animPeriod = 0.1;
			initPhase = 1;
		};
		class cache_2
		{
			source = "user";
			animPeriod = 0.1;
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
};
class parkmetre_exilia: Popoff_Objet
{
	scope = 2;
	scopeCurator = 2;
	displayName = "parkmetre_exilia";
	model = "\exilia_infrastructure\parkmetre_exilia.p3d";
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
		class rot_1
		{
			source = "user";
			animPeriod = 300;
			initPhase = 1;
		};
		class epuise_1
		{
			source = "user";
			animPeriod = 300;
			initPhase = 1;
		};
	};
};


};
