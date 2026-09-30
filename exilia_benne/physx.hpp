		thrustDelay=0;
		engineStartSpeed=1.5;
		brakeIdleSpeed=1.78;
		maxSpeed=88;
		fuelCapacity=30;
		wheelCircumference=2.877;
		antiRollbarForceCoef=0;
		antiRollbarForceLimit=0;
		antiRollbarSpeedMin=0;
		antiRollbarSpeedMax=0;
		idleRpm=1000;
		redRpm=6500;
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-0.1,
				"N",
				0,
				"D1",
				3.76,
				"D2",
				2.03,
				"D3",
				1.46,
				"D4",
				1.08,
				"D5",
				0.88,
				"D6",
				0.74000001
			};
			TransmissionRatios[]=
			{
				"High",
				3.4200001
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
			transmissionDelay=0.0099999998;
		};
		simulation="carx";
		dampersBumpCoef=0.025;
		differentialType="all_limited";
		frontRearSplit=0.30000001;
		frontBias=2.5;
		rearBias=2.5;
		centreBias=2.5;
		clutchStrength=5;
		maxOmega=680.67999;
		enginePower=600;
		peakTorque=3200;
		dampingRateFullThrottle=0.079999998;
		dampingRateZeroThrottleClutchDisengaged=0.050000001;
		dampingRateZeroThrottleClutchEngaged=0.34999999;
		slowSpeedForwardCoef=1;
		normalSpeedForwardCoef=1;
		torqueCurve[]=
		{
			{0,0},
			{0.14,0.70999998},
			{0.28999999,0.79000002},
			{0.43000001,0.82999998},
			{0.56999999,0.95999998},
			{0.70999998,0.95999998},
			{0.86000001,0.81999999},
			{1,0.81999999}
		};
		changeGearMinEffectivity[]={0.94999999,0.15000001,0.89999998,0.89999998,0.89999998,0.89999998,0.89999998,0.80000001};
		switchTime = 0.31;
		latency = 1;
		class Wheels
		{
			class LF
			{
				boneName="wheel_1_1_damper";
				steering= 5;
				side="left";
				center="wheel_1_1_axis";
				boundary="wheel_1_1_bound";
				width = 0.2;
				mass=80;
				MOI=12.3;
				dampingRate = 0.5;
				maxBrakeTorque=5000;
				maxHandBrakeTorque=0;
				suspTravelDirection[]={0,-1,0};
				suspForceAppPointOffset="wheel_1_1_axis";
				tireForceAppPointOffset="wheel_1_1_axis";
				maxCompression=0.15000001;
				mMaxDroop=0.15000001;
				sprungMass=431;
				springStrength=48781;
				springDamperRate=12724;
				longitudinalStiffnessPerUnitGravity=4800;
				latStiffX=25;
				latStiffY=220;
				frictionVsSlipGraph[]= {{0.17,0.94999999}, {0.40000001,0.85000002}, {1,0.75}};
			};
			class LR: LF
			{
				boneName = "wheel_1_2_damper";
				steering = 5;
				center   = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
				maxHandBrakeTorque = 3000;
			};
			class LR2: LF
			{
				boneName = "wheel_1_3_damper";
				steering = 0;
				center   = "wheel_1_3_axis";
				boundary = "wheel_1_3_bound";
				suspForceAppPointOffset = "wheel_1_3_axis";
				tireForceAppPointOffset = "wheel_1_3_axis";
				maxHandBrakeTorque = 3000;
			};
			class LR3: LF
			{
				boneName = "wheel_1_4_damper";
				steering = 5;
				center   = "wheel_1_4_axis";
				boundary = "wheel_1_4_bound";
				suspForceAppPointOffset = "wheel_1_4_axis";
				tireForceAppPointOffset = "wheel_1_4_axis";
				maxHandBrakeTorque = 3000;
			};

			class RF: LF
			{
				boneName = "wheel_2_1_damper";
				center   = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				steering = 1;
			};

			class RR: RF
			{
				boneName = "wheel_2_2_damper";
				steering = 0;
				center   = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
				maxHandBrakeTorque = 3000;
			};

			class RR2: RF
			{
				boneName = "wheel_2_3_damper";
				steering = 0;
				center   = "wheel_2_3_axis";
				boundary = "wheel_2_3_bound";
				suspForceAppPointOffset = "wheel_2_3_axis";
				tireForceAppPointOffset = "wheel_2_3_axis";
				maxHandBrakeTorque = 3000;
			};

			class RR4: RF
			{
				boneName = "wheel_2_4_damper";
				steering = 5;
				center   = "wheel_2_4_axis";
				boundary = "wheel_2_4_bound";
				suspForceAppPointOffset = "wheel_2_4_axis";
				tireForceAppPointOffset = "wheel_2_4_axis";
				maxHandBrakeTorque = 3000;
			};
		};
