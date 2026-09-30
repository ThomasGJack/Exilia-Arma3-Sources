class CfgPatches
{
	class FusioHHouse
	{
		requiredAddons[]=
		{
			"A3_Structures_F",
			"A3_Structures_F_Civ_Lamps",
			"A3_Sounds_F"
		};
		requiredVersion=0.1;
		units[]=
		{
			"FusioHHouse",
			"FusioHHouseP2"
		};
		weapons[]={};
	};
};
class CfgFunctions
{
	class FusioHHouse
	{
		tag="BIS";
		class Scripts
		{
			file="concession\scripts";
			class DoorClose
			{
			};
			class DoorOpen
			{
			};
			class DoorNoHandleClose
			{
			};
			class DoorNoHandleOpen
			{
			};
		};
	};
};
class CfgAnimationSourceSounds
{
	class pcopen
	{
		class DoorMovement
		{
			loop=0;
			terminate=5;
			trigger="(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
			sound0[]=
			{
				"\concession\sound\openpc.ogg",
				15,
				1,
				50
			};
			sound[]=
			{
				"sound0",
				1
			};
		};
	};
	class portemetalgarage
	{
		class DoorMovement
		{
			loop=0;
			terminate=5;
			trigger="(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
			sound0[]=
			{
				"\concession\sound\portemetalgarage.wav",
				5,
				1,
				50
			};
			sound[]=
			{
				"sound0",
				1
			};
		};
	};
	class openfenetre
	{
		class DoorMovement
		{
			loop=0;
			terminate=5;
			trigger="(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
			sound0[]=
			{
				"\concession\sound\openfenetre.ogg",
				150,
				1,
				50
			};
			sound[]=
			{
				"sound0",
				1
			};
		};
	};
};
class CfgVehicles
{
	class House;
	class House_F: House
	{
		class DestructionEffects;
	};
	class FusioHHouse: House_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Concession FusioH";
		model="\concession\FusioHHouse.p3d";
		vehicleClass="Structures";
		mapSize=50;
		cost=1;
		class HitPoints
		{
			class Glass_1_hitpoint
			{
				armor=0.0099999998;
				material=-1;
				name="Glass_1";
				visual="Glass_1_hide";
				passThrough=0;
				radius=0.175;
				convexComponent="Glass_1_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NB";
						position="Glass_1_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NB";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NB";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NB";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NB";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NB";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NB";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SB";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SB";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SB";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SB";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SB";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SB";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SB";
					};
				};
			};
			class Glass_2_hitpoint
			{
				armor=0.0099999998;
				material=-1;
				name="Glass_2";
				visual="Glass_2_hide";
				passThrough=0;
				radius=0.175;
				convexComponent="Glass_2_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NB";
						position="Glass_2_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NB";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NB";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NB";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NB";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NB";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NB";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SB";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SB";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SB";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SB";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SB";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SB";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SB";
					};
				};
			};
			class Glass_3_hitpoint
			{
				armor=0.0099999998;
				material=-1;
				name="Glass_3";
				visual="Glass_3_hide";
				passThrough=0;
				radius=0.175;
				convexComponent="Glass_3_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1ND";
						position="Glass_3_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2ND";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3ND";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4ND";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5ND";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6ND";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7ND";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SD";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SD";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SD";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SD";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SD";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SD";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SD";
					};
				};
			};
			class Glass_4_hitpoint
			{
				armor=0.0099999998;
				material=-1;
				name="Glass_4";
				visual="Glass_4_hide";
				passThrough=0;
				radius=0.175;
				convexComponent="Glass_4_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1ND";
						position="Glass_4_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2ND";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3ND";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4ND";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5ND";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6ND";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7ND";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SD";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SD";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SD";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SD";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SD";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SD";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SD";
					};
				};
			};
			class Glass_5_hitpoint
			{
				armor=0.0099999998;
				material=-1;
				name="Glass_5";
				visual="Glass_5_hide";
				passThrough=0;
				radius=0.175;
				convexComponent="Glass_5_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1ND";
						position="Glass_5_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2ND";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3ND";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4ND";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5ND";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6ND";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7ND";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SD";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SD";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SD";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SD";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SD";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SD";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SD";
					};
				};
			};
			class Glass_6_hitpoint
			{
				armor=0.0099999998;
				material=-1;
				name="Glass_6";
				visual="Glass_6_hide";
				passThrough=0;
				radius=0.175;
				convexComponent="Glass_6_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NN";
						position="Glass_6_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NN";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NN";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NN";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NN";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NN";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NN";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SN";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SN";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SN";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SN";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SN";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SN";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SN";
					};
				};
			};
			class Glass_7_hitpoint
			{
				armor=0.0099999998;
				material=-1;
				name="Glass_7";
				visual="Glass_7_hide";
				passThrough=0;
				radius=0.175;
				convexComponent="Glass_7_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NN";
						position="Glass_7_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NN";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NN";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NN";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NN";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NN";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NN";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SN";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SN";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SN";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SN";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SN";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SN";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SN";
					};
				};
			};
			class Glass_8_hitpoint
			{
				armor=0.0099999998;
				material=-1;
				name="Glass_8";
				visual="Glass_8_hide";
				passThrough=0;
				radius=0.175;
				convexComponent="Glass_8_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NN";
						position="Glass_8_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NN";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NN";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NN";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NN";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NN";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NN";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SN";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SN";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SN";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SN";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SN";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SN";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SN";
					};
				};
			};
			class Glass_9_hitpoint
			{
				armor=0.0099999998;
				material=-1;
				name="Glass_9";
				visual="Glass_9_hide";
				passThrough=0;
				radius=0.175;
				convexComponent="Glass_9_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NN";
						position="Glass_9_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NN";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NN";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NN";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NN";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NN";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NN";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SN";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SN";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SN";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SN";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SN";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SN";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SN";
					};
				};
			};
			class Glass_10_hitpoint
			{
				armor=0.0099999998;
				material=-1;
				name="Glass_10";
				visual="Glass_10_hide";
				passThrough=0;
				radius=0.175;
				convexComponent="Glass_10_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NN";
						position="Glass_10_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NN";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NN";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NN";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NN";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NN";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NN";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SN";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SN";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SN";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SN";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SN";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SN";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SN";
					};
				};
			};
			class Glass_11_hitpoint
			{
				armor=0.0099999998;
				material=-1;
				name="Glass_11";
				visual="Glass_11_hide";
				passThrough=0;
				radius=0.175;
				convexComponent="Glass_11_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NN";
						position="Glass_11_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NN";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NN";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NN";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NN";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NN";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NN";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SN";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SN";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SN";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SN";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SN";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SN";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SN";
					};
				};
			};
			class Glass_12_hitpoint
			{
				armor=0.0099999998;
				material=-1;
				name="Glass_12";
				visual="Glass_12_hide";
				passThrough=0;
				radius=0.175;
				convexComponent="Glass_12_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NN";
						position="Glass_12_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NN";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NN";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NN";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NN";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NN";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NN";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SN";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SN";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SN";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SN";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SN";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SN";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SN";
					};
				};
			};
			class Glass_13_hitpoint
			{
				armor=0.0099999998;
				material=-1;
				name="Glass_13";
				visual="Glass_13_hide";
				passThrough=0;
				radius=0.175;
				convexComponent="Glass_13_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NN";
						position="Glass_13_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NN";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NN";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NN";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NN";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NN";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NN";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SN";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SN";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SN";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SN";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SN";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SN";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SN";
					};
				};
			};
			class Glass_14_hitpoint
			{
				armor=0.0099999998;
				material=-1;
				name="Glass_14";
				visual="Glass_14_hide";
				passThrough=0;
				radius=0.175;
				convexComponent="Glass_14_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NN";
						position="Glass_14_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NN";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NN";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NN";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NN";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NN";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NN";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SN";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SN";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SN";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SN";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SN";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SN";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SN";
					};
				};
			};
			class Glass_15_hitpoint
			{
				armor=0.0099999998;
				material=-1;
				name="Glass_15";
				visual="Glass_15_hide";
				passThrough=0;
				radius=0.175;
				convexComponent="Glass_15_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NN";
						position="Glass_15_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NN";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NN";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NN";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NN";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NN";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NN";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SN";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SN";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SN";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SN";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SN";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SN";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SN";
					};
				};
			};
			class Glass_16_hitpoint
			{
				armor=0.0099999998;
				material=-1;
				name="Glass_16";
				visual="Glass_16_hide";
				passThrough=0;
				radius=0.175;
				convexComponent="Glass_16_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NN";
						position="Glass_16_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NN";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NN";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NN";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NN";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NN";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NN";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SN";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SN";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SN";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SN";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SN";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SN";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SN";
					};
				};
			};
			class Glass_17_hitpoint
			{
				armor=0.0099999998;
				material=-1;
				name="Glass_17";
				visual="Glass_17_hide";
				passThrough=0;
				radius=0.175;
				convexComponent="Glass_17_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NN";
						position="Glass_17_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NN";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NN";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NN";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NN";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NN";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NN";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SN";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SN";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SN";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SN";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SN";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SN";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SN";
					};
				};
			};
			class Glass_18_hitpoint
			{
				armor=0.0099999998;
				material=-1;
				name="Glass_18";
				visual="Glass_18_hide";
				passThrough=0;
				radius=0.175;
				convexComponent="Glass_18_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NN";
						position="Glass_18_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NN";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NN";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NN";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NN";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NN";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NN";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SN";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SN";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SN";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SN";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SN";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SN";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SN";
					};
				};
			};
			class Glass_19_hitpoint
			{
				armor=0.0099999998;
				material=-1;
				name="Glass_19";
				visual="Glass_19_hide";
				passThrough=0;
				radius=0.175;
				convexComponent="Glass_19_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NN";
						position="Glass_19_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NN";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NN";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NN";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NN";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NN";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NN";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SN";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SN";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SN";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SN";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SN";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SN";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SN";
					};
				};
			};
			class Glass_20_hitpoint
			{
				armor=0.0099999998;
				material=-1;
				name="Glass_20";
				visual="Glass_20_hide";
				passThrough=0;
				radius=0.175;
				convexComponent="Glass_20_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NN";
						position="Glass_20_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NN";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NN";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NN";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NN";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NN";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NN";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SN";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SN";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SN";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SN";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SN";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SN";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SN";
					};
				};
			};
			class Glass_21_hitpoint
			{
				armor=0.0099999998;
				material=-1;
				name="Glass_21";
				visual="Glass_21_hide";
				passThrough=0;
				radius=0.175;
				convexComponent="Glass_21_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NN";
						position="Glass_21_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NN";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NN";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NN";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NN";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NN";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NN";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SN";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SN";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SN";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SN";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SN";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SN";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SN";
					};
				};
			};
			class Glass_22_hitpoint
			{
				armor=0.0099999998;
				material=-1;
				name="Glass_22";
				visual="Glass_22_hide";
				passThrough=0;
				radius=0.175;
				convexComponent="Glass_22_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NN";
						position="Glass_22_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NN";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NN";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NN";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NN";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NN";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NN";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SN";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SN";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SN";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SN";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SN";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SN";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SN";
					};
				};
			};
			class Glass_23_hitpoint
			{
				armor=0.0099999998;
				material=-1;
				name="Glass_23";
				visual="Glass_23_hide";
				passThrough=0;
				radius=0.175;
				convexComponent="Glass_23_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NN";
						position="Glass_23_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NN";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NN";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NN";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NN";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NN";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NN";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SN";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SN";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SN";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SN";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SN";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SN";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SN";
					};
				};
			};
			class Glass_24_hitpoint
			{
				armor=0.0099999998;
				material=-1;
				name="Glass_24";
				visual="Glass_24_hide";
				passThrough=0;
				radius=0.175;
				convexComponent="Glass_24_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NN";
						position="Glass_24_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NN";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NN";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NN";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NN";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NN";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NN";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SN";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SN";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SN";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SN";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SN";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SN";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SN";
					};
				};
			};
			class Glass_25_hitpoint
			{
				armor=0.0099999998;
				material=-1;
				name="Glass_25";
				visual="Glass_25_hide";
				passThrough=0;
				radius=0.175;
				convexComponent="Glass_25_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NN";
						position="Glass_25_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NN";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NN";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NN";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NN";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NN";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NN";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SN";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SN";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SN";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SN";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SN";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SN";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SN";
					};
				};
			};
			class Glass_26_hitpoint
			{
				armor=0.0099999998;
				material=-1;
				name="Glass_26";
				visual="Glass_26_hide";
				passThrough=0;
				radius=0.175;
				convexComponent="Glass_26_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NN";
						position="Glass_26_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NN";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NN";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NN";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NN";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NN";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NN";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SN";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SN";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SN";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SN";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SN";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SN";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SN";
					};
				};
			};
			class Glass_27_hitpoint
			{
				armor=0.0099999998;
				material=-1;
				name="Glass_27";
				visual="Glass_27_hide";
				passThrough=0;
				radius=0.175;
				convexComponent="Glass_27_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NN";
						position="Glass_27_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NN";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NN";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NN";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NN";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NN";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NN";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SN";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SN";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SN";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SN";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SN";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SN";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SN";
					};
				};
			};
			class Glass_28_hitpoint
			{
				armor=0.0099999998;
				material=-1;
				name="Glass_28";
				visual="Glass_28_hide";
				passThrough=0;
				radius=0.175;
				convexComponent="Glass_28_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NN";
						position="Glass_28_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NN";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NN";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NN";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NN";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NN";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NN";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SN";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SN";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SN";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SN";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SN";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SN";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SN";
					};
				};
			};
			class Glass_29_hitpoint
			{
				armor=0.0099999998;
				material=-1;
				name="Glass_29";
				visual="Glass_29_hide";
				passThrough=0;
				radius=0.175;
				convexComponent="Glass_29_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NN";
						position="Glass_29_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NN";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NN";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NN";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NN";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NN";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NN";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SN";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SN";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SN";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SN";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SN";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SN";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SN";
					};
				};
			};
			class Glass_30_hitpoint
			{
				armor=0.0099999998;
				material=-1;
				name="Glass_30";
				visual="Glass_30_hide";
				passThrough=0;
				radius=0.175;
				convexComponent="Glass_30_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NN";
						position="Glass_30_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NN";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NN";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NN";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NN";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NN";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NN";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SN";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SN";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SN";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SN";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SN";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SN";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SN";
					};
				};
			};
			class Glass_31_hitpoint
			{
				armor=0.0099999998;
				material=-1;
				name="Glass_31";
				visual="Glass_31_hide";
				passThrough=0;
				radius=0.175;
				convexComponent="Glass_31_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NN";
						position="Glass_31_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NN";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NN";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NN";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NN";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NN";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NN";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SN";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SN";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SN";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SN";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SN";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SN";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SN";
					};
				};
			};
			class Glass_32_hitpoint
			{
				armor=0.0099999998;
				material=-1;
				name="Glass_32";
				visual="Glass_32_hide";
				passThrough=0;
				radius=0.175;
				convexComponent="Glass_32_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NN";
						position="Glass_32_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NN";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NN";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NN";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NN";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NN";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NN";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SN";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SN";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SN";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SN";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SN";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SN";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SN";
					};
				};
			};
			class Glass_33_hitpoint
			{
				armor=0.0099999998;
				material=-1;
				name="Glass_33";
				visual="Glass_33_hide";
				passThrough=0;
				radius=0.175;
				convexComponent="Glass_33_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NN";
						position="Glass_33_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NN";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NN";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NN";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NN";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NN";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NN";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SN";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SN";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SN";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SN";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SN";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SN";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SN";
					};
				};
			};
			class Glass_34_hitpoint
			{
				armor=0.0099999998;
				material=-1;
				name="Glass_34";
				visual="Glass_34_hide";
				passThrough=0;
				radius=0.175;
				convexComponent="Glass_34_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NN";
						position="Glass_34_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NN";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NN";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NN";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NN";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NN";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NN";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SN";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SN";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SN";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SN";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SN";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SN";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SN";
					};
				};
			};
			class Glass_35_hitpoint
			{
				armor=0.0099999998;
				material=-1;
				name="Glass_35";
				visual="Glass_35_hide";
				passThrough=0;
				radius=0.175;
				convexComponent="Glass_35_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NN";
						position="Glass_35_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NN";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NN";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NN";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NN";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NN";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NN";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SN";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SN";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SN";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SN";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SN";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SN";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SN";
					};
				};
			};
			class Glass_36_hitpoint
			{
				armor=0.0099999998;
				material=-1;
				name="Glass_36";
				visual="Glass_36_hide";
				passThrough=0;
				radius=0.175;
				convexComponent="Glass_36_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NN";
						position="Glass_36_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NN";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NN";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NN";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NN";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NN";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NN";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SN";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SN";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SN";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SN";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SN";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SN";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SN";
					};
				};
			};
			class Glass_37_hitpoint
			{
				armor=0.0099999998;
				material=-1;
				name="Glass_37";
				visual="Glass_37_hide";
				passThrough=0;
				radius=0.175;
				convexComponent="Glass_37_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NN";
						position="Glass_37_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NN";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NN";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NN";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NN";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NN";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NN";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SN";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SN";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SN";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SN";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SN";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SN";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SN";
					};
				};
			};
			class Glass_38_hitpoint
			{
				armor=0.0099999998;
				material=-1;
				name="Glass_38";
				visual="Glass_38_hide";
				passThrough=0;
				radius=0.175;
				convexComponent="Glass_38_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NN";
						position="Glass_38_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NN";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NN";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NN";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NN";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NN";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NN";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SN";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SN";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SN";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SN";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SN";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SN";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SN";
					};
				};
			};
			class Glass_39_hitpoint
			{
				armor=0.0099999998;
				material=-1;
				name="Glass_39";
				visual="Glass_39_hide";
				passThrough=0;
				radius=0.175;
				convexComponent="Glass_39_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NN";
						position="Glass_39_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NN";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NN";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NN";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NN";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NN";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NN";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SN";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SN";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SN";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SN";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SN";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SN";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SN";
					};
				};
			};
			class Glass_40_hitpoint
			{
				armor=0.0099999998;
				material=-1;
				name="Glass_40";
				visual="Glass_40_hide";
				passThrough=0;
				radius=0.175;
				convexComponent="Glass_40_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NN";
						position="Glass_40_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NN";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NN";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NN";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NN";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NN";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NN";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SN";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SN";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SN";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SN";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SN";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SN";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SN";
					};
				};
			};
			class Glass_41_hitpoint
			{
				armor=0.0099999998;
				material=-1;
				name="Glass_41";
				visual="Glass_41_hide";
				passThrough=0;
				radius=0.175;
				convexComponent="Glass_41_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NN";
						position="Glass_41_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NN";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NN";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NN";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NN";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NN";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NN";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SN";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SN";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SN";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SN";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SN";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SN";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SN";
					};
				};
			};
			class Glass_42_hitpoint
			{
				armor=0.0099999998;
				material=-1;
				name="Glass_42";
				visual="Glass_42_hide";
				passThrough=0;
				radius=0.175;
				convexComponent="Glass_42_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NN";
						position="Glass_42_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NN";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NN";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NN";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NN";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NN";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NN";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SN";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SN";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SN";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SN";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SN";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SN";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SN";
					};
				};
			};
			class Glass_43_hitpoint
			{
				armor=0.0099999998;
				material=-1;
				name="Glass_43";
				visual="Glass_43_hide";
				passThrough=0;
				radius=0.175;
				convexComponent="Glass_43_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NN";
						position="Glass_43_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NN";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NN";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NN";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NN";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NN";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NN";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SN";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SN";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SN";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SN";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SN";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SN";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SN";
					};
				};
			};
			class Glass_44_hitpoint
			{
				armor=0.0099999998;
				material=-1;
				name="Glass_44";
				visual="Glass_44_hide";
				passThrough=0;
				radius=0.175;
				convexComponent="Glass_44_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NN";
						position="Glass_44_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NN";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NN";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NN";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NN";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NN";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NN";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SN";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SN";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SN";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SN";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SN";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SN";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SN";
					};
				};
			};
			class Glass_45_hitpoint
			{
				armor=0.0099999998;
				material=-1;
				name="Glass_45";
				visual="Glass_45_hide";
				passThrough=0;
				radius=0.175;
				convexComponent="Glass_45_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NN";
						position="Glass_45_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NN";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NN";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NN";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NN";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NN";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NN";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SN";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SN";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SN";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SN";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SN";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SN";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SN";
					};
				};
			};
			class Glass_46_hitpoint
			{
				armor=0.0099999998;
				material=-1;
				name="Glass_46";
				visual="Glass_46_hide";
				passThrough=0;
				radius=0.175;
				convexComponent="Glass_46_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NN";
						position="Glass_46_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NN";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NN";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NN";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NN";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NN";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NN";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SN";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SN";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SN";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SN";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SN";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SN";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SN";
					};
				};
			};
			class Glass_47_hitpoint
			{
				armor=0.0099999998;
				material=-1;
				name="Glass_47";
				visual="Glass_47_hide";
				passThrough=0;
				radius=0.175;
				convexComponent="Glass_47_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NN";
						position="Glass_47_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NN";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NN";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NN";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NN";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NN";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NN";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SN";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SN";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SN";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SN";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SN";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SN";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SN";
					};
				};
			};
			class Glass_48_hitpoint
			{
				armor=0.0099999998;
				material=-1;
				name="Glass_48";
				visual="Glass_48_hide";
				passThrough=0;
				radius=0.175;
				convexComponent="Glass_48_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NN";
						position="Glass_48_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NN";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NN";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NN";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NN";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NN";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NN";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SN";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SN";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SN";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SN";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SN";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SN";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SN";
					};
				};
			};
			class Glass_49_hitpoint
			{
				armor=0.0099999998;
				material=-1;
				name="Glass_49";
				visual="Glass_49_hide";
				passThrough=0;
				radius=0.175;
				convexComponent="Glass_49_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NN";
						position="Glass_49_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NN";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NN";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NN";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NN";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NN";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NN";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SN";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SN";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SN";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SN";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SN";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SN";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SN";
					};
				};
			};
			class Glass_50_hitpoint
			{
				armor=0.0099999998;
				material=-1;
				name="Glass_50";
				visual="Glass_50_hide";
				passThrough=0;
				radius=0.175;
				convexComponent="Glass_50_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NN";
						position="Glass_50_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NN";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NN";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NN";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NN";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NN";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NN";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SN";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SN";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SN";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SN";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SN";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SN";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SN";
					};
				};
			};
			class Glass_51_hitpoint
			{
				armor=0.0099999998;
				material=-1;
				name="Glass_51";
				visual="Glass_51_hide";
				passThrough=0;
				radius=0.175;
				convexComponent="Glass_51_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NN";
						position="Glass_51_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NN";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NN";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NN";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NN";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NN";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NN";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SN";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SN";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SN";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SN";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SN";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SN";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SN";
					};
				};
			};
			class Glass_52_hitpoint
			{
				armor=0.0099999998;
				material=-1;
				name="Glass_52";
				visual="Glass_52_hide";
				passThrough=0;
				radius=0.175;
				convexComponent="Glass_52_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NN";
						position="Glass_52_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NN";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NN";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NN";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NN";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NN";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NN";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SN";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SN";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SN";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SN";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SN";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SN";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SN";
					};
				};
			};
			class Glass_53_hitpoint
			{
				armor=0.0099999998;
				material=-1;
				name="Glass_53";
				visual="Glass_53_hide";
				passThrough=0;
				radius=0.175;
				convexComponent="Glass_53_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NN";
						position="Glass_53_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NN";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NN";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NN";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NN";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NN";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NN";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SN";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SN";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SN";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SN";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SN";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SN";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SN";
					};
				};
			};
			class Glass_54_hitpoint
			{
				armor=0.0099999998;
				material=-1;
				name="Glass_54";
				visual="Glass_54_hide";
				passThrough=0;
				radius=0.175;
				convexComponent="Glass_54_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NN";
						position="Glass_54_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NN";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NN";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NN";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NN";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NN";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NN";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SN";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SN";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SN";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SN";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SN";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SN";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SN";
					};
				};
			};
			class Glass_55_hitpoint
			{
				armor=0.0099999998;
				material=-1;
				name="Glass_55";
				visual="Glass_55_hide";
				passThrough=0;
				radius=0.175;
				convexComponent="Glass_55_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NN";
						position="Glass_55_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NN";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NN";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NN";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NN";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NN";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NN";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SN";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SN";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SN";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SN";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SN";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SN";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SN";
					};
				};
			};
			class Glass_56_hitpoint
			{
				armor=0.0099999998;
				material=-1;
				name="Glass_56";
				visual="Glass_56_hide";
				passThrough=0;
				radius=0.175;
				convexComponent="Glass_56_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NN";
						position="Glass_56_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NN";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NN";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NN";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NN";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NN";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NN";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SN";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SN";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SN";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SN";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SN";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SN";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SN";
					};
				};
			};
			class Glass_57_hitpoint
			{
				armor=0.0099999998;
				material=-1;
				name="Glass_57";
				visual="Glass_57_hide";
				passThrough=0;
				radius=0.175;
				convexComponent="Glass_57_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NN";
						position="Glass_57_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NN";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NN";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NN";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NN";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NN";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NN";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SN";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SN";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SN";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SN";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SN";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SN";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SN";
					};
				};
			};
			class Glass_58_hitpoint
			{
				armor=0.0099999998;
				material=-1;
				name="Glass_58";
				visual="Glass_58_hide";
				passThrough=0;
				radius=0.175;
				convexComponent="Glass_58_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NN";
						position="Glass_58_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NN";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NN";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NN";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NN";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NN";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NN";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SN";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SN";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SN";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SN";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SN";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SN";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SN";
					};
				};
			};
			class Glass_59_hitpoint
			{
				armor=0.0099999998;
				material=-1;
				name="Glass_59";
				visual="Glass_59_hide";
				passThrough=0;
				radius=0.175;
				convexComponent="Glass_59_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NN";
						position="Glass_59_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NN";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NN";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NN";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NN";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NN";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NN";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SN";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SN";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SN";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SN";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SN";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SN";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SN";
					};
				};
			};
			class Glass_60_hitpoint
			{
				armor=0.0099999998;
				material=-1;
				name="Glass_60";
				visual="Glass_60_hide";
				passThrough=0;
				radius=0.175;
				convexComponent="Glass_60_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NN";
						position="Glass_60_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NN";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NN";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NN";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NN";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NN";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NN";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SN";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SN";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SN";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SN";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SN";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SN";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SN";
					};
				};
			};
			class Glass_61_hitpoint
			{
				armor=0.0099999998;
				material=-1;
				name="Glass_61";
				visual="Glass_61_hide";
				passThrough=0;
				radius=0.175;
				convexComponent="Glass_61_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NN";
						position="Glass_61_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NN";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NN";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NN";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NN";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NN";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NN";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SN";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SN";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SN";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SN";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SN";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SN";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SN";
					};
				};
			};
			class Glass_62_hitpoint
			{
				armor=0.0099999998;
				material=-1;
				name="Glass_62";
				visual="Glass_62_hide";
				passThrough=0;
				radius=0.175;
				convexComponent="Glass_62_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NN";
						position="Glass_62_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NN";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NN";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NN";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NN";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NN";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NN";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SN";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SN";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SN";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SN";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SN";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SN";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SN";
					};
				};
			};
			class Glass_63_hitpoint
			{
				armor=0.0099999998;
				material=-1;
				name="Glass_63";
				visual="Glass_63_hide";
				passThrough=0;
				radius=0.175;
				convexComponent="Glass_63_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NN";
						position="Glass_63_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NN";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NN";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NN";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NN";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NN";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NN";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SN";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SN";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SN";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SN";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SN";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SN";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SN";
					};
				};
			};
			class Glass_64_hitpoint
			{
				armor=0.0099999998;
				material=-1;
				name="Glass_64";
				visual="Glass_64_hide";
				passThrough=0;
				radius=0.175;
				convexComponent="Glass_64_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NN";
						position="Glass_64_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NN";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NN";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NN";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NN";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NN";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NN";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SN";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SN";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SN";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SN";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SN";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SN";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SN";
					};
				};
			};
			class Glass_65_hitpoint
			{
				armor=0.0099999998;
				material=-1;
				name="Glass_65";
				visual="Glass_65_hide";
				passThrough=0;
				radius=0.175;
				convexComponent="Glass_65_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NN";
						position="Glass_65_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NN";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NN";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NN";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NN";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NN";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NN";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SN";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SN";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SN";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SN";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SN";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SN";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SN";
					};
				};
			};
		};
		class AnimationSources
		{
			class Door_1_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
				sound="GenericDoorsSound";
			};
			class Door_2_source: Door_1_source
			{
			};
			class Door_5_source: Door_1_source
			{
			};
			class Door_9_source: Door_1_source
			{
			};
			class Door_10_source: Door_1_source
			{
			};
			class Door_11_source: Door_1_source
			{
			};
			class Door_12_source: Door_1_source
			{
			};
			class Door_13_source: Door_1_source
			{
			};
			class Door_14_source: Door_1_source
			{
			};
			class Door_15_source: Door_1_source
			{
			};
			class Door_6_source
			{
				source="user";
				initPhase=0;
				animPeriod=1.5;
				sound="openfenetre";
			};
			class Door_8_source: Door_6_source
			{
			};
			class Door_7_source
			{
				source="user";
				initPhase=0;
				animPeriod=4;
				sound="pcopen";
			};
			class Door_17_source
			{
				source="user";
				animPeriod=1;
				initPhase=0;
				sound="GenericDoorsSound";
			};
			class Door_3_source
			{
				source="user";
				initPhase=0;
				animPeriod=11;
				sound="portemetalgarage";
			};
			class Door_4_source
			{
				source="user";
				initPhase=0;
				animPeriod=11;
				sound="portemetalgarage";
			};
			class Door_hide_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
			class Door_hide2_source
			{
				source="user";
				initPhase=0;
				animPeriod=0;
			};
			class Glass_1_source
			{
				source="Hit";
				hitpoint="Glass_1_hitpoint";
				raw=1;
			};
			class Glass_2_source: Glass_1_source
			{
				hitpoint="Glass_2_hitpoint";
			};
			class Glass_3_source: Glass_1_source
			{
				hitpoint="Glass_3_hitpoint";
			};
			class Glass_4_source: Glass_1_source
			{
				hitpoint="Glass_4_hitpoint";
			};
			class Glass_5_source: Glass_1_source
			{
				hitpoint="Glass_5_hitpoint";
			};
			class Glass_6_source: Glass_1_source
			{
				hitpoint="Glass_6_hitpoint";
			};
			class Glass_7_source: Glass_1_source
			{
				hitpoint="Glass_7_hitpoint";
			};
			class Glass_8_source: Glass_1_source
			{
				hitpoint="Glass_8_hitpoint";
			};
			class Glass_9_source: Glass_1_source
			{
				hitpoint="Glass_9_hitpoint";
			};
			class Glass_10_source: Glass_1_source
			{
				hitpoint="Glass_10_hitpoint";
			};
			class Glass_11_source: Glass_1_source
			{
				hitpoint="Glass_11_hitpoint";
			};
			class Glass_12_source: Glass_1_source
			{
				hitpoint="Glass_12_hitpoint";
			};
			class Glass_13_source: Glass_1_source
			{
				hitpoint="Glass_13_hitpoint";
			};
			class Glass_14_source: Glass_1_source
			{
				hitpoint="Glass_14_hitpoint";
			};
			class Glass_15_source: Glass_1_source
			{
				hitpoint="Glass_15_hitpoint";
			};
			class Glass_16_source: Glass_1_source
			{
				hitpoint="Glass_16_hitpoint";
			};
			class Glass_17_source: Glass_1_source
			{
				hitpoint="Glass_17_hitpoint";
			};
			class Glass_18_source: Glass_1_source
			{
				hitpoint="Glass_18_hitpoint";
			};
			class Glass_19_source: Glass_1_source
			{
				hitpoint="Glass_19_hitpoint";
			};
			class Glass_20_source: Glass_1_source
			{
				hitpoint="Glass_20_hitpoint";
			};
			class Glass_21_source: Glass_1_source
			{
				hitpoint="Glass_21_hitpoint";
			};
			class Glass_22_source: Glass_1_source
			{
				hitpoint="Glass_22_hitpoint";
			};
			class Glass_23_source: Glass_1_source
			{
				hitpoint="Glass_23_hitpoint";
			};
			class Glass_24_source: Glass_1_source
			{
				hitpoint="Glass_24_hitpoint";
			};
			class Glass_25_source: Glass_1_source
			{
				hitpoint="Glass_25_hitpoint";
			};
			class Glass_26_source: Glass_1_source
			{
				hitpoint="Glass_26_hitpoint";
			};
			class Glass_27_source: Glass_1_source
			{
				hitpoint="Glass_27_hitpoint";
			};
			class Glass_28_source: Glass_1_source
			{
				hitpoint="Glass_28_hitpoint";
			};
			class Glass_29_source: Glass_1_source
			{
				hitpoint="Glass_29_hitpoint";
			};
			class Glass_30_source: Glass_1_source
			{
				hitpoint="Glass_30_hitpoint";
			};
			class Glass_31_source: Glass_1_source
			{
				hitpoint="Glass_31_hitpoint";
			};
			class Glass_32_source: Glass_1_source
			{
				hitpoint="Glass_32_hitpoint";
			};
			class Glass_33_source: Glass_1_source
			{
				hitpoint="Glass_33_hitpoint";
			};
			class Glass_34_source: Glass_1_source
			{
				hitpoint="Glass_34_hitpoint";
			};
			class Glass_35_source: Glass_1_source
			{
				hitpoint="Glass_35_hitpoint";
			};
			class Glass_36_source: Glass_1_source
			{
				hitpoint="Glass_36_hitpoint";
			};
			class Glass_37_source: Glass_1_source
			{
				hitpoint="Glass_37_hitpoint";
			};
			class Glass_38_source: Glass_1_source
			{
				hitpoint="Glass_38_hitpoint";
			};
			class Glass_39_source: Glass_1_source
			{
				hitpoint="Glass_39_hitpoint";
			};
			class Glass_40_source: Glass_1_source
			{
				hitpoint="Glass_40_hitpoint";
			};
			class Glass_41_source: Glass_1_source
			{
				hitpoint="Glass_41_hitpoint";
			};
			class Glass_42_source: Glass_1_source
			{
				hitpoint="Glass_42_hitpoint";
			};
			class Glass_43_source: Glass_1_source
			{
				hitpoint="Glass_43_hitpoint";
			};
			class Glass_44_source: Glass_1_source
			{
				hitpoint="Glass_44_hitpoint";
			};
			class Glass_45_source: Glass_1_source
			{
				hitpoint="Glass_45_hitpoint";
			};
			class Glass_46_source: Glass_1_source
			{
				hitpoint="Glass_46_hitpoint";
			};
			class Glass_47_source: Glass_1_source
			{
				hitpoint="Glass_47_hitpoint";
			};
			class Glass_48_source: Glass_1_source
			{
				hitpoint="Glass_48_hitpoint";
			};
			class Glass_49_source: Glass_1_source
			{
				hitpoint="Glass_49_hitpoint";
			};
			class Glass_50_source: Glass_1_source
			{
				hitpoint="Glass_50_hitpoint";
			};
			class Glass_51_source: Glass_1_source
			{
				hitpoint="Glass_51_hitpoint";
			};
			class Glass_52_source: Glass_1_source
			{
				hitpoint="Glass_52_hitpoint";
			};
			class Glass_53_source: Glass_1_source
			{
				hitpoint="Glass_53_hitpoint";
			};
			class Glass_54_source: Glass_1_source
			{
				hitpoint="Glass_54_hitpoint";
			};
			class Glass_55_source: Glass_1_source
			{
				hitpoint="Glass_55_hitpoint";
			};
			class Glass_56_source: Glass_1_source
			{
				hitpoint="Glass_56_hitpoint";
			};
			class Glass_57_source: Glass_1_source
			{
				hitpoint="Glass_57_hitpoint";
			};
			class Glass_58_source: Glass_1_source
			{
				hitpoint="Glass_58_hitpoint";
			};
			class Glass_59_source: Glass_1_source
			{
				hitpoint="Glass_59_hitpoint";
			};
			class Glass_60_source: Glass_1_source
			{
				hitpoint="Glass_60_hitpoint";
			};
			class Glass_61_source: Glass_1_source
			{
				hitpoint="Glass_61_hitpoint";
			};
			class Glass_62_source: Glass_1_source
			{
				hitpoint="Glass_62_hitpoint";
			};
			class Glass_63_source: Glass_1_source
			{
				hitpoint="Glass_63_hitpoint";
			};
			class Glass_64_source: Glass_1_source
			{
				hitpoint="Glass_64_hitpoint";
			};
			class Glass_65_source: Glass_1_source
			{
				hitpoint="Glass_65_hitpoint";
			};
		};
		class UserActions
		{
			class OpenDoor_1
			{
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName="Ouvrir les portes de la concession";
				position="Door_1_trigger";
				priority=0.40000001;
				radius=2.5;
				onlyForPlayer=0;
				condition="((this animationPhase 'Door_ouvert_rot') < 0.5) && ((this animationPhase 'Door_7_rot') >= 0.5) && ((this animationPhase 'Door_1_rot') < 0.5) && ((this animationPhase 'Door_2_rot') < 0.5)";
				statement="([this, 'Door_ferme_rot'] call BIS_fnc_DoorNoHandleOpen) && ([this, 'Door_ouvert_rot'] call BIS_fnc_DoorNoHandleOpen) && ([this, 'Door_1_rot'] call BIS_fnc_DoorNoHandleOpen) && ([this, 'Door_2_rot'] call BIS_fnc_DoorNoHandleOpen)";
			};
			class CloseDoor_1: OpenDoor_1
			{
				displayName="Fermer les portes de la concession";
				priority=0.2;
				condition="((this animationPhase 'Door_ouvert_rot') >= 0.5) && ((this animationPhase 'Door_7_rot') >= 0.5) && ((this animationPhase 'Door_1_rot') >= 0.5) && ((this animationPhase 'Door_2_rot') >= 0.5)";
				statement="([this, 'Door_ferme_rot'] call BIS_fnc_DoorNoHandleClose) && ([this, 'Door_ouvert_rot'] call BIS_fnc_DoorNoHandleClose) && ([this, 'Door_1_rot'] call BIS_fnc_DoorNoHandleClose) && ([this, 'Door_2_rot'] call BIS_fnc_DoorNoHandleClose)";
			};
			class OpenDoor_5: OpenDoor_1
			{
				position="Door_5_trigger";
				radius=1.5;
				displayName="Ouvrir la porte";
				condition="((this animationPhase 'Door_5_rot') < 0.5)";
				statement="([this, 'Door_5_rot'] call BIS_fnc_DoorNoHandleOpen)";
			};
			class CloseDoor_5: CloseDoor_1
			{
				position="Door_5_trigger";
				radius=1.5;
				displayName="Fermer la porte";
				condition="((this animationPhase 'Door_5_rot') >= 0.5)";
				statement="([this, 'Door_5_rot'] call BIS_fnc_DoorNoHandleClose)";
			};
			class OpenDoor_10: OpenDoor_1
			{
				position="Door_10_trigger";
				radius=2.5;
				displayName="Ouvrir la porte";
				condition="((this animationPhase 'Door_10_rot') < 0.5)";
				statement="([this, 'Door_10_rot'] call BIS_fnc_DoorNoHandleOpen)";
			};
			class CloseDoor_10: CloseDoor_1
			{
				position="Door_10_trigger";
				radius=2.5;
				displayName="Fermer la porte";
				condition="((this animationPhase 'Door_10_rot') >= 0.5)";
				statement="([this, 'Door_10_rot'] call BIS_fnc_DoorNoHandleClose)";
			};
			class OpenDoor_11: OpenDoor_1
			{
				position="Door_11_trigger";
				radius=2.5;
				displayName="Ouvrir la porte";
				condition="((this animationPhase 'Door_11_rot') < 0.5)";
				statement="([this, 'Door_11_rot'] call BIS_fnc_DoorNoHandleOpen)";
			};
			class CloseDoor_11: CloseDoor_1
			{
				position="Door_11_trigger";
				radius=2.5;
				displayName="Fermer la porte";
				condition="((this animationPhase 'Door_11_rot') >= 0.5)";
				statement="([this, 'Door_11_rot'] call BIS_fnc_DoorNoHandleClose)";
			};
			class OpenDoor_12: OpenDoor_1
			{
				position="Door_12_trigger";
				radius=2.5;
				displayName="Ouvrir la porte";
				condition="((this animationPhase 'Door_12_rot') < 0.5)";
				statement="([this, 'Door_12_rot'] call BIS_fnc_DoorNoHandleOpen)";
			};
			class CloseDoor_12: CloseDoor_1
			{
				position="Door_12_trigger";
				radius=2.5;
				displayName="Fermer la porte";
				condition="((this animationPhase 'Door_12_rot') >= 0.5)";
				statement="([this, 'Door_12_rot'] call BIS_fnc_DoorNoHandleClose)";
			};
			class OpenDoor_13: OpenDoor_1
			{
				position="Door_13_trigger";
				radius=2.5;
				displayName="Ouvrir la porte";
				condition="((this animationPhase 'Door_13_rot') < 0.5)";
				statement="([this, 'Door_13_rot'] call BIS_fnc_DoorNoHandleOpen)";
			};
			class CloseDoor_13: CloseDoor_1
			{
				position="Door_13_trigger";
				radius=2.5;
				displayName="Fermer la porte";
				condition="((this animationPhase 'Door_13_rot') >= 0.5)";
				statement="([this, 'Door_13_rot'] call BIS_fnc_DoorNoHandleClose)";
			};
			class OpenDoor_14: OpenDoor_1
			{
				position="Door_14_trigger";
				radius=2.5;
				displayName="Ouvrir la porte";
				condition="((this animationPhase 'Door_14_rot') < 0.5)";
				statement="([this, 'Door_14_rot'] call BIS_fnc_DoorNoHandleOpen)";
			};
			class CloseDoor_14: CloseDoor_1
			{
				position="Door_14_trigger";
				radius=2.5;
				displayName="Fermer la porte";
				condition="((this animationPhase 'Door_14_rot') >= 0.5)";
				statement="([this, 'Door_14_rot'] call BIS_fnc_DoorNoHandleClose)";
			};
			class OpenDoor_15: OpenDoor_1
			{
				position="Door_15_trigger";
				radius=1.5;
				displayName="Ouvrir la porte";
				condition="((this animationPhase 'Door_15_rot') < 0.5)";
				statement="([this, 'Door_15_rot'] call BIS_fnc_DoorNoHandleOpen)";
			};
			class CloseDoor_15: CloseDoor_1
			{
				position="Door_15_trigger";
				radius=1.5;
				displayName="Fermer la porte";
				condition="((this animationPhase 'Door_15_rot') >= 0.5)";
				statement="([this, 'Door_15_rot'] call BIS_fnc_DoorNoHandleClose)";
			};
			class OpenDoor_9: OpenDoor_1
			{
				position="Door_9_trigger";
				radius=2.5;
				displayName="Ouvrir la porte";
				condition="((this animationPhase 'Door_9_rot') < 0.5)";
				statement="([this, 'Door_9_rot'] call BIS_fnc_DoorNoHandleOpen)";
			};
			class CloseDoor_9: CloseDoor_1
			{
				position="Door_9_trigger";
				radius=2.5;
				displayName="Fermer la porte";
				condition="((this animationPhase 'Door_9_rot') >= 0.5)";
				statement="([this, 'Door_9_rot'] call BIS_fnc_DoorNoHandleClose)";
			};
			class OpenDoor_6
			{
				displayNameDefault="<img image='\concession\textures\paa\ui_action_open_ca.paa' size='2.5' />";
				displayName="Ouvrir la fenetre";
				position="Door_6_trigger";
				priority=0.40000001;
				radius=3;
				onlyForPlayer=0;
				condition="((this animationPhase 'Door_6_rot') < 0.5)";
				statement="([this, 'Door_6_rot'] call BIS_fnc_DoorNoHandleOpen)";
			};
			class CloseDoor_6: OpenDoor_6
			{
				displayNameDefault="<img image='\concession\textures\paa\close_ca.paa' size='2.5' />";
				displayName="Fermer la fenetre";
				condition="((this animationPhase 'Door_6_rot') >= 0.5)";
				statement="([this, 'Door_6_rot'] call BIS_fnc_DoorNoHandleClose)";
			};
			class OpenDoor_8: OpenDoor_6
			{
				displayName="Ouvrir la fenetre";
				position="Door_8_trigger";
				condition="((this animationPhase 'Door_8_rot') < 0.5)";
				statement="([this, 'Door_8_rot'] call BIS_fnc_DoorNoHandleOpen)";
			};
			class CloseDoor_8: CloseDoor_6
			{
				displayName="Fermer la fenetre";
				position="Door_8_trigger";
				condition="((this animationPhase 'Door_8_rot') >= 0.5)";
				statement="([this, 'Door_8_rot'] call BIS_fnc_DoorNoHandleClose)";
			};
			class openDoor_7
			{
				displayNameDefault="<img image='\concession\textures\paa\logopc.paa' size='2.5' />";
				displayName="Allumer le pc";
				position="Door_1_trigger";
				priority=0.60000002;
				radius=5;
				onlyForPlayer=0;
				condition="((this animationPhase 'Door_7_rot') < 0.5)";
				statement="([this, 'Door_7_rot'] call BIS_fnc_DoorNoHandleOpen)";
			};
			class CloseDoor_7
			{
				displayNameDefault="<img image='\concession\textures\paa\logopc.paa' size='2.5' />";
				displayName="Eteindre le pc";
				position="Door_1_trigger";
				priority=0.60000002;
				radius=3.5;
				onlyForPlayer=0;
				condition="((this animationPhase 'Door_7_rot') >= 0.5)";
				statement="([this, 'Door_7_rot'] call BIS_fnc_DoorNoHandleClose)";
			};
			class openDoor_17
			{
				displayNameDefault="<img image='\concession\textures\paa\logopc.paa' size='2.5' />";
				displayName="Allumer toutes les lumieres";
				position="Door_1_trigger";
				priority=0.60000002;
				radius=3.5;
				onlyForPlayer=0;
				condition="((this animationPhase 'Door_7_rot') >= 0.5) && ((this animationPhase 'Door_17_rot') < 0.5)";
				statement="([this, 'Door_17_rot'] call BIS_fnc_DoorNoHandleOpen)";
			};
			class CloseDoor_17
			{
				displayNameDefault="<img image='\concession\textures\paa\logopc.paa' size='2.5' />";
				displayName="Eteindre toutes les lumieres";
				position="Door_1_trigger";
				priority=0.60000002;
				radius=3.5;
				onlyForPlayer=0;
				condition="((this animationPhase 'Door_7_rot') >= 0.5) && ((this animationPhase 'Door_17_rot') >= 0.5)";
				statement="([this, 'Door_17_rot'] call BIS_fnc_DoorNoHandleClose)";
			};
			class OpenDoor_3: OpenDoor_1
			{
				displayName="Ouvrir l'entrer du garage";
				position="Door_1_trigger";
				condition="((this animationPhase 'Door_7_rot') >= 0.5) && ((this animationPhase 'Door_3_rot_1') < 0.5)";
				statement="([this, 'Door_3_rot_1'] call BIS_fnc_DoorNoHandleOpen) && ([this, 'Door_3_rot_2'] call BIS_fnc_DoorNoHandleOpen)";
			};
			class CloseDoor_3: CloseDoor_1
			{
				displayName="fermer l'entrer du garage";
				position="Door_1_trigger";
				condition="((this animationPhase 'Door_7_rot') >= 0.5) && ((this animationPhase 'Door_3_rot_1') >= 0.5)";
				statement="([this, 'Door_3_rot_2'] call BIS_fnc_DoorNoHandleClose) && ([this, 'Door_3_rot_1'] call BIS_fnc_DoorNoHandleClose)";
			};
			class OpenDoor_4: OpenDoor_1
			{
				displayName="Ouvrir la sortie du garage";
				position="Door_1_trigger";
				condition="((this animationPhase 'Door_7_rot') >= 0.5) && ((this animationPhase 'Door_4_rot_1') < 0.5)";
				statement="([this, 'Door_4_rot_2'] call BIS_fnc_DoorNoHandleOpen) && ([this, 'Door_4_rot_1'] call BIS_fnc_DoorNoHandleOpen)";
			};
			class CloseDoor_4: CloseDoor_1
			{
				displayName="fermer la sortie du garage";
				position="Door_1_trigger";
				condition="((this animationPhase 'Door_7_rot') >= 0.5) && ((this animationPhase 'Door_4_rot_1') >= 0.5)";
				statement="([this, 'Door_4_rot_2'] call BIS_fnc_DoorNoHandleClose) && ([this, 'Door_4_rot_1'] call BIS_fnc_DoorNoHandleClose)";
			};
			class OpenDoor_16: OpenDoor_1
			{
				displayName="Ouvrir la porte du garage interieur";
				position="Door_1_trigger";
				condition="((this animationPhase 'Door_7_rot') >= 0.5) && ((this animationPhase 'Door_16_rot_1') < 0.5)";
				statement="([this, 'Door_16_rot_1'] call BIS_fnc_DoorNoHandleOpen) && ([this, 'Door_16_rot_2'] call BIS_fnc_DoorNoHandleOpen)";
			};
			class CloseDoor_16: CloseDoor_1
			{
				displayName="fermer la porte du garage interieur";
				position="Door_1_trigger";
				condition="((this animationPhase 'Door_7_rot') >= 0.5) && ((this animationPhase 'Door_16_rot_1') >= 0.5)";
				statement="([this, 'Door_16_rot_2'] call BIS_fnc_DoorNoHandleClose) && ([this, 'Door_16_rot_1'] call BIS_fnc_DoorNoHandleClose)";
			};
		};
		actionBegin1="OpenDoor_1";
		actionEnd1="OpenDoor_1";
		actionBegin2="OpenDoor_2";
		actionEnd2="OpenDoor_2";
		actionBegin3="OpenDoor_3";
		actionEnd3="OpenDoor_3";
		actionBegin4="OpenDoor_4";
		actionEnd4="OpenDoor_4";
		actionBegin5="OpenDoor_5";
		actionEnd5="OpenDoor_5";
		actionBegin6="OpenDoor_6";
		actionEnd6="OpenDoor_6";
		actionBegin7="OpenDoor_7";
		actionEnd7="OpenDoor_7";
		actionBegin8="OpenDoor_8";
		actionEnd8="OpenDoor_8";
		actionBegin9="OpenDoor_9";
		actionEnd9="OpenDoor_9";
		actionBegin10="OpenDoor_10";
		actionEnd10="OpenDoor_10";
		actionBegin11="OpenDoor_11";
		actionEnd11="OpenDoor_11";
		actionBegin12="OpenDoor_12";
		actionEnd12="OpenDoor_12";
		actionBegin13="OpenDoor_13";
		actionEnd13="OpenDoor_13";
		actionBegin14="OpenDoor_14";
		actionEnd14="OpenDoor_14";
		actionBegin15="OpenDoor_15";
		actionEnd15="OpenDoor_15";
		actionBegin16="OpenDoor_16";
		actionEnd16="OpenDoor_16";
		actionBegin17="OpenDoor_17";
		actionEnd17="OpenDoor_17";
		numberOfDoors=17;
		class Reflectors
		{
			class Light_1
			{
				color[]={1000,1200,1700};
				ambient[]={5,5,7};
				position="Light_1_pos";
				direction="Light_1_dir";
				hitpoint="Light_1_hitpoint";
				selection="Light_1_hide";
				size=30;
				innerAngle=90;
				outerAngle=100;
				coneFadeCoef=1;
				intensity=0.80000001;
				useFlare=1;
				dayLight=0;
				flareSize=0.89999998;
				flareMaxDistance=130;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=0;
					quadratic=0.30000001;
					hardLimitStart=1;
					hardLimitEnd=12;
				};
			};
			class Light_2: Light_1
			{
				position="Light_2_pos";
				direction="Light_2_dir";
				hitpoint="Light_2_hitpoint";
				selection="Light_2_hide";
			};
			class Light_3: Light_1
			{
				position="Light_3_pos";
				direction="Light_3_dir";
				hitpoint="Light_3_hitpoint";
				selection="Light_3_hide";
			};
		};
		aggregateReflectors[]=
		{
			"Light_1",
			"Light_2",
			"Light_3"
		};
	};
	class FusioHHouseP2: House_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Concession FusioH Parking";
		model="\concession\FusioHHouseP2.p3d";
		vehicleClass="Structures";
		mapSize=50;
		cost=1;
	};
};
class cfgMods
{
	author="FusioH";
	timepacked="1542410376";
};
