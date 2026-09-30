_hautparleur =  nearestObjects [player, ["Land_Loudspeakers_F"], 10000];
{
	_x say "alertenucleaire";
} foreach _hautparleur;
