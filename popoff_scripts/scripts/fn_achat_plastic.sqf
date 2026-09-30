_shopmarchprem = getPos player nearestObject "shop_matierepremiere";
_var = _shopmarchprem getVariable ["stock_dispo_plastic",0];
if (_var<0) exitwith {Hint "Le stock de cette boutique est épuisé!"};

if(exilia_cash >= 130) then {
_shopmarchprem = getPos player nearestObject "shop_matierepremiere";
_var = _shopmarchprem getVariable ["stock_dispo_plastic",0];


if (_var<1) exitWith {Hint "Marchandise épuisée !"};
if !(player canAdd "Lingot_PLASTIC") exitwith {hint "Impossible, vous n'avez plus de place !";};

fvaleur = _shopmarchprem getVariable ["stock_dispo_plastic",0];
fvaleur  = fvaleur  - 1;
_shopmarchprem setVariable ["stock_dispo_plastic", fvaleur,true];

player additem "Lingot_PLASTIC";
hint "Achat d'un lingot de plastique pour une valeur de 130 €";


if (_var>0) then {_shopmarchprem animate ["lingot_p1",1.0];};
if (_var>200) then {_shopmarchprem animate ["lingot_p1",0.8];};
if (_var>400) then {_shopmarchprem animate ["lingot_p1",0.6];};
if (_var>600) then {_shopmarchprem animate ["lingot_p1",0.4];};
if (_var>800) then {_shopmarchprem animate ["lingot_p1",0.2];};
if (_var>1000) then {_shopmarchprem animate ["lingot_p1",0.0];};





[0,0,130,"Achat de plastique"] call exilia_fnc_money;
};
