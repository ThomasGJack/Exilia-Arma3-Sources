
_shopmarchprem = getPos player nearestObject "shop_matierepremiere";
_var = _shopmarchprem getVariable ["stock_dispo_fer",0];



if ({_x == "Lingot_FER"} count magazines player == 0) exitwith {hint "Vous n'avez pas marchandises a vendre pour ce commerce"};
if (_var>1000) exitwith {Hint "Le stock de cette boutique est saturé, va vendre ta marchandise ailleurs!"};

fvaleur = _shopmarchprem getVariable ["stock_dispo_fer",0];
fvaleur  = fvaleur  + 1;
_shopmarchprem setVariable ["stock_dispo_fer", fvaleur,true];

player removeitem "Lingot_FER"; hint "Vente d'un lingot de fer pour une valeur de 160 €";

if (_var>0) then {_shopmarchprem animate ["lingot_f1",1.0];};
if (_var>200) then {_shopmarchprem animate ["lingot_f1",0.8];};
if (_var>400) then {_shopmarchprem animate ["lingot_f1",0.6];};
if (_var>600) then {_shopmarchprem animate ["lingot_f1",0.4];};
if (_var>800) then {_shopmarchprem animate ["lingot_f1",0.2];};
if (_var>1000) then {_shopmarchprem animate ["lingot_f1",0.0];};

[1,0,160,"vente fer"] call exilia_fnc_money;
