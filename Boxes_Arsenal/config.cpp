class CfgPatches
{
	class BA_config
	{
		units[]=
		{
			"DWT_VirtualBox_Small",
			"DWT_VirtualBox_Long",
			"DWT_VirtualBox_Ammo",
			"DWT_VirtualBox_Weapons",
			"DWT_VirtualBox_PaperBox_Full_Open",
			"DWT_VirtualBox_PaperBox_Empty_Open",
			"DWT_VirtualBox_PaperBox_Closed",
			"DWT_VirtualBox_Pallet"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F_BLUFOR"
		};
	};
};
class CfgFunctions
{
	class DWT
	{
		tag="DWT";
		class functions
		{
			class VirtualAmmoBoxSmall
			{
				file="\Boxes_Arsenal\BoxSmallArsenal.sqf";
				description="Calls BI's VirtualAmmoBox";
			};
			class VirtualAmmoBoxLong
			{
				file="\Boxes_Arsenal\BoxLongArsenal.sqf";
				description="Calls BI's VirtualAmmoBox";
			};
			class VirtualAmmoBoxAmmo
			{
				file="\Boxes_Arsenal\BoxAmmoArsenal.sqf";
				description="Calls BI's VirtualAmmoBox";
			};
			class BoxWeaponsArsenal
			{
				file="\Boxes_Arsenal\BoxWeaponsArsenal.sqf";
				description="Calls BI's VirtualAmmoBox";
			};
			class BoxOpenFullArsenal
			{
				file="\Boxes_Arsenal\BoxOpenFullArsenal.sqf";
				description="Calls BI's VirtualAmmoBox";
			};
			class BoxOpenEmptyArsenal
			{
				file="\Boxes_Arsenal\BoxOpenEmptyArsenal.sqf";
				description="Calls BI's VirtualAmmoBox";
			};
			class BoxClosedArsenal
			{
				file="\Boxes_Arsenal\BoxClosedArsenal.sqf";
				description="Calls BI's VirtualAmmoBox";
			};
			class BoxPalletArsenal
			{
				file="\Boxes_Arsenal\BoxPalletArsenal.sqf";
				description="Calls BI's VirtualAmmoBox";
			};
		};
	};
};
class cfgVehicleClasses
{
	class Ammobox_Arsenal
	{
		displayName="Ammo Arsenal";
		icon="";
		priority=1;
	};
};
class CfgVehicles
{
	class Box_NATO_Ammo_F;
	class DWT_VirtualBox_Small: Box_NATO_Ammo_F
	{
		displayName="US Basic Arsenal Small";
		scope=2;
		vehicleClass="Ammobox_Arsenal";
		icon="iconCrateAmmo";
		transportMaxWeapons=40;
		transportMaxMagazines=20;
		model="\A3\weapons_F\AmmoBoxes\Proxy_UsBasicAmmoBoxSmall";
		class EventHandlers
		{
			init="[_this select 0,0] call DWT_fnc_VirtualAmmoBoxSmall;";
		};
		class TransportWeapons
		{
		};
		class TransportMagazines
		{
		};
	};
	class DWT_VirtualBox_Long: Box_NATO_Ammo_F
	{
		displayName="US Basic Arsenal Long";
		scope=2;
		vehicleClass="Ammobox_Arsenal";
		icon="iconCrateLong";
		transportMaxWeapons=40;
		transportMaxMagazines=20;
		model="\A3\weapons_F\AmmoBoxes\USLaunchers";
		class EventHandlers
		{
			init="[_this select 0,0] call DWT_fnc_VirtualAmmoBoxLong;";
		};
		class TransportWeapons
		{
		};
		class TransportMagazines
		{
		};
	};
	class DWT_VirtualBox_Ammo: Box_NATO_Ammo_F
	{
		displayName="US Basic Arsenal Ammo";
		scope=2;
		vehicleClass="Ammobox_Arsenal";
		icon="iconCrateAmmo";
		transportMaxWeapons=40;
		transportMaxMagazines=20;
		model="\A3\weapons_F\AmmoBoxes\USBasicAmmo";
		class EventHandlers
		{
			init="[_this select 0,0] call DWT_fnc_VirtualAmmoBoxAmmo;";
		};
		class TransportWeapons
		{
		};
		class TransportMagazines
		{
		};
	};
	class DWT_VirtualBox_Weapons: Box_NATO_Ammo_F
	{
		displayName="US Basic Arsenal Weapons";
		scope=2;
		vehicleClass="Ammobox_Arsenal";
		icon="iconCrateWpns";
		transportMaxWeapons=40;
		transportMaxMagazines=20;
		model="\A3\weapons_F\AmmoBoxes\USBasicWeapons";
		class EventHandlers
		{
			init="[_this select 0,0] call DWT_fnc_BoxWeaponsArsenal;";
		};
		class TransportWeapons
		{
		};
		class TransportMagazines
		{
		};
	};
	class DWT_VirtualBox_PaperBox_Full_Open: Box_NATO_Ammo_F
	{
		displayName="$STR_A3_CfgVehicles_Land_PaperBox_open_full_F0";
		scope=2;
		vehicleClass="Ammobox_Arsenal";
		icon="iconCrateSupp";
		transportMaxWeapons=40;
		transportMaxMagazines=20;
		model="\A3\Structures_F_EPA\Mil\Scrapyard\PaperBox_open_full_F.p3d";
		class EventHandlers
		{
			init="[_this select 0,0] call DWT_fnc_BoxOpenFullArsenal;";
		};
		class TransportWeapons
		{
		};
		class TransportMagazines
		{
		};
	};
	class DWT_VirtualBox_PaperBox_Empty_Open: Box_NATO_Ammo_F
	{
		displayName="$STR_A3_CfgVehicles_Land_PaperBox_open_empty_F0";
		scope=2;
		vehicleClass="Ammobox_Arsenal";
		icon="iconCrateSupp";
		transportMaxWeapons=40;
		transportMaxMagazines=20;
		model="\A3\Structures_F_EPA\Mil\Scrapyard\PaperBox_open_empty_F.p3d";
		class EventHandlers
		{
			init="[_this select 0,0] call DWT_fnc_BoxOpenEmptyArsenal;";
		};
		class TransportWeapons
		{
		};
		class TransportMagazines
		{
		};
	};
	class DWT_VirtualBox_PaperBox_Closed: Box_NATO_Ammo_F
	{
		displayName="$STR_A3_CfgVehicles_Land_PaperBox_closed_F0";
		scope=2;
		vehicleClass="Ammobox_Arsenal";
		icon="iconCrateSupp";
		transportMaxWeapons=40;
		transportMaxMagazines=20;
		model="\A3\Structures_F_EPA\Mil\Scrapyard\PaperBox_closed_F.p3d";
		class EventHandlers
		{
			init="[_this select 0,0] call DWT_fnc_BoxClosedArsenal;";
		};
		class TransportWeapons
		{
		};
		class TransportMagazines
		{
		};
	};
	class DWT_VirtualBox_Pallet: Box_NATO_Ammo_F
	{
		displayName="$STR_A3_CfgVehicles_Land_Pallet_MilBoxes_F0";
		scope=2;
		icon="iconCrateSupp";
		transportMaxWeapons=40;
		transportMaxMagazines=20;
		vehicleClass="Ammobox_Arsenal";
		model="\A3\Structures_F_EPA\Mil\Scrapyard\Pallet_MilBoxes_F.p3d";
		class EventHandlers
		{
			init="[_this select 0,0] call DWT_fnc_BoxPalletArsenal;";
		};
		class TransportWeapons
		{
		};
		class TransportMagazines
		{
		};
	};
};
