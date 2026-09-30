/*
*    File: Ace_Interaction.sqf
*    Author: John Vazquez
*
*    Remerciement: Brutalzic Btrteam de la page Dev. Arma 3 France MCF GaminG
*
*    Ne pas utiliser ce script sans mon accord
*
*/


/*

=====================================================
===       ace_interact_menu_fnc_createAction      ===
=====================================================

  _action = ["Action name","ame of the action shown in the menu","Icon",{Statement},{Condition},{Insert children code},[Action parameters], [Position], Distance] call ace_interact_menu_fnc_createAction;


  Argument:
  0: Action name <STRING>
  1: Name of the action shown in the menu <STRING>
  2: Icon <STRING>
  3: Statement <CODE>
  4: Condition <CODE>
  5: Insert children code <CODE> (Optional)
  6: Action parameters <ANY> (Optional)
  7: Position (Position array, Position code or Selection Name) <ARRAY>, <CODE> or <STRING> (Optional)
  8: Distance <NUMBER> (Optional)
  9: Other parameters [showDisabled,enableInside,canCollapse,runOnHover,doNotCheckLOS] <ARRAY> (Optional)
  10: Modifier function <CODE> (Optional)

=====================================================
===     ace_interact_menu_fnc_addActionToClass    ===
=====================================================

  [cursorTarget, 0, ["ACE_TapShoulderRight"], _action] call ace_interact_menu_fnc_addActionToObject;


  Argument:
  0: TypeOf of the class <STRING>
  1: Type of action, 0 for actions, 1 for self-actions <NUMBER>
  2: Parent path of the new action <ARRAY>
  3: Action <ARRAY>
  4: Use Inheritance (Default: False) <BOOL><OPTIONAL>


*/





/* OUVRIR LES ATMS */
/*
private [ "_condition_ATM","_statement_ATM","_action_ATM"];

_condition_ATM = { count (nearestObjects [player, ['Land_Mattaust_ATM','Land_Atm_02_F','Land_Atm_01_F'], 3]) > 0 };
_statement_ATM = {call life_fnc_atmMenu};

_action_ATM = ["action_ATM","ATM","\MainLandLife_Data\Icons\ACE\ATM.paa",_statement_ATM,_condition_ATM] call ace_interact_menu_fnc_createAction;

["MAN", 1, ["ACE_SelfActions"],_action_ATM, true] call ace_interact_menu_fnc_addActionToClass;
["MAN", 1, ["ACE_SelfActions"],_action_ATM, true] call ace_interact_menu_fnc_addActionToClass;
*/


/* VOIR LA PLAQUE DU VEHICULE */
    private [ "_condition_Registration","_statement_Registration","_action_Registration"];

    _condition_Registration = {alive (_this select 0) && {speed (_this select 0) == 0}};
    _statement_Registration = {[(_this select 0)] spawn life_fnc_searchVehAction};


    _action_Registration = ["Registration","Plaque du vehicule","\MainLandLife_Data\Icons\ACE\vehicleDoc.paa",_statement_Registration,_condition_Registration] call ace_interact_menu_fnc_createAction;
    ["LandVehicle", 0, ["ACE_MainActions"], _action_Registration,true] call ace_interact_menu_fnc_addActionToClass;
    ["AIR", 0, ["ACE_MainActions"], _action_Registration,true] call ace_interact_menu_fnc_addActionToClass;


/* CACHER LA PLAQUE AVEC DU SCOTCH */
    private [ "_condition_Cache_Plaque","_statement_Cache_Plaque","_action_Cache_Plaque"];

    _condition_Cache_Plaque = {alive (_this select 0) &&  {life_inv_scotch > 0} && {speed (_this select 0) == 0} && !(((_this select 0) getVariable["dbInfo",[]]) select 3)};
    _statement_Cache_Plaque = {[(_this select 0),1] spawn life_fnc_cache_plaque};


    _action_Cache_Plaque = ["cachePlaque","Mettre du scotch sur la plaque","\MainLandLife_Data\Icons\ACE\vehicleDoc.paa",_statement_Cache_Plaque,_condition_Cache_Plaque] call ace_interact_menu_fnc_createAction;
    ["LandVehicle", 0, ["ACE_MainActions"], _action_Cache_Plaque,true] call ace_interact_menu_fnc_addActionToClass;
    ["AIR", 0, ["ACE_MainActions"], _action_Cache_Plaque,true] call ace_interact_menu_fnc_addActionToClass;



