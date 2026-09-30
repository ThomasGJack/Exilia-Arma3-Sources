//////////////////////////////////////////////////////////////////////
/////                        ATM Entreprise                      /////
//////////////////////////////////////////////////////////////////////

/*
private [ "_condition_ATMENT","_statement_ATMENT","_action_ATMENT"];

_condition_ATMENT = { count (nearestObjects [player, ['Orel_NPC_ATM'], 3]) > 0 && (license_civ_entrepreneur) };
_statement_ATMENT = {call life_fnc_atmMenu};

_action_ATMENT = ["action_ATM","ATM Entreprise","\MainLandLife_Data\Icons\ACE\ATM.paa",_statement_ATMENT,_condition_ATMENT] call ace_interact_menu_fnc_createAction;

["MAN", 1, ["ACE_SelfActions"],_action_ATMENT, true] call ace_interact_menu_fnc_addActionToClass;
*/
#include "Depanneur\Ace_interactionEntrepriseDepanneur.hpp"
