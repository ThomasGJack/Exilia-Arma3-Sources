


/* MONTRER LA PLAQUE */




private [ "_condition_CarteGendarme","_statement_CarteGendarme","_action_CarteGendarme"];

_condition_CarteGendarme = {!isNull (_this select 0) && (_this select 0) isKindOf 'Man' && {playerSide == west}};
_statement_CarteGendarme = {[(_this select 0)] spawn life_fnc_copShowLicenses};


_action_CarteGendarme = ["CarteGendarme","Presenter sa plaque","\MainLandLife_Data\Icons\ACE\bussiness-card.paa",_statement_CarteGendarme,_condition_CarteGendarme] call ace_interact_menu_fnc_createAction;
["MAN", 0, ["ACE_MainActions"], _action_CarteGendarme,true] call ace_interact_menu_fnc_addActionToClass;


/* VERIFIER LES LICENCES */
    private [ "_condition_Cop_License","_statement_Cop_License","_action_Cop_License"];

    _condition_Cop_License = {alive (_this select 0) && {isPlayer (_this select 0)} && {(_this select 0) isKindOf 'Man'} && {((_this select 0) getVariable['ACE_Captives_isSurrendering',false]) OR ((_this select 0) getVariable['ACE_Captives_isHandcuffed',false])} && {playerSide == west} && {side (_this select 0) in [civilian,independent]}};
    _statement_Cop_License = {[player] remoteExecCall ["life_fnc_licenseCheck",(_this select 0)];};


    _action_Cop_License = ["CopLicense","Licenses","\MainLandLife_Data\Icons\ACE\list.paa",_statement_Cop_License,_condition_Cop_License] call ace_interact_menu_fnc_createAction;
    ["MAN", 0, ["ACE_MainActions","action_CopInteractionMan"], _action_Cop_License,true] call ace_interact_menu_fnc_addActionToClass;

/* FOUILLER LE JOUEUR */
    private [ "_condition_Cop_Fouille","_statement_Cop_Fouille","_action_Cop_Fouille"];

    _condition_Cop_Fouille = {alive (_this select 0) && {isPlayer (_this select 0)} && {(_this select 0) isKindOf 'Man'} && {((_this select 0) getVariable['ACE_Captives_isSurrendering',false]) OR ((_this select 0) getVariable['ACE_Captives_isHandcuffed',false])} && {playerSide == west} && {side (_this select 0) in [civilian,independent]}};
    _statement_Cop_Fouille = {[(_this select 0)] spawn life_fnc_searchAction};


    _action_Cop_Fouille = ["CopFouille","Fouille","\MainLandLife_Data\Icons\ACE\zoom.paa",_statement_Cop_Fouille,_condition_Cop_Fouille] call ace_interact_menu_fnc_createAction;
    ["MAN", 0, ["ACE_MainActions","action_CopInteractionMan"], _action_Cop_Fouille,true] call ace_interact_menu_fnc_addActionToClass;


/* METTRE UNE AMENDE */
    private [ "_condition_Cop_Amendes","_statement_Cop_Amendes","_action_Cop_Amendes"];

    _condition_Cop_Amendes = {alive (_this select 0) && {isPlayer (_this select 0)} && {(_this select 0) isKindOf 'Man'} && {playerSide == west} && {side (_this select 0) in [civilian,independent]}};
    _statement_Cop_Amendes = {[(_this select 0)] call life_fnc_ticketAction};


    _action_Cop_Amendes = ["CopAmendes","Amendes","\MainLandLife_Data\Icons\ACE\amende.paa",_statement_Cop_Amendes,_condition_Cop_Amendes] call ace_interact_menu_fnc_createAction;
    ["MAN", 0, ["ACE_MainActions","action_CopInteractionMan"], _action_Cop_Amendes,true] call ace_interact_menu_fnc_addActionToClass;


/* ENLEVER POINTS */
    private [ "_condition_Cop_modifPoints","_statement_Cop_modifPoints","_action_Cop_modifPoints"];

    _condition_Cop_modifPoints = {alive (_this select 0) && {isPlayer (_this select 0)} && {(_this select 0) isKindOf 'Man'} && {(_this select 0) getVariable ["license_civ_driver",false]} && {playerSide == west} && {side (_this select 0) in [civilian,independent]}};
    _statement_Cop_modifPoints = {[0,_this select 0] call life_fnc_modifPoints};


    _action_Cop_modifPoints = ["action_ModifPermis","Enlever des points sur le permis","",_statement_Cop_modifPoints,_condition_Cop_modifPoints] call ace_interact_menu_fnc_createAction;
    ["MAN", 0, ["ACE_MainActions","action_CopInteractionMan"], _action_Cop_modifPoints,true] call ace_interact_menu_fnc_addActionToClass;



/* METTRE LE JOUEUR EN PRISON */
    private [ "_condition_Cop_Arrest","_statement_Cop_Arrest","_action_Cop_Arrest"];

    _condition_Cop_Arrest = {alive (_this select 0) && {isPlayer (_this select 0)} && {(_this select 0) isKindOf 'Man'} && {((_this select 0) getVariable['ACE_Captives_isHandcuffed',false])} && {playerSide == west} && {side (_this select 0) == civilian} && ((player distance (getMarkerPos "cop_spawn_kavala") < 60) OR (player distance (getMarkerPos "cop_spawn_athira") < 60) OR (player distance (getMarkerPos "cop_spawn_pyrgos") < 60) OR (player distance (getMarkerPos "cop_spawn_gign") < 60) OR (player distance (getMarkerPos "Correctional Facility") < 60))};
    _statement_Cop_Arrest = { [life_pInact_curTarget] call life_fnc_showArrestDialog };


    _action_Cop_Arrest = ["CopArrest","Mettre en prison","\MainLandLife_Data\Icons\Items\ico_lockpick.paa",_statement_Cop_Arrest,_condition_Cop_Arrest] call ace_interact_menu_fnc_createAction;
    ["MAN", 0, ["ACE_MainActions","action_CopInteractionMan"], _action_Cop_Arrest,true] call ace_interact_menu_fnc_addActionToClass;