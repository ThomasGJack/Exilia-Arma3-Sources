
_shopmarchprem = getPos player nearestObject "shop_matierepremiere";
_var = _shopmarchprem getVariable ["stock_dispo_or",0];



if ({_x == "Lingot_OR"} count magazines player == 0) exitwith {hint "Vous n'avez pas marchandises a vendre pour ce commerce"};
if (_var>19) exitwith {Hint "Le stock de cette boutique est saturé, va vendre ta marchandise ailleurs!"};

fvaleur = _shopmarchprem getVariable ["stock_dispo_or",0];
fvaleur  = fvaleur  + 1;
_shopmarchprem setVariable ["stock_dispo_or", fvaleur,true];

player removeitem "Lingot_OR"; hint "Vente d'un lingot d'or pour une valeur de 21750 €";

if (_var>0) then {_shopmarchprem animate ["lingot_o1",1.0];};
if (_var>1) then {_shopmarchprem animate ["lingot_o1",0.95];};
if (_var>2) then {_shopmarchprem animate ["lingot_o1",0.9];};
if (_var>3) then {_shopmarchprem animate ["lingot_o1",0.8];};
if (_var>4) then {_shopmarchprem animate ["lingot_o1",0.85];};
if (_var>5) then {_shopmarchprem animate ["lingot_o1",0.8];};
if (_var>6) then {_shopmarchprem animate ["lingot_o1",0.75];};
if (_var>7) then {_shopmarchprem animate ["lingot_o1",0.7];};
if (_var>8) then {_shopmarchprem animate ["lingot_o1",0.65];};
if (_var>9) then {_shopmarchprem animate ["lingot_o1",0.6];};
if (_var>10) then {_shopmarchprem animate ["lingot_o1",0.55];};
if (_var>11) then {_shopmarchprem animate ["lingot_o1",0.5];};
if (_var>12) then {_shopmarchprem animate ["lingot_o1",0.45];};
if (_var>13) then {_shopmarchprem animate ["lingot_o1",0.4];};
if (_var>14) then {_shopmarchprem animate ["lingot_o1",0.35];};
if (_var>15) then {_shopmarchprem animate ["lingot_o1",0.3];};
if (_var>16) then {_shopmarchprem animate ["lingot_o1",0.25];};
if (_var>17) then {_shopmarchprem animate ["lingot_o1",0.2];};
if (_var>18) then {_shopmarchprem animate ["lingot_o1",0.15];};
if (_var>19) then {_shopmarchprem animate ["lingot_o1",0.1];};
if (_var>20) then {_shopmarchprem animate ["lingot_o1",0.05];};
if (_var>21) then {_shopmarchprem animate ["lingot_o1",0.00];};


[1,0,21750,"vente d'or"] call exilia_fnc_money;