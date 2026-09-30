
private _condition_EteindreFeu = {(((getPos player) distance2D (getMarkerPos"fire_1")) < 60) && {playerSide == independent}};
private _statement_EteindreFeu = {[0,(getpos player)] remoteExecCall ["life_fnc_delete_incendie", 2];};

private _action_EteindreFeu = ["action_EteindreFeu","Eteindre l'incendie","\MainLandLife_Data\Icons\ACE\ATM.paa",_statement_EteindreFeu,_condition_EteindreFeu] call ace_interact_menu_fnc_createAction;

["MAN", 1, ["ACE_SelfActions"],_action_EteindreFeu, true] call ace_interact_menu_fnc_addActionToClass;

//////////////////////////////////////////////////////////////////////
/////                         Metro Indep                        /////
//////////////////////////////////////////////////////////////////////


private [ "_condition_Metro_Indep","_statement_Metro_Indep","_action_Metro_Indep"];

_condition_Metro_Indep = {playerSide == independent && (({side _x == independent} count playableUnits) <= 8) && ((player distance (getMarkerPos "métrop_1") < 10) OR (player distance (getMarkerPos "métrop_2") < 10) OR (player distance (getMarkerPos "métrop_3") < 10) OR (player distance (getMarkerPos "métrop_4") < 10))};
_statement_Metro_Indep = {[] spawn life_fnc_metro};

_action_Metro_Indep = ["action_Metro_Indep","Metro Medecin","\MainLandLife_Data\Icons\ACE\metro.paa",_statement_Metro_Indep,_condition_Metro_Indep] call ace_interact_menu_fnc_createAction;

["MAN", 1, ["ACE_SelfActions"],_action_Metro_Indep, true] call ace_interact_menu_fnc_addActionToClass;
