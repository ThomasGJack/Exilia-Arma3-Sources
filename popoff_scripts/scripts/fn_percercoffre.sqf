_perceuse = getPos player nearestObject "perceuse_popoff";
_perceuse animate ["presse_perceuse",60000];
_perceuse animate ["presse_perceuse_2",60000];
_perceuse animate ["rotation_perceuse",60000];
_perceuse say "drill_5min";
_banque = getPos player nearestObject "banque_popoff";
_banque setVariable ["braco_en_cours",true];
while {_banque getVariable ["braco_en_cours",true];} do {
        _banque say "alarm_opfor";
        sleep 5;
     };
