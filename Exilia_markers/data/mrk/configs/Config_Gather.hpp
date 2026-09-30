class CfgGather {
    zoneSize = 30;
    class Resources {

        class canneasucre {
            amount = 3;
            zones[] = { "sugar_canne_1" };
            item = "";
        };

        class tabac {
            amount = 3;
            zones[] = { "tabac_1" };
            item = "";
        };
		
		class canabisnt {
            amount = 1;
            zones[] = { "canabis_1" };
            item = "";
        };
		
		class corp {
            amount = 3;
            zones[] = { "Cimetiere_1","Cimetiere_2","Cimetiere_3","Cimetiere_4","Cimetiere_5"};
            item = "";
        };
		
    };

/*
This block can be set using percent,if you want players to mine only one resource ,just leave it as it is.
Example:
        class copper_unrefined
    {
            amount = 2;
        zones[] = { "copper_mine" };
        item = "pickaxe";
        mined[] = { "copper_unrefined" };
This will make players mine only copper_unrefined
Now let's go deeper
Example 2:
        class copper_unrefined
    {
            amount = 2;
        zones[] = { "copper_mine" };
        item = "pickaxe";
        mined[] = { {"copper_unrefined",0,25},{"iron_unrefined",25,95},{"diamond_uncut",95,100} };
    };
    This will give :
    25(±1)% to copper_unrefined;
    70(±1)% to iron_unrefined;
    5%(±1)% to diamond_uncut;

                                                         ! Watch Out !
 If percents are used,you MUST put more than 1 resource in the mined parameter
 mined[] = { {"copper_unrefined",0,25} }; NOT OK (But the script will work)
 mined[] = { {"copper_unrefined",0,45 },{"iron_unrefined",45} };  NOT OK (The script won't work )
 mined[] = { {"copper_unrefined",0,45},{"copper_unrefined",80,100} }; NOT OK
 mined[] = { "copper_unrefined" }; OK
 mined[] = { {"copper_unrefined",0,35} , { "iron_unrefined" ,35,100 } }; OK
*/

    class Minerals {


		/////////////////////////////////////////
		////              PELLE              ////
		/////////////////////////////////////////

        class cristaux_unrefined {
            amount = 2;
            zones[] = { "cristaux_1" };
            item = "pelle";
            mined[] = {"cristaux_unrefined"};
        };

        class sand {
            amount = 2;
            zones[] = { "sand_1"};
            item = "pelle";
            mined[] = { "sand" };
        };

        class excrements {
            amount = 2;
            zones[] = { "excrements_1" };
            item = "pelle";
            mined[] = { "excrements" };
        };



		/////////////////////////////////////////
		////             PIOCHE              ////
		/////////////////////////////////////////

		class soufre {
            amount = 2;
            zones[] = { "soufre_1" };
            item = "pickaxe";
            mined[] = { "soufrepur" };
        };

        class charbon {
            amount = 2;
            zones[] = { "charbon_1" };
            item = "pickaxe";
            mined[] = { "charbonpur" };
        };
		
        class uranium_pur {
            amount = 2;
            zones[] = { "uranium_1" };
            item = "pickaxe";
            mined[] = { "uranium_pur" };
        };
		
        class platine_uncut {
            amount = 2;
            zones[] = { "platine_1" };
            item = "pickaxe";
            mined[] = { "platine_uncut" };
        };

        class laiton_unrefined {
            amount = 2;
            zones[] = { "laiton_1" };
            item = "pickaxe";
            mined[] = { "laiton_unrefined" };
        };

        class fonte_unrefined {
            amount = 2;
            zones[] = { "fonte_1" };
            item = "pickaxe";
            mined[] = { "fonte_unrefined" };
        };

		class petrole_brut {
            amount = 2;
            zones[] = { "petrole_1" };
            item = "pickaxe";
            mined[] = { "petrole_brut" };
        };

		/////////////////////////////////////////
		////            chainsaw             ////
		/////////////////////////////////////////

		class bois {
            amount = 2;
            zones[] = { "bois_1"};
            item = "chainsaw";
            mined[] = { "bois" };
        };
    };
};