class CarShops {
    /*
    *    ARRAY FORMAT:
    *        0: STRING (Classname)
    *        1: ARRAY (This is for limiting items to certain things)
    *            0: Variable to read from
    *            1: Variable Value Type (SCALAR / BOOL /EQUAL)
    *            2: What to compare to (-1 = Check Disabled)
    *
    *   BLUFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_WEST
    *   OPFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EAST
    *   Independent Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_GUER
    *   Civilian Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_CIV
    */

    //========================================================================
    //=====                                                              =====
    //=====                             Civil                            =====
    //=====                                                              =====
    //========================================================================
    #include "civ\civ_car.hpp"
    #include "civ\civ_luxe.hpp"
    #include "civ\civ_camionette.hpp"
    #include "civ\civ_truck.hpp"
    #include "civ\civ_air.hpp"
    #include "civ\civ_ship.hpp"

    //========================================================================
    //=====                                                              =====
    //=====                           criminel                           =====
    //=====                                                              =====
    //========================================================================

    #include "rebel\voy_car.hpp"
    #include "rebel\terro_car.hpp"
    #include "rebel\crimi_car.hpp"




    //========================================================================
    //=====                                                              =====
    //=====                           Pompier                            =====
    //=====                                                              =====
    //========================================================================

    #include "EMS\med_car.hpp"
    #include "EMS\med_air.hpp"

    //========================================================================
    //=====                                                              =====
    //=====                           gendarme                           =====
    //=====                                                              =====
    //========================================================================

    #include "sheriff\cop_car.hpp"
    #include "sheriff\cop_air.hpp"
	#include "Army\militaire.hpp"
    //#include "sheriff\gign_car.hpp"
    //#include "sheriff\gos_car.hpp"

    //========================================================================
    //=====                                                              =====
    //=====                          Entreprise                          =====
    //=====                                                              =====
    //========================================================================

    #include "entreprises\dep.hpp"
    #include "entreprises\entrepreneur.hpp"
    //#include "entreprises\loca.hpp"
    #include "entreprises\gouv.hpp"
    #include "entreprises\PlateTek.hpp"
    #include "entreprises\TTTG.hpp"
    #include "entreprises\AirAustralia.hpp"

};

#include "LifeCfgVehiclesMaster.hpp"