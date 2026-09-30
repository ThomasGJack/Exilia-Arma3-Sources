[] spawn {
if (typeOf vehicle player != "Orca_idap") exitWith {};


titleText ["Touches  Page Up = Lever, Page Down = Baisser", "PLAIN DOWN"];
forksdokeydown =
 {
  _key = _this select 1;
  _return = false;

  switch _key do
  {
   case 209:
   {

   if ((count nearestObjects [vehicle player, ["popoff_nacelle"], 50]) < 1) then {
   _helico = nearestObject [player, "Orca_idap"];
   _nacelle = "popoff_nacelle" createVehicle position _helico;

   _nacelle attachTo [_helico, [1.2, 1.2, -1.4] ];
   yRope = ropeCreate [_helico, [1.45, 1.3, 0], _nacelle, [0.465, 0.02, 1.0], 0.6]
   };






   _nacelle = nearestObject [player, "popoff_nacelle"];
   _helico = nearestObject [player, "Orca_idap"];
   _length = ropeLength (ropes _helico select 0);
   _longteur_finale = _length +0.6;
   ropeUnwind [ ropes _helico select 0, 1, _longteur_finale];
   if (_length > 40) then { ropeUnwind [ ropes _helico select 0, 1, 40]; };
   if (_length > 0.5) then { detach _nacelle;

   };

   };

   case 201:
   {




     _nacelle = nearestObject [player, "popoff_nacelle"];
     _helico = nearestObject [player, "Orca_idap"];

     _length = ropeLength (ropes _helico select 0);
     _longteur_finale = _length -0.5;
     ropeUnwind [ ropes _helico select 0, 1, _longteur_finale];
     if (_length < 0.6) then { _nacelle attachTo [_helico, [1.2, 1.2, -1.4] ]; };
     if ((_length < 0.6) && (_helico animationPhase "dvere2_posunZ" >=1)) then {


     _nacelle = nearestObject [player, "popoff_nacelle"];
_helico = nearestObject [player, "Orca_idap"];
_passengers = assignedcargo _nacelle;

{    unassignvehicle _x;
    moveout _x;
    _x moveInCargo _helico;
} forEach _passengers;
     _secouriste = (driver (_nacelle));
     moveOut _secouriste;
     _helico = nearestObject [player, "Orca_idap"];
     _secouriste moveInCargo [_helico, 6];
     deletevehicle _nacelle;
     _rope1 = (ropes _helico) select 0;
     deletevehicle _rope1;

     };



    _return = true;
   };

   vehicle player animate ["Ctrl_Fork", 0];
  };

  _return;
 };


waituntil {!(IsNull (findDisplay 46))};
_forkskeys = (FindDisplay 46) DisplayAddEventHandler ["keydown","_this call forksdokeyDown"];

waitUntil {typeOf vehicle player != "Orca_idap"};

(finddisplay 46) displayremoveeventhandler ["keydown",_forkskeys];


};