/* ENLEVER LE SCOTCH SUR UNE PLAQUE*/
    private [ "_condition_Afficher_Plaque","_statement_Afficher_Plaque","_action_Afficher_Plaque"];

    _condition_Afficher_Plaque = {alive (_this select 0) && {speed (_this select 0) == 0} && (((_this select 0) getVariable["dbInfo",[]]) select 3)};
    _statement_Afficher_Plaque = {[(_this select 0),2] spawn life_fnc_cache_plaque};


    _action_Afficher_Plaque = ["AfficherPlaque","Enlever le scotch sur la plaque","\MainLandLife_Data\Icons\ACE\vehicleDoc.paa",_statement_Afficher_Plaque,_condition_Afficher_Plaque] call ace_interact_menu_fnc_createAction;
    ["LandVehicle", 0, ["ACE_MainActions"], _action_Afficher_Plaque,true] call ace_interact_menu_fnc_addActionToClass;
    ["AIR", 0, ["ACE_MainActions"], _action_Afficher_Plaque,true] call ace_interact_menu_fnc_addActionToClass;


/* METTRE UN PLAQUE ILLEGAL */
    private [ "_condition_Changer_Plaque_Illegal","_statement_Changer_Plaque_Illegal","_action_Changer_Plaque_Illegal"];

    _condition_Changer_Plaque_Illegal = {alive (_this select 0) && {speed (_this select 0) == 0} && (life_inv_fausse_plaque > 0) && ((((cursorObject getVariable "vehicle_info_owners") select 0) select 0) == (getPlayerUID player)) && ((((_this select 0) getVariable ["dbinfo",[]]) select 1) == (((_this select 0) getVariable ["dbinfo",[]]) select 4))};
    _statement_Changer_Plaque_Illegal = {[(_this select 0)] spawn life_fnc_Changement_Plaque_Illegal};


    _action_Changer_Plaque_Illegal = ["ChangerPlaqueIllegal","Imprimer et instaler une nouvelle plaque","\MainLandLife_Data\Icons\ACE\vehicleDoc.paa",_statement_Changer_Plaque_Illegal,_condition_Changer_Plaque_Illegal] call ace_interact_menu_fnc_createAction;
    ["LandVehicle", 0, ["ACE_MainActions"], _action_Changer_Plaque_Illegal,true] call ace_interact_menu_fnc_addActionToClass;
    ["AIR", 0, ["ACE_MainActions"], _action_Changer_Plaque_Illegal,true] call ace_interact_menu_fnc_addActionToClass;

/* REMETTRE PLAQUE ORIGINE */
  private [ "_condition_Changer_Plaque_Retrait","_statement_Changer_Plaque_Retrait","_action_Changer_Plaque_Retrait"];

  _condition_Changer_Plaque_Retrait = {alive (_this select 0) && {speed (_this select 0) == 0} && ((((cursorObject getVariable "vehicle_info_owners") select 0) select 0) == (getPlayerUID player)) && !((((_this select 0) getVariable ["dbinfo",[]]) select 1) == (((_this select 0) getVariable ["dbinfo",[]]) select 4))};
  _statement_Changer_Plaque_Retrait = {[(_this select 0)] spawn life_fnc_Changement_Plaque_Retrait};


  _action_Changer_Plaque_Retrait = ["ChangerPlaqueRetrait","Remettre la vraie plaque","\MainLandLife_Data\Icons\ACE\vehicleDoc.paa",_statement_Changer_Plaque_Retrait,_condition_Changer_Plaque_Retrait] call ace_interact_menu_fnc_createAction;
  ["LandVehicle", 0, ["ACE_MainActions"], _action_Changer_Plaque_Retrait,true] call ace_interact_menu_fnc_addActionToClass;
  ["AIR", 0, ["ACE_MainActions"], _action_Changer_Plaque_Retrait,true] call ace_interact_menu_fnc_addActionToClass;


