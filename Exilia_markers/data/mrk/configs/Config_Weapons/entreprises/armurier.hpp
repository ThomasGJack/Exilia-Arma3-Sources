class gunc {
        name = "Categorie C";
        side = "civ";
        license = "gun_armurerie";
        level[] = {};
        items[] = {
		{ "NONE", "=== Autres ===", 0, 0 },
	    { "ACE_EarPlugs","Bouchons d'oreilles",5, -1 },
	    { "tf_anprc152", "Radio Courte Portée", 150, -1 },
        { "NVGoggles", "JVN", 1000, 20 },
		{ "NONE", "=== Armes ===", 0, 0 },
	    { "KA_axe", "hache de conbat", 65, 50 },
        { "KA_machete", "machete de combat", 65, 500 },
        { "Hatchet", "Katana", 65, 50 },
        { "KA_knife", "couteau de combat", 65, 50 },
        { "KA_dagger", "couteau de combat", 65, 50 },
		{ "KA_Px4", " Beretta Px4", 65, 50 },
		{ "KA_Glock_17_Single", "Glock 17", 65, 50 },
		{ "KA_P226", "p226 ", 65, 50 },
		{ "SPP_1_base_F", "SP1", 65, 50 },
		{ "NONE", "=== Accesoires ===", 0, 0 },
		{ "acc_flashlight_pistol", "Lampe Pistolet", 25, 25 }
    };

        mags[] = {
        { "KA_Px4_17Rnd_9x19_FMJ_Mag", "Beretta Px4 munitions", 25, -1 },
        { "KA_17Rnd_9x19_Mag", "munitions g17", 25, -1 },
        { "KA_P226_15Rnd_9x19_FMJ_Mag", "munitions p226", 25, -1 },
		{ "4Rnd_45x395_R", "munitions SP1", 25, -1 }
    };
};

class gunb {
        name = "Categorie B"; 
        side = "civ";
        license = "gun_armurerie";
        level[] = {};
        items[] = {
		{ "NONE", "=== Autres ===", 0, 0 },
	    { "ACE_EarPlugs","Bouchons d'oreilles",5 , -1 },
	    { "tf_anprc152", "Radio Courte Portée", 150, -1 },
        { "NVGoggles", "", 1000, 20 },
		{ "NONE", "=== Armes ===", 0, 0 },
	    { "AEK_919K", "AEK 919", 65, 5 },
        { "Calico_M950", "Calico", 65, 5 },
        { "KA_FN57", "Five Seven", 65, 5 },
        { "KA_Glock_18_Single", "Glock 18", 65, 5 },
		{ "KA_Mx4_Black", "Beretta MX4", 65, 5 },
		{ "KA_crossbow_black", "arbalète", 65, 5 },
		{ "KA_Vityaz", "PP19.01", 65, 5 },
		{ "KA_PP19", "PP Bizon", 65, 5 },
		{ "KA_UMP45", "UMP45", 65, 5 },
		{ "NONE", "=== Accesoires ===", 0, 0 },
		{ "KA_kobra_PP19", "Viseur PP bizon", 65, 5 },
        { "optic_MRD", "Viseur MRD", 25, 25 },
	    { "optic_Aco_smg", "viseur SMG", 25, 25 }
    };

        mags[] = {
        { "20Rnd_9x18_Mag", "munitions AEK", 25, -1 },
		{ "50Rnd_9x19_Mag", "munitions Calico", 25, -1 },
		{ "KA_20Rnd_57x28_SS190", "munitions Five Seven", 25, -1 },
		{ "KA_17Rnd_9x19_Mag", "munitions G18", 25, -1 },
		{ "KA_Mx4_30Rnd_9x19_FMJ_Mag", "munitions Beretta MX4", 25, -1 },
		{ "KA_arrow_mag", "carreau d'arbalète", 25, -1 },
		{ "KA_30Rnd_9x19_7N31_AP_Mag", "munitions PP19.01", 25, -1 },
        { "KA_64Rnd_9x18_PMM_FMJ_Mag", "munitions PP Bizon", 25, -1 },
		{ "KA_25Rnd_45ACP_FMJ_Mag", "munitions UMP45", 25, -1 }
    };

};

