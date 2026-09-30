	private [ "_condition_DepInteraction","_statement_DepInteraction","_action_DepInteraction"];

	_condition_DepInteraction = {license_civ_dep};
	_statement_DepInteraction = {""};

	_action_DepInteraction = ["action_DepInteraction","interaction Depanneur","\MainLandLife_Data\Icons\ACE\impound.paa",_statement_DepInteraction,_condition_DepInteraction] call ace_interact_menu_fnc_createAction;
	["LandVehicle", 0, ["ACE_MainActions"],_action_DepInteraction, true] call ace_interact_menu_fnc_addActionToClass;
	["AIR", 0, ["ACE_MainActions"],_action_DepInteraction, true] call ace_interact_menu_fnc_addActionToClass;

    //////////////////////////////////////////////////////////////////////
    /////                         DEP  IMPOUND                       /////
    //////////////////////////////////////////////////////////////////////
    private [ "_condition_Dep_Impound","_statement_Dep_Impound","_action_Dep_Impound"];

    _condition_Dep_Impound = {alive (_this select 0) && {speed (_this select 0) < 1}};
    _statement_Dep_Impound = {[(_this select 0)] spawn life_fnc_dep_impound};


    _action_Dep_Impound = ["DepImpound","Envoyer a la fourriére","\MainLandLife_Data\Icons\ACE\impound.paa",_statement_Dep_Impound,_condition_Dep_Impound] call ace_interact_menu_fnc_createAction;
    ["LandVehicle", 0, ["ACE_MainActions","action_DepInteraction"], _action_Dep_Impound,true] call ace_interact_menu_fnc_addActionToClass;
    ["AIR", 0, ["ACE_MainActions","action_DepInteraction"], _action_Dep_Impound,true] call ace_interact_menu_fnc_addActionToClass;



/* REPARATION MURS DEPANNEURS */
private [ "_condition_repairwall","_statement_repairwall","_action_repairwall"];

_condition_repairwall = {
	if ((count nearestTerrainObjects[player,[],5] > 0) && (license_civ_dep)) then {
		if ((damage (nearestTerrainObjects[player,[],5] select 0)) > 0) then {
			true;
		} else {
			false;
		};
		false;
	} else {
		false;
	};
};

_statement_repairwall = {[] spawn life_fnc_repairwalldep};

_action_repairwall = ["action_repairwall","Reparer le mur cassé","",_statement_repairwall,_condition_repairwall] call ace_interact_menu_fnc_createAction;

["MAN", 1, ["ACE_SelfActions"],_action_repairwall, true] call ace_interact_menu_fnc_addActionToClass;