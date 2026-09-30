diag_log "init 1";
player addeventhandler ["InventoryOpened",{
	diag_log "init 2";
    0 spawn {
    	diag_log "init 3";
        waituntil { !isNull(findDisplay 602) };
        diag_log "init 4";
        ((findDisplay 602) displayCtrl 638) ctrlAddEventHandler ["LBDblClick", "_this spawn Exilia_Inventory_fnc_onItemUsed"];
        ((findDisplay 602) displayCtrl 633) ctrlAddEventHandler ["LBDblClick", "_this spawn Exilia_Inventory_fnc_onItemUsed"];
        ((findDisplay 602) displayCtrl 619) ctrlAddEventHandler ["LBDblClick", "_this spawn Exilia_Inventory_fnc_onItemUsed"];
    };
}];