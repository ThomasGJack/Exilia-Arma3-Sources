
_boucherie = getPos player nearestObject "shop_boucherie";
_var = _boucherie getVariable ["stock_dispo",0];



if ({_x == "popoff_steak_cru"} count magazines player == 0) exitwith {hint "Vous n'avez pas marchandises a vendre pour ce commerce"};
if (_var>76) exitwith {Hint "Le stock de cette boucherie est saturé, va vendre ta marchandise ailleurs!"};

fvaleur = _boucherie getVariable ["stock_dispo",0];
fvaleur  = fvaleur  + 1;
_boucherie setVariable ["stock_dispo", fvaleur,true];

player removeitem "popoff_steak_cru"; hint "Vente de Steak pour une valeur de 60 €";


if (_var >0) then {_boucherie animate ["v1",0.95];};
if (_var>1) then {_boucherie animate ["v1",0.925];};
if (_var>3) then {_boucherie animate ["v1",0.9];};
if (_var>5) then {_boucherie animate ["v1",0.875];};
if (_var>7) then {_boucherie animate ["v1",0.85];};
if (_var>9) then {_boucherie animate ["v1",0.825];};
if (_var>11) then {_boucherie animate ["v1",0.8];};
if (_var>13) then {_boucherie animate ["v1",0.775];};
if (_var>15) then {_boucherie animate ["v1",0.75];};
if (_var>17) then {_boucherie animate ["v1",0.725];};
if (_var>19) then {_boucherie animate ["v1",0.7];};
if (_var>21) then {_boucherie animate ["v1",0.675];};
if (_var>23) then {_boucherie animate ["v1",0.65];};
if (_var>25) then {_boucherie animate ["v1",0.625];};
if (_var>27) then {_boucherie animate ["v1",0.6];};
if (_var>29) then {_boucherie animate ["v1",0.575];};
if (_var>31) then {_boucherie animate ["v1",0.55];};
if (_var>33) then {_boucherie animate ["v1",0.525];};
if (_var>35) then {_boucherie animate ["v1",0.5];};
if (_var>37) then {_boucherie animate ["v1",0.475];};
if (_var>39) then {_boucherie animate ["v1",0.45];};
if (_var>41) then {_boucherie animate ["v1",0.425];};
if (_var>43) then {_boucherie animate ["v1",0.4];};
if (_var>45) then {_boucherie animate ["v1",0.375];};
if (_var>47) then {_boucherie animate ["v1",0.35];};
if (_var>49) then {_boucherie animate ["v1",0.325];};
if (_var>51) then {_boucherie animate ["v1",0.3];};
if (_var>53) then {_boucherie animate ["v1",0.275];};
if (_var>55) then {_boucherie animate ["v1",0.25];};
if (_var>57) then {_boucherie animate ["v1",0.225];};
if (_var>59) then {_boucherie animate ["v1",0.2];};
if (_var>61) then {_boucherie animate ["v1",0.175];};
if (_var>63) then {_boucherie animate ["v1",0.15];};
if (_var>65) then {_boucherie animate ["v1",0.125];};
if (_var>67) then {_boucherie animate ["v1",0.1];};
if (_var>69) then {_boucherie animate ["v1",0.075];};
if (_var>71) then {_boucherie animate ["v1",0.05];};
if (_var>73) then {_boucherie animate ["v1",0.025];};
if (_var>75) then {_boucherie animate ["v1",0.0];};






exilia_cash = exilia_cash + 60;
[1,0,60,"Vente boucherie"] call exilia_fnc_money;
