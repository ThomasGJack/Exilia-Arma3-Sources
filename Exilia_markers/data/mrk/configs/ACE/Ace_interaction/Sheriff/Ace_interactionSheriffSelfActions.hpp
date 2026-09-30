//////////////////////////////////////////////////////////////////////
/////                         Metro West                         /////
//////////////////////////////////////////////////////////////////////


private [ "_condition_Metro_West","_statement_Metro_West","_action_Metro_West"];

_condition_Metro_West = { playerSide == west && (({side _x == west} count playableUnits) <= 6) && ((player distance (getMarkerPos "cop_spawn_1") < 10) OR (player distance (getMarkerPos "cop_spawn_2") < 10) OR (player distance (getMarkerPos "cop_spawn_3") < 10) OR (player distance (getMarkerPos "cop_spawn_4") < 10) OR (player distance (getMarkerPos "cop_spawn_5") < 10)) };
_statement_Metro_West = {[] spawn life_fnc_metro};

_action_Metro_West = ["action_Metro_West","Metro Sheriff","\MainLandLife_Data\Icons\ACE\metro.paa",_statement_Metro_West,_condition_Metro_West] call ace_interact_menu_fnc_createAction;

["MAN", 1, ["ACE_SelfActions"],_action_Metro_West, true] call ace_interact_menu_fnc_addActionToClass;


//////////////////////////////////////////////////////////////////////
/////                      COP PLACABLE MENU                     /////
//////////////////////////////////////////////////////////////////////

private [ "_insertChildren","_condition_CopPlacable","_statement_CopPlacable","_action_CopPlacable"];

_condition_CopPlacable = {life_inv_packpanneaux >= 1 OR  life_inv_herse >= 1};
_statement_CopPlacable = {""};
_insertChildren = {

    // Add children to this action
    private _actions = [];
    {
        private _object = _x;
        private _objectClass = (getText(_x >> "classname"));
        private _childStatement = compile format["[""%1""] spawn life_fnc_posable",_objectClass];
        diag_log _childStatement;
        private _action = [getText(_x >> "classname"),Format["Panneau %1",getText(configFile >> "cfgvehicles" >> (getText(_x >> 'classname')) >> 'displayname')], "", _childStatement, {life_inv_packpanneaux >= 1}] call ace_interact_menu_fnc_createAction;
        diag_log _action;
        _actions pushBack [_action, [], _target]; // New action, it's children, and the action's target
    } forEach ("true" configClasses (missionconfigFile >> "ItemPosable"));

    _actions
};

_action_CopPlacable = ["action_CopPlacable","Object Placable","",_statement_CopPlacable,_condition_CopPlacable,_insertChildren] call ace_interact_menu_fnc_createAction;
["MAN", 1, ["ACE_SelfActions"],_action_CopPlacable, true] call ace_interact_menu_fnc_addActionToClass;



//////////////////////////////////////////////////////////////////////
/////                     COP PLACABLE HERSE                     /////
//////////////////////////////////////////////////////////////////////

private [ "_condition_CopPlacableHerse","_statement_CopPlacableHerse","_action_CopPlacableHerse"];

_condition_CopPlacableHerse = {life_inv_herse > 0};
_statement_CopPlacableHerse = { [] spawn life_fnc_spikeStrip; };

_action_CopPlacableHerse = ["action_CopPlacableHerse","Placer une herse","\MainLandLife_Data\Icons\Items\ico_spikestrip.paa",_statement_CopPlacableHerse,_condition_CopPlacableHerse] call ace_interact_menu_fnc_createAction;
["MAN", 1, ["ACE_SelfActions","action_CopPlacable"],_action_CopPlacableHerse, true] call ace_interact_menu_fnc_addActionToClass;

