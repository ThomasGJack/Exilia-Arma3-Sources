#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class Exilia_Data
	{
		name = "Exilia Data";
		author = "Team Exilia";
		url = "http://Exilia.fr/";
        units[] = {};
        weapons[] = {};
		requiredAddons[] = {};
	};
};

class CfgSounds {
    sounds[] = {};
	class Hit_Concrete {
        name = "Hit_Concrete";
        sound[] = {"Exilia_Data\Sounds\Hit_Concrete.ogg", 1.0, 1};
        titles[] = {};
    };

    class SirenLong {
        name = "SirenLong";
        sound[] = {"Exilia_Data\Sounds\Siren_Long.ogg", 1.0, 1};
        titles[] = {};
    };

	class repair {
        name = "repair";
        sound[] = {"Exilia_Data\Sounds\repair.ogg", 1.0, 1};
        titles[] = {};
    };

    class medicSiren {
        name = "medicSiren";
        sound[] = {"Exilia_Data\Sounds\medic_siren.ogg", 1.0, 1};
        titles[] = {};
    };

    class tazersound {
        name = "Tazersound";
        sound[] = {"Exilia_Data\Sounds\tazer.ogg", 0.25, 1};
        titles[] = {};
    };

    class flashbang {
        name = "flashbang";
        sound[] = {"Exilia_Data\Sounds\flashbang.ogg", 1.0, 1};
        titles[] = {};
    };

    class mining {
        name = "mining";
        sound[] = {"Exilia_Data\Sounds\mining.ogg", 1.0, 1};
        titles[] = {};
    };

    class harvest {
        name = "harvest";
        sound[] = {"Exilia_Data\Sounds\harvest.ogg", 1.0, 1};
        titles[] = {};
    };

	class metro {
        name = "metro";
        sound[] = {"Exilia_Data\Sounds\metro.ogg", 1.0, 1};
        titles[] = {};
    };

	class geiger {
        name = "geiger";
        sound[] = {"Exilia_Data\Sounds\geiger.ogg", 1.0, 1};
        titles[] = {};
    };

    class LockCarSound {
        name = "LockCarSound";
        sound[] = {"Exilia_Data\Sounds\car_lock.ogg", 0.25, 1};
        titles[] = {};
    };

    class UnlockCarSound {
        name = "UnlockCarSound";
        sound[] = {"Exilia_Data\Sounds\unlock.ogg", 0.25, 1};
        titles[] = {};
    };

    class CarAlarm {
        name = "CarAlarm";
        sound[] = {"Exilia_Data\Sounds\caralarm.ogg", 0.80, 1};
        titles[] = {};
    };

	class MusicIntro {
        name = "MusicIntro";
        sound[] = {"Exilia_Data\Sounds\MusicIntro.ogg", 0.80, 1};
        titles[] = {};
    };

	class InsertCard {
        name = "InsertCard";
        sound[] = {"Exilia_Data\Sounds\banking\insertcard.ogg", 1, 1};
        titles[] = {};
    };

	 class whouwhou1
    {
        name = "whouwhou1"; // Name for mission editor
        sound[] = {"Exilia_Data\Sounds\whouwhou.ogg",1,1};
        titles[] = {};
    };
};



class CfgEditorCategories
{
	class Exilia_vehicles // Category class, you point to it in editorCategory property
	{
		displayName = "Exilia Vehicles Reskin"; // Name visible in the list
	};

	class Exilia_Objects // Category class, you point to it in editorCategory property
	{
		displayName = "Exilia Objects"; // Name visible in the list
	};

    class Exilia_Entreprises // Category class, you point to it in editorCategory property
    {
        displayName = "Exilia Entreprises"; // Name visible in the list
    };
};

class CfgEditorSubcategories
{
	class Exilia_all // Category class, you point to it in editorSubcategory property
	{
		displayName = "All"; // Name visible in the list
	};

	class Exilia_Ville // Category class, you point to it in editorSubcategory property
	{
		displayName = "Ville"; // Name visible in the list
	};

	class Exilia_Bush // Category class, you point to it in editorSubcategory property
	{
		displayName = "Bush"; // Name visible in the list
	};

    class Exilia_Portails // Category class, you point to it in editorSubcategory property
    {
        displayName = "Portails"; // Name visible in the list
    };
};



class CfgMarkerClasses
{
	class Exilia_Markers_All
	{
		displayName="Exilia Markers (All)";
		scope=2;
		scopeCurator = 2;
	};

	class Exilia_Markers_Ressources
	{
		displayName="Exilia Markers (Ressources)";
		scope=2;
		scopeCurator = 2;
	};

