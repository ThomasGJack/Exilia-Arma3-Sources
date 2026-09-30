class LifeCfgVehicles {
    /*
    *    Vehicle Configs (Contains textures and other stuff)
    *
    *    "price" is the price before any multipliers set in Master_Config are applied.
    *
    *    Default Multiplier Values & Calculations:
    *       Civilian [Purchase, Sell]: [1.0, 0.5]
    *       Cop [Purchase, Sell]: [0.5, 0.5]
    *       Medic [Purchase, Sell]: [0.75, 0.5]
    *       ChopShop: Payout = price * 0.25
    *       GarageSell: Payout = price * [0.5, 0.5, 0.5, -1]
    *       Cop Impound: Payout = price * 0.1
    *       Pull Vehicle from Garage: Cost = price * [1, 0.5, 0.75, -1] * [0.5, 0.5, 0.5, -1]
    *           -- Pull Vehicle & GarageSell Array Explanation = [civ,cop,medic,east]
    *
    *       1: ARRAY (license required)
    *         Ex: { "driver", "" , "" , "" } //civilian, west, independent, east
    *         licenses[] = { {"CIV"}, {"COP"}, {"MEDIC"}, {"EAST"} };
    *    Textures config follows { Texture Name, side, {texture(s)path}}
    *    Texture(s)path follows this format:
    *    INDEX 0: Texture Layer 0
    *    INDEX 1: Texture Layer 1
    *    INDEX 2: Texture Layer 2
    *    etc etc etc
    *
    */

    class Default {
        vItemSpace = 10;
    };

	//////////////////////////////////////////////////////////////////////////////////
     /////                                 POMPIER                               /////
     /////////////////////////////////////////////////////////////////////////////////
	

	#include "LifeCfgVehicles\EMS\LifeCfgVehicles_Pompiers.hpp"



     //////////////////////////////////////////////////////////////////////////////////
     /////                               STOCKAGE MAISON                          /////
     //////////////////////////////////////////////////////////////////////////////////



	#include "LifeCfgVehicles\Civil\LifeCfgVehicles_Crate.hpp"

	
    //////////////////////////////////////////////////////////////////////////////////
	/////                                 BATEAU CIVIL                           /////
	//////////////////////////////////////////////////////////////////////////////////



	#include "LifeCfgVehicles\Civil\LifeCfgVehicles_Boat.hpp"


    //////////////////////////////////////////////////////////////////////////////////
    /////                               VEHICULES CIVIL                          /////
    //////////////////////////////////////////////////////////////////////////////////




	#include "LifeCfgVehicles\Civil\LifeCfgVehicles_Vehicles.hpp"

	//////////////////////////////////////////////////////////////////////////////////
	/////                           VEHICLES GENDARMES                           /////
	//////////////////////////////////////////////////////////////////////////////////



	#include "LifeCfgVehicles\Sheriff\LifeCfgVehicles_Gendarmes.hpp"
	#include "LifeCfgVehicles\Army\LifeCfgVehicles_Army.hpp"

	
	//////////////////////////////////////////////////////////////////////////////////
	/////                            VEHICLES G.I.G.N                            /////
	//////////////////////////////////////////////////////////////////////////////////



	#include "LifeCfgVehicles\Sheriff\LifeCfgVehicles_GIGN.hpp"


    //////////////////////////////////////////////////////////////////////////////////
	/////                               CAMION CIVIL                             /////
	//////////////////////////////////////////////////////////////////////////////////



	#include "LifeCfgVehicles\Civil\LifeCfgVehicles_Truck.hpp"


    //////////////////////////////////////////////////////////////////////////////////
	/////                              CAMION ENTREPRISE                         /////
	//////////////////////////////////////////////////////////////////////////////////
	


    #include "LifeCfgVehicles\Entreprises\LifeCfgVehicles_Ent_Truck.hpp"
    #include "LifeCfgVehicles\Entreprises\LifeCfgVehicles_Ent_airAustralia.hpp"

    //////////////////////////////////////////////////////////////////////////////////
	/////                               CAMION rebelles                          /////
	//////////////////////////////////////////////////////////////////////////////////

	

	#include "LifeCfgVehicles\Rebelles\LifeCfgVehicles_Truck.hpp"

	
    //////////////////////////////////////////////////////////////////////////////////
	/////                               Helico Civil                             /////
	//////////////////////////////////////////////////////////////////////////////////



	#include "LifeCfgVehicles\Civil\LifeCfgVehicles_Air.hpp"

	

};