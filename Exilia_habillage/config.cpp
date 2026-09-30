#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class Exilia_Habillage
	{
		name = "Exilia Habillage";
		author = "Team Exilia";
		url = "http://Exilia.fr/";
        units[] = {};
        weapons[] = {};
		requiredAddons[] = {};
	};
};

class CfgVehicles
{
	class B_Soldier_base_F;
	class I_G_Soldier_LAT_F;

		// track

				class track_usarmy_black: B_Soldier_base_F
	{
		scope=2;
		model="\A3\characters_f_gamma\Guerrilla\ig_guerrilla3_1.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\Exilia_Habillage\Textures\track_usarmy_black.paa"};
	};

					class track_supreme_blue: B_Soldier_base_F
	{
		scope=2;
		model="\A3\characters_f_gamma\Guerrilla\ig_guerrilla3_1.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\Exilia_Habillage\Textures\track_supreme_blue.paa"};
	};

					class track_bambi_red: B_Soldier_base_F
	{
		scope=2;
		model="\A3\characters_f_gamma\Guerrilla\ig_guerrilla3_1.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\Exilia_Habillage\Textures\track_bambi_red.paa"};
	};

					class track_volcom_white: B_Soldier_base_F
	{
		scope=2;
		model="\A3\characters_f_gamma\Guerrilla\ig_guerrilla3_1.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\Exilia_Habillage\Textures\track_volcom_white.paa"};
	};

						class track_ebay_orange: B_Soldier_base_F
	{
		scope=2;
		model="\A3\characters_f_gamma\Guerrilla\ig_guerrilla3_1.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\Exilia_Habillage\Textures\track_ebay_orange.paa"};
	};

	// Suit

				class Suit_beige: B_Soldier_base_F
	{
		scope=2;
		model="\A3\characters_f_gamma\Guerrilla\ig_guerrilla3_1.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\Exilia_Habillage\Textures\Suit_beige.paa"};
	};

					class Suit_beige2: B_Soldier_base_F
	{
		scope=2;
		model="\A3\characters_f_gamma\Guerrilla\ig_guerrilla3_1.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\Exilia_Habillage\Textures\Suit_beige2.paa"};
	};

					class Suit_black: B_Soldier_base_F
	{
		scope=2;
		model="\A3\characters_f_gamma\Guerrilla\ig_guerrilla3_1.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\Exilia_Habillage\Textures\Suit_black.paa"};
	};

						class Suit_black2: B_Soldier_base_F
	{
		scope=2;
		model="\A3\characters_f_gamma\Guerrilla\ig_guerrilla3_1.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\Exilia_Habillage\Textures\Suit_black2.paa"};
	};

						class Suit_blue: B_Soldier_base_F
	{
		scope=2;
		model="\A3\characters_f_gamma\Guerrilla\ig_guerrilla3_1.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\Exilia_Habillage\Textures\Suit_blue.paa"};
	};

						class Suit_cyan: B_Soldier_base_F
	{
		scope=2;
		model="\A3\characters_f_gamma\Guerrilla\ig_guerrilla3_1.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\Exilia_Habillage\Textures\Suit_cyan.paa"};
	};

						class Suit_maroon: B_Soldier_base_F
	{
		scope=2;
		model="\A3\characters_f_gamma\Guerrilla\ig_guerrilla3_1.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\Exilia_Habillage\Textures\Suit_maroon.paa"};
	};

						class Suit_purple: B_Soldier_base_F
	{
		scope=2;
		model="\A3\characters_f_gamma\Guerrilla\ig_guerrilla3_1.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\Exilia_Habillage\Textures\Suit_purple.paa"};
	};

						class Suit_red: B_Soldier_base_F
	{
		scope=2;
		model="\A3\characters_f_gamma\Guerrilla\ig_guerrilla3_1.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\Exilia_Habillage\Textures\Suit_red.paa"};
	};

						class Suit_white: B_Soldier_base_F
	{
		scope=2;
		model="\A3\characters_f_gamma\Guerrilla\ig_guerrilla3_1.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\Exilia_Habillage\Textures\Suit_white.paa"};
	};




				// Travailleur

		class Worker_boeing: B_Soldier_base_F
	{
		scope=2;
		model="\A3\characters_F\common\coveralls";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\Exilia_Habillage\Textures\Worker_boeing.paa"};
	};

		class Worker_pirelli_green: B_Soldier_base_F
	{
		scope=2;
		model="\A3\characters_F\common\coveralls";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\Exilia_Habillage\Textures\Worker_pirelli_green.paa"};
	};

			class Worker_pirelli_black: B_Soldier_base_F
	{
		scope=2;
		model="\A3\characters_F\common\coveralls";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\Exilia_Habillage\Textures\Worker_pirelli_black.paa"};
	};

			class Worker_pirelli_orange: B_Soldier_base_F
	{
		scope=2;
		model="\A3\characters_F\common\coveralls";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\Exilia_Habillage\Textures\Worker_pirelli_orange.paa"};
	};

				class Worker_pirelli_blue: B_Soldier_base_F
	{
		scope=2;
		model="\A3\characters_F\common\coveralls";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\Exilia_Habillage\Textures\Worker_pirelli_blue.paa"};
	};

				class Worker_pirelli_pink: B_Soldier_base_F
	{
		scope=2;
		model="\A3\characters_F\common\coveralls";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\Exilia_Habillage\Textures\Worker_pirelli_pink.paa"};
	};

				class Worker_pirelli_red: B_Soldier_base_F
	{
		scope=2;
		model="\A3\characters_F\common\coveralls";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\Exilia_Habillage\Textures\Worker_pirelli_red.paa"};
	};

				class Worker_pirelli_white: B_Soldier_base_F
	{
		scope=2;
		model="\A3\characters_F\common\coveralls";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\Exilia_Habillage\Textures\Worker_pirelli_white.paa"};
	};

			// Veste

		class Jacket_tie_black: B_Soldier_base_F
	{
		scope=2;
		model="\A3\characters_f_gamma\Guerrilla\ig_guerrilla3_1.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\Exilia_Habillage\Textures\Jacket_tie_black.paa"};
	};

			class Jacket_bull_grey: B_Soldier_base_F
	{
		scope=2;
		model="\A3\characters_f_gamma\Guerrilla\ig_guerrilla3_1.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\Exilia_Habillage\Textures\Jacket_bull_grey.paa"};
	};

			class Jacket_clashroyale_blue: B_Soldier_base_F
	{
		scope=2;
		model="\A3\characters_f_gamma\Guerrilla\ig_guerrilla3_1.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\Exilia_Habillage\Textures\Jacket_clashroyale_blue.paa"};
	};

			class Jacket_indianajones_brown: B_Soldier_base_F
	{
		scope=2;
		model="\A3\characters_f_gamma\Guerrilla\ig_guerrilla3_1.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\Exilia_Habillage\Textures\Jacket_indianajones_brown.paa"};
	};

			class Jacket_IDAP: B_Soldier_base_F
	{
		scope=2;
		model="\A3\characters_f_gamma\Guerrilla\ig_guerrilla3_1.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\Exilia_Habillage\Textures\tenue_IDAP.paa"};
	};

			class Jacket_poutine_camo: B_Soldier_base_F
	{
		scope=2;
		model="\A3\characters_f_gamma\Guerrilla\ig_guerrilla3_1.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\Exilia_Habillage\Textures\Jacket_poutine_camo.paa"};
	};

			class Jacket_bouf_green: B_Soldier_base_F
	{
		scope=2;
		model="\A3\characters_f_gamma\Guerrilla\ig_guerrilla3_1.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\Exilia_Habillage\Textures\Jacket_bouf_green.paa"};
	};

			class Jacket_ak_orange: B_Soldier_base_F
	{
		scope=2;
		model="\A3\characters_f_gamma\Guerrilla\ig_guerrilla3_1.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\Exilia_Habillage\Textures\Jacket_ak_orange.paa"};
	};

			class Jacket_anonymous_red: B_Soldier_base_F
	{
		scope=2;
		model="\A3\characters_f_gamma\Guerrilla\ig_guerrilla3_1.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\Exilia_Habillage\Textures\Jacket_anonymous_red.paa"};
	};

			class Jacket_superman: B_Soldier_base_F
	{
		scope=2;
		model="\A3\characters_f_gamma\Guerrilla\ig_guerrilla3_1.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\Exilia_Habillage\Textures\Jacket_superman.paa"};
	};

			class Jacket_stormtrooper_white: B_Soldier_base_F
	{
		scope=2;
		model="\A3\characters_f_gamma\Guerrilla\ig_guerrilla3_1.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\Exilia_Habillage\Textures\Jacket_stormtrooper_white.paa"};
	};




	// Polo




		class polo_lacoste_blanc: B_Soldier_base_F
	{
		scope=2;
		model="\A3\Characters_F\Civil\c_poloshirt.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\Exilia_Habillage\Textures\polo_lacoste_blanc.paa"};
	};

			class polo_lacoste_bleu: B_Soldier_base_F
	{
		scope=2;
		model="\A3\Characters_F\Civil\c_poloshirt.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\Exilia_Habillage\Textures\polo_lacoste_bleu.paa"};
	};

				class polo_lacoste_bleuciel: B_Soldier_base_F
	{
		scope=2;
		model="\A3\Characters_F\Civil\c_poloshirt.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\Exilia_Habillage\Textures\polo_lacoste_bleuciel.paa"};
	};

				class polo_lacoste_noir: B_Soldier_base_F
	{
		scope=2;
		model="\A3\Characters_F\Civil\c_poloshirt.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\Exilia_Habillage\Textures\polo_lacoste_noir.paa"};
	};

				class polo_lacoste_rouge: B_Soldier_base_F
	{
		scope=2;
		model="\A3\Characters_F\Civil\c_poloshirt.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\Exilia_Habillage\Textures\polo_lacoste_rouge.paa"};
	};

					class polo_lacoste_orange: B_Soldier_base_F
	{
		scope=2;
		model="\A3\Characters_F\Civil\c_poloshirt.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\Exilia_Habillage\Textures\polo_lacoste_orange.paa"};
	};

					class polo_lacoste_rose: B_Soldier_base_F
	{
		scope=2;
		model="\A3\Characters_F\Civil\c_poloshirt.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\Exilia_Habillage\Textures\polo_lacoste_rose.paa"};
	};

					class polo_Exilia: B_Soldier_base_F
	{
		scope=2;
		model="\A3\Characters_F\Civil\c_poloshirt.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\Exilia_Habillage\Textures\polo_Exilia.paa"};
	};

					class polo_fortnite: B_Soldier_base_F
	{
		scope=2;
		model="\A3\Characters_F\Civil\c_poloshirt.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\Exilia_Habillage\Textures\polo_fortnite.paa"};
	};

					class polo_brazzier: B_Soldier_base_F
	{
		scope=2;
		model="\A3\Characters_F\Civil\c_poloshirt.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\Exilia_Habillage\Textures\shirt_brazzier.paa"};
	};

					class polo_boeing: B_Soldier_base_F
	{
		scope=2;
		model="\A3\Characters_F\Civil\c_poloshirt.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\Exilia_Habillage\Textures\polo_boeing.paa"};
	};

					class polo_upeel: B_Soldier_base_F
	{
		scope=2;
		model="\A3\Characters_F\Civil\c_poloshirt.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\Exilia_Habillage\Textures\polo_upeel.paa"};
	};



		// TShirt




	class shirt_green: B_Soldier_base_F
	{
		scope=2;
		model="\A3\Characters_F\Civil\c_poloshirtpants.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\Exilia_Habillage\Textures\shirt_green.paa"};
	};

		class shirt_sako: B_Soldier_base_F
	{
		scope=2;
		model="\A3\Characters_F\Civil\c_poloshirtpants.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\Exilia_Habillage\Textures\shirt_sako.paa"};
	};

		class tenue_prison: B_Soldier_base_F
	{
		scope=2;
		model="\A3\Characters_F\Civil\c_poloshirtpants.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\Exilia_Habillage\Textures\tenue_prison.paa"};
	};

		class shirt_vasquez: B_Soldier_base_F
	{
		scope=2;
		model="\A3\Characters_F\Civil\c_poloshirtpants.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\Exilia_Habillage\Textures\shirt_vasquez.paa"};
	};

		class shirt_fawkes: B_Soldier_base_F
	{
		scope=2;
		model="\A3\Characters_F\Civil\c_poloshirtpants.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\Exilia_Habillage\Textures\shirt_fawkes.paa"};
	};

		class shirt_lewel: B_Soldier_base_F
	{
		scope=2;
		model="\A3\Characters_F\Civil\c_poloshirtpants.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\Exilia_Habillage\Textures\shirt_lewel.paa"};
	};

		class tenue_sheriff: B_Soldier_base_F
	{
		scope=2;
		model="\A3\Characters_F\Civil\c_poloshirtpants.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\Exilia_Habillage\Textures\tenue_sheriff.paa"};
	};

		class tenue_securitas: B_Soldier_base_F
	{
		scope=2;
		model="\A3\Characters_F\Civil\c_poloshirtpants.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\Exilia_Habillage\Textures\tenue_securitas.paa"};
	};

		class tenue_brinks: B_Soldier_base_F
	{
		scope=2;
		model="\A3\Characters_F\Civil\c_poloshirtpants.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\Exilia_Habillage\Textures\tenue_brinks.paa"};
	};

		class shirt_grey: B_Soldier_base_F
	{
		scope=2;
		model="\A3\Characters_F\Civil\c_poloshirtpants.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\Exilia_Habillage\Textures\shirt_grey.paa"};
	};

		class shirt_black: B_Soldier_base_F
	{
		scope=2;
		model="\A3\Characters_F\Civil\c_poloshirtpants.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\Exilia_Habillage\Textures\shirt_noir.paa"};
	};

		class shirt_red: B_Soldier_base_F
	{
		scope=2;
		model="\A3\Characters_F\Civil\c_poloshirtpants.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\Exilia_Habillage\Textures\shirt_red.paa"};
	};

		class shirt_violet: B_Soldier_base_F
	{
		scope=2;
		model="\A3\Characters_F\Civil\c_poloshirtpants.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\Exilia_Habillage\Textures\shirt_violet.paa"};
	};

			class shirt_redcamo: B_Soldier_base_F
	{
		scope=2;
		model="\A3\Characters_F\Civil\c_poloshirtpants.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\Exilia_Habillage\Textures\shirt_redcamo.paa"};
	};

			class shirt_black_peas: B_Soldier_base_F
	{
		scope=2;
		model="\A3\Characters_F\Civil\c_poloshirtpants.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\Exilia_Habillage\Textures\shirt_black_peas.paa"};
	};

			class shirt_blanc: B_Soldier_base_F
	{
		scope=2;
		model="\A3\Characters_F\Civil\c_poloshirtpants.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\Exilia_Habillage\Textures\shirt_blanc.paa"};
	};

			class shirt_blue_stars: B_Soldier_base_F
	{
		scope=2;
		model="\A3\Characters_F\Civil\c_poloshirtpants.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\Exilia_Habillage\Textures\shirt_blue_stars.paa"};
	};

			class shirt_brown: B_Soldier_base_F
	{
		scope=2;
		model="\A3\Characters_F\Civil\c_poloshirtpants.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\Exilia_Habillage\Textures\shirt_brown.paa"};
	};
};







