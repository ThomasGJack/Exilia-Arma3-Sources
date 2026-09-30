private [ "_condition_house","_statement_house","_action_house"];

_condition_house = {

(cursorObject isKindOf "House_F" && {player distance cursorObject < 8} && !(([(typeOf cursortarget)] call life_fnc_houseConfig) isEqualTo []))

};
_statement_house = {[curSORObject] call life_fnc_houseMenu;};

_action_house = ["_action_house","House","",_statement_house,_condition_house] call ace_interact_menu_fnc_createAction;

["MAN", 1, ["ACE_SelfActions"],_action_house, true] call ace_interact_menu_fnc_addActionToClass;


//////////////////////////////////////////////////////////////////////
/////                             house revente                  /////
//////////////////////////////////////////////////////////////////////



private _condition_houseVenteJoueurs = {(cursorObject in life_vehicles)};

private _statement_houseVenteJoueurs = {[0,cursorTarget] Call Life_Fnc_SellHousePlayers;};

private _action_houseVenteJoueurs = ["_action_houseVenteJoueurs","Revendre la maison a quelqu'un","",_statement_houseVenteJoueurs,_condition_houseVenteJoueurs] call ace_interact_menu_fnc_createAction;


["MAN", 1, ["ACE_SelfActions","_action_house"],_action_houseVenteJoueurs, true] call ace_interact_menu_fnc_addActionToClass;


//////////////////////////////////////////////////////////////////////
/////                             house achat                    /////
//////////////////////////////////////////////////////////////////////



private _condition_houseAchat = {!(cursorObject in life_vehicles)  && ((cursorObject getVariable ["house_owner",true]) isEqualType true)};

private _statement_houseAchat = {[cursorObject] spawn life_fnc_buyHouse;};

private _action_houseAchat = ["_action_houseAchat","Acheter la maison","",_statement_houseAchat,_condition_houseAchat] call ace_interact_menu_fnc_createAction;


["MAN", 1, ["ACE_SelfActions","_action_house"],_action_houseAchat, true] call ace_interact_menu_fnc_addActionToClass;





//////////////////////////////////////////////////////////////////////
/////                             garage vente                    /////
//////////////////////////////////////////////////////////////////////



private _condition_garageVente = {(cursorObject in life_vehicles) && {(typeOf cursorObject) in ["Land_i_Garage_V1_F","Land_i_Garage_V2_F"]}};

private _statement_garageVente = {[cursorObject] spawn life_fnc_sellHouse; closeDialog 0;};

private _action_garageVente = ["_action_garageVente","Revendre le garage a l'etat","",_statement_garageVente,_condition_garageVente] call ace_interact_menu_fnc_createAction;


["MAN", 1, ["ACE_SelfActions","_action_house"],_action_garageVente, true] call ace_interact_menu_fnc_addActionToClass;



//////////////////////////////////////////////////////////////////////
/////                             garage acess                    /////
//////////////////////////////////////////////////////////////////////



private _condition_garageAcess = {(cursorObject in life_vehicles) && {(typeOf cursorObject) in ["Land_i_Garage_V1_F","Land_i_Garage_V2_F"]}};

private _statement_garageAcess = {[cursorObject,"Car"] spawn life_fnc_vehicleGarage; closeDialog 0;};

private _action_garageAcces = ["_action_garageAcces","Acceder au garage","",_statement_garageAcess,_condition_garageAcess] call ace_interact_menu_fnc_createAction;


["MAN", 1, ["ACE_SelfActions","_action_house"],_action_garageAcces, true] call ace_interact_menu_fnc_addActionToClass;



//////////////////////////////////////////////////////////////////////
/////                             garage store vehicle                    /////
//////////////////////////////////////////////////////////////////////



private _condition_garagestore = {(cursorObject in life_vehicles) && {(typeOf cursorObject) in ["Land_i_Garage_V1_F","Land_i_Garage_V2_F"]}};

private _statement_garagestore = {[cursorObject,player] spawn life_fnc_storeVehicle; closeDialog 0;};

