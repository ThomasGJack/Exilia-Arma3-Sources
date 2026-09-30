private [ "_condition_PSIGInteraction","_statement_PSIGInteraction","_action_PSIGInteraction"];

_condition_PSIGInteraction = {license_civ_cia};
_statement_PSIGInteraction = {""};

_action_PSIGInteraction = ["action_PSIGInteraction","interaction G.O.S","\MainLandLife_Data\Icons\ACE\gendarme.paa",_statement_PSIGInteraction,_condition_PSIGInteraction] call ace_interact_menu_fnc_createAction;
["LandVehicle", 0, ["ACE_MainActions"],_action_PSIGInteraction, true] call ace_interact_menu_fnc_addActionToClass;

    //////////////////////////////////////////////////////////////////////
    /////                         PSIG IMPOUND                       /////
    //////////////////////////////////////////////////////////////////////
    private [ "_condition_PSIG_Impound","_statement_PSIG_Impound","_action_PSIG_Impound"];

    _condition_PSIG_Impound = {alive (_this select 0) && {speed (_this select 0) == 0}};
    _statement_PSIG_Impound = {[(_this select 0)] spawn life_fnc_impoundAction};


    _action_PSIG_Impound = ["PSIGImpound","Appeler la fouriere","\MainLandLife_Data\Icons\ACE\impound.paa",_statement_PSIG_Impound,_condition_PSIG_Impound] call ace_interact_menu_fnc_createAction;
    ["LandVehicle", 0, ["ACE_MainActions","action_PSIGInteraction"], _action_PSIG_Impound,true] call ace_interact_menu_fnc_addActionToClass;

    //////////////////////////////////////////////////////////////////////
    /////                         PSIG DELETE                        /////
    //////////////////////////////////////////////////////////////////////
    private [ "_condition_PSIG_Delete","_statement_PSIG_Delete","_action_PSIG_Delete"];

    _condition_PSIG_Delete = {alive (_this select 0) && {speed (_this select 0) < 1}};
    _statement_PSIG_Delete = {[(_this select 0)] spawn life_fnc_copDeleteVehicle};


    _action_PSIG_Delete = ["PSIGDelete","Detruire le vehicule","\MainLandLife_Data\Icons\ACE\eraser.paa",_statement_PSIG_Delete,_condition_PSIG_Delete] call ace_interact_menu_fnc_createAction;
    ["LandVehicle", 0, ["ACE_MainActions","action_PSIGInteraction"], _action_PSIG_Delete,true] call ace_interact_menu_fnc_addActionToClass;


    //////////////////////////////////////////////////////////////////////
    /////                         PSIG SEARCH                        /////
    //////////////////////////////////////////////////////////////////////
    private [ "_condition_PSIG_Search","_statement_PSIG_Search","_action_PSIG_Search"];

    _condition_PSIG_Search = {alive (_this select 0) && {speed (_this select 0) == 0}};
    _statement_PSIG_Search = {[(_this select 0)] spawn life_fnc_vehInvSearch};


    _action_PSIG_Search = ["PSIGDelete","Fouiller le vehicule","\MainLandLife_Data\Icons\ACE\zoom.paa",_statement_PSIG_Search,_condition_PSIG_Search] call ace_interact_menu_fnc_createAction;
    ["LandVehicle", 0, ["ACE_MainActions","action_PSIGInteraction"], _action_PSIG_Search,true] call ace_interact_menu_fnc_addActionToClass;