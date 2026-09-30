disableserialization;
diag_log "onItemUsed";
private ["_ctrl","_index","_text","_item","_data"];
_ctrl = _this select 0;
_index = _this select 1;  

_text = _ctrl lbText _index;
_item = _ctrl lbData _index;

if (_item == "") then {
    _data = "getText (_x >> 'displayName') == _text" configClasses(configFile >> "cfgMagazines");
    if (count _data > 0) then {
        _item = configName (_data select 0);
    };
};

diag_log parsetext _item;

