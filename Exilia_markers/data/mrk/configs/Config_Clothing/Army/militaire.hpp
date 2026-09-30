class army {
        title = "STR_Shops_C_gign";
        license = "";
        side = "cop";
		
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "rhs_uniform_g3_m81", "", 100, { "", "", -1 } }
        };
		
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_HelmetB_light_grass", "", 100, { "", "", -1 } }
        };
		
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "HAP_V_PlateCarrierGL_blue", "Soldat", 100, { "life_armylevel", "SCALAR", 1 } },
			{ "HAP_V_PlateCarrierGL_brown", "Sergent", 100, { "life_armylevel", "SCALAR", 2 } },
            { "HAP_V_PlateCarrierGL_camo2", "Adjudant", 100, { "life_armylevel", "SCALAR", 3 } },
			{ "HAP_V_PlateCarrierGL_camo3", "Lieutenant", 100, { "life_armylevel", "SCALAR", 4 } },
			{ "HAP_V_PlateCarrierGL_camo4", "Capitaine", 100, { "life_armylevel", "SCALAR", 5 } },
			{ "HAP_V_PlateCarrierGL_green", "Commandant", 100, { "life_armylevel", "SCALAR", 6 } },
			{ "HAP_V_PlateCarrierGL_HazMat", "Colonel", 100, { "life_armylevel", "SCALAR", 7 } },
			{ "HAP_V_PlateCarrierGL_leo1", "General", 100, { "life_armylevel", "SCALAR", 8 } }
        };
		
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_Bergen_hex_F", "", 100, { "", "", -1 } },
            { "B_UAV_01_backpack_F", "Sac Drone", 100, { "", "", -1 } }
        };
    };