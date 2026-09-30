
private [ "_condition_MedDefi","_statement_MedDefi","_action_MedDefi"];

_condition_MedDefi = { life_inv_defibrillator > 0 && {playerSide == independent} };
_statement_MedDefi = {[cursorTarget] spawn life_fnc_revivePlayer;};


_action_MedDefi = ["MedDefi","Réanimer","",_statement_MedDefi,_condition_MedDefi] call ace_interact_menu_fnc_createAction;
["MAN", 0, ["ACE_MainActions"], _action_MedDefi,true] call ace_interact_menu_fnc_addActionToClass;
