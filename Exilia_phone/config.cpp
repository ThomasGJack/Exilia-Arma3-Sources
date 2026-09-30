#include "dialog\MasterHandler.hpp"

class CfgPatches
{
	class Exilia_Phone
	{
		units[]={};
		weapons[]=
		{
			"Exilia_Items_Iphone"
		};
		requiredVersion=1;
		requiredAddons[]={"Exilia_Data"};
	};
};


class CfgFunctions
{
	#include "Functions.hpp"
};

class cfgWeapons
{
	class ItemCore;
	class House_F;
	class InventoryItem_Base_F;
	class Exilia_Items_Base: ItemCore
	{
		scope=1;
		access=3;
		displayName="-";
		detectRange=-1;
		simulation="ItemMineDetector";
		useAsBinocular=0;
		type=4096;
		picture="";
		descriptionShort="";
		class ItemInfo: InventoryItem_Base_F
		{
			mass=0;
		};
	};

	class Exilia_Items_Iphone: Exilia_Items_Base
	{
		scope=2;
		displayName="Iphone 7 Plus";
		picture="\Exilia_Phone\Items\Iphone.paa";
		descriptionShort="";
		class ItemInfo: ItemInfo
		{
			mass=1;
		};
	};
};

class CfgVehicles
{
    class Land_HelipadEmpty_F;
	class Exilia_vide_Phone : Land_HelipadEmpty_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Exilia_vide_phone";
		model = "\Exilia_Phone\3D\vide.p3d";
		vehicleClass="Structures";
		author = "nirawin29";
	};
};

class CfgSounds {

    /////////////////////////////////////
    /////         Ringtones         /////
    /////////////////////////////////////

	class Backroad {
        name = "Backroad";
        sound[] = {"\Exilia_phone\Sounds\Ringtones\Backroad.ogg", 1.0, 1};
        titles[] = {};
    };

    class BellaCia_8Bits {
        name = "BellaCia_8Bits";
        sound[] = {"\Exilia_phone\Sounds\Ringtones\BellaCia_8Bits.ogg", 1.0, 1};
        titles[] = {};
    };

    class Crazy_Dream {
        name = "Crazy_Dream";
        sound[] = {"\Exilia_phone\Sounds\Ringtones\Crazy_Dream.ogg", 1.0, 1};
        titles[] = {};
    };

    class Dream_Theme {
        name = "Dream_Theme";
        sound[] = {"\Exilia_phone\Sounds\Ringtones\Dream_Theme.ogg", 1.0, 1};
        titles[] = {};
    };

    class Iphone_opening {
        name = "Iphone_opening";
        sound[] = {"\Exilia_phone\Sounds\Ringtones\Iphone_opening.ogg", 1.0, 1};
        titles[] = {};
    };

    class Iphone_Remix {
        name = "Iphone_Remix";
        sound[] = {"\Exilia_phone\Sounds\Ringtones\Iphone_Remix.ogg", 1.0, 1};
        titles[] = {};
    };

    class Jul_OVNI {
        name = "Jul_OVNI";
        sound[] = {"\Exilia_phone\Sounds\Ringtones\Jul_OVNI.ogg", 1.0, 1};
        titles[] = {};
    };

    class Nokia3310 {
        name = "Nokia3310";
        sound[] = {"\Exilia_phone\Sounds\Ringtones\Nokia3310.ogg", 1.0, 1};
        titles[] = {};
    };

    class peule_peule {
        name = "peule_peule";
        sound[] = {"\Exilia_phone\Sounds\Ringtones\peule-peule.ogg", 1.0, 1};
        titles[] = {};
    };

    class regeae {
        name = "regeae";
        sound[] = {"\Exilia_phone\Sounds\Ringtones\regeae.ogg", 1.0, 1};
        titles[] = {};
    };

    class Samsung_Tune {
        name = "Samsung_Tune";
        sound[] = {"\Exilia_phone\Sounds\Ringtones\Samsung_Tune.ogg", 1.0, 1};
        titles[] = {};
    };

    class snapchat {
        name = "snapchat";
        sound[] = {"\Exilia_phone\Sounds\Ringtones\snapchat.ogg", 1.0, 1};
        titles[] = {};
    };

    class Tetris {
        name = "Tetris";
        sound[] = {"\Exilia_phone\Sounds\Ringtones\Tetris.ogg", 1.0, 1};
        titles[] = {};
    };

    class The_buffon {
        name = "The_buffon";
        sound[] = {"\Exilia_phone\Sounds\Ringtones\The_buffon.ogg", 1.0, 1};
        titles[] = {};
    };

    class Vald_Bonjour {
        name = "Vald_Bonjour";
        sound[] = {"\Exilia_phone\Sounds\Ringtones\Vald_Bonjour.ogg", 1.0, 1};
        titles[] = {};
    };