	class Exilia_Markers_Defcon
	{
		displayName="Exilia Markers (Defcon)";
		scope=2;
		scopeCurator = 2;
	};
};



class CfgMovesBasic
{
    class ManActions
    {
        Exilia_Restrain="Exilia_Restrain";
        Exilia_Surrender="Exilia_Surrender";
    };
    class Actions
    {
        class NoActions: ManActions
        {
            Exilia_Restrain[]=
            {
                "Exilia_Restrain",
                "Gesture"
            };
            Exilia_Surrender[]=
            {
                "Exilia_Surrender",
                "Gesture"
            };
        };
    };
};
class CfgGesturesMale
{
    class Default;
    class BlendAnims
    {
        Exilia_Arms[]=
        {
            "RightShoulder",
            1,
            "RightArm",
            1,
            "RightArmRoll",
            1,
            "RightForeArm",
            1,
            "RightForeArmRoll",
            1,
            "RightHand",
            1,
            "RightHandIndex1",
            1,
            "RightHandIndex2",
            1,
            "RightHandIndex3",
            1,
            "RightHandMiddle1",
            1,
            "RightHandMiddle2",
            1,
            "RightHandMiddle3",
            1,
            "RightHandPinky1",
            1,
            "RightHandMiddle2",
            1,
            "RightHandMiddle3",
            1,
            "RightHandPinky1",
            1,
            "RightHandPinky2",
            1,
            "RightHandPinky3",
            1,
            "RightHandRing",
            1,
            "RightHandRing1",
            1,
            "RightHandRing2",
            1,
            "RightHandRing3",
            1,
            "RightHandThumb1",
            1,
            "RightHandThumb2",
            1,
            "RightHandThumb3",
            1,
            "LeftShoulder",
            1,
            "LeftArm",
            1,
            "LeftArmRoll",
            1,
            "LeftForeArm",
            1,
            "LeftForeArmRoll",
            1,
            "LeftHand",
            1,
            "LeftHandIndex1",
            1,
            "LeftHandIndex2",
            1,
            "LeftHandIndex3",
            1,
            "LeftHandMiddle1",
            1,
            "LeftHandMiddle2",
            1,
            "LeftHandMiddle3",
            1,
            "LeftHandPinky1",
            1,
            "LeftHandMiddle2",
            1,
            "LeftHandMiddle3",
            1,
            "LeftHandPinky1",
            1,
            "LeftHandPinky2",
            1,
            "LeftHandPinky3",
            1,
            "LeftHandRing",
            1,
            "LeftHandRing1",
            1,
            "LeftHandRing2",
            1,
            "LeftHandRing3",
            1,
            "LeftHandThumb1",
            1,
            "LeftHandThumb2",
            1,
            "LeftHandThumb3",
            1
        };
    };
    class States
    {
        class Exilia_Anim_Base: Default
        {
            actions="NoActions";
            canPullTrigger=0;
            connectAs="";
            connectFrom[]={};
            connectTo[]={};
            disableWeapons=1;
            enableBinocular=0;
            enableMissile=0;
            enableOptics=0;
            equivalentTo="";
            file="\A3\anims_f\Data\Anim\Sdr\gst\GestureHi.rtm";
            forceAim=0;
            headBobMode=0;
            headBobStrength=0;
            interpolateFrom[]={};
            interpolateTo[]={};
            interpolateWith[]={};
            interpolationRestart=0;
            interpolationSpeed=6;
            looped=0;
            mask="Exilia_Arms";
            minPlayTime=0.5;
            preload=0;
            ragdoll=0;
            relSpeedMax=1;
            relSpeedMin=1;
            showHandGun=0;
            showItemInHand=0;
            showItemInRightHand=0;
            showWeaponAim=1;
            soundEdge[]={0.5,1};
            soundEnabled=1;
            soundOverride="";
            speed=-2;
            static=0;
            terminal=0;
            Walkcycles=1;
            weaponIK=1;
            leftHandIKBeg=1;
            leftHandIKCurve[]={0,1,0.1,0,0.80000001,0,1,1};
            leftHandIKEnd=1;
            rightHandIKBeg=1;
            rightHandIKCurve[]={0,1,0.1,0,0.80000001,0,1,1};
            rightHandIKEnd=1;
        };
        class Exilia_Restrain: Exilia_Anim_Base
        {
            file="\Exilia_Data\animations\restrain.rtm";
            speed=1;
            looped=1;
            preload=1;
        };
        class Exilia_Surrender: Exilia_Anim_Base
        {
            file="\Exilia_Data\animations\surrender.rtm";
            speed=1;
            looped=1;
            preload=1;
        };
    };
};