private _action_garagestore = ["_action_garagestore","Ranger le vehicule au garage","",_statement_garagestore,_condition_garagestore] call ace_interact_menu_fnc_createAction;


["MAN", 1, ["ACE_SelfActions","_action_house"],_action_garagestore, true] call ace_interact_menu_fnc_addActionToClass;





//////////////////////////////////////////////////////////////////////
/////                         house vente                    /////
//////////////////////////////////////////////////////////////////////



private _condition_housesell = {(cursorObject in life_vehicles) && {!((typeOf cursorObject) in ["Land_i_Garage_V1_F","Land_i_Garage_V2_F"])}};

private _statement_housesell = {[cursorObject] spawn life_fnc_sellHouse; closeDialog 0;};

private _action_housesell = ["_action_housesell","Revendre la maison a l'etat","",_statement_housesell,_condition_housesell] call ace_interact_menu_fnc_createAction;


["MAN", 1, ["ACE_SelfActions","_action_house"],_action_housesell, true] call ace_interact_menu_fnc_addActionToClass;



//////////////////////////////////////////////////////////////////////
/////                         house lock storage                    /////
//////////////////////////////////////////////////////////////////////



private _condition_houselockstorage = {(cursorObject in life_vehicles) && {!((typeOf cursorObject) in ["Land_i_Garage_V1_F","Land_i_Garage_V2_F"])}};

private _statement_houselockstorage = {[cursorObject] call life_fnc_lockHouse; closeDialog 0;};

private _action_houslockstorage = ["_action_houslockstorage","Lock/unlock les coffres","",_statement_houselockstorage,_condition_houselockstorage] call ace_interact_menu_fnc_createAction;


["MAN", 1, ["ACE_SelfActions","_action_house"],_action_houslockstorage, true] call ace_interact_menu_fnc_addActionToClass;


//////////////////////////////////////////////////////////////////////
/////                         house  lumierre                    /////
//////////////////////////////////////////////////////////////////////



private _condition_houselumiere = {(cursorObject in life_vehicles) && {!((typeOf cursorObject) in ["Land_i_Garage_V1_F","Land_i_Garage_V2_F"])}};

private _statement_houselumiere = {[cursorObject] call life_fnc_lightHouseAction; closeDialog 0;};

private _action_houselumiere = ["_action_houselumiere","eteindre/allumer la lumiere","",_statement_houselumiere,_condition_houselumiere] call ace_interact_menu_fnc_createAction;


["MAN", 1, ["ACE_SelfActions","_action_house"],_action_houselumiere, true] call ace_interact_menu_fnc_addActionToClass;



//////////////////////////////////////////////////////////////////////
/////                         house declare                      /////
//////////////////////////////////////////////////////////////////////



private _condition_housedeclareon = {(cursorObject in life_vehicles) && {(cursorObject getVariable ["Declared",0]) == 0}};

private _statement_housedeclareon = {[cursorObject] call life_fnc_DeclareHouseAction; closeDialog 0;};

private _action_housedeclareon = ["_action_housedeclareon","declarer la maison","",_statement_housedeclareon,_condition_housedeclareon] call ace_interact_menu_fnc_createAction;


["MAN", 1, ["ACE_SelfActions","_action_house"],_action_housedeclareon, true] call ace_interact_menu_fnc_addActionToClass;


//////////////////////////////////////////////////////////////////////
/////                         house declare                      /////
//////////////////////////////////////////////////////////////////////



private _condition_housedeclareoff = {(cursorObject in life_vehicles) && {(cursorObject getVariable ["Declared",0]) == 1}};

private _statement_housedeclareoff = {[cursorObject] call life_fnc_DeclareHouseAction; closeDialog 0;};

private _action_housedeclareoff = ["_action_housedeclareoff","dissimuler la maison","",_statement_housedeclareoff,_condition_housedeclareoff] call ace_interact_menu_fnc_createAction;


["MAN", 1, ["ACE_SelfActions","_action_house"],_action_housedeclareoff, true] call ace_interact_menu_fnc_addActionToClass;
