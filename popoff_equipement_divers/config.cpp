#include "basicdefines_A3.hpp"
// certains items ont été crées par bartabac/winner, d'autres par moi-même
enum {
DESTRUCTENGINE = 2,
DESTRUCTDEFAULT = 6,
DESTRUCTWRECK = 7,
DESTRUCTTREE = 3,
DESTRUCTTENT = 4,
STABILIZEDINAXISX = 1,
STABILIZEDINAXESXYZ = 4,
STABILIZEDINAXISY = 2,
STABILIZEDINAXESBOTH = 3,
DESTRUCTNO = 0,
STABILIZEDINAXESNONE = 0,
DESTRUCTMAN = 5,
DESTRUCTBUILDING = 1,
};

class CfgPatches {
class Chapeaux {
units[] = {};
weapons[] = {};
requiredVersion = 0.1;
requiredAddons[] = {};
};
};

class cfgWeapons {
	class ItemCore;
	class InventoryItem_Base_F;
	class HeadgearItem;

/// Nous commencont par les chapeaux
	class Casque1 : ItemCore {
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Casque 1";
		picture = "\popoff_equipement_divers\ico\casque.paa";
		model = "\popoff_equipement_divers\Casque.p3d";

		class ItemInfo : HeadgearItem {
			mass = 100;
			uniformModel = "\popoff_equipement_divers\Casque.p3d";
			picture = "\popoff_equipement_divers\ico\casque.paa";
			modelSides[] = {3, 1};
			armor = 3*0.5;
			passThrough = 0.8;
			};
	};
	class Stetson : ItemCore {
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Stetson";
		picture = "\popoff_equipement_divers\ico\Stetson.paa";
		model = "\popoff_equipement_divers\Stetson.p3d";

		class ItemInfo : HeadgearItem {
			mass = 100;
			picture = "\popoff_equipement_divers\ico\Stetson.paa";
			uniformModel = "\popoff_equipement_divers\Stetson.p3d";
			modelSides[] = {3, 1};
			armor = 3*0.5;
			passThrough = 0.8;
			};
	};
	/// Ici commencent les vestes
	class VestItem: InventoryItem_Base_F // Préparation de la partie fonctionnelle des vestes
{
	type = VEST_SLOT;			/// vests fit into vest slot
	hiddenSelections[] = {};	/// no changeable selections by default
	armor = 5*0;				/// what protection does the vest provide
	passThrough = 1;			/// coef of damage passed to total damage
	hitpointName = "HitBody";	/// name of hitpoint shielded by the vest
};

class Vest_Camo_Base: ItemCore /// base class for vests with changeable textures
{
	scope = 0;	/// base classes should not be visible in editor
	allowedSlots[] = {BACKPACK_SLOT}; /// you should be able to put a vest into backpack
	hiddenSelections[] = {"camo"}; /// what selection in model could have different textures

	class ItemInfo: VestItem
	{
		hiddenSelections[] = {"camo"}; /// Défini le camo, pour faire différentes vest via des couleurs distincts
		LOAD(0,0) /// macro from basicdefines_A3.hpp
	};
};

class Robot: Vest_Camo_Base // Voici la veste en elle même
{
	scope = 2; /// Visible dans l'éditeur
	displayName  = "ROBOCOP"; /// Le nom dans l'éditeur et aussi dans l'inventaire
	picture = "\popoff_equipement_divers\ico\Robot.paa"; /// Cette image sert d'icone pour l'inventaire
	model   = "\popoff_equipement_divers\Robot.p3d"; /// Le model en P3D sur le dos
	hiddenSelectionsTextures[] = {"\popoff_equipement_divers\Textures\robocop_d.paa"}; /// La texture de l'objet présent ici

	class ItemInfo: ItemInfo
	{
		uniformModel   = "\popoff_equipement_divers\Vest.p3d"; /// Le model P3D quand on pose par terre
		LOAD(40,100) /// macro from basicdefines_A3.hpp
		overlaySelectionsInfo[] = {"ghillie_hide"}; /// Le sac disparait si vous portez un Ghillie

		class HitpointsProtectionInfo
		{
			class Neck
			{
				hitpointName	= "HitNeck"; // Référence de positions pour le blindage
				armor		= 8; // Force du blindage
				passThrough	= 0.5; // multiplier of base passThrough defined in referenced hitpoint
			};
			class Arms
			{
				hitpointName	= "HitArms";
				armor		= 8;
				passThrough	= 0.5;
			};
			class Chest
			{
				hitpointName	= "HitChest";
				armor		= 24;
				passThrough	= 0.1;
			};
			class Diaphragm
			{
				hitpointName	= "HitDiaphragm";
				armor		= 24;
				passThrough	= 0.1;
			};
			class Abdomen
			{
				hitpointName	= "HitAbdomen";
				armor		= 24;
				passThrough	= 0.1;
			};
			class Body
			{
				hitpointName	= "HitBody";
				passThrough	= 0.1;
			};
		};
	};
};
class medic_vest: Vest_Camo_Base // Voici la veste en elle même
{
	scope = 2; /// Visible dans l'éditeur
	displayName  = "Stetoscope"; /// Le nom dans l'éditeur et aussi dans l'inventaire
	picture = "\popoff_equipement_divers\ico\Robot.paa"; /// Cette image sert d'icone pour l'inventaire
	model   = "\popoff_equipement_divers\medic_vest.p3d"; /// Le model en P3D sur le dos

