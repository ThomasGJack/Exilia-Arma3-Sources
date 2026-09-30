#define _ARMA_
class DefaultEventhandlers;
class CfgPatches
{
	class popoff_lithopital
	{
		units[] = {"popoff_lithopital"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Soft_F"};
	};
};
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class CfgVehicles
{
	class Car;
	class Car_F: Car{};
	class popoff_lithopital: Car_F
	{
		model = "\popoff_lithopital\popoff_lithopital.p3d";
		picture = "\A3\Weapons_F\Data\placeholder_co.paa";
		Icon = "\A3\Weapons_F\Data\placeholder_co.paa";
		displayName = "Lit hopital";
		scope = 2;
		scopeCurator = 2;
		crew = "C_man_1";
		side = 2;
		faction = "CIV_F";
		terrainCoef = 0;
		turnCoef = 2.5;
		precision = 10;
		brakeDistance = 3;
		acceleration = 0;
		fireResistance = 5;
		armor = 32;
		cost = 50000;
		transportSoldier = 1;
		wheelDamageRadiusCoef = 0.9;
		wheelDestroyRadiusCoef = 0.4;
		maxFordingDepth = 0.5;
		waterResistance = 1;
		crewCrashProtection = 0.25;
		driverLeftHandAnimName = "posmain";
		driverRightHandAnimName = "posmain";
		class Turrets{};
		class CargoTurret_01: Turrets /// position pour tirer à partir de véhicules
{
gunnerAction = ""; /// animation générique pour s'asseoir à l'intérieur avec le fusil prêt
       gunnerCompartments = "Compartment2"; /// gunner n'est pas capable de changer de siège
       memoryPointsGetInGunner = "cargaison pos"; /// points de mémoire spécifiques pour permettre le choix de la position
memoryPointsGetInGunnerDir = "dir cargaison pos"; /// direction de se mettre en action
gunnerName = "Passager (côté gauche)"; /// nom de la position dans le menu Action
proxyIndex = 7; /// quel proxy de fret est utilisé selon l'indice dans le modèle
maxElev = 15; /// quelle est la plus haute élévation possible de la tourelle
minElev = -42; /// quelle est la plus basse élévation possible de la tourelle
maxTurn = 20; /// quel est le tour le plus à gauche possible de la tourelle
minTurn = -95; /// quel est le tour le plus à droite possible de la tourelle
isPersonTurret = 1; /// permet de tirer à partir de la fonctionnalité du véhicule
ejectDeadGunner = 0; /// ceintures de sécurité incluses
enabledByAnimationSource = ""; /// ne fonctionne que si la source d'animation indiquée est 1
usepip = 0;
       gunnerInAction = "passenger_apc_narrow_generic02"; /// Votre animation assise dans la cargaison (peut être une animation FFV)
startEngine = 0;
       commandant = -1;
outGunnerMayFire = 1;
       inGunnerMayFire = 0;
animationSourceHatch = "hatchCargo_1"; /// quand vous sortez de la trappe ouvre / ferme aussi
};
		driverAction = "";
		cargoAction[] = {"vurtual_stretcher"};
		getInAction = "GetInLow";
		getOutAction = "GetOutLow";
		cargoGetInAction[] = {"GetInLow"};
		cargoGetOutAction[] = {"GetOutLow"};
		thrustDelay = 0.2;
		brakeIdleSpeed = 2.4;
		maxSpeed = 0;
		fuelCapacity = 0;
		wheelCircumference = 2.277;
		antiRollbarForceCoef = 0.5;
		antiRollbarForceLimit = 0.5;
		antiRollbarSpeedMin = 20;
		antiRollbarSpeedMax = 80;
		idleRpm = 100;
		redRpm = 6900;
		class complexGearbox
		{
			GearboxRatios[] = {"R1",-3.231,"N",0,"D1",2.462,"D2",1.87,"D3",1.241,"D4",0.97,"D5",0.711};
			TransmissionRatios[] = {"High",4.111};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
		};
		simulation = "carx";
		dampersBumpCoef = 2;
		differentialType = "front_limited";
		frontRearSplit = 0.5;
		frontBias = 1.5;
		rearBias = 1.3;
		centreBias = 1.3;
		clutchStrength = 15;
		enginePower = 0;
		maxOmega = 600;
		peakTorque = 750;
		dampingRateFullThrottle = 0.08;
		dampingRateZeroThrottleClutchEngaged = 2;
		dampingRateZeroThrottleClutchDisengaged = 0.35;
		torqueCurve[] = {{0,0},{0.178,0.8},{0.25,1},{0.461,0.9},{0.9,0.8},{1,0.3}};
		changeGearMinEffectivity[] = {0.95,0.15,0.95,0.95,0.95,0.95,0.95};
		switchTime = 0.31;
		latency = 1;
		class Wheels
		{
			class LF
			{
				boneName = "wheel_1_1_damper";
				steering = 1;
				side = "left";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				mass = 20;
				MOI = 5.3;
				dampingRate = 0.5;
				maxBrakeTorque = 5000;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = {0,-1,0};
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.1;
				mMaxDroop = 0.05;
				sprungMass = 272.5;
				springStrength = 27250;
				springDamperRate = 6725;
				longitudinalStiffnessPerUnitGravity = 100000;
				latStiffX = 25;
				latStiffY = 18000;
				frictionVsSlipGraph[] = {{0,1},{0.5,1},{1,1}};
			};
			class LR: LF
			{
				boneName = "wheel_1_2_damper";
				steering = 0;
				center = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
				maxHandBrakeTorque = 4000;
			};
			class RF: LF
			{
				boneName = "wheel_2_1_damper";
				center = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				steering = 1;
				side = "right";
			};
			class RR: RF
			{
				boneName = "wheel_2_2_damper";
				steering = 0;
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
				maxHandBrakeTorque = 4000;
			};
		};
		class PlayerSteeringCoefficients
		{
			turnIncreaseConst = 0.3;
			turnIncreaseLinear = 1;
			turnIncreaseTime = 1;
			turnDecreaseConst = 5;
			turnDecreaseLinear = 3;
			turnDecreaseTime = 0;
			maxTurnHundred = 0.7;
		};
		memoryPointTrackFLL = "TrackFLL";
		memoryPointTrackFLR = "TrackFLR";
		memoryPointTrackBLL = "TrackBLL";
		memoryPointTrackBLR = "TrackBLR";
		memoryPointTrackFRL = "TrackFRL";
		memoryPointTrackFRR = "TrackFRR";
		memoryPointTrackBRL = "TrackBRL";
		memoryPointTrackBRR = "TrackBRR";
		class Damage
		{
			tex[] = {};
			mat[] = {"A3\data_f\glass_veh_int.rvmat","A3\data_f\Glass_veh_damage.rvmat","A3\data_f\Glass_veh_damage.rvmat","A3\data_f\glass_veh.rvmat","A3\data_f\Glass_veh_damage.rvmat","A3\data_f\Glass_veh_damage.rvmat"};
		};
		class Reflectors{};
		aggregateReflectors[] = {{""}};
	};
};
class cfgMods
{
	author = "popoff";
	timepacked = "1465325617";
};