    /////////////////////////////////////
    /////       Notifications       /////
    /////////////////////////////////////

    class bip_bip {
        name = "bip_bip";
        sound[] = {"\Exilia_phone\Sounds\Notifications\bip-bip.ogg", 1.0, 1};
        titles[] = {};
    };

    class ding {
        name = "ding";
        sound[] = {"\Exilia_phone\Sounds\Notifications\ding.ogg", 1.0, 1};
        titles[] = {};
    };

    class super_mario_coin_sound {
        name = "super_mario_coin_sound";
        sound[] = {"\Exilia_phone\Sounds\Notifications\super-mario-coin-sound.ogg", 1.0, 1};
        titles[] = {};
    };

    /////////////////////////////////////
    /////           Other           /////
    /////////////////////////////////////

    class Son_Appel {
        name = "Son_Appel";
        sound[] = {"\Exilia_phone\Sounds\Son_Appel.ogg", 1.0, 1};
        titles[] = {};
    };

    class Vibreur_Appel {
        name = "Vibreur_Appel";
        sound[] = {"\Exilia_phone\Sounds\Vibreur_Appel.ogg", 1.0, 1};
        titles[] = {};
    };
    class Vibreur_SMS {
        name = "Vibreur_SMS";
        sound[] = {"\Exilia_phone\Sounds\Vibreur_SMS.ogg", 1.0, 1};
        titles[] = {};
    };
};


class CfgExiliaPhone
{
    Exilia_Phone_backgroundList[] = {
        {"Exilia Dark","Exilia_Phone\Iphone\Backgrounds\iphone_main_bg_Exilia_Dark.paa"},
        {"Exilia Orange","Exilia_Phone\Iphone\Backgrounds\iphone_main_bg_Exilia_Orange.paa"},
        {"Apple Dark","Exilia_Phone\Iphone\Backgrounds\iphone_main_bg_Apple.paa"},
        {"Apple Nuages","Exilia_Phone\Iphone\Backgrounds\iphone_main_bg_AppleNuages.paa"},
        {"Arbre","Exilia_Phone\Iphone\Backgrounds\iphone_main_bg_Arbre.paa"},
        {"Bulles","Exilia_Phone\Iphone\Backgrounds\iphone_main_bg_Bulles.paa"},
        {"Coucher De Soleil","Exilia_Phone\Iphone\Backgrounds\iphone_main_bg_CoucherDeSoleil.paa"},
        {"Foret","Exilia_Phone\Iphone\Backgrounds\iphone_main_bg_foret.paa"},
        {"Flou MultiColor","Exilia_Phone\Iphone\Backgrounds\iphone_main_bg_MultiCouleurFlou.paa"},
        {"Onde MultiColor","Exilia_Phone\Iphone\Backgrounds\iphone_main_bg_traitMultiCouleur.paa"},
        {"Bordel Multicolor","Exilia_Phone\Iphone\Backgrounds\iphone_main_bg_Bordel_Multicolor.paa"},
        {"Portal","Exilia_Phone\Iphone\Backgrounds\iphone_main_bg_Portal.paa"},
        {"Géometrie Multicolor","Exilia_Phone\Iphone\Backgrounds\iphone_main_bg_Geometrie_Multicolor.paa"},
        {"Paysage Enneigé","Exilia_Phone\Iphone\Backgrounds\iphone_main_bg_PaysageWinter.paa"},
        {"Monatgnes Sombre","Exilia_Phone\Iphone\Backgrounds\iphone_main_bg_MontagneSombrel.paa"},
        {"Red Luna","Exilia_Phone\Iphone\Backgrounds\iphone_main_bg_RedLuna.paa"}
    };

    Exilia_Phone_sonnerieList[] = {
        {"Iphone_opening (31s)","Iphone_opening",31},
        {"Nokia3310 (26s)","Nokia3310",26},
        {"The buffon (26s)","The_buffon",26},
        {"Backroad (27s)","Backroad",27},
        {"Tetris (27s)","Tetris",27},
        {"BellaCia 8 Bits (28s)","BellaCia_8Bits",28},
        {"Dream Theme (28s)","Dream_Theme",28},
        {"Jul OVNI (29s)","Jul_OVNI",29},
        {"Samsung (29s)","Samsung_Tune",29},
        {"regeae (30s)","regeae",30},
        {"snapchat (30s)","snapchat",30},
        {"Escargot Phone (32s)","peule_peule",32},
        {"Vald Bonjour (32s)","Vald_Bonjour",32},
        {"Crazy Dream (33s)","Crazy_Dream",33},
        {"Iphone Remix (43s)","Iphone_Remix",43}
    };

    Exilia_Phone_NotifList[] = {
        {"bip bip","bip_bip"},
        {"ding","ding"},
        {"super mario coin sound","super_mario_coin_sound"}
    };

};