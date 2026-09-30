/*
*    ARRAY FORMAT:
*        0: STRING (Classname)
*        1: STRING (Display Name, leave as "" for default)
*        2: SCALAR (Price)
*        4: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*
*   Clothing classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Equipment
*   Backpacks/remaining classnames can be found here (TIP: Search page for "pack"): https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EMPTY
*
*/
class Clothing {

    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /////                                                                                                        /////
    /////                                                 CIVIL                                                  /////
    /////                                                                                                        /////
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    #include "civil\bruce.hpp"
    #include "civil\kart.hpp"
    #include "civil\dive.hpp"
    #include "civil\gun.hpp"
    #include "civil\lacoste.hpp"



    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /////                                                                                                        /////
    /////                                               GENDARMERIE                                              /////
    /////                                                                                                        /////
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    #include "Sheriff\cop.hpp"
    #include "Army\militaire.hpp"

    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /////                                                                                                        /////
    /////                                                 POMPIER                                                /////
    /////                                                                                                        /////
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    #include "pompier\clothing.hpp"

    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /////                                                                                                        /////
    /////                                                 REBEL                                                  /////
    /////                                                                                                        /////
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    #include "rebel\criminel.hpp"
    #include "rebel\terroriste.hpp"
    #include "rebel\voyou.hpp"


    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /////                                                                                                        /////
    /////                                              ENTREPRISE                                                /////
    /////                                                                                                        /////
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    #include "entreprises\dir.hpp"
    #include "entreprises\armurier.hpp"
    #include "entreprises\PlateTek.hpp"
    #include "entreprises\AirAustralia.hpp"

};
