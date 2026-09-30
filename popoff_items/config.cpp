class CfgPatches
{
	class popoff_items
	{
		units[]=
		{
			""
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"CBA_common"
		};
	};
};
class cfgMagazines
{
	class CA_Magazine;
	class perceuse_popoff_2: CA_Magazine
	{
		mass=150;
		displayName="Perceuse lourde";
		author="popoff";
		model="\braquage\perceuse_popoff";
		picture ="\popoff_items\icones\perceuse.paa";
		descriptionShort="Une perceuse à coffre fort";
		scope=2;
	};
	class crochet_popoff: CA_Magazine
	{
		mass=1;
		scope=2;
		author="popoff";
		picture ="\popoff_items\icones\crochets.paa";
		displayName="Crochets";
		model="\popoff_items\3d\crochet_popoff";
	};
	class tnt_popoff_2: CA_Magazine
	{
		mass=15;
		scope=2;
		author="popoff";
		picture ="\popoff_items\icones\tnt.paa";
		displayName="TNT";
		model="\braquage\tnt_popoff";
	};
};
