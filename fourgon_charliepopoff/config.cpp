//Exemple de Charlieco89'mods
#include "basicdefines_A3.hpp"
class DefaultEventhandlers;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class CfgPatches
{
	class fourgon_charliepopoff//class name de AddOn_Cars provenant du config.cpp du pbo d'origine
	{
		units[]= {"Brinks_charlipopoff",};//class name de ton skin
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={};
	};
};
class CfgVehicles
{
	class chVario_Blinde_base_F;//class name de base dans le config.cpp du pbo d'orgine
	class chVario_brinks : chVario_Blinde_base_F{}; //class name de ton skin avec la class name base d'origine
	class Brinks_charlipopoff : chVario_brinks //class name de ton skin avec la class name base d'origine
	{
		scope = public;
		crew = "C_man_1";
		side = 3;//https://community.bistudio.com/wiki/CfgVehicles_Config_Reference#side permet de definir l'équipe dans l'éditeur
		faction = CIV_F;
		displayName = "Fourgon Brinks systeme bancaire";//Nom en jeu
		author = "Charlieco89-Popoff1888";//Nom de l'auteur

		class UserActions
		{
			class rechargerfourgon
			{
				displayName="Déposer malette du fourgon";
				position="drivewheel";
				radius=2.5;
				condition="(MissionNameSpace getVariable[""License_civ_brinks"",false])";
				statement=([this] spawn Popoff_fnc_rechargerfourgon);
				onlyforplayer="false";
			};
			class dechargerfourgon
			{
				displayName="Retirer malette du fourgon";
				position="drivewheel";
				radius=2.5;
				condition="(MissionNameSpace getVariable[""License_civ_brinks"",false])";
				statement=([this] spawn Popoff_fnc_dechargerfourgon);
				onlyforplayer="false";
			};
			class Compterfourgon
			{
				displayName="Faire les comptes";
				position="drivewheel";
				radius=2.5;
				condition="(MissionNameSpace getVariable[""License_civ_brinks"",false])";
				statement=([this] spawn Popoff_fnc_compteratm);
				onlyforplayer="false";
			};
			class forcerfourgon
			{
				displayName="Faire peter";
				position="drivewheel";
				radius=2.5;
				condition="!(MissionNameSpace getVariable[""License_civ_brinks"",false])";
				statement=([this] spawn Popoff_fnc_forcerfourgon);
				onlyforplayer="false";
			};
		};
  };
  class chscania_bdf_base_F;//class name de base dans le config.cpp du pbo d'orgine
	class chscania_bdf : chscania_bdf_base_F{}; //class name de ton skin avec la class name base d'origine
	class Brinks_lourd_charlipopoff : chscania_bdf //class name de ton skin avec la class name base d'origine
	{
		scope = public;
		crew = "C_man_1";
		side = 3;//https://community.bistudio.com/wiki/CfgVehicles_Config_Reference#side permet de definir l'équipe dans l'éditeur
		faction = CIV_F;
		displayName = "Fourgon Banque de France systeme bancaire";//Nom en jeu
		author = "Charlieco89-Popoff1888";//Nom de l'auteur

		class UserActions
		{
			class Control_uav2
			{
				displayName="tester2";
				position="drivewheel";
				radius=3;
				condition="(MissionNameSpace getVariable[""License_civ_brinks"",false])";
				statement=([this] spawn BIS_fnc_init_drone);
				onlyforplayer="false";
			};
		};
  };
};