class cfgWeapons
{
	class ItemCore;
	class UniformItem;
	class Vest_Camo_Base;
	class VestItem;
	class InventoryItem_Base_F;
	class HeadgearItem;
	class Uniform_Base : ItemCore {
		class ItemInfo;
	};

	//Gilets

	class Gilet_Brinks : Vest_Camo_Base {
		scope = 2;
		author = "OL";
		displayName = "ML Gilet Brinks";
		picture = "\Exilia_Habillage\Icone\ico_gilet_secu.paa";
		model = "\Exilia_Habillage\3d\Bulletproof_vest";
		hiddenSelections[] = {"camo2"};
		hiddenSelectionsTextures[] = {"\Exilia_Habillage\Textures\Gilet_Brinks.paa"};

		class ItemInfo : VestItem {
			uniformModel = "\Exilia_Habillage\3d\Bulletproof_vest";
			hiddenSelections[] = {"camo2"};
			containerClass = "Supply100";
			mass = 50;
			armor = 110;
			passThrough = true;

			class HitpointsProtectionInfo {
				class Arms{										//Bras
					hitpointName	= "HitArms";
					armor		= 7;
					passThrough	= 0.5;
				};

				class Chest {									//Poitrine
					hitpointName = "HitChest";
					armor = 15;
					passThrough = 0.5;
				};

