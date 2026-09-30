/*
*    Format:
*        licenses: ARRAY (This is for limiting spawn to certain things)
*           0: License Name
*           1: License Check Type
*                false: If license isn't set
*                true: If license is set
*           Example:
*                licenses[] = { { "pilot", true }, { "rebel", false } }; //Shows up for players with pilot and without rebel license.
*
*        level: ARRAY (This is for limiting spawn to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL / INVERSE)
*                SCALAR: VALUE => VALUE
*                BOOL: VALUE EXISTS
*                EQUAL: VALUE == VALUE
*                INVERSE: VALUE <= VALUE
*            2: What to compare to (-1 = Check Disabled)
*
*/
class CfgSpawnPoints {
    class Civilian {

        class Trinite {
            displayName = "La Trinité";
            spawnMarker = "civ_spawn_trinite";
            icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
            licenses[] = { { "",true} };
            level[] = { "", "", -1 };
        };
		
		class leport {
            displayName = "Le Port";
            spawnMarker = "civ_spawn_leport";
            icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
            licenses[] = { { "",true} };
            level[] = { "", "", -1 };
        };
		
		class darwin {
            displayName = "La Rivière";
            spawnMarker = "civ_spawn_lariviere";
            icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
            licenses[] = { { "",true} };
            level[] = { "", "", -1 };
        };

		/*

        class dep {
            displayName = "D.I.R";
            spawnMarker = "civ_car_dep";
            icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
            licenses[] = { { "dep", true } };
            level[] = { "", "", -1 };
        };
		*/
        class gouvernement {
            displayName = "Gouvernement";
            spawnMarker = "gouvernement_spawn";
            icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
            licenses[] = { { "gouvernement", true } };
            level[] = { "", "", -1 };
        };
		
    };

    class Cop {
        class trinite {
            displayName = "La Trinité";
            spawnMarker = "cop_spawn_trinite";
            icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
            licenses[] = { { "",true} };
            level[] = { "", "", -1 };
        };
		
		class leport {
            displayName = "Le Port";
            spawnMarker = "cop_spawn_leport";
            icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
            licenses[] = { { "",true} };
            level[] = { "", "", -1 };
        };
		
		class army {
            displayName = "Base militaire";
            spawnMarker = "army_spawn_base";
            icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
            licenses[] = { { "",true} };
            level[] = { "life_armylevel", "SCALAR", 1 };
        };
		
    };

    class Medic {
		
        class trinite {
            displayName = "La Trinité";
            spawnMarker = "med_spawn_trinite";
            icon = "\a3\ui_f\data\map\MapControl\hospital_ca.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };
		
		class leport {
            displayName = "Le Port";
            spawnMarker = "med_spawn_leport";
            icon = "\a3\ui_f\data\map\MapControl\hospital_ca.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };	
    };
};
