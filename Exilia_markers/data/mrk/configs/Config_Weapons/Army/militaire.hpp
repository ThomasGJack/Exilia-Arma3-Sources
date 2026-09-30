class army {
        name = "Shop militaire";
        side = "cop";
        license = "";
        level[] = {"life_armylevel", "SCALAR", 1, "Vous devez etre militaire"};
		
        items[] = {
			{ "", "=== mitraillette ===", -1, -1 },
			{ "rhs_weap_m27iar", "M27 IAR", 20, 0 },
			{ "rhs_weap_m16a4", "M16A4", 20, 0 },
			
			{ "", "=== lance grenade ===", -1, -1 },
			{ "rhs_weap_m32", "lance grenade fumigène", 20, 0 },
			
			{ "", "=== sniper ===", -1, -1 },
			{ "rhs_weap_M107", "M107", 20, 0 },
			{ "srifle_LRR_F", "M200", 20, 0 },
			
			{ "", "=== mitrailleuse ===", -1, -1 },
			{ "rhs_weap_m249_pip", "M249", 20, 0 },
			
			{ "", "=== semi-auto ===", -1, -1 },
			{ "prpl_benelli_pgs_rail", "benelli", 20, 0 },
			
			{ "", "=== lance rocket (usage unique) ===", -1, -1 },
			{ "rhs_weap_M136", "M136", 20, 0 },
			
			{ "", "=== viseur ===", -1, -1 },
			
			{ "rhsusf_acc_T1_high", "viseur rouge M27 IAR/M16A4", 0, 0 },
			{ "rhsusf_acc_anpeq15_bk", "désignateur laser M27 IAR/M16A4", 0, 0 },
			{ "rhsusf_acc_grip2", "Grip M27 IAR/M16A4", 0, 0 },
			{ "ACE_optic_LRPS_PIP", "viseur M107/M200", 0, 0 },
			{ "optic_Yorris", "viseur benelli", 0, 0 },
			
			{ "", "=== Divers ===", 0, 0 },
			{ "I_UavTerminal", "Terminal", 20, 0 },
            { "ACE_NVG_Gen2", "Lunettes JVN", 150, 0 },
            { "tf_anprc152", "Radio Courte Portée", 150, 0 },
            { "Rangefinder", "telemetre", 150, 0 },
            { "ItemGPS", "gps", 100, 45 },
            { "ItemMap", "carte", 50, 35 },
            { "ItemCompass", "boussole", 50, 25 },
            { "ToolKit", "Trouse a outils", 250, 75 },
            { "FirstAidKit", "", 150, 65 },
            { "ACE_CableTie","Serflex",150 },
            { "ACE_EarPlugs","Bouchons d'oreilles",500 },
			{ "ACE_SpottingScope","Lunette",150 },
			{ "ACE_Kestrel4500","Kestrel",150 },
			{ "ACE_ATragMX","AtragMX",150 },
			{ "ACE_RangeTable_82mm","Table 82mm",150 },
			{ "ACE_RangeCard","Table",150 }
        };

        mags[] = {
			
			{ "rhs_200rnd_556x45_B_SAW", "changeur M249 nomral", 25 },
			{ "rhs_200rnd_556x45_T_SAW", "changeur M249 tracer", 25 },
			{ "rhs_mag_30Rnd_556x45_M855_Stanag", "changeur M27 IAR/M16A4", 25 },
			{ "rhsusf_mag_6Rnd_M713_red", "changeur lance grenade fumigène", 25 },
			{ "rhsusf_mag_10Rnd_STD_50BMG_M33", "changeur M107", 25 },
			{ "7Rnd_408_Mag", "changeur M200", 25 },
			{ "prpl_8Rnd_12Gauge_Pellets", "changeur benelli", 25 }
        };
		
		accs[] = {
			
        };
		
	};