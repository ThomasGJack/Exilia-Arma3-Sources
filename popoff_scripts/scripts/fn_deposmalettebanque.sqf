_malette = getPos player nearestObject "popoff_malette";

if !((count nearestObjects [player, ["popoff_malette"], 3]) > 0) exitwith {hint "il n'y a aucune malette de convoyeur à proximité pour effectuer l'opération !" };
if (count attachedObjects player > 0) exitwith { hint "Dépose la malette au sol avant !"; };
deletevehicle _malette;