	class ItemInfo: ItemInfo
	{
		uniformModel   = "\popoff_equipement_divers\Vest.p3d"; /// Le model P3D quand on pose par terre
		LOAD(40,100) /// macro from basicdefines_A3.hpp
		overlaySelectionsInfo[] = {"ghillie_hide"}; /// Le sac disparait si vous portez un Ghillie

		class HitpointsProtectionInfo
		{
			class Neck
			{
				hitpointName	= "HitNeck"; // Référence de positions pour le blindage
				armor		= 8; // Force du blindage
				passThrough	= 0.5; // multiplier of base passThrough defined in referenced hitpoint
			};
			class Arms
			{
				hitpointName	= "HitArms";
				armor		= 8;
				passThrough	= 0.5;
			};
			class Chest
			{
				hitpointName	= "HitChest";
				armor		= 24;
				passThrough	= 0.1;
			};
			class Diaphragm
			{
				hitpointName	= "HitDiaphragm";
				armor		= 24;
				passThrough	= 0.1;
			};
			class Abdomen
			{
				hitpointName	= "HitAbdomen";
				armor		= 24;
				passThrough	= 0.1;
			};
			class Body
			{
				hitpointName	= "HitBody";
				passThrough	= 0.1;
			};
		};
	};
};
};

	/// Les sacs à dos sont définis en tant que vehicles contrairement aux autres habits
class CfgVehicles  {

	class ReammoBox;

	class Bag_Base: ReammoBox
	{
		scope = 1;
		class TransportMagazines{};
		class TransportWeapons{};
		isbackpack = 1;
		reversed = 1;
		mapSize = 2;
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Backpacks";
		vehicleClass = "Backpacks";
		allowedSlots[] = {901};
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Small";
		displayName = "$STR_A3_Bag_Base0";
		picture = "\A3\Weapons_F\Ammoboxes\Bags\data\ui\backpack_CA.paa";
		icon = "iconBackpack";
		transportMaxWeapons = 1;
		transportMaxMagazines = 20;
		class DestructionEffects{};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_small_co.paa"};
		maximumLoad = 0;
		side = 3;
	};
	class B_AssaultPack_Base: Bag_Base
	{
		scope = 1;
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Compact";
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_compact_khk_co.paa"};
		maximumLoad = 20;
		mass = 20;
	};

    class Sac1: B_AssaultPack_Base {
        scope = 2;
        displayName = "Sac de golf Bleu";
		model = "\popoff_equipement_divers\Sac2.p3d";
		picture = "\popoff_equipement_divers\ico\Golf.paa";
        hiddenSelectionsTextures[] = {"popoff_equipement_divers\Textures\Sac\Cuirbleu.paa"};
    };
	class Sac2: Sac1 {
        scope = 2;
        displayName = "Sac de golf Rouge";
		model = "\popoff_equipement_divers\Sac2.p3d";
        hiddenSelectionsTextures[] = {"popoff_equipement_divers\Textures\Sac\CuirRouge.paa"};
    };
	class Sac3: Sac1 {
        scope = 2;
        displayName = "Sac de golf Vert";
		model = "\popoff_equipement_divers\Sac2.p3d";
        hiddenSelectionsTextures[] = {"popoff_equipement_divers\Textures\Sac\Cuirvert.paa"};
    };
	class Sac4: Sac1 {
        scope = 2;
        displayName = "Sac de golf Noir";
		model = "\popoff_equipement_divers\Sac2.p3d";
        hiddenSelectionsTextures[] = {"popoff_equipement_divers\Textures\Sac\Cuir.paa"};
		maximumLoad = 300;
    };

	class Sac5: B_AssaultPack_Base {
        scope = 2;
        displayName = "Sac bandouliere rouge";
        picture = "\popoff_equipement_divers\ico\Sac_bandouliere.paa";
		model = "\popoff_equipement_divers\Sac1.p3d";
        hiddenSelectionsTextures[] = {"popoff_equipement_divers\Textures\Sac\CuirRouge.paa"};
    };
	class Sac6: Sac5 {
        scope = 2;
        displayName = "Sac bandouliere Bleu";
		model = "\popoff_equipement_divers\Sac1.p3d";
        hiddenSelectionsTextures[] = {"popoff_equipement_divers\Textures\Sac\Cuirbleu.paa"};
    };
	class Sac7: Sac5 {
        scope = 2;
        displayName = "Sac bandouliere vert";
		model = "\popoff_equipement_divers\Sac1.p3d";
        hiddenSelectionsTextures[] = {"popoff_equipement_divers\Textures\Sac\Cuirvert.paa"};
    };
	class Sac8: Sac5 {
        scope = 2;
        displayName = "Sac bandouliere noir";
		model = "\popoff_equipement_divers\Sac1.p3d";
        hiddenSelectionsTextures[] = {"popoff_equipement_divers\Textures\Sac\Cuir.paa"};
		};
	class holster_popoff_droitier: Sac5 {
        scope = 2;
        displayName = "holster_popoff_droitier";
		model = "\popoff_equipement_divers\holster_popoff_droitier.p3d";
		picture = "\popoff_equipement_divers\ico\holster_popoff.paa";
        hiddenSelectionsTextures[] = {"popoff_equipement_divers\Textures\Sac\Cuir.paa"};
		};
	class ceinturon_dep: Sac5 {
        scope = 2;
        displayName = "ceinturon_dep";
		model = "\popoff_equipement_divers\ceinturon_dep.p3d";
		picture = "\popoff_equipement_divers\ico\ceinturon_dep.paa";
        hiddenSelectionsTextures[] = {"popoff_equipement_divers\Textures\Sac\Cuir.paa"};
		};
	};
