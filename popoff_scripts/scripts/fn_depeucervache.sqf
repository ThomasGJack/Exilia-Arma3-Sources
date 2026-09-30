
_vache =  nearestObjects [player, ["cow01","cow02","cow03","cow04"], 2];
{deleteVehicle _x;}foreach _vache;
_holder = createVehicle ["groundweaponholder",(getpos player), [], 0, "can_Collide"];
_holder addItemCargoGlobal ["popoff_steak_cru", 5];
sleep 30;
deletevehicle _holder;
