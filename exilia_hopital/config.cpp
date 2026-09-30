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
		units[] = {"exilia_hopital","exilia_hopital_annexe"};
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
	class exilia_hopital: Popoff_Objet
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "hopital";
		model = "\exilia_hopital\exilia_hopital.p3d";
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
				displayName ="Fermer";
				position = "porte_1_trigger";
				radius = 3;
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
			class porte_2
			{
				displayName ="Fermer";
				position = "porte_2_trigger";
				radius = 2.5;
				onlyForPlayer = 0;
				condition = "((this animationSourcePhase ""porte_2"" == 1) && (alive player))";
				statement = "this animateSource [""porte_2"",0]";
			};

			class cporte_2: porte_2
			{
				displayName ="Ouvrir";
				condition = "((this animationSourcePhase ""porte_2"" == 0) && (alive player))";
				statement = "this animateSource [""porte_2"",1]";
			};
			class porte_3
			{
			  displayName ="Fermer";
			  position = "porte_3_trigger";
			  radius = 2.5;
			  onlyForPlayer = 0;
			  condition = "((this animationSourcePhase ""porte_3"" == 1) && (alive player))";
			  statement = "this animateSource [""porte_3"",0]";
			};

			class cporte_3: porte_3
			{
			  displayName ="Ouvrir";
			  condition = "((this animationSourcePhase ""porte_3"" == 0) && (alive player))";
			  statement = "this animateSource [""porte_3"",1]";
			};
			class porte_4
			{
			  displayName ="Fermer";
			  position = "porte_4_trigger";
			  radius = 2.5;
			  onlyForPlayer = 0;
			  condition = "((this animationSourcePhase ""porte_4"" == 1) && (alive player))";
			  statement = "this animateSource [""porte_4"",0]";
			};

			class cporte_4: porte_4
			{
			  displayName ="Ouvrir";
			  condition = "((this animationSourcePhase ""porte_4"" == 0) && (alive player))";
			  statement = "this animateSource [""porte_4"",1]";
			};
			class porte_5
			{
			  displayName ="Fermer";
			  position = "porte_5_trigger";
			  radius = 2.5;
			  onlyForPlayer = 0;
			  condition = "((this animationSourcePhase ""porte_5"" == 1) && (alive player))";
			  statement = "this animateSource [""porte_5"",0]";
			};

			class cporte_5: porte_5
			{
			  displayName ="Ouvrir";
			  condition = "((this animationSourcePhase ""porte_5"" == 0) && (alive player))";
			  statement = "this animateSource [""porte_5"",1]";
			};
			class porte_6
			{
			  displayName ="Fermer";
			  position = "porte_6_trigger";
			  radius = 2.5;
			  onlyForPlayer = 0;
			  condition = "((this animationSourcePhase ""porte_6"" == 1) && (alive player))";
			  statement = "this animateSource [""porte_6"",0]";
			};

			class cporte_6: porte_6
			{
			  displayName ="Ouvrir";
			  condition = "((this animationSourcePhase ""porte_6"" == 0) && (alive player))";
			  statement = "this animateSource [""porte_6"",1]";
			};
			class porte_7
			{
			  displayName ="Fermer";
			  position = "porte_7_trigger";
			  radius = 2.5;
			  onlyForPlayer = 0;
			  condition = "((this animationSourcePhase ""porte_7"" == 1) && (alive player))";
			  statement = "this animateSource [""porte_7"",0]";
			};

			class cporte_7: porte_7
			{
			  displayName ="Ouvrir";
			  condition = "((this animationSourcePhase ""porte_7"" == 0) && (alive player))";
			  statement = "this animateSource [""porte_7"",1]";
			};
			class porte_8
			{
			  displayName ="Fermer";
			  position = "porte_8_trigger";
			  radius = 2.5;
			  onlyForPlayer = 0;
			  condition = "((this animationSourcePhase ""porte_8"" == 1) && (alive player))";
			  statement = "this animateSource [""porte_8"",0]";
			};

			class cporte_8: porte_8
			{
			  displayName ="Ouvrir";
			  condition = "((this animationSourcePhase ""porte_8"" == 0) && (alive player))";
			  statement = "this animateSource [""porte_8"",1]";
			};
			class porte_9
			{
			  displayName ="Fermer";
			  position = "porte_9_trigger";
			  radius = 2.5;
			  onlyForPlayer = 0;
			  condition = "((this animationSourcePhase ""porte_9"" == 1) && (alive player))";
			  statement = "this animateSource [""porte_9"",0]";
			};

			class cporte_9: porte_9
			{
			  displayName ="Ouvrir";
			  condition = "((this animationSourcePhase ""porte_9"" == 0) && (alive player))";
			  statement = "this animateSource [""porte_9"",1]";
			};
			class porte_10
			{
			  displayName ="Fermer";
			  position = "porte_10_trigger";
			  radius = 2.5;
			  onlyForPlayer = 0;
			  condition = "((this animationSourcePhase ""porte_10"" == 1) && (alive player))";
			  statement = "this animateSource [""porte_10"",0]";
			};

			class cporte_10: porte_10
			{
			  displayName ="Ouvrir";
			  condition = "((this animationSourcePhase ""porte_10"" == 0) && (alive player))";
			  statement = "this animateSource [""porte_10"",1]";
			};
			class porte_11
			{
			  displayName ="Fermer";
			  position = "porte_11_trigger";
			  radius = 2.5;
			  onlyForPlayer = 0;
			  condition = "((this animationSourcePhase ""porte_11"" == 1) && (alive player))";
			  statement = "this animateSource [""porte_11"",0]";
			};

			class cporte_11: porte_11
			{
			  displayName ="Ouvrir";
			  condition = "((this animationSourcePhase ""porte_11"" == 0) && (alive player))";
			  statement = "this animateSource [""porte_11"",1]";
			};
			class porte_12
			{
			  displayName ="Fermer";
			  position = "porte_12_trigger";
			  radius = 2.5;
			  onlyForPlayer = 0;
			  condition = "((this animationSourcePhase ""porte_12"" == 1) && (alive player))";
			  statement = "this animateSource [""porte_12"",0]";
			};

			class cporte_12: porte_12
			{
			  displayName ="Ouvrir";
			  condition = "((this animationSourcePhase ""porte_12"" == 0) && (alive player))";
			  statement = "this animateSource [""porte_12"",1]";
			};
			class porte_13
			{
			  displayName ="Fermer";
			  position = "porte_13_trigger";
			  radius = 2.5;
			  onlyForPlayer = 0;
			  condition = "((this animationSourcePhase ""porte_13"" == 1) && (alive player))";
			  statement = "this animateSource [""porte_13"",0]";
			};

			class cporte_13: porte_13
			{
			  displayName ="Ouvrir";
			  condition = "((this animationSourcePhase ""porte_13"" == 0) && (alive player))";
			  statement = "this animateSource [""porte_13"",1]";
			};
			class porte_14
			{
			  displayName ="Fermer";
			  position = "porte_14_trigger";
			  radius = 2.5;
			  onlyForPlayer = 0;
			  condition = "((this animationSourcePhase ""porte_14"" == 1) && (alive player))";
			  statement = "this animateSource [""porte_14"",0]";
			};

			class cporte_14: porte_14
			{
			  displayName ="Ouvrir";
			  condition = "((this animationSourcePhase ""porte_14"" == 0) && (alive player))";
			  statement = "this animateSource [""porte_14"",1]";
			};
			class porte_15
			{
			  displayName ="Fermer";
			  position = "porte_15_trigger";
			  radius = 2.5;
			  onlyForPlayer = 0;
			  condition = "((this animationSourcePhase ""porte_15"" == 1) && (alive player))";
			  statement = "this animateSource [""porte_15"",0]";
			};

			class cporte_15: porte_15
			{
			  displayName ="Ouvrir";
			  condition = "((this animationSourcePhase ""porte_15"" == 0) && (alive player))";
			  statement = "this animateSource [""porte_15"",1]";
			};
			class porte_16
			{
			  displayName ="Fermer";
			  position = "porte_16_trigger";
			  radius = 2.5;
			  onlyForPlayer = 0;
			  condition = "((this animationSourcePhase ""porte_16"" == 1) && (alive player))";
			  statement = "this animateSource [""porte_16"",0]";
			};

			class cporte_16: porte_16
			{
			  displayName ="Ouvrir";
			  condition = "((this animationSourcePhase ""porte_16"" == 0) && (alive player))";
			  statement = "this animateSource [""porte_16"",1]";
			};
			class porte_17
			{
			  displayName ="Fermer";
			  position = "porte_17_trigger";
			  radius = 2.5;
			  onlyForPlayer = 0;
			  condition = "((this animationSourcePhase ""porte_17"" == 1) && (alive player))";
			  statement = "this animateSource [""porte_17"",0]";
			};

			class cporte_17: porte_17
			{
			  displayName ="Ouvrir";
			  condition = "((this animationSourcePhase ""porte_17"" == 0) && (alive player))";
			  statement = "this animateSource [""porte_17"",1]";
			};
			class porte_18
			{
			  displayName ="Fermer";
			  position = "porte_18_trigger";
			  radius = 2.5;
			  onlyForPlayer = 0;
			  condition = "((this animationSourcePhase ""porte_18"" == 1) && (alive player))";
			  statement = "this animateSource [""porte_18"",0]";
			};

			class cporte_18: porte_18
			{
			  displayName ="Ouvrir";
			  condition = "((this animationSourcePhase ""porte_18"" == 0) && (alive player))";
			  statement = "this animateSource [""porte_18"",1]";
			};
			class porte_19
			{
			  displayName ="Fermer";
			  position = "porte_19_trigger";
			  radius = 2.5;
			  onlyForPlayer = 0;
			  condition = "((this animationSourcePhase ""porte_19"" == 1) && (alive player))";
			  statement = "this animateSource [""porte_19"",0]";
			};

			class cporte_19: porte_19
			{
			  displayName ="Ouvrir";
			  condition = "((this animationSourcePhase ""porte_19"" == 0) && (alive player))";
			  statement = "this animateSource [""porte_19"",1]";
			};
			class porte_20
			{
			  displayName ="Ouvrir";
			  position = "porte_20_trigger";
			  radius = 2.5;
			  onlyForPlayer = 0;
			  condition = "((this animationSourcePhase ""porte_20"" == 1) && (alive player))";
			  statement = "this animateSource [""porte_20"",0]";
			};

			class cporte_20: porte_20
			{
			  displayName ="Fermer";
			  condition = "((this animationSourcePhase ""porte_20"" == 0) && (alive player))";
			  statement = "this animateSource [""porte_20"",1]";
			};
			class porte_22
			{
			  displayName ="Ouvrir";
			  position = "porte_22_trigger";
			  radius = 2.5;
			  onlyForPlayer = 0;
			  condition = "((this animationSourcePhase ""porte_22"" == 1) && (alive player))";
			  statement = "this animateSource [""porte_22"",0]";
			};

			class cporte_22: porte_22
			{
			  displayName ="Fermer";
			  condition = "((this animationSourcePhase ""porte_22"" == 0) && (alive player))";
			  statement = "this animateSource [""porte_22"",1]";
			};
			class porte_24
			{
			  displayName ="Ouvrir";
			  position = "porte_24_trigger";
			  radius = 2.5;
			  onlyForPlayer = 0;
			  condition = "((this animationSourcePhase ""porte_24"" == 1) && (alive player))";
			  statement = "this animateSource [""porte_24"",0]";
			};

			class cporte_24: porte_24
			{
			  displayName ="Fermer";
			  condition = "((this animationSourcePhase ""porte_24"" == 0) && (alive player))";
			  statement = "this animateSource [""porte_24"",1]";
			};
			class porte_25
			{
			  displayName ="Ouvrir";
			  position = "porte_25_trigger";
			  radius = 2.5;
			  onlyForPlayer = 0;
			  condition = "((this animationSourcePhase ""porte_25"" == 1) && (alive player))";
			  statement = "this animateSource [""porte_25"",0]";
			};

			class cporte_25: porte_25
			{
			  displayName ="Fermer";
			  condition = "((this animationSourcePhase ""porte_25"" == 0) && (alive player))";
			  statement = "this animateSource [""porte_25"",1]";
			};
			class porte_26
			{
			  displayName ="Ouvrir";
			  position = "porte_26_trigger";
			  radius = 2.5;
			  onlyForPlayer = 0;
			  condition = "((this animationSourcePhase ""porte_26"" == 1) && (alive player))";
			  statement = "this animateSource [""porte_26"",0]";
			};

			class cporte_26: porte_26
			{
			  displayName ="Fermer";
			  condition = "((this animationSourcePhase ""porte_26"" == 0) && (alive player))";
			  statement = "this animateSource [""porte_26"",1]";
			};
			class porte_27
			{
			  displayName ="Fermer";
			  position = "porte_27_trigger";
			  radius = 2.5;
			  onlyForPlayer = 0;
			  condition = "((this animationSourcePhase ""porte_27"" == 1) && (alive player))";
			  statement = "this animateSource [""porte_27"",0]";
			};

			class cporte_27: porte_27
			{
			  displayName ="Ouvrir";
			  condition = "((this animationSourcePhase ""porte_27"" == 0) && (alive player))";
			  statement = "this animateSource [""porte_27"",1]";
			};
			class porte_29
			{
			  displayName ="Fermer";
			  position = "porte_29_trigger";
			  radius = 2.5;
			  onlyForPlayer = 0;
			  condition = "((this animationSourcePhase ""porte_29"" == 1) && (alive player))";
			  statement = "this animateSource [""porte_29"",0]";
			};

			class cporte_29: porte_29
			{
			  displayName ="Ouvrir";
			  condition = "((this animationSourcePhase ""porte_29"" == 0) && (alive player))";
			  statement = "this animateSource [""porte_29"",1]";
			};
			class porte_31
			{
			  displayName ="Fermer";
			  position = "porte_31_trigger";
			  radius = 2.5;
			  onlyForPlayer = 0;
			  condition = "((this animationSourcePhase ""porte_31"" == 1) && (alive player))";
			  statement = "this animateSource [""porte_31"",0]";
			};

			class cporte_31: porte_31
			{
			  displayName ="Ouvrir";
			  condition = "((this animationSourcePhase ""porte_31"" == 0) && (alive player))";
			  statement = "this animateSource [""porte_31"",1]";
			};
			class porte_33
			{
			  displayName ="Fermer";
			  position = "porte_33_trigger";
			  radius = 2.5;
			  onlyForPlayer = 0;
			  condition = "((this animationSourcePhase ""porte_33"" == 1) && (alive player))";
			  statement = "this animateSource [""porte_33"",0]";
			};

			class cporte_33: porte_33
			{
			  displayName ="Ouvrir";
			  condition = "((this animationSourcePhase ""porte_33"" == 0) && (alive player))";
			  statement = "this animateSource [""porte_33"",1]";
			};
			class porte_35
			{
			  displayName ="Fermer";
			  position = "porte_35_trigger";
			  radius = 2.5;
			  onlyForPlayer = 0;
			  condition = "((this animationSourcePhase ""porte_35"" == 1) && (alive player))";
			  statement = "this animateSource [""porte_35"",0]";
			};

			class cporte_35: porte_35
			{
			  displayName ="Ouvrir";
			  condition = "((this animationSourcePhase ""porte_35"" == 0) && (alive player))";
			  statement = "this animateSource [""porte_35"",1]";
			};
			class porte_37
			{
			  displayName ="Fermer";
			  position = "porte_37_trigger";
			  radius = 2.5;
			  onlyForPlayer = 0;
			  condition = "((this animationSourcePhase ""porte_37"" == 1) && (alive player))";
			  statement = "this animateSource [""porte_37"",0]";
			};

			class cporte_37: porte_37
			{
			  displayName ="Ouvrir";
			  condition = "((this animationSourcePhase ""porte_37"" == 0) && (alive player))";
			  statement = "this animateSource [""porte_37"",1]";
			};
			class porte_38
			{
			  displayName ="Fermer";
			  position = "porte_38_trigger";
			  radius = 2.5;
			  onlyForPlayer = 0;
			  condition = "((this animationSourcePhase ""porte_38"" == 1) && (alive player))";
			  statement = "this animateSource [""porte_38"",0]";
			};

			class cporte_38: porte_38
			{
			  displayName ="Ouvrir";
			  condition = "((this animationSourcePhase ""porte_38"" == 0) && (alive player))";
			  statement = "this animateSource [""porte_38"",1]";
			};
			class porte_39
			{
			  displayName ="Fermer";
			  position = "porte_39_trigger";
			  radius = 2.5;
			  onlyForPlayer = 0;
			  condition = "((this animationSourcePhase ""porte_39"" == 1) && (alive player))";
			  statement = "this animateSource [""porte_39"",0]";
			};

			class cporte_39: porte_39
			{
			  displayName ="Ouvrir";
			  condition = "((this animationSourcePhase ""porte_39"" == 0) && (alive player))";
			  statement = "this animateSource [""porte_39"",1]";
			};
			class porte_40
			{
			  displayName ="Fermer";
			  position = "porte_40_trigger";
			  radius = 2.5;
			  onlyForPlayer = 0;
			  condition = "((this animationSourcePhase ""porte_40"" == 1) && (alive player))";
			  statement = "this animateSource [""porte_40"",0]";
			};

			class cporte_40: porte_40
			{
			  displayName ="Ouvrir";
			  condition = "((this animationSourcePhase ""porte_40"" == 0) && (alive player))";
			  statement = "this animateSource [""porte_40"",1]";
			};
			class porte_41
			{
			  displayName ="Fermer";
			  position = "porte_41_trigger";
			  radius = 2.5;
			  onlyForPlayer = 0;
			  condition = "((this animationSourcePhase ""porte_41"" == 1) && (alive player))";
			  statement = "this animateSource [""porte_41"",0]";
			};

			class cporte_41: porte_41
			{
			  displayName ="Ouvrir";
			  condition = "((this animationSourcePhase ""porte_41"" == 0) && (alive player))";
			  statement = "this animateSource [""porte_41"",1]";
			};
			class porte_garage_1
			{
			  displayName ="Ouvrir";
			  position = "porte_garage_1_trigger";
			  radius = 2.5;
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
			class porte_garage_2
			{
			  displayName ="Ouvrir";
			  position = "porte_garage_2_trigger";
			  radius = 2.5;
			  onlyForPlayer = 0;
			  condition = "((this animationSourcePhase ""porte_garage_2"" == 1) && (alive player))";
			  statement = "this animateSource [""porte_garage_2"",0]";
			};

			class cporte_garage_2: porte_garage_2
			{
			  displayName ="Fermer";
			  condition = "((this animationSourcePhase ""porte_garage_2"" == 0) && (alive player))";
			  statement = "this animateSource [""porte_garage_2"",1]";
			};
			class porte_garage_3
			{
			  displayName ="Ouvrir";
			  position = "porte_garage_3_trigger";
			  radius = 2.5;
			  onlyForPlayer = 0;
			  condition = "((this animationSourcePhase ""porte_garage_3"" == 1) && (alive player))";
			  statement = "this animateSource [""porte_garage_3"",0]";
			};

			class cporte_garage_3: porte_garage_3
			{
			  displayName ="Fermer";
			  condition = "((this animationSourcePhase ""porte_garage_3"" == 0) && (alive player))";
			  statement = "this animateSource [""porte_garage_3"",1]";
			};
			class porte_garage_4
			{
			  displayName ="Ouvrir";
			  position = "porte_garage_4_trigger";
			  radius = 2.5;
			  onlyForPlayer = 0;
			  condition = "((this animationSourcePhase ""porte_garage_4"" == 1) && (alive player))";
			  statement = "this animateSource [""porte_garage_4"",0]";
			};

			class cporte_garage_4: porte_garage_4
			{
			  displayName ="Fermer";
			  condition = "((this animationSourcePhase ""porte_garage_4"" == 0) && (alive player))";
			  statement = "this animateSource [""porte_garage_4"",1]";
			};
			class porte_garage_5
			{
			  displayName ="Ouvrir";
			  position = "porte_garage_5_trigger";
			  radius = 2.5;
			  onlyForPlayer = 0;
			  condition = "((this animationSourcePhase ""porte_garage_5"" == 1) && (alive player))";
			  statement = "this animateSource [""porte_garage_5"",0]";
			};

			class cporte_garage_5: porte_garage_5
			{
			  displayName ="Fermer";
			  condition = "((this animationSourcePhase ""porte_garage_5"" == 0) && (alive player))";
			  statement = "this animateSource [""porte_garage_5"",1]";
			};
			class porte_garage_6
			{
			  displayName ="Ouvrir";
			  position = "porte_garage_6_trigger";
			  radius = 2.5;
			  onlyForPlayer = 0;
			  condition = "((this animationSourcePhase ""porte_garage_6"" == 1) && (alive player))";
			  statement = "this animateSource [""porte_garage_6"",0]";
			};

			class cporte_garage_6: porte_garage_6
			{
			  displayName ="Fermer";
			  condition = "((this animationSourcePhase ""porte_garage_6"" == 0) && (alive player))";
			  statement = "this animateSource [""porte_garage_6"",1]";
			};
			class porte_garage_7
			{
			  displayName ="Ouvrir";
			  position = "porte_garage_7_trigger";
			  radius = 2.5;
			  onlyForPlayer = 0;
			  condition = "((this animationSourcePhase ""porte_garage_7"" == 1) && (alive player))";
			  statement = "this animateSource [""porte_garage_7"",0]";
			};

			class cporte_garage_7: porte_garage_7
			{
			  displayName ="Fermer";
			  condition = "((this animationSourcePhase ""porte_garage_7"" == 0) && (alive player))";
			  statement = "this animateSource [""porte_garage_7"",1]";
			};
			class porte_garage_8
			{
			  displayName ="Ouvrir";
			  position = "porte_garage_8_trigger";
			  radius = 2.5;
			  onlyForPlayer = 0;
			  condition = "((this animationSourcePhase ""porte_garage_8"" == 1) && (alive player))";
			  statement = "this animateSource [""porte_garage_8"",0]";
			};

			class cporte_garage_8: porte_garage_8
			{
			  displayName ="Fermer";
			  condition = "((this animationSourcePhase ""porte_garage_8"" == 0) && (alive player))";
			  statement = "this animateSource [""porte_garage_8"",1]";
			};
		};

		class AnimationSources
		{
			class porte_1
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class porte_2
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class porte_3
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
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
				animPeriod = 2;
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
				animPeriod = 2;
				initPhase = 0;
			};
			class porte_9
			{
				source = "user";
				animPeriod = 2;
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
				initPhase = 0;
			};
			class porte_12
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class porte_13
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class porte_14
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
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
				animPeriod = 2;
				initPhase = 0;
			};
			class porte_18
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class porte_19
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class porte_20
			{
			  source = "user";
			  animPeriod = 2;
			  initPhase = 1;
			};
			class porte_22
			{
			  source = "user";
			  animPeriod = 2;
			  initPhase = 1;
			};
			class porte_24
			{
			  source = "user";
			  animPeriod = 2;
			  initPhase = 1;
			};
			class porte_25
			{
			  source = "user";
			  animPeriod = 2;
			  initPhase = 1;
			};
			class porte_26
			{
			  source = "user";
			  animPeriod = 2;
			  initPhase = 1;
			};
			class porte_27
			{
			  source = "user";
			  animPeriod = 2;
			  initPhase = 0;
			};
			class porte_29
			{
			  source = "user";
			  animPeriod = 2;
			  initPhase = 0;
			};
			class porte_31
			{
			  source = "user";
			  animPeriod = 1;
			  initPhase = 0;
			};
			class porte_33
			{
			  source = "user";
			  animPeriod = 1;
			  initPhase = 0;
			};
			class porte_35
			{
			  source = "user";
			  animPeriod = 1;
			  initPhase = 0;
			};
			class porte_37
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class porte_38
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class porte_39
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class porte_40
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class porte_41
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class porte_garage_1
			{
				source = "user";
				animPeriod = 7;
				initPhase = 1;
			};
			class porte_garage_2
			{
				source = "user";
				animPeriod = 7;
				initPhase = 1;
			};
			class porte_garage_3
			{
				source = "user";
				animPeriod = 7;
				initPhase = 1;
			};
			class porte_garage_4
			{
				source = "user";
				animPeriod = 7;
				initPhase = 1;
			};
			class porte_garage_5
			{
				source = "user";
				animPeriod = 7;
				initPhase = 1;
			};
			class porte_garage_6
			{
				source = "user";
				animPeriod = 7;
				initPhase = 1;
			};
			class porte_garage_7
			{
				source = "user";
				animPeriod = 7;
				initPhase = 1;
			};
			class porte_garage_8
			{
				source = "user";
				animPeriod = 7;
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



	class exilia_hopital_annexe: Popoff_Objet
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Hopital 2";
		model = "\exilia_hopital\exilia_hopital_annexe.p3d";
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
				displayName ="Fermer";
				position = "porte_1_trigger";
				radius = 3;
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
			class porte_2
			{
				displayName ="Fermer";
				position = "porte_2_trigger";
				radius = 2.5;
				onlyForPlayer = 0;
				condition = "((this animationSourcePhase ""porte_2"" == 1) && (alive player))";
				statement = "this animateSource [""porte_2"",0]";
			};

			class cporte_2: porte_2
			{
				displayName ="Ouvrir";
				condition = "((this animationSourcePhase ""porte_2"" == 0) && (alive player))";
				statement = "this animateSource [""porte_2"",1]";
			};
			class porte_3
			{
			  displayName ="Fermer";
			  position = "porte_3_trigger";
			  radius = 2.5;
			  onlyForPlayer = 0;
			  condition = "((this animationSourcePhase ""porte_3"" == 1) && (alive player))";
			  statement = "this animateSource [""porte_3"",0]";
			};

			class cporte_3: porte_3
			{
			  displayName ="Ouvrir";
			  condition = "((this animationSourcePhase ""porte_3"" == 0) && (alive player))";
			  statement = "this animateSource [""porte_3"",1]";
			};
			class porte_4
			{
			  displayName ="Fermer";
			  position = "porte_4_trigger";
			  radius = 2.5;
			  onlyForPlayer = 0;
			  condition = "((this animationSourcePhase ""porte_4"" == 1) && (alive player))";
			  statement = "this animateSource [""porte_4"",0]";
			};

			class cporte_4: porte_4
			{
			  displayName ="Ouvrir";
			  condition = "((this animationSourcePhase ""porte_4"" == 0) && (alive player))";
			  statement = "this animateSource [""porte_4"",1]";
			};
			class porte_5
			{
			  displayName ="Fermer";
			  position = "porte_5_trigger";
			  radius = 2.5;
			  onlyForPlayer = 0;
			  condition = "((this animationSourcePhase ""porte_5"" == 1) && (alive player))";
			  statement = "this animateSource [""porte_5"",0]";
			};

			class cporte_5: porte_5
			{
			  displayName ="Ouvrir";
			  condition = "((this animationSourcePhase ""porte_5"" == 0) && (alive player))";
			  statement = "this animateSource [""porte_5"",1]";
			};
			class porte_6
			{
			  displayName ="Fermer";
			  position = "porte_6_trigger";
			  radius = 2.5;
			  onlyForPlayer = 0;
			  condition = "((this animationSourcePhase ""porte_6"" == 1) && (alive player))";
			  statement = "this animateSource [""porte_6"",0]";
			};

			class cporte_6: porte_6
			{
			  displayName ="Ouvrir";
			  condition = "((this animationSourcePhase ""porte_6"" == 0) && (alive player))";
			  statement = "this animateSource [""porte_6"",1]";
			};
			class porte_7
			{
			  displayName ="Fermer";
			  position = "porte_7_trigger";
			  radius = 2.5;
			  onlyForPlayer = 0;
			  condition = "((this animationSourcePhase ""porte_7"" == 1) && (alive player))";
			  statement = "this animateSource [""porte_7"",0]";
			};

			class cporte_7: porte_7
			{
			  displayName ="Ouvrir";
			  condition = "((this animationSourcePhase ""porte_7"" == 0) && (alive player))";
			  statement = "this animateSource [""porte_7"",1]";
			};
		};

		class AnimationSources
		{
			class porte_1
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class porte_2
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class porte_3
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
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
				animPeriod = 2;
				initPhase = 0;
			};
			class porte_7
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
