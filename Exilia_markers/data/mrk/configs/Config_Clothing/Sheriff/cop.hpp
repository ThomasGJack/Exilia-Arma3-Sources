class uniformes {
        title = "STR_Shops_C_Police";
        license = "";
        side = "cop";

        uniforms[] = {
            { "NONE", "Remove Uniform",  0, { "", "", -1 } },
            { "sheriff_uni1","",  50, { "life_coplevel", "SCALAR", 1 } },
            { "A3L_PDOFC","",  50, { "life_coplevel", "SCALAR", 1 } },
            { "A3L_PDCPL","",  50, { "life_coplevel", "SCALAR", 2 } },
            { "A3L_PDSGT","",  50, { "life_coplevel", "SCALAR", 3 } },
            { "A3L_PDLT","",  50, { "life_coplevel", "SCALAR", 4 } },
            { "A3L_PDCHIEF","",  50, { "life_coplevel", "SCALAR", 5 } }
		};


        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "M_sheriffhat","Beret GAV",  50, { "life_coplevel", "SCALAR", 1 } }
        };

		goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Aviator", "", 0, { "", "", -1 } }
        };

        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "Jamie_Sheriff2", "", 0, { "life_coplevel", "SCALAR", 1 } }
		};


        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "AM_PoliceBelt", "Sac", 100, { "life_coplevel", "SCALAR", 1 } }
        };
    };
class uniformes_op {
        title = "STR_Shops_C_Police";
        license = "";
        side = "cop";

        uniforms[] = {
            { "NONE", "Remove Uniform",  0, { "", "", -1 } },
            { "U_B_CTRG_1","",  50, { "life_coplevel", "SCALAR", 1 } },
			{ "U_B_FullGhillie_sard","",  50, { "life_coplevel", "SCALAR", 3 } }
		};


        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_HelmetSpecB","",  50, { "life_coplevel", "SCALAR", 1 } }
        };

		goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Balaclava_lowprofile", "cagoule, obligatoire en op", 0, { "", "", -1 } }
        };

        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_PlateCarrierH_CTRG", "", 0, { "life_coplevel", "SCALAR", 1 } },
			{ "V_PlateCarrierSpec_rgr", "", 0, { "life_coplevel", "SCALAR", 3 } }
		};


        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "AM_PoliceBelt", "Sac", 100, { "life_coplevel", "SCALAR", 1 } }
        };
    };