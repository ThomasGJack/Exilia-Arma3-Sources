
/*
*    Format:
*        level: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*            3: Custom exit message (Optional)
*
*    items: { Classname, Itemname, BuyPrice, SellPrice }
*
*    Itemname only needs to be filled if you want to rename the original object name.
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/

	//========================================================================
	//=====                                                              =====
	//=====                          Shop civil                          =====
	//=====                                                              =====
	//========================================================================


class WeaponShops {

    /* civil */
    #include "civil\genstore.hpp"
    #include "civil\gun.hpp"
    #include "civil\stations_services.hpp"
    #include "civil\Altis_Phone.hpp"

    /* rebel */
    #include "rebel\criminel.hpp"
    #include "rebel\terroriste.hpp"
    #include "rebel\voyou.hpp"

    /* entreprises */

    #include "entreprises\entrepreneur.hpp"
    #include "entreprises\dep.hpp"
    #include "entreprises\armurier.hpp"

    /* pompier */
    #include "pompier\basic.hpp"

    /* gendarme */
     #include "Sheriff\cop.hpp"
	 #include "Army\militaire.hpp"

};
