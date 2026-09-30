class gun {
        name = "Armurerie";
        side = "civ";
        license = "gun";
        level[] = { "", "", -1, "" };
        items[] = {
//  items:  { Classname, Itemname, BuyPrice, SellPrice }

			{ "ACE_EarPlugs","Bouchons d'oreilles",500 },
			{ "tf_anprc152", "Radio Courte Portée", 150, -1 },
            { "hgun_Rook40_F", "", 6500, 500 },
            { "hgun_Pistol_heavy_02_F", "", 9850, -1 },
            { "hgun_ACPC2_F", "", 11500, -1 },
            { "hgun_PDW2000_F", "", 20000, -1 }

        };

        accs[] = {
            { "optic_ACO_grn_smg", "", 2500, 250 }
        };

        mags[] = {
            { "16Rnd_9x21_Mag", "", 25, -1 },
            { "6Rnd_45ACP_Cylinder", "", 50, -1 },
            { "9Rnd_45ACP_Mag", "", 45, -1 },
            { "30Rnd_9x21_Mag", "", 75, -1 }
        };
    };