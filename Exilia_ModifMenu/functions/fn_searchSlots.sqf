diag_log "test";
_ListBox = ((findDisplay 70) displayCtrl 109);
_ListBoxSize = (lbSize _ListBox);
_ListBoxCurSel = (lbCurSel _ListBox);


_ListBox lbSetCurSel  2;
_ListBox lbSetSelected [2,true];
_ListBox ctrlSetText profileName;
ctrlSetFocus _ListBox;


diag_log format["Data: %1 | Value %2 | text = %3",(_ListBox lbdata _ListBoxCurSel),(_ListBox lbValue _ListBoxCurSel),(_ListBox lbText _ListBoxCurSel)];

/*
for "_i" from _ListBoxSize to 0 step -1 do {

};
*/