				class Diaphragm {								//Diaphragm
					hitpointName = "HitDiaphragm";
					armor = 15;
					passThrough = 0.5;
				};

				class Abdomen {									//Abdomen
					hitpointName = "HitAbdomen";
					armor = 15;
					passThrough = 0.5;
				};

				class Body {									//Corps
					hitpointName = "HitBody";
					passThrough = 0.5;
					armor = 7;
				};
			};
		};
	};

	class Gilet_Securitas : Vest_Camo_Base {
		scope = 2;
		author = "OL";
		displayName = "ML Gilet Securitas";
		picture = "\Exilia_Habillage\Icone\ico_gilet_secu.paa";
		model = "\Exilia_Habillage\3d\Bulletproof_vest";
		hiddenSelections[] = {"camo2"};
		hiddenSelectionsTextures[] = {"\Exilia_Habillage\Textures\Gilet_Securitas.paa"};

		class ItemInfo : VestItem {
			uniformModel = "\Exilia_Habillage\3d\Bulletproof_vest";
			hiddenSelections[] = {"camo2"};
			containerClass = "Supply100";
			mass = 50;
			armor = 110;
			passThrough = true;

			class HitpointsProtectionInfo {
				class Arms{										//Bras
					hitpointName	= "HitArms";
					armor		= 7;
					passThrough	= 0.5;
				};

