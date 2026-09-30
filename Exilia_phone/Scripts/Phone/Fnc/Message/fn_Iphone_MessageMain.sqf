/*
*	Script: Telephone Iphone
*	Autheur: Nirawin29 (John Vazquez)
*
*	Description: Fonction Pour Affiché tous les control servant pour le clavier du menu Appel
*
*	Parametres:	Aucun
*
*	Return: Rien
*
*/
#include "..\..\..\..\script_macros.hpp"
#include "..\..\Defines.hpp"

_data = _this select 0;
_mode2 = _this select 1;

phoneModeActual = 1;
ctrlShow[MESSAGE_MAIN_BACKGROUND,true];
ctrlShow[MESSAGE_MAIN_BTN_NEW_MESSAGE,true];
ctrlShow[MESSAGE_MAIN_BTN_REPLY_MESSAGE,true];
ctrlShow[MESSAGE_MAIN_BTN_ADD_CONTACT,true];
ctrlShow[MESSAGE_MAIN_BTN_SUPR_MESSAGE,true];
ctrlShow[MESSAGE_MAIN_LISTBOX_HISTORY_MESSAGE,true];
ctrlShow[MESSAGE_MAIN_TEXT_TITTLE,true];
ctrlShow[MESSAGE_MAIN_STRUCTUREDTEXT_MESSAGE_VIEW,true];
ctrlShow[MESSAGE_MAIN_BTN_COONTACT,true];
private ["_cMessageList","_leveladmin","_msg","_rowData","_value","_name","_to","_stringtext"];
_leveladmin = FETCH_CONST(Exilia_adminlevel);


if (_mode2 isEqualTo 0) then {
	lbclear 3004;
	[getPlayerUID player, player,PlayerSide,_leveladmin,0] remoteExecCall ["DB_fnc_msgRequest",2];
} else {
	_tinyMsg = [_data select 5,11] call KRON_StrLeft;
	_msg = _data select 5;
	_rowData = [_data select 2, _data select 4, _data select 5, _data select 1,_data select 0,_data select 1];
	_value = _data select 1;
	_to = _data select 3;

	{
		_num = _x select 1;
		if(_num == _value) then {
			_name = _x select 0;
			_rowData set[3,_name];
		};
	} forEach Exilia_numcontact;
	if(isNil "_name") then {_name = _data select 1;};
	if ((_name isEqualTo "Admins") OR (_name isEqualTo "Gendarmerie") OR (_name isEqualTo "Pompiers")) then {
		_stringtext = format["%1",_name];
	} else {
		_stringtext = format["(%2) - %1",_name,_to];
	};

	_cMessageList = (findDISPLAY DISPLAY) DISPLAYCtrl MESSAGE_MAIN_LISTBOX_HISTORY_MESSAGE;
	_cMessageList lnbAddRow[_stringtext,format["%1 ...",_tinyMsg]];
	_cMessageList lnbSetData[[((lnbSize _cMessageList) select 0)-1,0],str(_rowData)];

	lnbSetCurSelRow [3004,0];


};

