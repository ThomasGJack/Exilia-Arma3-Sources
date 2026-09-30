/*
*    class:
*        variable = Variable Name
*        displayName = License Name
*        price = License Price
*        illegal = Illegal License
*        side = side indicator
*/
class Licenses {
    #include "licenses.hpp"
    #include "licenses_rebel.hpp"
    #include "licenses_entreprises.hpp"
    #include "licenses_gun.hpp"
    #include "licenses_pompier.hpp"
    #include "licenses_gendarme.hpp"
    #include "traitement_legal.hpp"
    #include "traitement_illegal.hpp"
};


class LicensesShops {
	class prefecture {
		name = "Prefecture";
		side = "civ";
	    conditions = "";
	    items[] = { "driver", "trucking", "taxi", "boat", "dive", "pilot", "gun", "home"};
	};
};