				class Chest {									//Poitrine
					hitpointName = "HitChest";
					armor = 15;
					passThrough = 0.5;
				};

				class Diaphragm {								//Diaphragm
					hitpointName = "HitDiaphragm";
					armor = 15;
					passThrough = 0.5;
				};

				class Abdomen {									//Abdomen
					hitpointName = "HitAbdomen";
					armor = 15;
					passThrough = 0.5;
				};

				class Body {									//Corps
					hitpointName = "HitBody";
					passThrough = 0.5;
					armor = 7;
				};
			};
		};
	};

	class Gilet_Sheriff : Vest_Camo_Base {
		scope = 2;
		author = "OL";
		displayName = "ML Gilet Sheriff";
		picture = "\Exilia_Habillage\Icone\ico_gilet_secu.paa";
		model = "\Exilia_Habillage\3d\Bulletproof_vest";
		hiddenSelections[] = {"camo2"};
		hiddenSelectionsTextures[] = {"\Exilia_Habillage\Textures\veste_sheriff.paa"};

		class ItemInfo : VestItem {
			uniformModel = "\Exilia_Habillage\3d\Bulletproof_vest";
			hiddenSelections[] = {"camo2"};
			containerClass = "Supply100";
			mass = 50;
			armor = 110;
			passThrough = true;

			class HitpointsProtectionInfo {
				class Arms{										//Bras
					hitpointName	= "HitArms";
					armor		= 7;
					passThrough	= 0.5;
				};

				class Chest {									//Poitrine
					hitpointName = "HitChest";
					armor = 15;
					passThrough = 0.5;
				};

				class Diaphragm {								//Diaphragm
					hitpointName = "HitDiaphragm";
					armor = 15;
					passThrough = 0.5;
				};

				class Abdomen {									//Abdomen
					hitpointName = "HitAbdomen";
					armor = 15;
					passThrough = 0.5;
				};

				class Body {									//Corps
					hitpointName = "HitBody";
					passThrough = 0.5;
					armor = 7;
				};
			};
		};
	};

	class Gilet_Punisher : Vest_Camo_Base {
		scope = 2;
		author = "OL";
		displayName = "ML Gilet Punisher OsKar LeWel";
		picture = "\Exilia_Habillage\Icone\ico_gilet_secu.paa";
		model = "\Exilia_Habillage\3d\Bulletproof_vest";
		hiddenSelections[] = {"camo2"};
		hiddenSelectionsTextures[] = {"\Exilia_Habillage\Textures\Gilet_Punisher.paa"};

		class ItemInfo : VestItem {
			uniformModel = "\Exilia_Habillage\3d\Bulletproof_vest";
			hiddenSelections[] = {"camo2"};
			containerClass = "Supply100";
			mass = 50;
			armor = 1000;
			passThrough = true;

			class HitpointsProtectionInfo {
				class Arms{										//Bras
					hitpointName	= "HitArms";
					armor		= 60;
					passThrough	= 0.5;
				};

				class Chest {									//Poitrine
					hitpointName = "HitChest";
					armor = 100;
					passThrough = 0.5;
				};

				class Diaphragm {								//Diaphragm
					hitpointName = "HitDiaphragm";
					armor = 100;
					passThrough = 0.5;
				};

				class Abdomen {									//Abdomen
					hitpointName = "HitAbdomen";
					armor = 100;
					passThrough = 0.5;
				};

				class Body {									//Corps
					hitpointName = "HitBody";
					passThrough = 0.5;
					armor = 60;
				};
			};
		};
	};



		       // track

