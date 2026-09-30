{ _x allowDamage false;
  _x addAction ["<t color='#ff1111'>BIS Arsenal</t>", {["Open",true] spawn BIS_fnc_arsenal}];
} forEach nearestObjects [getpos player,["DWT_VirtualBox_Small"],15000];