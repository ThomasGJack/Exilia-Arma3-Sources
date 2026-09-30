    private [ "_condition_CopInteraction","_statement_CopInteraction","_action_CopInteraction"];

    _condition_CopInteraction = {playerSide == west};
    _statement_CopInteraction = {""};

    _action_CopInteraction = ["action_CopInteraction","interaction Sheriff","\MainLandLife_Data\Icons\ACE\Sheriff.paa",_statement_CopInteraction,_condition_CopInteraction] call ace_interact_menu_fnc_createAction;
    ["AIR", 0, ["ACE_MainActions"],_action_CopInteraction, true] call ace_interact_menu_fnc_addActionToClass;

    //////////////////////////////////////////////////////////////////////
    /////                          COP IMPOUND                       /////
    //////////////////////////////////////////////////////////////////////
    private [ "_condition_Cop_Impound","_statement_Cop_Impound","_action_Cop_Impound"];

    _condition_Cop_Impound = {alive (_this select 0) && {speed (_this select 0) == 0}};
    _statement_Cop_Impound = {[(_this select 0)] spawn life_fnc_impoundAction};


    _action_Cop_Impound = ["CopImpound","Appeler la fouriere","\MainLandLife_Data\Icons\ACE\impound.paa",_statement_Cop_Impound,_condition_Cop_Impound] call ace_interact_menu_fnc_createAction;
    ["AIR", 0, ["ACE_MainActions","action_CopInteraction"], _action_Cop_Impound,true] call ace_interact_menu_fnc_addActionToClass;

    //////////////////////////////////////////////////////////////////////
    /////                          COP DELETE                        /////
    //////////////////////////////////////////////////////////////////////
    private [ "_condition_Cop_Delete","_statement_Cop_Delete","_action_Cop_Delete"];

    _condition_Cop_Delete = {alive (_this select 0) && {speed (_this select 0) == 0}};
    _statement_Cop_Delete = {[(_this select 0)] spawn life_fnc_copDeleteVehicle};


    _action_Cop_Delete = ["CopDelete","Detruire le vehicule","\MainLandLife_Data\Icons\ACE\eraser.paa",_statement_Cop_Delete,_condition_Cop_Delete] call ace_interact_menu_fnc_createAction;
    ["AIR", 0, ["ACE_MainActions","action_CopInteraction"], _action_Cop_Delete,true] call ace_interact_menu_fnc_addActionToClass;


    //////////////////////////////////////////////////////////////////////
    /////                          COP SEARCH                        /////
    //////////////////////////////////////////////////////////////////////
    private [ "_condition_Cop_Search","_statement_Cop_Search","_action_Cop_Search"];

    _condition_Cop_Search = {alive (_this select 0) && {speed (_this select 0) == 0}};
    _statement_Cop_Search = {[(_this select 0)] spawn life_fnc_vehInvSearch};


    _action_Cop_Search = ["PSIGDelete","Fouiller le vehicule","\MainLandLife_Data\Icons\ACE\zoom.paa",_statement_Cop_Search,_condition_Cop_Search] call ace_interact_menu_fnc_createAction;
    ["AIR", 0, ["ACE_MainActions","action_CopInteraction"], _action_Cop_Search,true] call ace_interact_menu_fnc_addActionToClass;