			class tenue_track_usarmy_black: Uniform_Base
	{
		scope=2;
		author="OL";
		displayName="Veste US Army Civil";
		picture="\A3\characters_f_gamma\Guerrilla\data\ui\icon_U_G_guerrilla3_1_ca.paa";
		model= "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="track_usarmy_black";
			containerClass="Supply70";
			mass=40;
			armor=0;
		};
	};

				class tenue_track_supremeVeste_blue: Uniform_Base
	{
		scope=2;
		author="OL";
		displayName="Veste Supreme";
		picture="\A3\characters_f_gamma\Guerrilla\data\ui\icon_U_G_guerrilla3_1_ca.paa";
		model= "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="track_supreme_blue";
			containerClass="Supply70";
			mass=40;
			armor=0;
		};
	};

				class tenue_track_bambi_red: Uniform_Base
	{
		scope=2;
		author="OL";
		displayName="Bambi des Bois";
		picture="\A3\characters_f_gamma\Guerrilla\data\ui\icon_U_G_guerrilla3_1_ca.paa";
		model= "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="track_bambi_red";
			containerClass="Supply70";
			mass=40;
			armor=0;
		};
	};

				class tenue_track_volcom_white: Uniform_Base
	{
		scope=2;
		author="OL";
		displayName="Veste Volcom";
		picture="\A3\characters_f_gamma\Guerrilla\data\ui\icon_U_G_guerrilla3_1_ca.paa";
		model= "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="track_volcom_white";
			containerClass="Supply70";
			mass=40;
			armor=0;
		};
	};

					class tenue_track_ebay_orange: Uniform_Base
	{
		scope=2;
		author="OL";
		displayName="Veste Ebay";
		picture="\A3\characters_f_gamma\Guerrilla\data\ui\icon_U_G_guerrilla3_1_ca.paa";
		model= "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="track_ebay_orange";
			containerClass="Supply70";
			mass=40;
			armor=0;
		};
	};

	       // Suit

			class tenue_Suit_beige: Uniform_Base
	{
		scope=2;
		author="OL";
		displayName="Veste Beige";
		picture="\A3\characters_f_gamma\Guerrilla\data\ui\icon_U_G_guerrilla3_1_ca.paa";
		model= "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Suit_beige";
			containerClass="Supply70";
			mass=40;
			armor=0;
		};
	};

				class tenue_Suit_beige2: Uniform_Base
	{
		scope=2;
		author="OL";
		displayName="Veste Beige 2";
		picture="\A3\characters_f_gamma\Guerrilla\data\ui\icon_U_G_guerrilla3_1_ca.paa";
		model= "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Suit_beige2";
			containerClass="Supply70";
			mass=40;
			armor=0;
		};
	};

				class tenue_Suit_black: Uniform_Base
	{
		scope=2;
		author="OL";
		displayName="Veste Black";
		picture="\A3\characters_f_gamma\Guerrilla\data\ui\icon_U_G_guerrilla3_1_ca.paa";
		model= "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Suit_black";
			containerClass="Supply70";
			mass=40;
			armor=0;
		};
	};

				class tenue_Suit_black2: Uniform_Base
	{
		scope=2;
		author="OL";
		displayName="Veste Black 2";
		picture="\A3\characters_f_gamma\Guerrilla\data\ui\icon_U_G_guerrilla3_1_ca.paa";
		model= "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Suit_black2";
			containerClass="Supply70";
			mass=40;
			armor=0;
		};
	};

					class tenue_Suit_blue: Uniform_Base
	{
		scope=2;
		author="OL";
		displayName="Veste Blue";
		picture="\A3\characters_f_gamma\Guerrilla\data\ui\icon_U_G_guerrilla3_1_ca.paa";
		model= "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Suit_blue";
			containerClass="Supply70";
			mass=40;
			armor=0;
		};
	};

					class tenue_Suit_cyan: Uniform_Base
	{
		scope=2;
		author="OL";
		displayName="Veste Cyan";
		picture="\A3\characters_f_gamma\Guerrilla\data\ui\icon_U_G_guerrilla3_1_ca.paa";
		model= "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Suit_cyan";
			containerClass="Supply70";
			mass=40;
			armor=0;
		};
	};

					class tenue_Suit_maroon: Uniform_Base
	{
		scope=2;
		author="OL";
		displayName="Veste Maroon";
		picture="\A3\characters_f_gamma\Guerrilla\data\ui\icon_U_G_guerrilla3_1_ca.paa";
		model= "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Suit_maroon";
			containerClass="Supply70";
			mass=40;
			armor=0;
		};
	};

					class tenue_Suit_purple: Uniform_Base
	{
		scope=2;
		author="OL";
		displayName="Veste Purple";
		picture="\A3\characters_f_gamma\Guerrilla\data\ui\icon_U_G_guerrilla3_1_ca.paa";
		model= "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Suit_purple";
			containerClass="Supply70";
			mass=40;
			armor=0;
		};
	};

					class tenue_Suit_red: Uniform_Base
	{
		scope=2;
		author="OL";
		displayName="Veste Red";
		picture="\A3\characters_f_gamma\Guerrilla\data\ui\icon_U_G_guerrilla3_1_ca.paa";
		model= "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Suit_red";
			containerClass="Supply70";
			mass=40;
			armor=0;
		};
	};

					class tenue_Suit_white: Uniform_Base
	{
		scope=2;
		author="OL";
		displayName="Veste White";
		picture="\A3\characters_f_gamma\Guerrilla\data\ui\icon_U_G_guerrilla3_1_ca.paa";
		model= "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Suit_white";
			containerClass="Supply70";
			mass=40;
			armor=0;
		};
	};


	        // Travailleur

				class tenue_Worker_boeing: Uniform_Base
	{
		scope=2;
		author="OL";
		displayName="Tenue Technicien Boeing";
		picture="\A3\characters_f\data\ui\icon_U_C_WorkerCoveralls_ca.paa";
		model= "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Worker_boeing";
			containerClass="Supply30";
			mass=30;
			armor=0;
		};
	};

					class tenue_Worker_pirelli_green: Uniform_Base
	{
		scope=2;
		author="OL";
		displayName="Tenue Travailleur Vert";
		picture="\A3\characters_f\data\ui\icon_U_C_WorkerCoveralls_ca.paa";
		model= "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Worker_pirelli_green";
			containerClass="Supply30";
			mass=30;
			armor=0;
		};
	};

					class tenue_Worker_pirelli_black: Uniform_Base
	{
		scope=2;
		author="OL";
		displayName="Tenue Travailleur Noir";
		picture="\A3\characters_f\data\ui\icon_U_C_WorkerCoveralls_ca.paa";
		model= "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Worker_pirelli_black";
			containerClass="Supply30";
			mass=30;
			armor=0;
		};
	};

					class tenue_Worker_pirelli_orange: Uniform_Base
	{
		scope=2;
		author="OL";
		displayName="Tenue Travailleur Orange";
		picture="\A3\characters_f\data\ui\icon_U_C_WorkerCoveralls_ca.paa";
		model= "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Worker_pirelli_orange";
			containerClass="Supply30";
			mass=30;
			armor=0;
		};
	};

						class tenue_Worker_pirelli_blue: Uniform_Base
	{
		scope=2;
		author="OL";
		displayName="Tenue Travailleur Bleu";
		picture="\A3\characters_f\data\ui\icon_U_C_WorkerCoveralls_ca.paa";
		model= "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Worker_pirelli_blue";
			containerClass="Supply30";
			mass=30;
			armor=0;
		};
	};

						class tenue_Worker_pirelli_pink: Uniform_Base
	{
		scope=2;
		author="OL";
		displayName="Tenue Travailleur Rose";
		picture="\A3\characters_f\data\ui\icon_U_C_WorkerCoveralls_ca.paa";
		model= "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Worker_pirelli_pink";
			containerClass="Supply30";
			mass=30;
			armor=0;
		};
	};

						class tenue_Worker_pirelli_red: Uniform_Base
	{
		scope=2;
		author="OL";
		displayName="Tenue Travailleur Rouge";
		picture="\A3\characters_f\data\ui\icon_U_C_WorkerCoveralls_ca.paa";
		model= "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Worker_pirelli_red";
			containerClass="Supply30";
			mass=30;
			armor=0;
		};
	};

						class tenue_Worker_pirelli_white: Uniform_Base
	{
		scope=2;
		author="OL";
		displayName="Tenue Travailleur Blanc";
		picture="\A3\characters_f\data\ui\icon_U_C_WorkerCoveralls_ca.paa";
		model= "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Worker_pirelli_white";
			containerClass="Supply30";
			mass=30;
			armor=0;
		};
	};


			// Veste

			class tenue_Jacket_tie_black: Uniform_Base
	{
		scope=2;
		author="OL";
		displayName="Veste Chasseur TIE";
		picture="\A3\characters_f_gamma\Guerrilla\data\ui\icon_U_G_guerrilla2_1_ca.paa";
		model= "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Jacket_tie_black";
			containerClass="Supply70";
			mass=40;
			armor=0;
		};
	};

				class tenue_Jacket_bull_grey: Uniform_Base
	{
		scope=2;
		author="OL";
		displayName="Veste Bull";
		picture="\A3\characters_f_gamma\Guerrilla\data\ui\icon_U_G_guerrilla2_1_ca.paa";
		model= "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Jacket_bull_grey";
			containerClass="Supply70";
			mass=40;
			armor=0;
		};
	};

				class tenue_Jacket_clashroyale_blue: Uniform_Base
	{
		scope=2;
		author="OL";
		displayName="Veste Clash Royale";
		picture="\A3\characters_f_gamma\Guerrilla\data\ui\icon_U_G_guerrilla2_1_ca.paa";
		model= "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Jacket_clashroyale_blue";
			containerClass="Supply70";
			mass=40;
			armor=0;
		};
	};

				class tenue_Jacket_indianajones_brown: Uniform_Base
	{
		scope=2;
		author="OL";
		displayName="Veste Indiana Jones Explorateur";
		picture="\A3\characters_f_gamma\Guerrilla\data\ui\icon_U_G_guerrilla2_1_ca.paa";
		model= "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Jacket_indianajones_brown";
			containerClass="Supply70";
			mass=40;
			armor=0;
		};
	};

				class tenue_Jacket_IDAP: Uniform_Base
	{
		scope=2;
		author="OL";
		displayName="Veste IDAP";
		picture="\A3\characters_f_gamma\Guerrilla\data\ui\icon_U_G_guerrilla2_1_ca.paa";
		model= "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Jacket_IDAP";
			containerClass="Supply70";
			mass=40;
			armor=0;
		};
	};

				class tenue_Jacket_poutine_camo: Uniform_Base
	{
		scope=2;
		author="OL";
		displayName="Veste Mère Russie";
		picture="\A3\characters_f_gamma\Guerrilla\data\ui\icon_U_G_guerrilla2_1_ca.paa";
		model= "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Jacket_poutine_camo";
			containerClass="Supply70";
			mass=40;
			armor=0;
		};
	};

				class tenue_Jacket_bouf_green: Uniform_Base
	{
		scope=2;
		author="OL";
		displayName="Veste J ai Faim";
		picture="\A3\characters_f_gamma\Guerrilla\data\ui\icon_U_G_guerrilla2_1_ca.paa";
		model= "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Jacket_bouf_green";
			containerClass="Supply70";
			mass=40;
			armor=0;
		};
	};

				class tenue_Jacket_ak_orange: Uniform_Base
	{
		scope=2;
		author="OL";
		displayName="Veste AK47";
		picture="\A3\characters_f_gamma\Guerrilla\data\ui\icon_U_G_guerrilla2_1_ca.paa";
		model= "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Jacket_ak_orange";
			containerClass="Supply70";
			mass=40;
			armor=0;
		};
	};

				class tenue_Jacket_anonymous_red: Uniform_Base
	{
		scope=2;
		author="OL";
		displayName="Veste Anonymous";
		picture="\A3\characters_f_gamma\Guerrilla\data\ui\icon_U_G_guerrilla2_1_ca.paa";
		model= "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Jacket_anonymous_red";
			containerClass="Supply70";
			mass=40;
			armor=0;
		};
	};

				class tenue_Jacket_superman: Uniform_Base
	{
		scope=2;
		author="OL";
		displayName="Veste Superman";
		picture="\A3\characters_f_gamma\Guerrilla\data\ui\icon_U_G_guerrilla2_1_ca.paa";
		model= "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Jacket_superman";
			containerClass="Supply70";
			mass=40;
			armor=0;
		};
	};

				class tenue_Jacket_stormtrooper_white: Uniform_Base
	{
		scope=2;
		author="OL";
		displayName="Veste Stormtrooper";
		picture="\A3\characters_f_gamma\Guerrilla\data\ui\icon_U_G_guerrilla2_1_ca.paa";
		model= "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Jacket_stormtrooper_white";
			containerClass="Supply70";
			mass=40;
			armor=0;
		};
	};



	// Polo


	class tenue_polo_lacoste_blanc: Uniform_Base
	{
		scope=2;
		author="OL";
		displayName="Polo Lacoste Blanc";
		picture="\A3\characters_f\data\ui\icon_U_C_Poloshirt_stripped_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="polo_lacoste_blanc";
			containerClass="Supply70";
			mass=40;
			armor=0;
		};
	};

		class tenue_polo_lacoste_bleu: Uniform_Base
	{
		scope=2;
		author="OL";
		displayName="Polo Lacoste Bleu";
		picture="\A3\characters_f\data\ui\icon_U_C_Poloshirt_stripped_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="polo_lacoste_bleu";
			containerClass="Supply70";
			mass=40;
			armor=0;
		};
	};

			class tenue_polo_lacoste_bleuciel: Uniform_Base
	{
		scope=2;
		author="OL";
		displayName="Polo Lacoste Bleu Ciel";
		picture="\A3\characters_f\data\ui\icon_U_C_Poloshirt_stripped_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="polo_lacoste_bleuciel";
			containerClass="Supply70";
			mass=40;
			armor=0;
		};
	};

			class tenue_polo_lacoste_noir: Uniform_Base
	{
		scope=2;
		author="OL";
		displayName="Polo Lacoste Noir";
		picture="\A3\characters_f\data\ui\icon_U_C_Poloshirt_stripped_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="polo_lacoste_noir";
			containerClass="Supply70";
			mass=40;
			armor=0;
		};
	};

			class tenue_polo_lacoste_rouge: Uniform_Base
	{
		scope=2;
		author="OL";
		displayName="Polo Lacoste Rouge";
		picture="\A3\characters_f\data\ui\icon_U_C_Poloshirt_stripped_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="polo_lacoste_rouge";
			containerClass="Supply70";
			mass=40;
			armor=0;
		};
	};

				class tenue_polo_lacoste_orange: Uniform_Base
	{
		scope=2;
		author="OL";
		displayName="Polo Lacoste Orange";
		picture="\A3\characters_f\data\ui\icon_U_C_Poloshirt_stripped_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="polo_lacoste_orange";
			containerClass="Supply70";
			mass=40;
			armor=0;
		};
	};

				class tenue_polo_lacoste_rose: Uniform_Base
	{
		scope=2;
		author="OL";
		displayName="Polo Lacoste Rose";
		picture="\A3\characters_f\data\ui\icon_U_C_Poloshirt_stripped_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="polo_lacoste_rose";
			containerClass="Supply70";
			mass=40;
			armor=0;
		};
	};

				class tenue_polo_Exilia: Uniform_Base
	{
		scope=2;
		author="OL";
		displayName="Polo Exilia";
		picture="\A3\characters_f\data\ui\icon_U_C_Poloshirt_stripped_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="polo_Exilia";
			containerClass="Supply70";
			mass=40;
			armor=0;
		};
	};

				class tenue_polo_upeel: Uniform_Base
	{
		scope=2;
		author="OL";
		displayName="Polo uPeel";
		picture="\A3\characters_f\data\ui\icon_U_C_Poloshirt_stripped_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="polo_upeel";
			containerClass="Supply70";
			mass=40;
			armor=0;
		};
	};

				class tenue_polo_fortnite: Uniform_Base
	{
		scope=2;
		author="OL";
		displayName="Polo Fortnite";
		picture="\A3\characters_f\data\ui\icon_U_C_Poloshirt_stripped_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="polo_fortnite";
			containerClass="Supply70";
			mass=40;
			armor=0;
		};
	};

		class tenue_polo_brazzier: Uniform_Base
	{
		scope=2;
		author="OL";
		displayName="Polo Brazzier";
		picture="\A3\characters_f\data\ui\icon_U_C_Poloshirt_stripped_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="polo_brazzier";
			containerClass="Supply70";
			mass=40;
			armor=0;
		};
	};

				class tenue_polo_boeing: Uniform_Base
	{
		scope=2;
		author="OL";
		displayName="Polo Entreprise Boeing";
		picture="\A3\characters_f\data\ui\icon_U_C_Poloshirt_stripped_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="polo_boeing";
			containerClass="Supply70";
			mass=40;
			armor=0;
		};
	};



	// Tshirt



		class tenue_shirt_sako: Uniform_Base
	{
		scope=2;
		author="OL";
		displayName="T-Shirt Sako";
		picture="\A3\characters_f_kart\data\ui\icon_U_Marshall_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="shirt_sako";
			containerClass="Supply70";
			mass=40;
			armor=0;
		};
	};

			class tenue_tenue_prison: Uniform_Base
	{
		scope=2;
		author="OL";
		displayName="Tenue Prisonnier Exilia";
		picture="\A3\characters_f_kart\data\ui\icon_U_Marshall_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tenue_prison";
			containerClass="Supply70";
			mass=40;
			armor=0;
		};
	};

			class tenue_shirt_fawkes: Uniform_Base
	{
		scope=2;
		author="OL";
		displayName="T-Shirt Fawkes et son Launcher";
		picture="\A3\characters_f_kart\data\ui\icon_U_Marshall_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="shirt_fawkes";
			containerClass="Supply70";
			mass=40;
			armor=0;
		};
	};

			class tenue_shirt_brazzier: Uniform_Base
	{
		scope=2;
		author="OL";
		displayName="T-Shirt Brazzier";
		picture="\A3\characters_f_kart\data\ui\icon_U_Marshall_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="shirt_brazzier";
			containerClass="Supply70";
			mass=40;
			armor=0;
		};
	};

			class tenue_shirt_lewel: Uniform_Base
	{
		scope=2;
		author="OL";
		displayName="T-Shirt Lewel";
		picture="\A3\characters_f_kart\data\ui\icon_U_Marshall_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="shirt_lewel";
			containerClass="Supply70";
			mass=40;
			armor=0;
		};
	};

			class tenue_tenue_sheriff: Uniform_Base
	{
		scope=2;
		author="OL";
		displayName="ML Uniforme de Sheriff";
		picture="\A3\characters_f_kart\data\ui\icon_U_Marshall_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tenue_sheriff";
			containerClass="Supply70";
			mass=40;
			armor=0;
		};
	};

			class tenue_tenue_securitas: Uniform_Base
	{
		scope=2;
		author="OL";
		displayName="Tenue Securitas";
		picture="\A3\characters_f_kart\data\ui\icon_U_Marshall_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tenue_securitas";
			containerClass="Supply70";
			mass=40;
			armor=0;
		};
	};

			class tenue_tenue_brinks: Uniform_Base
	{
		scope=2;
		author="OL";
		displayName="Tenue Brinks";
		picture="\A3\characters_f_kart\data\ui\icon_U_Marshall_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tenue_brinks";
			containerClass="Supply70";
			mass=40;
			armor=0;
		};
	};

			class tenue_shirt_vasquez: Uniform_Base
	{
		scope=2;
		author="OL";
		displayName="T-Shirt Vasquez";
		picture="\A3\characters_f_kart\data\ui\icon_U_Marshall_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="shirt_vasquez";
			containerClass="Supply70";
			mass=40;
			armor=0;
		};
	};

		class tenue_shirt_black: Uniform_Base
	{
		scope=2;
		author="OL";
		displayName="T-Shirt Black";
		picture="\A3\characters_f_kart\data\ui\icon_U_Marshall_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="shirt_black";
			containerClass="Supply70";
			mass=40;
			armor=0;
		};
	};

			class tenue_shirt_red: Uniform_Base
	{
		scope=2;
		author="OL";
		displayName="T-Shirt Red";
		picture="\A3\characters_f_kart\data\ui\icon_U_Marshall_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="shirt_red";
			containerClass="Supply70";
			mass=40;
			armor=0;
		};
	};

			class tenue_shirt_violet: Uniform_Base
	{
		scope=2;
		author="OL";
		displayName="T-Shirt Purple";
		picture="\A3\characters_f_kart\data\ui\icon_U_Marshall_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="shirt_violet";
			containerClass="Supply70";
			mass=40;
			armor=0;
		};
	};

				class tenue_shirt_redcamo: Uniform_Base
	{
		scope=2;
		author="OL";
		displayName="T-Shirt Red Camo";
		picture="\A3\characters_f_kart\data\ui\icon_U_Marshall_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="shirt_redcamo";
			containerClass="Supply70";
			mass=40;
			armor=0;
		};
	};

				class tenue_shirt_black_peas: Uniform_Base
	{
		scope=2;
		author="OL";
		displayName="T-Shirt Black Peas";
		picture="\A3\characters_f_kart\data\ui\icon_U_Marshall_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="shirt_black_peas";
			containerClass="Supply70";
			mass=40;
			armor=0;
		};
	};

				class tenue_shirt_blanc: Uniform_Base
	{
		scope=2;
		author="OL";
		displayName="T-Shirt White";
		picture="\A3\characters_f_kart\data\ui\icon_U_Marshall_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="shirt_blanc";
			containerClass="Supply70";
			mass=40;
			armor=0;
		};
	};

				class tenue_shirt_blue_stars: Uniform_Base
	{
		scope=2;
		author="OL";
		displayName="T-Shirt Blue Stars";
		picture="\A3\characters_f_kart\data\ui\icon_U_Marshall_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="shirt_blue_stars";
			containerClass="Supply70";
			mass=40;
			armor=0;
		};
	};

				class tenue_shirt_brown: Uniform_Base
	{
		scope=2;
		author="OL";
		displayName="T-Shirt Brown";
		picture="\A3\characters_f_kart\data\ui\icon_U_Marshall_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="shirt_brown";
			containerClass="Supply70";
			mass=40;
			armor=0;
		};
	};
};
