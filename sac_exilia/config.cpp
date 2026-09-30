#define private         0
#define protected               1
#define public          2

#define true    1
#define false   0

class CfgPatches {
        class My_Backpacks {
                units[] = {};
                weapons[] = {};
                requiredVersion = 0.1;
				requiredAddons[] = { "A3_Weapons_F" };
        };
};

class cfgVehicles {
		class ContainerSupply;
		class Bag_Base;
        class B_Bergen_Base;    // External class reference

        class Sac_exilia_medic_IDAP : B_Bergen_Base {
				scope = public;
				class TransportMagazines{};
				class TransportWeapons{};
				isbackpack = 1;
        maximumLoad=300;
				transportMaxWeapons = 1;
				transportMaxMagazines = 13;
				class DestructionEffects{};
                displayName = "Sac medic";
                model = "\Sac_exilia\Sac_exilia_medic.p3d";
				vehicleClass = "Backpacks";
				allowedSlots[] = {901};
        };


        class sac_exilia_exo_1 : B_Bergen_Base {
				scope = public;
				class TransportMagazines{};
				class TransportWeapons{};
				isbackpack = 1;
        maximumLoad=1500;
				transportMaxWeapons = 1;
				transportMaxMagazines = 13;
				class DestructionEffects{};
        displayName = "sac_exilia_exo_1";
        model = "\Sac_exilia\sac_exilia_exo_1.p3d";
				vehicleClass = "Backpacks";
				allowedSlots[] = {901};
        };

        class Sac_exilia_medic_IDAP_brancard : B_Bergen_Base {
        scope = public;
        class TransportMagazines{};
        class TransportWeapons{};
        isbackpack = 1;
        transportMaxWeapons = 1;
        transportMaxMagazines = 13;
        class DestructionEffects{};
                displayName = "Sac medic";
                model = "\Sac_exilia\Sac_exilia_medic_brancard.p3d";
        vehicleClass = "Backpacks";
				allowedSlots[] = {901};
        };
};