/* REPARER SON VEHICULE */

private [ "_condition_Repair","_statement_Repair","_action_Repair"];

_condition_Repair = { alive (_this select 0) && {speed (_this select 0) == 0} && {"ToolKit" in (items player)} && {damage (_this select 0) < 1} };
_statement_Repair = { [(_this select 0)] spawn life_fnc_repairTruck };


_action_Repair = ["action_Repair","Reparer le vehicule","\MainLandLife_Data\Icons\ACE\repair.paa",_statement_Repair,_condition_Repair] call ace_interact_menu_fnc_createAction;
["LandVehicle", 0, ["ACE_MainActions"], _action_Repair, true] call ace_interact_menu_fnc_addActionToClass;
["AIR", 0, ["ACE_MainActions"], _action_Repair, true] call ace_interact_menu_fnc_addActionToClass;



/* RETOURNER UN VEHICULE BUGER */
private [ "_condition_Unflip","_statement_Unflip","_action_Unflip"];

_condition_Unflip = { alive (_this select 0) && {speed (_this select 0) < 5} && {count crew (_this select 0) == 0} };
_statement_Unflip = { (_this select 0) setPos [getPos (_this select 0) select 0, getPos (_this select 0) select 1, (getPos (_this select 0) select 2)+1] };


_action_Unflip = ["action_Unflip","Utiliser le crique","\MainLandLife_Data\Icons\ACE\unflip.paa",_statement_Unflip,_condition_Unflip] call ace_interact_menu_fnc_createAction;
["LandVehicle", 0, ["ACE_MainActions"], _action_Unflip, true] call ace_interact_menu_fnc_addActionToClass;
["AIR", 0, ["ACE_MainActions"], _action_Unflip, true] call ace_interact_menu_fnc_addActionToClass;

/* CROCHETER UN VEHICULE */

private ["_condition_Crochetage","_statement_Crochetage","_action_Crochetage"];

_condition_Crochetage = { (alive (_this select 0)) && (speed (_this select 0) < 5) && (count crew (_this select 0) == 0) && (life_inv_lockpick > 0) };
_statement_Crochetage = { [] spawn life_fnc_lockpick };


_action_Crochetage = ["action_Crochetage","Crocheter le vehicule","\MainLandLife_Data\Icons\Items\ico_lockpick.paa",_statement_Crochetage,_condition_Crochetage] call ace_interact_menu_fnc_createAction;
["LandVehicle", 0, ["ACE_MainActions"], _action_Crochetage, true] call ace_interact_menu_fnc_addActionToClass;
["AIR", 0, ["ACE_MainActions"], _action_Crochetage, true] call ace_interact_menu_fnc_addActionToClass;



/* POSER UN TRACKER GPS */

private ["_condition_gpsTracker","_statement_gpsTracker","_action_gpsTracker"];

_condition_gpsTracker = { (alive (_this select 0)) && (speed (_this select 0) < 5) && (count crew (_this select 0) == 0) && (life_inv_gpsTracker > 0) };
_statement_gpsTracker = { [cursorTarget] spawn life_fnc_gpsTracker };


_action_gpsTracker = ["action_gpsTracker","Poser un tracker gps","\MainLandLife_Data\Icons\Items\ico_gpstracker.paa",_statement_gpsTracker,_condition_gpsTracker] call ace_interact_menu_fnc_createAction;
["LandVehicle", 0, ["ACE_MainActions"], _action_gpsTracker, true] call ace_interact_menu_fnc_addActionToClass;
["AIR", 0, ["ACE_MainActions"], _action_gpsTracker, true] call ace_interact_menu_fnc_addActionToClass;


#include "Pompier\Ace_interactionPompierMaster.hpp"
#include "Sheriff\Ace_interactionSheriffMaster.hpp"
#include "Entreprises\Ace_interactionEntrepriseMaster.hpp"
#include "Civil\Ace_interactionCivilMaster.hpp"