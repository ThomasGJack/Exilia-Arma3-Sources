class armurerie {
        name = "Armurerie";
        side = "cop";
        license = ""; // armurerie
        level[] = { "life_coplevel", "SCALAR", 1, "Vous devez etre sheriff" };
        items[] = {
			{ "Mattaust_Phone", "Iphone 5S", 20, -1 },
			{ "pmc_earpiece", "oreillette/ JVN", 150, -1 },
            { "tf_anprc152", "Radio Courte Portée", 150, -1 },
            { "ItemGPS", "gps", 100, 45 },
            { "ItemMap", "carte", 50, 35 },
            { "ItemCompass", "boussole", 50, 25 },
            { "ToolKit", "Trouse a outils", 250, 75 },
            { "FirstAidKit", "", 150, 65 },
            { "ACE_CableTie","Serflex",5 },
            { "ACE_EarPlugs","Bouchons d'oreilles",500 },
			{ "MainLandLife_Items_Carte_sheriff", "", 1, 1 },
			{ "Binocular", "Jumelles", 150, -1 },
			{ "ACE_elasticBandage", "", 5, -1 },
            { "Chemlight_red", "", 300, -1 },
            { "Chemlight_yellow", "", 300, 50 },
            { "Chemlight_green", "", 300, 50 },
            { "Chemlight_blue", "", 300, 50 },
            { "ACE_fieldDressing", "", 10 },
			{ "", "=== Armes ===", 0, 0 },
            { "DDOPP_X-26", "Tazer", 10, 10 },
            { "KA_P226_Black", "p226 dotation", 1, 100 },
            { "SMA_M4afg_BLK1", "M4A1 dotation", 0,{ "life_coplevel", 2 } },
			{ "Mossberg_590", "mossberg, uniquement dans le coffre", 1, { "life_coplevel", 3 } },
			{ "srifle_LRR_F", "", 0,{ "life_coplevel", 4 } },
			{ "SMA_ACRblk", "", 1,{ "life_coplevel", 5 } },
			{ "arifle_SPAR_01_blk_F", "", 1,{ "life_coplevel", 5 } },
			{ "", "=== Divers ===", 0, 0 },
			{ "SMA_eotech", "", 25 },
			{ "sma_spitfire_03_rds_black", "", 25, { "life_coplevel", 2 } },
			{ "SMA_ANPEQ15_BLK", "", 25, { "life_coplevel", 2 } },
			{ "optic_LRPS", "", 25, { "life_coplevel", 4 } },
			{ "SMA_supp1BB_556", "", 25, { "life_coplevel", 5 } },
			{ "optic_ERCO_blk_F", "", 25, { "life_coplevel", 5 } }
        };
        mags[] = {
            { "KA_P226_15Rnd_9x19_FMJ_Mag", "", 25 },
			{ "8Rnd_Mossberg_590_Pellets	", "", 25 },
			{ "7Rnd_408_Mag	", "", 25 },
			{ "30Rnd_556x45_Stanag	", "", 25 },
            { "SMA_30Rnd_556x45_M855A1", " chargeur M4A1", 25 }
        };
    };
class armurerie_op {
        name = "Armurerie op";
        side = "cop";
        license = ""; // armurerie
        level[] = { "life_coplevel", "SCALAR", 1, "Vous devez etre sheriff" };
        items[] = {
			{ "Mattaust_Phone", "Iphone 5S", 20, -1 },
			{ "pmc_earpiece", "oreillette/ JVN", 150, -1 },
            { "tf_anprc152", "Radio Courte Portée", 150, -1 },
            { "ItemGPS", "gps", 100, 45 },
            { "ItemMap", "carte", 50, 35 },
            { "ItemCompass", "boussole", 50, 25 },
            { "ToolKit", "Trouse a outils", 250, 75 },
            { "FirstAidKit", "", 150, 65 },
            { "ACE_CableTie","Serflex",5 },
            { "ACE_EarPlugs","Bouchons d'oreilles",500 },
			{ "MainLandLife_Items_Carte_sheriff", "", 1, 1 },
			{ "Binocular", "Jumelles", 150, -1 },
			{ "ACE_elasticBandage", "", 5, -1 },
            { "Chemlight_red", "", 300, -1 },
            { "Chemlight_yellow", "", 300, 50 },
            { "Chemlight_green", "", 300, 50 },
            { "Chemlight_blue", "", 300, 50 },
            { "ACE_fieldDressing", "", 10 },
			{ "", "=== Armes ===", 0, 0 },
            { "DDOPP_X-26", "Tazer", 10, 10 },
            { "KA_P226_Black", "p226 dotation", 1, 100 },
            { "SMA_HK416GLCQB_B", "HK416 dotation", 1, 100 },
			{ "SMA_HK417_16in", "soutiens courte/moyenne", 1, { "life_coplevel", 3 } },
			{ "srifle_LRR_F", "", 1, { "life_coplevel", 4 } },
			{ "launch_MRAWS_olive_F", "lanceurs, abus=ban", 1, { "life_coplevel", 4 } },
			{ "SMA_ACRblk", "", 1, { "life_coplevel", 5 } },
			{ "arifle_SPAR_01_blk_F", "", 1, { "life_coplevel", 5 } },
			{ "", "=== Divers ===", 0, 0 },
			{ "SMA_eotech", "", 25 },
			{ "sma_spitfire_03_rds_black", "", 25, { "life_coplevel", 2 } },
			{ "SMA_ANPEQ15_BLK", "", 25, { "life_coplevel", 2 } },
			{ "SMA_supp_762", "", 25, { "life_coplevel", 3 } },
			{ "bipod_01_F_blk", "", 25, { "life_coplevel", 3 } },
			{ "optic_DMS", "", 25, { "life_coplevel", 3 } },
			{ "optic_LRPS", "", 25, { "life_coplevel", 4 } },
			{ "SMA_supp1BB_556", "", 25, { "life_coplevel", 5 } },
			{ "optic_ERCO_blk_F", "", 25, { "life_coplevel", 5 } }
        };
        mags[] = {
            { "KA_P226_15Rnd_9x19_FMJ_Mag", "", 25 },
			{ "8Rnd_Mossberg_590_Pellets", "", 25 },
			{ "7Rnd_408_Mag", "", 25 },
			{ "30Rnd_556x45_Stanag", "", 25 },
			{ "SMA_20Rnd_762x51mm_M80A1_EPR", "", 25 },
			{ "1Rnd_Smoke_Grenade_shell", "", 25 },
            { "SMA_30Rnd_556x45_M855A1", " chargeur M4A1", 25 }
        };
    };