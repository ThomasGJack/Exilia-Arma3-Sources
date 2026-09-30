class CfgPatches
{
	class popoff_farm
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
	class chou: CA_Magazine
	{
		mass=8;
		displayName="Chou";
		author="popoff";
		model="\popoff_Farm\3d\chou";
		picture ="\popoff_Farm\icones\item_chou.paa";
		descriptionShort="Un chou, peut être mangé ou échangé";
		scope=2;
		class KSS
	    {
	        delay = 20;
	        type = "food";
	        add = "35";
	    };
	};
	class popoff_tomate: CA_Magazine
	{
		mass=7;
		displayName="tomate";
		author="popoff";
		model="\popoff_Farm\3d\popoff_tomate";
		picture ="\popoff_Farm\icones\tomate.paa";
		descriptionShort="Une tomate, peut être mangée ou échangée";
		scope=2;
		class KSS
	    {
	        delay = 5;
	        type = "both2";
	        add = "[15,5]";
	    };
	};
	class popoff_epis_mais: CA_Magazine
	{
		mass=15;
		displayName="popoff_epis_mais";
		author="popoff";
		model="\popoff_Farm\3d\popoff_epis_mais";
		picture ="\popoff_Farm\icones\epis_mais.paa";
		descriptionShort="Un épis de maïs, peut être mangé ou échangé";
		scope=2;
		class KSS
	    {
	        delay = 10;
	        type = "food";
	        add = "15";
	    };
	};
	class popoff_sac_ciment: CA_Magazine
	{
		mass=40;
		displayName="popoff_sac_ciment";
		author="popoff";
		model="\popoff_Farm\3d\popoff_sac_ciment";
		picture ="\popoff_Farm\icones\ciment.paa";
		descriptionShort="Sac de ciment";
		scope=2;
	};
	class popoff_sac_charbon: CA_Magazine
	{
		mass=40;
		displayName="popoff_sac_charbon";
		author="popoff";
		model="\popoff_Farm\3d\popoff_sac_charbon";
		picture ="\popoff_Farm\icones\charbon.paa";
		descriptionShort="Sac de charbon";
		scope=2;
	};
	class popoff_sac_soufre: CA_Magazine
	{
		mass=40;
		displayName="popoff_sac_soufre";
		author="popoff";
		model="\popoff_Farm\3d\popoff_sac_soufre";
		picture ="\popoff_Farm\icones\soufre.paa";
		descriptionShort="Sac de soufre";
		scope=2;
	};
	class popoff_langouste: CA_Magazine
	{
		mass=8;
		displayName="langouste";
		author="popoff";
		model="\popoff_Farm\3d\popoff_langouste";
		picture ="\popoff_Farm\icones\langouste.paa";
		descriptionShort="Une langouste, peut être mangée ou échangée";
		scope=2;
		class KSS
	    {
	        delay = 30;
	        type = "food";
	        add = "45";
	    };
	};
	class popoff_roussette: CA_Magazine
	{
		mass=8;
		displayName="roussette";
		author="popoff";
		model="\a3\animals_f\Fishes\Catshark_F";
		picture ="\popoff_Farm\icones\roussette.paa";
		descriptionShort="Une rousette, vous pouvez vendre";
		scope=2;
		class KSS
	    {
	        delay = 60;
	        type = "food";
	        add = "80";
	    };
	};
	class popoff_maquereau: CA_Magazine
	{
		mass=8;
		displayName="maquereau";
		author="popoff";
		model="\a3\animals_f\Fishes\Mackerel_F";
		picture ="\popoff_Farm\icones\maquereau.paa";
		descriptionShort="Un maquereau, vous pouvez vendre";
		scope=2;
		class KSS
	    {
	        delay = 20;
	        type = "food";
	        add = "10";
	    };
	};
	class popoff_mullet: CA_Magazine
	{
		mass=8;
		displayName="mullet";
		author="popoff";
		model="\a3\animals_f\Fishes\Mullet_F";
		picture ="\popoff_Farm\icones\mullet.paa";
		descriptionShort="Un mullet, vous pouvez vendre";
		scope=2;
		class KSS
	    {
	        delay = 20;
	        type = "food";
	        add = "15";
	    };
	};
	class popoff_Ornate: CA_Magazine
	{
		mass=8;
		displayName="Ornate";
		author="popoff";
		model="\a3\animals_f\Fishes\Ornate_F";
		picture ="\popoff_Farm\icones\Ornate.paa";
		descriptionShort="Un Ornate, vous pouvez vendre";
		scope=2;
		class KSS
	    {
	        delay = 20;
	        type = "food";
	        add = "15";
	    };
	};
	class popoff_Salema_Porgy: CA_Magazine
	{
		mass=8;
		displayName="Salema_Porgy";
		author="popoff";
		model="\a3\animals_f\Fishes\Salema_Porgy_F";
		picture ="\popoff_Farm\icones\Salema_Porgy.paa";
		descriptionShort="Un Salema_Porgy, vous pouvez vendre";
		scope=2;
		class KSS
	    {
	        delay = 20;
	        type = "food";
	        add = "15";
	    };
	};
	class popoff_thon: CA_Magazine
	{
		mass=8;
		displayName="Thon";
		author="popoff";
		model="\a3\animals_f\Fishes\Tuna_F";
		picture ="\popoff_Farm\icones\thon.paa";
		descriptionShort="Un thon, vous pouvez vendre ou le quitter pour trouver mieux";
		scope=2;
		class KSS
	    {
	        delay = 80;
	        type = "food";
	        add = "100";
	    };
	};
	class popoff_tortue: CA_Magazine
	{
		mass=8;
		displayName="tortue";
		author="popoff";
		model="\a3\animals_f\Turtle\turtle_F";
		picture ="\popoff_Farm\icones\tortue.paa";
		descriptionShort="Une tortue, attention espèce menacée";
		scope=2;
		class KSS
	    {
	        delay = 180;
	        type = "food";
	        add = "100";
	    };
	};
	class salade: CA_Magazine
	{
		mass=8;
		displayName="Salade";
		author="popoff";
		model="\popoff_Farm\3d\salade";
		picture ="\popoff_Farm\icones\item_salade.paa";
		descriptionShort="Une salade, peut être mangée ou échangée";
		scope=2;
		class KSS
	    {
	        delay = 10;
	        type = "both2";
	        add = "[5,10]";
	    };
	};
	class popoff_carotte: CA_Magazine
	{
		mass=7;
		displayName="Carotte";
		author="popoff";
		model="\popoff_Farm\3d\popoff_carotte_inv";
		picture ="\popoff_Farm\icones\item_carotte.paa";
		descriptionShort="Une carotte, j'ai bien une petite idée sur son utilité";
		scope=2;
		class KSS
	    {
	        delay = 5;
	        type = "food";
	        add = "5";
	    };
	};
	class popoff_charbon: CA_Magazine
	{
		mass=15;
		displayName="Charbon";
		author="popoff";
		model="\popoff_Farm\3d\popoff_charbon";
		picture ="\popoff_Farm\icones\item_charbon.paa";
		descriptionShort="Morceau de charbon";
		scope=2;
	};
	class popoff_diamant: CA_Magazine
	{
		mass=1;
		displayName="Diamant";
		author="popoff";
		model="\popoff_Farm\3d\popoff_diamant";
		picture ="\popoff_Farm\icones\diamant.paa";
		descriptionShort="Diamant";
		scope=2;
	};
	class badge_rehab: CA_Magazine
	{
		mass=1;
		displayName="badge_rehab";
		author="popoff";
		model="\popoff_Farm\3d\badge_rehab";
		picture ="\douane_popoff\textures\logo_rehab.paa";
		descriptionShort="badge_rehab";
		scope=2;
	};
	class popoff_buche: CA_Magazine
	{
		mass=25;
		displayName="Buche";
		author="popoff";
		model="\popoff_Farm\3d\popoff_buche";
		picture ="\popoff_Farm\icones\buche.paa";
		descriptionShort="Une grosse bûche";
		scope=2;
	};
	class popoff_souffre: CA_Magazine
	{
		mass=20;
		displayName="Souffre";
		author="popoff";
		model="\popoff_Farm\3d\popoff_souffre";
		picture ="\popoff_Farm\icones\item_souffre.paa";
		descriptionShort="Morceau de souffre";
		scope=2;
	};
	class popoff_coke_poudre: CA_Magazine
	{
		mass=7;
		displayName="Coke en poudre";
		author="popoff";
		model="\UMI_Inventory\Models\Coke_Pile_01";
		picture ="\popoff_Farm\icones\coke.paa";
		descriptionShort="Poudre de cocaine";
		scope=2;
	};
	class popoff_coke_bloc: CA_Magazine
	{
		mass=40;
		displayName="Bloc de coke";
		author="popoff";
		model="\UMI_Inventory\Models\Cocaine_Brick";
		picture ="\popoff_Farm\icones\coke_bloc.paa";
		descriptionShort="Bloc de cocaine";
		scope=2;
	};
	class popoff_patate: CA_Magazine
	{
		mass=15;
		displayName="Patate";
		author="popoff";
		model="\popoff_Farm\3d\popoff_patate";
		picture ="\popoff_Farm\icones\item_patate.paa";
		descriptionShort="Une patate";
		scope=2;

		class KSS
	    {
	        delay = 6;
	        type = "food";
	        add = "12";
	    };
	};
	class popoff_graines_cannabis: CA_Magazine
	{
		mass=10;
		displayName="graines de cannabis";
		author="popoff";
		model="\popoff_Farm\3d\popoff_graines";
		picture ="\popoff_Farm\icones\item_graine_canabise.paa";
		descriptionShort="Graines de cannabis, peut être cultivé";
		scope=2;
	};
	class popoff_graines_tomate: CA_Magazine
	{
		mass=10;
		displayName="graines de tomate";
		author="popoff";
		model="\popoff_Farm\3d\popoff_graines";
		picture ="\popoff_Farm\icones\item_graine_canabise.paa";
		descriptionShort="Graines de tomate, peut être cultivé";
		scope=2;
	};
	class popoff_crystaux_meth: CA_Magazine
	{
		mass=10;
		displayName="crystaux de meth";
		author="popoff";
		model="\popoff_Farm\3d\crystaux_meth";
		picture ="\popoff_Farm\icones\item_graine_canabise.paa";
		descriptionShort="Crystaux de meth";
		scope=2;
	};
	class popoff_crystaux_meth_sachetpapier: CA_Magazine
	{
		mass=10;
		displayName="crystaux de meth en sachet";
		author="popoff";
		model="\popoff_Farm\3d\crystaux_meth_sachetpapier";
		picture ="\popoff_Farm\icones\item_graine_canabise.paa";
		descriptionShort="crystaux de meth en sachet";
		scope=2;
	};
	class popoff_steak_cru: CA_Magazine
	{
		mass=15;
		displayName="Steak cru";
		author="popoff";
		model="\popoff_Farm\3d\popoff_steak_cru";
		picture ="\popoff_Farm\icones\item_steak_cru.paa";
		descriptionShort="Steak cru";
		scope=2;
		class KSS
	    {
	        delay = 45;
	        type = "food";
	        add = "30";
	    };
	};
	class popoff_steak_cuit: CA_Magazine
	{
		mass=15;
		displayName="Steak cuit";
		author="popoff";
		model="\popoff_Farm\3d\popoff_steak_cuit";
		picture ="\popoff_Farm\icones\item_steak_cuit.paa";
		descriptionShort="Steak cuit";
		scope=2;
		class KSS
	    {
	        delay = 15;
	        type = "food";
	        add = "80";
	    };
	};
	class popoff_caisse_tnt: CA_Magazine
	{
		mass=1;
		displayName="caisse TNT";
		author="popoff";
		model="\popoff_Farm\3d\popoff_caisse_tnt";
		picture ="\popoff_Farm\icones\item_caisse_tnt.paa";
		descriptionShort="caisse TNT";
		scope=2;
	};
	class popoff_feuille_tabac: CA_Magazine
	{
		mass=15;
		displayName="Feuilles de tabac";
		author="popoff";
		model="\popoff_Farm\3d\popoff_feuille_tabac";
		picture ="\popoff_Farm\icones\item_tabac.paa";
		descriptionShort="Feuilles de tabac";
		scope=2;
	};
	class popoff_phone: CA_Magazine
	{
		mass=1;
		displayName="P-phone 3425345";
		author="popoff";
		model="\popoff_Farm\3d\popoff_phone";
		picture ="\popoff_Farm\icones\item_iphone.paa";
		descriptionShort="P-phone 3425345";
		scope=2;
	};
	class popoff_redbull: CA_Magazine
	{
		mass=15;
		displayName="Redbull";
		author="popoff";
		model="\popoff_Farm\3d\popoff_redbull";
		picture ="\popoff_Farm\icones\redbull.paa";
		descriptionShort="Canette de Redbull";
		scope=2;

		class KSS
	    {
	        delay = 3;
	        type = "drink";
	        add = "11";
	    };
	};
	class popoff_tape: CA_Magazine
	{
		mass=1;
		displayName="Duct tape";
		author="popoff";
		model="\popoff_Farm\3d\popoff_tape";
		picture ="\popoff_Farm\icones\item_gaffer_scotch.paa";
		descriptionShort="Duct tape";
		scope=2;
	};
	class popoff_plaqueimat: CA_Magazine
	{
		mass=1;
		displayName="Plaque immatriculation vierge";
		author="popoff";
		model="\popoff_Farm\3d\popoff_plaqueimat";
		picture ="\popoff_Farm\icones\item_plaque_vierge.paa";
		descriptionShort="Plaque immatriculation vierge";
		scope=2;
	};
	class popoff_pizza: CA_Magazine
	{
		mass=15;
		displayName="Pizza";
		author="popoff";
		model="\popoff_Farm\3d\popoff_pizza";
		picture ="\popoff_Farm\icones\item_pizza.paa";
		descriptionShort="Pizza";
		scope=2;
		class KSS
	    {
	        delay = 50;
	        type = "food";
	        add = "70";
	    };
	};
	class popoff_donut: CA_Magazine
	{
		mass=15;
		displayName="Donut";
		author="popoff";
		model="\popoff_Farm\3d\popoff_donut";
		picture ="\popoff_Farm\icones\item_donut_blanc.paa";
		descriptionShort="Donut";
		scope=2;
		class KSS
	    {
	        delay = 2;
	        type = "food";
	        add = "5";
	    };
	};
	class popoff_tassecafe: CA_Magazine
	{
		mass=15;
		displayName="Tasse de café";
		author="popoff";
		model="\popoff_Farm\3d\popoff_tassecafe";
		picture ="\popoff_Farm\icones\item_tasse.paa";
		descriptionShort="Tasse de café";
		scope=2;
		class KSS
	    {
	        delay = 15;
	        type = "drink";
	        add = "15";
	    };
	};
	class f_arme_canon_pompe: CA_Magazine
	{
		mass=15;
		displayName="f_arme_canon_pompe";
		author="popoff";
		model="\popoff_Farm\3d\f_arme_canon_pompe";
		picture ="\popoff_Farm\icones\weapon_part.paa";
		descriptionShort="f_arme_canon_pompe";
		scope=2;
	};
	class f_arme_canon_type_ak: CA_Magazine
	{
		mass=15;
		displayName="f_arme_canon_type_ak";
		author="popoff";
		model="\popoff_Farm\3d\f_arme_canon_type_ak";
		picture ="\popoff_Farm\icones\weapon_part.paa";
		descriptionShort="f_arme_canon_type_ak";
		scope=2;
	};
	class f_arme_canon_type_m4: CA_Magazine
	{
		mass=15;
		displayName="f_arme_canon_type_m4";
		author="popoff";
		model="\popoff_Farm\3d\f_arme_canon_type_m4";
		picture ="\popoff_Farm\icones\weapon_part.paa";
		descriptionShort="f_arme_canon_type_m4";
		scope=2;
	};
	class f_arme_corps_pistolet: CA_Magazine
	{
		mass=15;
		displayName="f_arme_corps_pistolet";
		author="popoff";
		model="\popoff_Farm\3d\f_arme_corps_pistolet";
		picture ="\popoff_Farm\icones\weapon_part.paa";
		descriptionShort="f_arme_corps_pistolet";
		scope=2;
	};
	class f_arme_corps_pompe: CA_Magazine
	{
		mass=15;
		displayName="f_arme_corps_pompe";
		author="popoff";
		model="\popoff_Farm\3d\f_arme_corps_pompe";
		picture ="\popoff_Farm\icones\weapon_part.paa";
		descriptionShort="f_arme_corps_pompe";
		scope=2;
	};
	class f_arme_corps_revolver: CA_Magazine
	{
		mass=15;
		displayName="f_arme_corps_revolver";
		author="popoff";
		model="\popoff_Farm\3d\f_arme_corps_revolver";
		picture ="\popoff_Farm\icones\weapon_part.paa";
		descriptionShort="f_arme_corps_revolver";
		scope=2;
	};
	class f_arme_corps_type_ak: CA_Magazine
	{
		mass=15;
		displayName="f_arme_corps_type_ak";
		author="popoff";
		model="\popoff_Farm\3d\f_arme_corps_type_ak";
		picture ="\popoff_Farm\icones\weapon_part.paa";
		descriptionShort="f_arme_corps_type_ak";
		scope=2;
	};
	class f_arme_corps_type_m4: CA_Magazine
	{
		mass=15;
		displayName="f_arme_corps_type_m4";
		author="popoff";
		model="\popoff_Farm\3d\f_arme_corps_type_m4";
		picture ="\popoff_Farm\icones\weapon_part.paa";
		descriptionShort="f_arme_corps_type_m4";
		scope=2;
	};
	class f_arme_crosse_type_ak_2_bois: CA_Magazine
	{
		mass=15;
		displayName="f_arme_crosse_type_ak_2_bois";
		author="popoff";
		model="\popoff_Farm\3d\f_arme_crosse_type_ak_2_bois";
		picture ="\popoff_Farm\icones\weapon_part.paa";
		descriptionShort="f_arme_crosse_type_ak_2_bois";
		scope=2;
	};
	class f_arme_crosse_type_ak_2_composite: CA_Magazine
	{
		mass=15;
		displayName="f_arme_crosse_type_ak_2_composite";
		author="popoff";
		model="\popoff_Farm\3d\f_arme_crosse_type_ak_2_composite";
		picture ="\popoff_Farm\icones\weapon_part.paa";
		descriptionShort="f_arme_crosse_type_ak_2_composite";
		scope=2;
	};
	class f_arme_crosse_type_ak_3: CA_Magazine
	{
		mass=15;
		displayName="f_arme_crosse_type_ak_3";
		author="popoff";
		model="\popoff_Farm\3d\f_arme_crosse_type_ak_3";
		picture ="\popoff_Farm\icones\weapon_part.paa";
		descriptionShort="f_arme_crosse_type_ak_3";
		scope=2;
	};
	class f_arme_crosse_type_ak_bois: CA_Magazine
	{
		mass=15;
		displayName="f_arme_crosse_type_ak_bois";
		author="popoff";
		model="\popoff_Farm\3d\f_arme_crosse_type_ak_bois";
		picture ="\popoff_Farm\icones\weapon_part.paa";
		descriptionShort="f_arme_crosse_type_ak_bois";
		scope=2;
	};
	class f_arme_crosse_type_ak_composite: CA_Magazine
	{
		mass=15;
		displayName="f_arme_crosse_type_ak_composite";
		author="popoff";
		model="\popoff_Farm\3d\f_arme_crosse_type_ak_composite";
		picture ="\popoff_Farm\icones\weapon_part.paa";
		descriptionShort="f_arme_crosse_type_ak_composite";
		scope=2;
	};
	class f_arme_crosse_type_m4: CA_Magazine
	{
		mass=15;
		displayName="f_arme_crosse_type_m4";
		author="popoff";
		model="\popoff_Farm\3d\f_arme_crosse_type_m4";
		picture ="\popoff_Farm\icones\weapon_part.paa";
		descriptionShort="f_arme_crosse_type_m4";
		scope=2;
	};
	class f_arme_culasse_pistolet: CA_Magazine
	{
		mass=15;
		displayName="f_arme_culasse_pistolet";
		author="popoff";
		model="\popoff_Farm\3d\f_arme_culasse_pistolet";
		picture ="\popoff_Farm\icones\weapon_part.paa";
		descriptionShort="f_arme_culasse_pistolet";
		scope=2;
	};
	class f_arme_garde_main_type_ak_2: CA_Magazine
	{
		mass=15;
		displayName="f_arme_garde_main_type_ak_2";
		author="popoff";
		model="\popoff_Farm\3d\f_arme_garde_main_type_ak_2";
		picture ="\popoff_Farm\icones\weapon_part.paa";
		descriptionShort="f_arme_garde_main_type_ak_2";
		scope=2;
	};
	class f_arme_garde_main_type_ak_bois: CA_Magazine
	{
		mass=15;
		displayName="f_arme_garde_main_type_ak_bois";
		author="popoff";
		model="\popoff_Farm\3d\f_arme_garde_main_type_ak_bois";
		picture ="\popoff_Farm\icones\weapon_part.paa";
		descriptionShort="f_arme_garde_main_type_ak_bois";
		scope=2;
	};
	class f_arme_garde_main_type_ak_composite: CA_Magazine
	{
		mass=15;
		displayName="f_arme_garde_main_type_ak_composite";
		author="popoff";
		model="\popoff_Farm\3d\f_arme_garde_main_type_ak_composite";
		picture ="\popoff_Farm\icones\weapon_part.paa";
		descriptionShort="f_arme_garde_main_type_ak_composite";
		scope=2;
	};
	class f_arme_garde_main_type_m4: CA_Magazine
	{
		mass=15;
		displayName="f_arme_garde_main_type_m4";
		author="popoff";
		model="\popoff_Farm\3d\f_arme_garde_main_type_m4";
		picture ="\popoff_Farm\icones\weapon_part.paa";
		descriptionShort="f_arme_garde_main_type_m4";
		scope=2;
	};
	class f_arme_poignee_revolver: CA_Magazine
	{
		mass=15;
		displayName="f_arme_poignee_revolver";
		author="popoff";
		model="\popoff_Farm\3d\f_arme_poignee_revolver";
		picture ="\popoff_Farm\icones\weapon_part.paa";
		descriptionShort="f_arme_poignee_revolver";
		scope=2;
	};
	class f_arme_revolver_barrilet: CA_Magazine
	{
		mass=15;
		displayName="f_arme_revolver_barrilet";
		author="popoff";
		model="\popoff_Farm\3d\f_arme_revolver_barrilet";
		picture ="\popoff_Farm\icones\weapon_part.paa";
		descriptionShort="f_arme_revolver_barrilet";
		scope=2;
	};
	class popoff_malette_herse: CA_Magazine
	{
		mass=15;
		displayName="Malette herse";
		author="popoff";
		model="\popoff_Farm\3d\popoff_malette";
		picture ="\popoff_Farm\icones\item_malette_herse.paa";
		descriptionShort="Malette herse";
		scope=2;
	};
	class popoff_chariot_dir_inv: CA_Magazine
	{
		mass=15;
		displayName="popoff_chariot_dir";
		author="popoff";
		model="\popoff_Farm\3d\popoff_chariot_dir";
		picture ="\popoff_Farm\icones\item_malette_herse.paa";
		descriptionShort="popoff_chariot_dir";
		scope=2;
	};
	class popoff_science_1: CA_Magazine
	{
		mass=1;
		displayName="popoff_science_1";
		author="popoff";
		model="\popoff_Farm\3d\popoff_science_1";
		picture ="\popoff_Farm\icones\item_malette_herse";
		descriptionShort="popoff_science_1";
		scope=2;
	};
	class popoff_science_2: CA_Magazine
	{
		mass=1;
		displayName="popoff_science_2";
		author="popoff";
		model="\popoff_Farm\3d\popoff_science_2";
		picture ="\popoff_Farm\icones\item_malette_herse";
		descriptionShort="popoff_science_2";
		scope=2;
	};
	class popoff_science_3: CA_Magazine
	{
		mass=1;
		displayName="popoff_science_3";
		author="popoff";
		model="\popoff_Farm\3d\popoff_science_3";
		picture ="\popoff_Farm\icones\item_malette_herse";
		descriptionShort="popoff_science_3";
		scope=2;
	};
};
