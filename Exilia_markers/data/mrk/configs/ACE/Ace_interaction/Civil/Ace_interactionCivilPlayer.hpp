
/* MONTRER LA CATRE D'IDENTITE */
private [ "_condition_CarteCivil","_statement_CarteCivil","_action_CarteCivil"];

_condition_CarteCivil = {!isNull (_this select 0) && (_this select 0) isKindOf 'Man' && {playerSide == civilian}};
_statement_CarteCivil = {[(_this select 0)] spawn life_fnc_civShowLicense};


_action_CarteCivil = ["CarteCivil","Presenter la carte d'identité","\MainLandLife_Data\Icons\ACE\idCard.paa",_statement_CarteCivil,_condition_CarteCivil] call ace_interact_menu_fnc_createAction;
["MAN", 0, ["ACE_MainActions"], _action_CarteCivil,true] call ace_interact_menu_fnc_addActionToClass;


/* POSER VESTE TERRO SUR QQN */
private [ "_condition_Veste_Terro","_statement_Veste_Terro","_action_Veste_Terro"];

_condition_Veste_Terro = {life_inv_vesteTerro >= 1};
_statement_Veste_Terro = { [player,(_this select 0)] call Life_fnc_OtageVest};


_action_Veste_Terro = ["_action_Veste_Terro","Poser la veste explosive","",_statement_Veste_Terro,_condition_Veste_Terro] call ace_interact_menu_fnc_createAction;
["MAN", 0, ["ACE_MainActions"], _action_Veste_Terro,true] call ace_interact_menu_fnc_addActionToClass;


/* INTERACTION CIA SUR UN JOUEUR */
private [ "_condition_GOSInteractionMan","_statement_GOSInteractionMan","_action_GOSInteractionMan"];

_condition_GOSInteractionMan = {(alive (_this select 0)) && {isPlayer (_this select 0)}  && {(_this select 0) isKindOf 'Man'} && {license_civ_CIA}};
_statement_GOSInteractionMan = {""};

_action_GOSInteractionMan = ["action_GOSInteractionMan","interaction G.O.S","\MainLandLife_Data\Icons\ACE\ACE\gendarme.paa",_statement_GOSInteractionMan,_condition_GOSInteractionMan] call ace_interact_menu_fnc_createAction;

["MAN", 0, ["ACE_MainActions"],_action_GOSInteractionMan, true] call ace_interact_menu_fnc_addActionToClass;

/* INTERACTION CIA CHECK LICENCE */

private [ "_condition_GOS_License","_statement_GOS_License","_action_GOS_License"];

_condition_GOS_License = {((_this select 0) getVariable['ACE_Captives_isSurrendering',false]) OR ((_this select 0) getVariable['ACE_Captives_isHandcuffed',false])};
_statement_GOS_License = {[player] remoteExecCall ["life_fnc_licenseCheck",(_this select 0)];};


_action_GOS_License = ["GOSLicense","Licenses","\MainLandLife_Data\Icons\ACE\list.paa",_statement_GOS_License,_condition_GOS_License] call ace_interact_menu_fnc_createAction;
["MAN", 0, ["ACE_MainActions","action_GOSInteractionMan"], _action_GOS_License,true] call ace_interact_menu_fnc_addActionToClass;

/* INTERACTION CIA FOUILLER JOUEUR */

private [ "_condition_GOS_Fouille","_statement_GOS_Fouille","_action_GOS_Fouille"];

_condition_GOS_Fouille = {((_this select 0) getVariable['ACE_Captives_isSurrendering',false]) OR ((_this select 0) getVariable['ACE_Captives_isHandcuffed',false])};
_statement_GOS_Fouille = {[(_this select 0)] spawn life_fnc_searchAction};


_action_GOS_Fouille = ["GOSFouille","Fouille","\MainLandLife_Data\Icons\ACE\zoom.paa",_statement_GOS_Fouille,_condition_GOS_Fouille] call ace_interact_menu_fnc_createAction;
["MAN", 0, ["ACE_MainActions","action_GOSInteractionMan"], _action_GOS_Fouille,true] call ace_interact_menu_fnc_addActionToClass;


/* INTERACTION CIA METTRE AMANDE */
private [ "_condition_GOS_Amendes","_statement_GOS_Amendes","_action_GOS_Amendes"];

_condition_GOS_Amendes = {((_this select 0) getVariable['ACE_Captives_isSurrendering',false]) OR ((_this select 0) getVariable['ACE_Captives_isHandcuffed',false])};
_statement_GOS_Amendes = {[(_this select 0)] call life_fnc_ticketAction};


_action_GOS_Amendes = ["GOSAmendes","Amendes","\MainLandLife_Data\Icons\ACE\amende.paa",_statement_GOS_Amendes,_condition_GOS_Amendes] call ace_interact_menu_fnc_createAction;
["MAN", 0, ["ACE_MainActions","action_GOSInteractionMan"], _action_GOS_Amendes,true] call ace_interact_menu_fnc_addActionToClass;
