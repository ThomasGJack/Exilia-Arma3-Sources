class CfgPatches
{
	class exilia_dep
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
	class exilia_piston: CA_Magazine
	{
		mass=10;
		displayName="piston";
		author="popoff";
		model="\exilia_dep\3d\piston";
		picture ="\exilia_dep\textures\piston.paa";
		descriptionShort="piston";
		scope=2;
	};
	class exilia_joint_culasse: CA_Magazine
	{
		mass=10;
		displayName="joint_culasse";
		author="popoff";
		model="\exilia_dep\3d\joint_culasse";
		picture ="\exilia_dep\tex\joint_culasse.paa";
		descriptionShort="joint_culasse";
		scope=2;
	};
	class exilia_roue_av_camion: CA_Magazine
	{
		mass=25;
		displayName="roue_av_camion";
		author="popoff";
		model="\exilia_dep\3d\roue_av_camion";
		picture ="\exilia_dep\tex\roue_av_camion.paa";
		descriptionShort="roue_av_camion";
		scope=2;
	};
	class exilia_roue_ar_camion: CA_Magazine
	{
		mass=35;
		displayName="roue_ar_camion";
		author="popoff";
		model="\exilia_dep\3d\roue_ar_camion";
		picture ="\exilia_dep\tex\roue_ar_camion.paa";
		descriptionShort="roue_ar_camion";
		scope=2;
	};
	class exilia_roue_voiture: CA_Magazine
	{
		mass=20;
		displayName="roue_voiture";
		author="popoff";
		model="\exilia_dep\3d\roue_voiture";
		picture ="\exilia_dep\tex\roue_voiture.paa";
		descriptionShort="roue_voiture";
		scope=2;
	};
	class exilia_roue_moto: CA_Magazine
	{
		mass=20;
		displayName="roue_moto";
		author="popoff";
		model="\exilia_dep\3d\roue_moto";
		picture ="\exilia_dep\tex\roue_moto.paa";
		descriptionShort="roue_moto";
		scope=2;
	};
	class exilia_bougie: CA_Magazine
	{
		mass=5;
		displayName="bougie";
		author="popoff";
		model="\exilia_dep\3d\bougie";
		picture ="\exilia_dep\tex\bougie.paa";
		descriptionShort="bougie";
		scope=2;
	};
	class exilia_plaquettes: CA_Magazine
	{
		mass=5;
		displayName="plaquettes";
		author="popoff";
		model="\exilia_dep\3d\plaquettes";
		picture ="\exilia_dep\tex\plaquettes.paa";
		descriptionShort="plaquettes";
		scope=2;
	};
	class exilia_vitres: CA_Magazine
	{
		mass=20;
		displayName="vitres";
		author="popoff";
		model="\exilia_dep\3d\vitres";
		picture ="\exilia_dep\tex\vitres.paa";
		descriptionShort="vitres";
		scope=2;
	};
};
