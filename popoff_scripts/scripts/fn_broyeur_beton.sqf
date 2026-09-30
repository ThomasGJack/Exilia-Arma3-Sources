"(_this select 0) animationSourcePhase ""broyeur_1"" == 0";

if ({_x == "Pierre"} count magazines player < 5) exitwith {Hint "Il vous faut 5 pierres pour faire un sac de ciment !"};


player removeitem "Pierre";
player removeitem "Pierre";
player removeitem "Pierre";
player removeitem "Pierre";
player removeitem "Pierre";


(_this select 0) animate ["broyeur_1",0];
sleep 5;
(_this select 0) animate ["broyeur_1",10];
(_this select 0) addItemCargo ["popoff_sac_ciment", 1];
