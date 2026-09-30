private [ "_condition_CopInteractionMan","_statement_CopInteractionMan","_action_CopInteractionMan"];

_condition_CopInteractionMan = {alive (_this select 0) && {isPlayer (_this select 0)} && {(_this select 0) isKindOf 'Man'} && {((_this select 0) getVariable['ACE_Captives_isSurrendering',false]) OR ((_this select 0) getVariable['ACE_Captives_isHandcuffed',false])} && {playerSide == west} && {side (_this select 0) in [civilian,independent]}};
_statement_CopInteractionMan = {""};

_action_CopInteractionMan = ["action_CopInteractionMan","interaction Sheriff","\MainLandLife_Data\Icons\ACE\Sheriff.paa",_statement_CopInteractionMan,_condition_CopInteractionMan] call ace_interact_menu_fnc_createAction;

["MAN", 0, ["ACE_MainActions"],_action_CopInteractionMan, true] call ace_interact_menu_fnc_addActionToClass;

#include "Ace_interactionSheriffHouse.hpp"
#include "Ace_interactionSheriffPlayer.hpp"
#include "Ace_interactionSheriffSelfActions.hpp"
#include "Ace_interactionSheriffVehicles.hpp"
#include "Ace_interactionSheriffAir.hpp"
