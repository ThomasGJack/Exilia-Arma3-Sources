#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class Exilia_Markers
	{
		requiredAddons[]={"Exilia_Data"};
		requiredVersion=1;
		units[]={};
		weapons[]={};
	};
};

class CfgMarkers
{
	class Exilia_Mrk_Base
	{
		name="Base";
		icon="\Exilia_Markers\data\Mrk\Mrk_Base.paa";
		color[]={1,1,1,1};
		size=34;
		scope=2;
		scopeCurator=2;
		shadow=1;
		markerClass="Exilia_Markers_All";
	};

	class Exilia_Mrk_Logo
	{
		name="Logo";
		icon="\Exilia_Data\Textures\logo_Exilia.paa";
		color[]={1,1,1,1};
		size=128;
		scope=2;
		scopeCurator = 2;
		shadow=1;
		markerClass="Exilia_Markers_All";
	};

	class Exilia_Mrk_Air_Service : Exilia_Mrk_Base
	{
		name="Air Service";
		icon="\Exilia_Markers\data\Mrk\Mrk_Air_Service.paa";
	};

	class Exilia_Mrk_Air_Shop : Exilia_Mrk_Base
	{
		name="Air Shop";
		icon="\Exilia_Markers\data\Mrk\Mrk_Air_Shop.paa";
	};

	class Exilia_Mrk_Antenne : Exilia_Mrk_Base
	{
		name="Antenne";
		icon="\Exilia_Markers\data\Mrk\Mrk_Antenne.paa";
	};

	class Exilia_Mrk_Armurerie : Exilia_Mrk_Base
	{
		name="Armurerie";
		icon="\Exilia_Markers\data\Mrk\Mrk_Armurerie.paa";
	};

	class Exilia_Mrk_Auto_Ecole : Exilia_Mrk_Base
	{
		name="Auto Ecole";
		icon="\Exilia_Markers\data\Mrk\Mrk_Auto_Ecole.paa";
	};

	class Exilia_Mrk_Car : Exilia_Mrk_Base
	{
		name="Car";
		icon="\Exilia_Markers\data\Mrk\Mrk_Car";
	};

	class Exilia_Mrk_Clothing_Base : Exilia_Mrk_Base
	{
		name="Basic Clothing Store";
		icon="\Exilia_Markers\data\Mrk\Mrk_Clothing_Base.paa";
	};

	class Exilia_Mrk_Clothing_Deluxe : Exilia_Mrk_Base
	{
		name="Luxe Clothing Store";
		icon="\Exilia_Markers\data\Mrk\Mrk_Clothing_Deluxe";
	};

	class Exilia_Mrk_Criminel : Exilia_Mrk_Base
	{
		name="Camp Criminel";
		icon="\Exilia_Markers\data\Mrk\Mrk_Criminel";
	};

	class Exilia_Mrk_Dp : Exilia_Mrk_Base
	{
		name="DP";
		icon="\Exilia_Markers\data\Mrk\Mrk_Dp.paa";
	};

	class Exilia_Mrk_FireDepartement : Exilia_Mrk_Base
	{
		name="Fire Station";
		icon="\Exilia_Markers\data\Mrk\Mrk_FireDepartement.paa";
	};

	class Exilia_Mrk_Furniture : Exilia_Mrk_Base
	{
		name="Meubles";
		icon="\Exilia_Markers\data\Mrk\Mrk_Furniture.paa";
	};

	class Exilia_Mrk_GeneralStore : Exilia_Mrk_Base
	{
		name="General Store";
		icon="\Exilia_Markers\data\Mrk\Mrk_GeneralStore.paa";
	};

	class Exilia_Mrk_Gouv : Exilia_Mrk_Base
	{
		name="Gouvernement";
		icon="\Exilia_Markers\data\Mrk\Mrk_Gouvernement.paa";
	};

	class Exilia_Mrk_Market : Exilia_Mrk_Base
	{
		name="Market";
		icon="\Exilia_Markers\data\Mrk\Mrk_Market.paa";
	};

	class Exilia_Mrk_Phone : Exilia_Mrk_Base
	{
		name="Australia Phone";
		icon="\Exilia_Markers\data\Mrk\Mrk_Phone.paa";
	};

	class Exilia_Mrk_Port : Exilia_Mrk_Base
	{
		name="Port";
		icon="\Exilia_Markers\data\Mrk\Mrk_port.paa";
	};

	class Exilia_Mrk_recycleur : Exilia_Mrk_Base
	{
		name="Recycleur";
		icon="\Exilia_Markers\data\Mrk\Mrk_recycleur.paa";
	};

	class Exilia_Mrk_Scuba : Exilia_Mrk_Base
	{
		name="Scuba";
		icon="\Exilia_Markers\data\Mrk\Mrk_Scuba.paa";
	};

	class Exilia_Mrk_Sheriff : Exilia_Mrk_Base
	{
		name="Sheriff";
		icon="\Exilia_Markers\data\Mrk\Mrk_Sheriff.paa";
	};

	class Exilia_Mrk_Subway : Exilia_Mrk_Base
	{
		name="Subway";
		icon="\Exilia_Markers\data\Mrk\Mrk_Subway.paa";
	};

	class Exilia_Mrk_Terrorist : Exilia_Mrk_Base
	{
		name="Camp Terroriste";
		icon="\Exilia_Markers\data\Mrk\Mrk_Terrorist.paa";
	};

	class Exilia_Mrk_Truck : Exilia_Mrk_Base
	{
		name="truck";
		icon="\Exilia_Markers\data\Mrk\Mrk_Truck.paa";
	};

	class Exilia_Mrk_Voyou : Exilia_Mrk_Base
	{
		name="Camp Voyou";
		icon="\Exilia_Markers\data\Mrk\Mrk_Voyou.paa";
	};
	
	class Exilia_Mrk_Marche_Noir: Exilia_Mrk_Base
{
		name="Marché Noir";
		icon="\Exilia_Markers\data\Mrk\mrk_marchenoir.paa";
	};
	
	class Exilia_Mrk_Lacoste: Exilia_Mrk_Base
{
		name="Lacoste";
		icon="\Exilia_Markers\data\Mrk\mrk_lacoste.paa";
	};
	
	#include "ressources.hpp"
	#include "defcon.hpp"
};
