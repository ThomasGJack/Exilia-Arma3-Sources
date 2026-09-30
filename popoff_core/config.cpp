class CfgPatches
{
	class popoff_core
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={};
	};
};

class CfgEditorCategories
{
	class Popoff_creation
	{
		displayName = "Popoff";
		priority = 1;
		side = 1;
	};
};

class CfgEditorSubcategories
{
	class Batiment // Category class, you point to it in editorCategory property
	{
		displayName = "Batiment"; // Name visible in the list
	};
};

class CfgSounds
{
	sounds[] = {};

  class montecharge {
		name = "montecharge";
		sound[] = {"popoff_core\sounds\montecharge.ogg", 3.0, 1};
		titles[] = {};
	};
	class alertenucleaire
	{
		name = "alertenucleaire";
		sound[] = {"popoff_core\sounds\alertenucleaire.ogg", 7.0, 1};
		titles[] = {};
	};
	class porte_1
	{
		name = "porte_1";
		sound[] = {"popoff_core\sounds\open_door_1.ogg", 1.0, 1};
		titles[] = {};
	};
	class drill_5min
	{
		name = "drill_5min";
		sound[] = {"popoff_core\sounds\drill_5min.ogg", 1.0, 1};
		titles[] = {};
	};
	class chiottes
	{
		name = "chiottes";
		sound[] = {"popoff_core\sounds\chiottes.ogg", 7.0, 1};
		titles[] = {};
	};
	class chasseeau
	{
		name = "chasseeau";
		sound[] = {"popoff_core\sounds\chasseeau.ogg", 7.0, 1};
		titles[] = {};
	};
	class compacteur
	{
		name = "compacteur";
		sound[] = {"popoff_core\sounds\compacteur.ogg", 7.0, 1};
		titles[] = {};
	};
	class chantier1
	{
		name = "chantier1";
		sound[] = {"popoff_core\sounds\chantier1.ogg", 7.0, 1};
		titles[] = {};
	};
	class grotte1
	{
		name = "grotte1";
		sound[] = {"popoff_core\sounds\grotte1.ogg", 1.0, 1};
		titles[] = {};
	};
	class grotte2
	{
		name = "grotte2";
		sound[] = {"popoff_core\sounds\grotte2.ogg", 1.0, 1};
		titles[] = {};
	};
	class grotte3
	{
		name = "grotte3";
		sound[] = {"popoff_core\sounds\grotte3.ogg", 1.0, 1};
		titles[] = {};
	};
	class grotte4
	{
		name = "grotte4";
		sound[] = {"popoff_core\sounds\grotte4.ogg", 1.0, 1};
		titles[] = {};
	};
	class grotte5
	{
		name = "grotte5";
		sound[] = {"popoff_core\sounds\grotte5.ogg", 1.0, 1};
		titles[] = {};
	};
	class grotte6
	{
		name = "grotte6";
		sound[] = {"popoff_core\sounds\grotte6.ogg", 1.0, 1};
		titles[] = {};
	};
	class bip
	{
		name = "chasseeau";
		sound[] = {"popoff_core\sounds\bip.ogg", 1.0, 1};
		titles[] = {};
	};
};
