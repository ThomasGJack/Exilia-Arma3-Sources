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
		units[] = {"exilia_rehab","exilia_rehab_annexe"};
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
	class exilia_rehab: Popoff_Objet
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "rehab réparations";
		model = "\exilia_rehab\exilia_rehab.p3d";
		aggregateReflectors[] =
		{
			{"Light_1","Light_2","Light_3","Light_4","Light_5","Light_6","Light_7","Light_8","Light_9","Light_10","Light_11","Light_12","Light_13","Light_14"}
		};
		author = "Popoff";
		// icon = "\WHships\Imperium\data\apocalypse_icon_ca.paa";
		// picture = "\WHships\Imperium\data\apocalypse_icon_ca.paa";
		// editorPreview = "\WHships\Imperium\data\apocalypse_preview_ca.paa";
		mapSize = 450;
		editorCategory = "Popoff_creation";
		ladders[]=
		{

		  {
		    "Ladder_1_start",
		    "Ladder_1_end",
		    2.1,
		    "Ladder_1_action"
		  },

		  {
		    "Ladder_2_start",
		    "Ladder_2_end",
		    2.1,
		    "Ladder_2_action"
		  }
		};



		class Reflectors
		{
			class Light_1
			{
				color[]				= {250,400,600};
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
			class Light_3
			{
			  color[]				= {250,400,600};
			  ambient[]			= {2.5,4,6};
			  intensity			= 2;
			  size				= 1;					/// size of the light point seen from distance
			  innerAngle			= 100;					/// angle of full light
			  outerAngle			= 165;					/// angle of some light
			  coneFadeCoef		= 4;					/// attenuation of light between the above angles

			  position			= "Light_3_pos";		/// memory point for start of the light and flare
			  direction			= "Light_3_dir";		/// memory point for the light direction
			  hitpoint			= "Light_3_hitpoint";	/// point(s) in hitpoint lod for the light (hitPoints are created by engine)
			  selection			= "Light_3_hide";		/// selection for artificial glow around the bulb, not much used any more

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
			class Light_4
			{
			  color[]				= {250,400,600};
			  ambient[]			= {2.5,4,6};
			  intensity			= 2;
			  size				= 1;					/// size of the light point seen from distance
			  innerAngle			= 100;					/// angle of full light
			  outerAngle			= 165;					/// angle of some light
			  coneFadeCoef		= 4;					/// attenuation of light between the above angles

			  position			= "Light_4_pos";		/// memory point for start of the light and flare
			  direction			= "Light_4_dir";		/// memory point for the light direction
			  hitpoint			= "Light_4_hitpoint";	/// point(s) in hitpoint lod for the light (hitPoints are created by engine)
			  selection			= "Light_4_hide";		/// selection for artificial glow around the bulb, not much used any more

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
			class Light_5
			{
			  color[]				= {250,400,600};
			  ambient[]			= {2.5,4,6};
			  intensity			= 2;
			  size				= 1;					/// size of the light point seen from distance
			  innerAngle			= 100;					/// angle of full light
			  outerAngle			= 165;					/// angle of some light
			  coneFadeCoef		= 4;					/// attenuation of light between the above angles

			  position			= "Light_5_pos";		/// memory point for start of the light and flare
			  direction			= "Light_5_dir";		/// memory point for the light direction
			  hitpoint			= "Light_5_hitpoint";	/// point(s) in hitpoint lod for the light (hitPoints are created by engine)
			  selection			= "Light_5_hide";		/// selection for artificial glow around the bulb, not much used any more

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
			class Light_6
			{
			  color[]				= {250,400,600};
			  ambient[]			= {2.5,4,6};
			  intensity			= 2;
			  size				= 1;					/// size of the light point seen from distance
			  innerAngle			= 100;					/// angle of full light
			  outerAngle			= 165;					/// angle of some light
			  coneFadeCoef		= 4;					/// attenuation of light between the above angles

			  position			= "Light_6_pos";		/// memory point for start of the light and flare
			  direction			= "Light_6_dir";		/// memory point for the light direction
			  hitpoint			= "Light_6_hitpoint";	/// point(s) in hitpoint lod for the light (hitPoints are created by engine)
			  selection			= "Light_6_hide";		/// selection for artificial glow around the bulb, not much used any more

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
			class Light_7
			{
			  color[]				= {250,400,600};
			  ambient[]			= {2.5,4,6};
			  intensity			= 2;
			  size				= 1;					/// size of the light point seen from distance
			  innerAngle			= 100;					/// angle of full light
			  outerAngle			= 165;					/// angle of some light
			  coneFadeCoef		= 4;					/// attenuation of light between the above angles

			  position			= "Light_7_pos";		/// memory point for start of the light and flare
			  direction			= "Light_7_dir";		/// memory point for the light direction
			  hitpoint			= "Light_7_hitpoint";	/// point(s) in hitpoint lod for the light (hitPoints are created by engine)
			  selection			= "Light_7_hide";		/// selection for artificial glow around the bulb, not much used any more

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
			class Light_8
			{
			  color[]				= {250,400,600};
			  ambient[]			= {2.5,4,6};
			  intensity			= 2;
			  size				= 1;					/// size of the light point seen from distance
			  innerAngle			= 100;					/// angle of full light
			  outerAngle			= 165;					/// angle of some light
			  coneFadeCoef		= 4;					/// attenuation of light between the above angles

			  position			= "Light_8_pos";		/// memory point for start of the light and flare
			  direction			= "Light_8_dir";		/// memory point for the light direction
			  hitpoint			= "Light_8_hitpoint";	/// point(s) in hitpoint lod for the light (hitPoints are created by engine)
			  selection			= "Light_8_hide";		/// selection for artificial glow around the bulb, not much used any more

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
			class Light_9
			{
			  color[]				= {250,400,600};
			  ambient[]			= {2.5,4,6};
			  intensity			= 2;
			  size				= 1;					/// size of the light point seen from distance
			  innerAngle			= 100;					/// angle of full light
			  outerAngle			= 165;					/// angle of some light
			  coneFadeCoef		= 4;					/// attenuation of light between the above angles

			  position			= "Light_9_pos";		/// memory point for start of the light and flare
			  direction			= "Light_9_dir";		/// memory point for the light direction
			  hitpoint			= "Light_9_hitpoint";	/// point(s) in hitpoint lod for the light (hitPoints are created by engine)
			  selection			= "Light_9_hide";		/// selection for artificial glow around the bulb, not much used any more

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
			class Light_10
			{
			  color[]				= {250,400,600};
			  ambient[]			= {2.5,4,6};
			  intensity			= 2;
			  size				= 1;					/// size of the light point seen from distance
			  innerAngle			= 100;					/// angle of full light
			  outerAngle			= 165;					/// angle of some light
			  coneFadeCoef		= 4;					/// attenuation of light between the above angles

			  position			= "Light_10_pos";		/// memory point for start of the light and flare
			  direction			= "Light_10_dir";		/// memory point for the light direction
			  hitpoint			= "Light_10_hitpoint";	/// point(s) in hitpoint lod for the light (hitPoints are created by engine)
			  selection			= "Light_10_hide";		/// selection for artificial glow around the bulb, not much used any more

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
			class Light_11
			{
			  color[]				= {250,400,600};
			  ambient[]			= {2.5,4,6};
			  intensity			= 2;
			  size				= 1;					/// size of the light point seen from distance
			  innerAngle			= 100;					/// angle of full light
			  outerAngle			= 165;					/// angle of some light
			  coneFadeCoef		= 4;					/// attenuation of light between the above angles

			  position			= "Light_11_pos";		/// memory point for start of the light and flare
			  direction			= "Light_11_dir";		/// memory point for the light direction
			  hitpoint			= "Light_11_hitpoint";	/// point(s) in hitpoint lod for the light (hitPoints are created by engine)
			  selection			= "Light_11_hide";		/// selection for artificial glow around the bulb, not much used any more

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
			class Light_12
			{
			  color[]				= {250,400,600};
			  ambient[]			= {2.5,4,6};
			  intensity			= 2;
			  size				= 1;					/// size of the light point seen from distance
			  innerAngle			= 100;					/// angle of full light
			  outerAngle			= 165;					/// angle of some light
			  coneFadeCoef		= 4;					/// attenuation of light between the above angles

			  position			= "Light_12_pos";		/// memory point for start of the light and flare
			  direction			= "Light_12_dir";		/// memory point for the light direction
			  hitpoint			= "Light_12_hitpoint";	/// point(s) in hitpoint lod for the light (hitPoints are created by engine)
			  selection			= "Light_12_hide";		/// selection for artificial glow around the bulb, not much used any more

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
			class Light_13
			{
			  color[]				= {250,400,600};
			  ambient[]			= {2.5,4,6};
			  intensity			= 2;
			  size				= 1;					/// size of the light point seen from distance
			  innerAngle			= 100;					/// angle of full light
			  outerAngle			= 165;					/// angle of some light
			  coneFadeCoef		= 4;					/// attenuation of light between the above angles

			  position			= "Light_13_pos";		/// memory point for start of the light and flare
			  direction			= "Light_13_dir";		/// memory point for the light direction
			  hitpoint			= "Light_13_hitpoint";	/// point(s) in hitpoint lod for the light (hitPoints are created by engine)
			  selection			= "Light_13_hide";		/// selection for artificial glow around the bulb, not much used any more

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
			class Light_14
			{
			  color[]				= {250,400,600};
			  ambient[]			= {2.5,4,6};
			  intensity			= 2;
			  size				= 1;					/// size of the light point seen from distance
			  innerAngle			= 100;					/// angle of full light
			  outerAngle			= 165;					/// angle of some light
			  coneFadeCoef		= 4;					/// attenuation of light between the above angles

			  position			= "Light_14_pos";		/// memory point for start of the light and flare
			  direction			= "Light_14_dir";		/// memory point for the light direction
			  hitpoint			= "Light_14_hitpoint";	/// point(s) in hitpoint lod for the light (hitPoints are created by engine)
			  selection			= "Light_14_hide";		/// selection for artificial glow around the bulb, not much used any more

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
				displayName ="Ouvrir entrée";
				position = "trigger_entree";
				radius = 3;
				onlyForPlayer = 0;
				condition = "((this animationSourcePhase ""porte_1"" == 1) && (alive player))";
				statement = "this animateSource [""porte_1"",0]";
			};

			class cporte_1: porte_1
			{
				displayName ="Fermer entrée";
				condition = "((this animationSourcePhase ""porte_1"" == 0) && (alive player))";
				statement = "this animateSource [""porte_1"",1]";
			};
			class porte_garage_1
			{
				displayName ="Ouvrir";
				position = "porte_garage_1_trigger";
				radius = 2;
				onlyForPlayer = 0;
				condition = "((this animationSourcePhase ""porte_garage_1"" == 1) && (alive player))";
				statement = "this animateSource [""porte_garage_1"",0]";
			};

			class cporte_garage_1: porte_garage_1
			{
				displayName ="Fermer";
				condition = "((this animationSourcePhase ""porte_garage_1"" == 0) && (alive player))";
				statement = "this animateSource [""porte_garage_1"",1]";
			};
			class porte_3
			{
				displayName ="Passer son badge poste commandement";
				position = "trigger_badge_commandement";
				radius = 2.5;
				onlyForPlayer = 0;
				condition = "((this animationSourcePhase ""porte_3"" == 1) && ((""badge_rehab"" in (magazines player))))";
				statement = ([this] spawn Popoff_fnc_ouvrirsasPC);
			};
			class porte_3_1
			{
				displayName ="Bumper poste commandement";
				position = "trigger_bumper_commandement";
				radius = 2.5;
				onlyForPlayer = 0;
				condition = "((this animationSourcePhase ""porte_3"" == 1) && (alive player))";
				statement = ([this] spawn Popoff_fnc_ouvrirsasPC);
			};
			class porte_4
			{
				displayName ="Fermer vestiaire";
				position = "trigger_vestiaire";
				radius = 2.5;
				onlyForPlayer = 0;
				condition = "((this animationSourcePhase ""porte_4"" == 1) && (alive player))";
				statement = "this animateSource [""porte_4"",0]";
			};

			class cporte_4: porte_4
			{
				displayName ="Ouvrir vestiaire";
				condition = "((this animationSourcePhase ""porte_4"" == 0) && (alive player))";
				statement = "this animateSource [""porte_4"",1]";
			};
			class porte_5
			{
				displayName ="Fermer WC";
				position = "trigger_wc";
				radius = 2.5;
				onlyForPlayer = 0;
				condition = "((this animationSourcePhase ""porte_5"" == 1) && (alive player))";
				statement = "this animateSource [""porte_5"",0]";
			};

			class cporte_5: porte_5
			{
				displayName ="Ouvrir WC";
				condition = "((this animationSourcePhase ""porte_5"" == 0) && (alive player))";
				statement = "this animateSource [""porte_5"",1]";
			};
			class porte_6
			{
				displayName ="Passer son badge lecteur entrée";
				position = "trigger_badge_entree";
				radius = 2.5;
				onlyForPlayer = 0;
				condition = "((this animationSourcePhase ""porte_6"" == 0) && ((""badge_rehab"" in (magazines player))))";
				statement = ([this] spawn Popoff_fnc_ouvrirsasentree);
			};
			class porte_6_1
			{
				displayName ="Bumper entrée";
				position = "trigger_bumper_entree";
				radius = 1.5;
				onlyForPlayer = 0;
				condition = "((this animationSourcePhase ""porte_6"" == 0) && (alive player))";
				statement = ([this] spawn Popoff_fnc_ouvrirsasentree);
			};
			class porte_7
			{
				displayName ="Fermer armurerie";
				position = "trigger_armurerie";
				radius = 2.5;
				onlyForPlayer = 0;
				condition = "((this animationSourcePhase ""porte_7"" == 1) && (alive player))";
				statement = "this animateSource [""porte_7"",0]";
			};

			class cporte_7: porte_7
			{
				displayName ="Ouvrir armurerie";
				condition = "((this animationSourcePhase ""porte_7"" == 0) && (alive player))";
				statement = "this animateSource [""porte_7"",1]";
			};
			class porte_8
			{
				displayName ="Fermer porte blindée armurerie";
				position = "trigger_porte_blindee1";
				radius = 2.5;
				onlyForPlayer = 0;
				condition = "((this animationSourcePhase ""porte_8"" == 1) && (alive player))";
				statement = "this animateSource [""porte_8"",0]";
			};

			class cporte_8: porte_8
			{
				displayName ="Ouvrir porte blindée armurerie";
				condition = "((this animationSourcePhase ""porte_8"" == 0) && (alive player))";
				statement = "this animateSource [""porte_8"",1]";
			};
			class porte_9
			{
				displayName ="Fermer porte blindée conviction";
				position = "trigger_piece_conviction";
				radius = 2.5;
				onlyForPlayer = 0;
				condition = "((this animationSourcePhase ""porte_9"" == 1) && (alive player))";
				statement = "this animateSource [""porte_9"",0]";
			};

			class cporte_9: porte_9
			{
				displayName ="Ouvrir porte blindée conviction";
				condition = "((this animationSourcePhase ""porte_9"" == 0) && (alive player))";
				statement = "this animateSource [""porte_9"",1]";
			};
			class porte_10
			{
				displayName ="Fermer salle repos";
				position = "trigger_cafet";
				radius = 2.5;
				onlyForPlayer = 0;
				condition = "((this animationSourcePhase ""porte_10"" == 1) && (alive player))";
				statement = "this animateSource [""porte_10"",0]";
			};

			class cporte_10: porte_10
			{
				displayName ="Ouvrir salle repos";
				condition = "((this animationSourcePhase ""porte_10"" == 0) && (alive player))";
				statement = "this animateSource [""porte_10"",1]";
			};
			class porte_11
			{
				displayName ="Ouvrir porte garage 1";
				position = "trigger_garage_1";
				radius = 2.5;
				onlyForPlayer = 0;
				condition = "((this animationSourcePhase ""porte_11"" == 1) && (alive player))";
				statement = "this animateSource [""porte_11"",0]";
			};

			class cporte_11: porte_11
			{
				displayName ="Fermer porte garage 1";
				condition = "((this animationSourcePhase ""porte_11"" == 0) && (alive player))";
				statement = "this animateSource [""porte_11"",1]";
			};
			class porte_12
			{
				displayName ="Ouvrir porte garage 2";
				position = "trigger_garage_2";
				radius = 2.5;
				onlyForPlayer = 0;
				condition = "((this animationSourcePhase ""porte_12"" == 1) && (alive player))";
				statement = "this animateSource [""porte_12"",0]";
			};

			class cporte_12: porte_12
			{
				displayName ="Fermer porte garage 2";
				condition = "((this animationSourcePhase ""porte_12"" == 0) && (alive player))";
				statement = "this animateSource [""porte_12"",1]";
			};
			class porte_13
			{
				displayName ="Ouvrir porte exterieur";
				position = "trigger_etage_ext2";
				radius = 2.5;
				onlyForPlayer = 0;
				condition = "((this animationSourcePhase ""porte_13"" == 1) && (alive player))";
				statement = "this animateSource [""porte_13"",0]";
			};

			class cporte_13: porte_13
			{
				displayName ="Fermer porte exterieur";
				condition = "((this animationSourcePhase ""porte_13"" == 0) && (alive player))";
				statement = "this animateSource [""porte_13"",1]";
			};
			class porte_14
			{
				displayName ="Ouvrir porte exterieur";
				position = "trigger_etage_ext";
				radius = 2.5;
				onlyForPlayer = 0;
				condition = "((this animationSourcePhase ""porte_14"" == 1) && (alive player))";
				statement = "this animateSource [""porte_14"",0]";
			};

			class cporte_14: porte_14
			{
				displayName ="Fermer porte exterieur";
				condition = "((this animationSourcePhase ""porte_14"" == 0) && (alive player))";
				statement = "this animateSource [""porte_14"",1]";
			};
			class porte_15
			{
				displayName ="Fermer porte bureau";
				position = "trigger_bureau";
				radius = 2.5;
				onlyForPlayer = 0;
				condition = "((this animationSourcePhase ""porte_15"" == 1) && (alive player))";
				statement = "this animateSource [""porte_15"",0]";
			};

			class cporte_15: porte_15
			{
				displayName ="Ouvrir porte bureau";
				condition = "((this animationSourcePhase ""porte_15"" == 0) && (alive player))";
				statement = "this animateSource [""porte_15"",1]";
			};
			class porte_16
			{
				displayName ="Fermer porte salle interrogatoire";
				position = "trigger_salle_interogatoire";
				radius = 2.5;
				onlyForPlayer = 0;
				condition = "((this animationSourcePhase ""porte_16"" == 1) && (alive player))";
				statement = "this animateSource [""porte_16"",0]";
			};

			class cporte_16: porte_16
			{
				displayName ="Ouvrir porte salle interrogatoire";
				condition = "((this animationSourcePhase ""porte_16"" == 0) && (alive player))";
				statement = "this animateSource [""porte_16"",1]";
			};
			class porte_17
			{
				displayName ="Fermer porte cellule";
				position = "trigger_cellule";
				radius = 2.5;
				onlyForPlayer = 0;
				condition = "((this animationSourcePhase ""porte_17"" == 1) && (alive player))";
				statement = "this animateSource [""porte_17"",0]";
			};

			class cporte_17: porte_17
			{
				displayName ="Ouvrir porte cellule";
				condition = "((this animationSourcePhase ""porte_17"" == 0) && (alive player))";
				statement = "this animateSource [""porte_17"",1]";
			};
			class porte_18
			{
				displayName ="Fermer porte salle sans teint";
				position = "trigger_miroir";
				radius = 2.5;
				onlyForPlayer = 0;
				condition = "((this animationSourcePhase ""porte_18"" == 1) && (alive player))";
				statement = "this animateSource [""porte_18"",0]";
			};

			class cporte_18: porte_18
			{
				displayName ="Ouvrir porte salle sans teint";
				condition = "((this animationSourcePhase ""porte_18"" == 0) && (alive player))";
				statement = "this animateSource [""porte_18"",1]";
			};
		};

		class AnimationSources
		{
			class porte_1
			{
				source = "user";
				animPeriod = 2;
				initPhase = 1;
			};
			class porte_garage_1
			{
				source = "user";
				animPeriod = 7;
				initPhase = 1;
			};
			class porte_3
			{
				source = "user";
				animPeriod = 2;
				initPhase = 1;
			};
			class porte_4
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class porte_5
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class porte_6
			{
				source = "user";
				animPeriod = 5;
				initPhase = 0;
			};
			class porte_7
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class porte_8
			{
				source = "user";
				animPeriod = 6;
				initPhase = 0;
			};
			class porte_9
			{
				source = "user";
				animPeriod = 6;
				initPhase = 0;
			};
			class porte_10
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class porte_11
			{
				source = "user";
				animPeriod = 2;
				initPhase = 1;
			};
			class porte_12
			{
				source = "user";
				animPeriod = 2;
				initPhase = 1;
			};
			class porte_13
			{
				source = "user";
				animPeriod = 2;
				initPhase = 1;
			};
			class porte_14
			{
				source = "user";
				animPeriod = 2;
				initPhase = 1;
			};
			class porte_15
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class porte_16
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class porte_17
			{
				source = "user";
				animPeriod = 4;
				initPhase = 0;
			};
			class porte_18
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
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



	class exilia_rehab_annexe: Popoff_Objet
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Bureau des douanes";
		model = "\exilia_rehab\exilia_rehab_annexe.p3d";
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
		ladders[]=
		{

		  {
		    "Ladder_1_start",
		    "Ladder_1_end",
		    2.5,
		    "Ladder_1_action"
		  },

		  {
		    "Ladder_2_start",
		    "Ladder_2_end",
		    2.5,
		    "Ladder_2_action"
		  }
		};



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
			class porte_3
			{
			  displayName ="Ouvrir";
			  position = "porte_3_trigger";
			  radius = 1.3;
			  onlyForPlayer = 0;
				condition="(side player == west) && this animationPhase ""porte_3"" == 1";
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
				condition="(side player == west) && this animationPhase ""porte_4"" == 1";
			  statement = "this animateSource [""porte_4"",0]";
			};
			class cporte_4: porte_4
			{
			  displayName ="Fermer";
			  condition = "this animationSourcePhase ""porte_4"" == 0";
			  statement = "this animateSource [""porte_4"",1]";
			};
			class porte_5
			{
			  displayName ="Ouvrir";
			  position = "porte_5_trigger";
			  radius = 1.3;
			  onlyForPlayer = 0;
				condition="(side player == west) && this animationPhase ""porte_5"" == 1";
			  statement = "this animateSource [""porte_5"",0]";
			};
			class cporte_5: porte_5
			{
			  displayName ="Fermer";
			  condition = "this animationSourcePhase ""porte_5"" == 0";
			  statement = "this animateSource [""porte_5"",1]";
			};
			class porte_6
			{
			  displayName ="Ouvrir";
			  position = "porte_6_trigger";
			  radius = 1.3;
			  onlyForPlayer = 0;
				condition="(side player == west) && this animationPhase ""porte_6"" == 1";
			  statement = "this animateSource [""porte_6"",0]";
			};
			class cporte_6: porte_6
			{
			  displayName ="Fermer";
			  condition = "this animationSourcePhase ""porte_6"" == 0";
			  statement = "this animateSource [""porte_6"",1]";
			};
			class entree1
			{
			  displayName ="Ouvrir";
			  position = "entree1_trigger";
			  radius = 1.3;
			  onlyForPlayer = 0;
				condition="(side player == west) && this animationPhase ""entree1"" == 1";
			  statement = "this animateSource [""entree1"",0]";
			};
			class centree1: entree1
			{
			  displayName ="Fermer";
			  condition = "this animationSourcePhase ""entree1"" == 0";
			  statement = "this animateSource [""entree1"",1]";
			};
			class cellule1
			{
			  displayName ="Ouvrir cellule gauche";
			  position = "cellule_trigger";
			  radius = 1.3;
			  onlyForPlayer = 0;
				condition="(side player == west) && this animationPhase ""cellule1"" == 1";
			  statement = "this animateSource [""cellule1"",0]";
			};
			class ccellule1: cellule1
			{
			  displayName ="Fermer cellule gauche";
			  condition = "this animationSourcePhase ""cellule1"" == 0";
			  statement = "this animateSource [""cellule1"",1]";
			};
			class cellule2
			{
			  displayName ="Ouvrir cellule droite";
			  position = "cellule_trigger";
			  radius = 1.3;
			  onlyForPlayer = 0;
				condition="(side player == west) && this animationPhase ""cellule2"" == 1";
			  statement = "this animateSource [""cellule2"",0]";
			};
			class ccellule2: cellule2
			{
			  displayName ="Fermer cellule droite";
			  condition = "this animationSourcePhase ""cellule2"" == 0";
			  statement = "this animateSource [""cellule2"",1]";
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

	};
};




};
