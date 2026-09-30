
_malette = getPos player nearestObject "popoff_malette";
detach _malette;
_pos = getpos _malette;
_malette setpos [(_pos select 0),(_pos select 1),0];
removeAllActions player;