class guna {
        name = "Categorie A"; 
        side = "civ";
        license = "gun_armurerie";
        level[] = {};
        items[] = {
		{ "NONE", "=== Autres ===", 0, 0 },
	    { "ACE_EarPlugs","Bouchons d'oreilles",5 , -1 },
	    { "tf_anprc152", "Radio Courte Portée", 150, -1 },
        { "NVGoggles", "", 20, 20 },
		{ "NONE", "=== Armes ===", 0, 0 },
	    { "arifle_AN94_F", "AN 94", 65, 5 },
        { "KA_APS", "APS", 65, 5 },
        { "KA_SPAS12", "SPAS 12", 65, 5 },
        { "KA_Galil_ACE22", "Galil", 65, 5 },
        { "SMA_M4afg_SM", "M4A1", 65, 5 },
		{ "arifle_KA_SKS_F", "SKS", 65, 5 },
		{ "SMA_ACRREMblk", "ACR", 65, 5 },
		{ "SMA_AUG_A3_F", "AUG", 65, 5 },
		{ "SMA_HK416afg", "HK416", 65, 5 },
		{ "SMA_TavorBLK_F", "tavor 21", 65, 5 },
		{ "NONE", "=== Accesoires ===", 0, 0 },
		{ "AN94_kobra", "Viseur AN94", 65, 5 },
        { "sma_spitfire_03_sc_black", "vortex spirit ", 25, 25 }
    };

    mags[] = {
        { "KA_30rnd_7N6M_FMJ_HSC_mag", "munitions AN94", 25, -1 },
        { "26Rnd_566x150_MPS", "munitions APS", 25, -1 },
        { "8Rnd_SPAS12_buck", "cartouches SPAS12", 25, -1 },
        { "KA_Galil_35rnd_Mk318_SOST_mag", "munitions Galil", 25, -1 },
        { "SMA_30Rnd_556x45_M855A1", "munitions M4A1", 25, -1 },
		{ "10Rnd_M43_762x39_Ball", "munitions SKS", 25, -1 },
		{ "SMA_30Rnd_68x43_SPC_FMJ", "munitions ACR", 25, -1 },
		{ "SMA_30Rnd_556x45_M855A1", "munitions AUG", 25, -1 },
		{ "SMA_30Rnd_556x45_M855A1", "munitions HK416", 25, -1 },
		{ "SMA_30Rnd_556x45_M855A1", "munitions tavor21", 25, -1 }
    };
};

class guns {
        name = "Categorie Special";
        side = "civ";
        license = "gun_armurerie";
        level[] = {};
        items[] = {
		{ "NONE", "=== Autres ===", 0, 0 },
	    { "ACE_EarPlugs","Bouchons d'oreilles",5 , -1 },
	    { "tf_anprc152", "Radio Courte Portée", 150, -1 },
        { "NVGoggles", "", 20, 20 },
        { "ACE_RangeCard", "Table de Tir", 65, 5 },
        { "ACE_RangeTable_82mm", "Table de Tir 82mm", 65, 5 },
        { "ACE_ATragMX", "Ordinateur de Tir", 65, 5 },
        { "Rangefinder", "Telemetre", 65, 5 },
        { "Leupold_Mk4", "Telescope de Tir", 65, 5 },
		{ "NONE", "=== Armes ===", 0, 0 },
	    { "KA_ASh_12", "ASH 12", 65, 5 },
		{ "KA_M134", "Minigun", 65, 5 },
        { "KA_M98B", "M98B", 65, 5 },
        { "KA_KSG_Green", "KS12", 65, 5 },
        { "KA_CS5", "McMillan CS6", 65, 5 },
        { "KA_VSSK", "Vychlop", 65, 5 },
		{ "KA_WA2000_47", "WA2000", 65, 5 },
		{ "SMA_ACR", "MagPul Massada", 65, 5 },
		{ "sma_minimi_mk3_762tsb", "Minimi 7.62", 65, 5 },
		{ "SMA_Mk17_16_black", "Scar H", 65, 5 },
		{ "Desert_Eagle", "desert eagle", 65, 5 },
		{ "KA_WA2000_47", "WA2000", 65, 5 },
		{ "KA_WA2000_47", "WA2000", 65, 5 },
		{ "NONE", "=== Accesoires ===", 0, 0 },
		{ "KA_M134_Eotech553", "EoTech", 65, 5 },
        { "bipod_02_F_blk", "bipied", 65, 5 },
        { "ACE_optic_LRPS_2D", "optique de precision", 65, 5 }
    };

        mags[] = {
        { "500Rnd_762x51_Belt", "Drum minigun", 25, -1 },
        { "KA_20Rnd_STs_130_Ball", "munitions ASH", 25, -1 },
        { "KA_M98B_10Rnd_338_API526_Mag", "munitions M98B", 25, -1 },
        { "7Rndx2_KSG_buck_mag", "ks12", 25, -1 },
		{ "KA_CS5_10rnd_Mk316_SPR_mag", "munitions McMillan", 25, -1 },
		{ "KA_6Rnd_300win_Mag", "munitions WA2000", 25, -1 },
		{ "SMA_150Rnd_762_M80A1", "munitions minimi", 25, -1 },
		{ "SMA_20Rnd_762x51mm_M80A1_EPR", "munitions Scar H", 25, -1 },
		{ "7Rnd_50_AE", "munitions desert eagle", 25, -1 }
    };
};