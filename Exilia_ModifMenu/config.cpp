/*──────────────────────────────────────────────────────┐
│   Author: Connor                                      │
│   Steam:  https://steamcommunity.com/id/_connor       │
│   Github: https://github.com/ConnorAU                 │
│                                                       │
│   Please do not modify or remove this comment block   │
└──────────────────────────────────────────────────────*/

class CfgPatches {
	class Exilia_ModifMenu {
        name="Exilia_ModifMenu";
        author="Nirawin29";
        url="";

		requiredVersion=0.01;
		requiredAddons[]={"A3_3DEN","A3_Ui_F"};
		units[]={};
		weapons[]={};
	};
};

class CfgFunctions {
    #include "Functions.hpp"
};

class CA_B_West;
class CA_B_Guerrila;
class CA_B_Civil;
class CA_ButtonContinue;
class CA_ValueRoles;
class CA_ValuePool;
class RolesBackground;
class RscListNBox;

class ctrlDefault;
class RscCheckBox;
class ctrlDefaultText;
class ctrlStatic;
class ctrlStaticBackground;
class ctrlStaticFooter;
class ctrlStaticFrame;
class ctrlStaticOverlay;
class ctrlStaticTitle;
class ctrlStaticPictureTile;
class ctrlStaticBackgroundDisableTiles;
class ctrlEdit;
class ctrlCombo;
class ctrlDefaultButton;
class ctrlButton;
class ctrlButtonCancel;
class ctrlButtonClose;
class ctrlButtonPictureKeepAspect;
class ctrlControlsGroup;
class ctrlControlsGroupNoScrollbars;
class ctrlXSliderV;
class ctrlXSliderH;
class ctrlMenu;
class ctrlMenuStrip;

class RscStandardDisplay;
class RscText;
class RscButton;
class RscButtonTextOnly: RscButton{};
class RscTitle : RscText{};
class RscListBox;
class RscEdit;
class RscActiveText;
class RscPicture;
class RscControlsGroup;
class RscShortcutButton;
class RscButtonMenu : RscShortcutButton{};
class RscButtonMenuOK : RscButtonMenu{};
class RscControlsGroupNoScrollbars : RscControlsGroup{};

#include "\a3\3den\ui\macros.inc"



class RscDisplayMultiplayerSetup: RscStandardDisplay {
	enableDisplay=0;
	class controls {
		class CA_B_West: RscActiveText {
			text = ".";
			y = "1 *((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) +(safezoneY)";
			x = "1 *(((safezoneW / safezoneH) min 1.2) / 40) +(SafezoneX)";
			h = "1 *((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "1 *(((safezoneW / safezoneH) min 1.2) / 40)";
			color[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			picture = "";
		};

		class CA_B_Guerrila: CA_B_West {
			text = ".";
			y = "1 *((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) +(safezoneY)";
			x = "1 *(((safezoneW / safezoneH) min 1.2) / 40) +(SafezoneX)";
			h = "1 *((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "1 *(((safezoneW / safezoneH) min 1.2) / 40)";
			color[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			picture = "";
		};

		class CA_B_Civilian: CA_B_West {
			text = ".";
			y = "1 *((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) +(safezoneY)";
			x = "1 *(((safezoneW / safezoneH) min 1.2) / 40) +(SafezoneX)";
			h = "1 *((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "1 *(((safezoneW / safezoneH) min 1.2) / 40)";
			color[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			picture = "";
		};

		class CA_ValueRoles: RscListBox {
			y = "10 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY)";
			h = "(14 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) + 0.7*(safezoneH -(((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "(50 * (((safezoneW / safezoneH) min 1.2) / 40)) + 0.45*(safezoneW -((safezoneW / safezoneH) min 1.2))";
			x = "4 * (((safezoneW / safezoneH) min 1.2) / 40) + (SafezoneX)";
		};

		class TextRole {
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorPicture[] = {0,0,0,0};
			colorPictureDisabled[] = {0,0,0,0};
			colorPictureSelected[] = {0,0,0,0};
			colorScrollbar[] = {0,0,0,0};
			colorselect[] = {0,0,0,0};
			colorselectBackground[] = {0,0,0,0};
			colorselect2[] = {0,0,0,0};
			colorselectBackground2[] = {0,0,0,0};
		};
		class Title {
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorPicture[] = {0,0,0,0};
			colorPictureDisabled[] = {0,0,0,0};
			colorPictureSelected[] = {0,0,0,0};
			colorScrollbar[] = {0,0,0,0};
			colorselect[] = {0,0,0,0};
			colorselectBackground[] = {0,0,0,0};
			colorselect2[] = {0,0,0,0};
			colorselectBackground2[] = {0,0,0,0};
		};
		class CA_ValuePool: RscListNBox {
			y = "100 *((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) +(safezoneY)";
			x = "100 *(((safezoneW / safezoneH) min 1.2) / 40) +(SafezoneX)";
			h = "0.2 *((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "0.2 *(((safezoneW / safezoneH) min 1.2) / 40)";
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorPicture[] = {0,0,0,0};
			colorPictureDisabled[] = {0,0,0,0};
			colorPictureSelected[] = {0,0,0,0};
			colorScrollbar[] = {0,0,0,0};
			colorselect[] = {0,0,0,0};
			colorselectBackground[] = {0,0,0,0};
			colorselect2[] = {0,0,0,0};
			colorselectBackground2[] = {0,0,0,0};
		};
		
		class ButtonPlayers: RscButtonTextOnly {
			y = "100 *((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) +(safezoneY)";
			x = "100 *(((safezoneW / safezoneH) min 1.2) / 40) +(SafezoneX)";
			h = "0.2 *((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "0.2 *(((safezoneW / safezoneH) min 1.2) / 40)";
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorPicture[] = {0,0,0,0};
			colorPictureDisabled[] = {0,0,0,0};
			colorPictureSelected[] = {0,0,0,0};
			colorScrollbar[] = {0,0,0,0};
			colorselect[] = {0,0,0,0};
			colorselectBackground[] = {0,0,0,0};
			colorselect2[] = {0,0,0,0};
			colorselectBackground2[] = {0,0,0,0};
		};
		
		class ButtonPing: ButtonPlayers{
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorPicture[] = {0,0,0,0};
			colorPictureDisabled[] = {0,0,0,0};
			colorPictureSelected[] = {0,0,0,0};
			colorScrollbar[] = {0,0,0,0};
			colorselect[] = {0,0,0,0};
			colorselectBackground[] = {0,0,0,0};
			colorselect2[] = {0,0,0,0};
			colorselectBackground2[] = {0,0,0,0};
		};
		
		class SortPlayers: RscPicture{
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorPicture[] = {0,0,0,0};
			colorPictureDisabled[] = {0,0,0,0};
			colorPictureSelected[] = {0,0,0,0};
			colorScrollbar[] = {0,0,0,0};
			colorselect[] = {0,0,0,0};
			colorselectBackground[] = {0,0,0,0};
			colorselect2[] = {0,0,0,0};
			colorselectBackground2[] = {0,0,0,0};
		};
		
		class SortPing: RscPicture{
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorPicture[] = {0,0,0,0};
			colorPictureDisabled[] = {0,0,0,0};
			colorPictureSelected[] = {0,0,0,0};
			colorScrollbar[] = {0,0,0,0};
			colorselect[] = {0,0,0,0};
			colorselectBackground[] = {0,0,0,0};
			colorselect2[] = {0,0,0,0};
			colorselectBackground2[] = {0,0,0,0};
		};
		
		class CA_ButtonContinue: RscButtonMenuOK {
			text = "Entrer sur Exilia";
			x = "safezoneX + SafezoneW - (8.6 * (((safezoneW / safezoneH) min 1.2) / 40))";
			w = "7.6 * (((safezoneW / safezoneH) min 1.2) / 40)";
		};

		class PlayersName: RscText {
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorPicture[] = {0,0,0,0};
			colorPictureDisabled[] = {0,0,0,0};
			colorPictureSelected[] = {0,0,0,0};
			colorScrollbar[] = {0,0,0,0};
			colorselect[] = {0,0,0,0};
			colorselectBackground[] = {0,0,0,0};
			colorselect2[] = {0,0,0,0};
			colorselectBackground2[] = {0,0,0,0};
		};
		class TextListedPlayers: RscText {
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorPicture[] = {0,0,0,0};
			colorPictureDisabled[] = {0,0,0,0};
			colorPictureSelected[] = {0,0,0,0};
			colorScrollbar[] = {0,0,0,0};
			colorselect[] = {0,0,0,0};
			colorselectBackground[] = {0,0,0,0};
			colorselect2[] = {0,0,0,0};
			colorselectBackground2[] = {0,0,0,0};
		};
		class TextSide: RscText {
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorPicture[] = {0,0,0,0};
			colorPictureDisabled[] = {0,0,0,0};
			colorPictureSelected[] = {0,0,0,0};
			colorScrollbar[] = {0,0,0,0};
			colorselect[] = {0,0,0,0};
			colorselectBackground[] = {0,0,0,0};
			colorselect2[] = {0,0,0,0};
			colorselectBackground2[] = {0,0,0,0};
		};

		class ValueListedPlayers: RscText {
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorPicture[] = {0,0,0,0};
			colorPictureDisabled[] = {0,0,0,0};
			colorPictureSelected[] = {0,0,0,0};
			colorScrollbar[] = {0,0,0,0};
			colorselect[] = {0,0,0,0};
			colorselectBackground[] = {0,0,0,0};
			colorselect2[] = {0,0,0,0};
			colorselectBackground2[] = {0,0,0,0};
			animTextureNormal = "#(argb,8,8,3)color(1,1,1,0)";
		    animTextureDisabled = "#(argb,8,8,3)color(1,1,1,0)";
		    animTextureOver = "#(argb,8,8,3)color(1,1,1,0)";
		    animTextureFocused = "#(argb,8,8,3)color(1,1,1,0)";
		    animTexturePressed = "#(argb,8,8,3)color(1,1,1,0)";
		    animTextureDefault = "#(argb,8,8,3)color(1,1,1,0)";
		};

		class TextMission: RscText {
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorPicture[] = {0,0,0,0};
			colorPictureDisabled[] = {0,0,0,0};
			colorPictureSelected[] = {0,0,0,0};
			colorScrollbar[] = {0,0,0,0};
			colorselect[] = {0,0,0,0};
			colorselectBackground[] = {0,0,0,0};
			colorselect2[] = {0,0,0,0};
			colorselectBackground2[] = {0,0,0,0};
		};

		class MuteAll: RscCheckBox {
			textureChecked = "";
			textureDisabledChecked = "";
			textureDisabledUnchecked = "";
			textureFocusedChecked = "";
			textureFocusedUnchecked = "";
			textureHoverChecked = "";
			textureHoverUnchecked = "";
			texturePressedChecked = "";
			texturePressedUnchecked = "";
			textureUnchecked = "";
			color[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorBackgroundFocused[] = {0,0,0,0};
			colorBackgroundHover[] = {0,0,0,0};
			colorBackgroundPressed[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorHover[] = {0,0,0,0};
			colorPressed[] = {0,0,0,0};
		};

		class TextIsland: RscText {
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorPicture[] = {0,0,0,0};
			colorPictureDisabled[] = {0,0,0,0};
			colorPictureSelected[] = {0,0,0,0};
			colorScrollbar[] = {0,0,0,0};
			colorselect[] = {0,0,0,0};
			colorselectBackground[] = {0,0,0,0};
			colorselect2[] = {0,0,0,0};
			colorselectBackground2[] = {0,0,0,0};
		};

		class CA_TextDescription: RscText {
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorPicture[] = {0,0,0,0};
			colorPictureDisabled[] = {0,0,0,0};
			colorPictureSelected[] = {0,0,0,0};
			colorScrollbar[] = {0,0,0,0};
			colorselect[] = {0,0,0,0};
			colorselectBackground[] = {0,0,0,0};
			colorselect2[] = {0,0,0,0};
			colorselectBackground2[] = {0,0,0,0};
		};

		class ValueMission: RscTitle {
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorPicture[] = {0,0,0,0};
			colorPictureDisabled[] = {0,0,0,0};
			colorPictureSelected[] = {0,0,0,0};
			colorScrollbar[] = {0,0,0,0};
			colorselect[] = {0,0,0,0};
			colorselectBackground[] = {0,0,0,0};
			colorselect2[] = {0,0,0,0};
			colorselectBackground2[] = {0,0,0,0};
		};

		class ValueIsland: RscText {
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorPicture[] = {0,0,0,0};
			colorPictureDisabled[] = {0,0,0,0};
			colorPictureSelected[] = {0,0,0,0};
			colorScrollbar[] = {0,0,0,0};
			colorselect[] = {0,0,0,0};
			colorselectBackground[] = {0,0,0,0};
			colorselect2[] = {0,0,0,0};
			colorselectBackground2[] = {0,0,0,0};		
		};

		class CA_ValueDescription: RscTitle {
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorPicture[] = {0,0,0,0};
			colorPictureDisabled[] = {0,0,0,0};
			colorPictureSelected[] = {0,0,0,0};
			colorScrollbar[] = {0,0,0,0};
			colorselect[] = {0,0,0,0};
			colorselectBackground[] = {0,0,0,0};
			colorselect2[] = {0,0,0,0};
			colorselectBackground2[] = {0,0,0,0};
		};
		

		class Button_REHAB: RscButtonMenuOK
		{
			idc = -1;
			text = "";
			onButtonClick = "with uiNameSpace do {ctrlActivate ((findDisplay 70) displayCtrl 104);((findDisplay 70) displayCtrl 10522) ctrlSetText ""\Exilia_ModifMenu\Images\IDAP.paa"";((findDisplay 70) displayCtrl 10523) ctrlSetText ""\Exilia_ModifMenu\Images\EXILE.paa"";((findDisplay 70) displayCtrl 10521) ctrlSetText ""\Exilia_ModifMenu\Images\REHAB_SELECT.paa"";};";
			onMouseExit = "with uiNameSpace do {if ((ctrlText (((findDisplay 70) displayCtrl 10521))) != ""\Exilia_ModifMenu\Images\REHAB_SELECT.paa"") then {((findDisplay 70) displayCtrl 10521) ctrlSetText ""\Exilia_ModifMenu\Images\REHAB.paa"";};};";
			onMouseEnter = "with uiNameSpace do {if ((ctrlText (((findDisplay 70) displayCtrl 10521))) != ""\Exilia_ModifMenu\Images\REHAB_SELECT.paa"") then {((findDisplay 70) displayCtrl 10521) ctrlSetText ""\Exilia_ModifMenu\Images\REHAB_HOVER.paa"";};};";
			y = "1 *((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) +(safezoneY)";
			x = "53 *(((safezoneW / safezoneH) min 1.2) / 40) +(SafezoneX)";
			h = "8 *((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "8 *(((safezoneW / safezoneH) min 1.2) / 40)";
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorPicture[] = {0,0,0,0};
			colorPictureDisabled[] = {0,0,0,0};
			colorPictureSelected[] = {0,0,0,0};
			colorScrollbar[] = {0,0,0,0};
			colorselect[] = {0,0,0,0};
			colorselectBackground[] = {0,0,0,0};
			colorselect2[] = {0,0,0,0};
			colorselectBackground2[] = {0,0,0,0};
		    colorBackground2[] = {1, 1, 1, 0};
		    color[] = {1, 1, 1, 0};
		    color2[] = {1, 1, 1, 0};
		    animTextureNormal = "#(argb,8,8,3)color(0,0,0,0)";
		    animTextureDisabled = "#(argb,8,8,3)color(0,0,0,0)";
		    animTextureOver = "#(argb,8,8,3)color(0,0,0,0)";
		    animTextureFocused = "#(argb,8,8,3)color(0,0,0,0)";
		    animTexturePressed = "#(argb,8,8,3)color(0,0,0,0)";
		    animTextureDefault = "#(argb,8,8,3)color(0,0,0,0)";
		};


		class Button_IDAP: Button_REHAB
		{
			idc = -1;
			onButtonClick = "with uiNameSpace do {ctrlActivate ((findDisplay 70) displayCtrl 106);((findDisplay 70) displayCtrl 10522) ctrlSetText ""\Exilia_ModifMenu\Images\IDAP_SELECT.paa"";((findDisplay 70) displayCtrl 10521) ctrlSetText ""\Exilia_ModifMenu\Images\REHAB.paa"";((findDisplay 70) displayCtrl 10523) ctrlSetText ""\Exilia_ModifMenu\Images\EXILE.paa"";};";
			onMouseExit = "with uiNameSpace do {if ((ctrlText (((findDisplay 70) displayCtrl 10522))) != ""\Exilia_ModifMenu\Images\IDAP_SELECT.paa"") then {((findDisplay 70) displayCtrl 10522) ctrlSetText ""\Exilia_ModifMenu\Images\IDAP.paa"";};};";
			onMouseEnter = "with uiNameSpace do {if ((ctrlText (((findDisplay 70) displayCtrl 10522))) != ""\Exilia_ModifMenu\Images\IDAP_SELECT.paa"") then {((findDisplay 70) displayCtrl 10522) ctrlSetText ""\Exilia_ModifMenu\Images\IDAP_HOVER.paa"";};};";

			text = "";
			y = "1 *((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) +(safezoneY)";
			x = "33 *(((safezoneW / safezoneH) min 1.2) / 40) +(SafezoneX)";
			h = "8 *((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "8 *(((safezoneW / safezoneH) min 1.2) / 40)";
		};

		class Button_EXILE: Button_REHAB
		{
			idc = -1;
			onButtonClick = "with uiNameSpace do {ctrlActivate ((findDisplay 70) displayCtrl 107);((findDisplay 70) displayCtrl 10521) ctrlSetText ""\Exilia_ModifMenu\Images\REHAB.paa"";((findDisplay 70) displayCtrl 10522) ctrlSetText ""\Exilia_ModifMenu\Images\IDAP.paa"";((findDisplay 70) displayCtrl 10523) ctrlSetText ""\Exilia_ModifMenu\Images\EXILE_SELECT.paa"";};";
			onMouseExit = "with uiNameSpace do {if ((ctrlText (((findDisplay 70) displayCtrl 10523))) != ""\Exilia_ModifMenu\Images\EXILE_SELECT.paa"") then {((findDisplay 70) displayCtrl 10523) ctrlSetText ""\Exilia_ModifMenu\Images\EXILE.paa"";};};";
			onMouseEnter = "with uiNameSpace do {		if ((ctrlText (((findDisplay 70) displayCtrl 10523))) != ""\Exilia_ModifMenu\Images\EXILE_SELECT.paa"") then {((findDisplay 70) displayCtrl 10523) ctrlSetText ""\Exilia_ModifMenu\Images\EXILE_HOVER.paa"";};};";
			text = "";
			y = "1 *((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) +(safezoneY)";
			x = "13 *(((safezoneW / safezoneH) min 1.2) / 40) +(SafezoneX)";
			h = "8 *((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "8 *(((safezoneW / safezoneH) min 1.2) / 40)";
		};
		
	};

	class controlsbackground {
		
		class ChatBackground: RscText {
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorPicture[] = {0,0,0,0};
			colorPictureDisabled[] = {0,0,0,0};
			colorPictureSelected[] = {0,0,0,0};
			colorScrollbar[] = {0,0,0,0};
			colorselect[] = {0,0,0,0};
			colorselectBackground[] = {0,0,0,0};
			colorselect2[] = {0,0,0,0};
			colorselectBackground2[] = {0,0,0,0};
		    colorBackground2[] = {1, 1, 1, 0};
		    color[] = {1, 1, 1, 0};
		    color2[] = {1, 1, 1, 0};
		};
		class RscTitleBackground: RscText {
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorPicture[] = {0,0,0,0};
			colorPictureDisabled[] = {0,0,0,0};
			colorPictureSelected[] = {0,0,0,0};
			colorScrollbar[] = {0,0,0,0};
			colorselect[] = {0,0,0,0};
			colorselectBackground[] = {0,0,0,0};
			colorselect2[] = {0,0,0,0};
			colorselectBackground2[] = {0,0,0,0};
		    colorBackground2[] = {1, 1, 1, 0};
		    color[] = {1, 1, 1, 0};
		    color2[] = {1, 1, 1, 0};
		};
		class PlayersPoolBackground: RscText  {
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorPicture[] = {0,0,0,0};
			colorPictureDisabled[] = {0,0,0,0};
			colorPictureSelected[] = {0,0,0,0};
			colorScrollbar[] = {0,0,0,0};
			colorselect[] = {0,0,0,0};
			colorselectBackground[] = {0,0,0,0};
			colorselect2[] = {0,0,0,0};
			colorselectBackground2[] = {0,0,0,0};
		    colorBackground2[] = {1, 1, 1, 0};
		    color[] = {1, 1, 1, 0};
		    color2[] = {1, 1, 1, 0};
		};
		class PlayersPoolHeaderBackground: RscText  {
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorPicture[] = {0,0,0,0};
			colorPictureDisabled[] = {0,0,0,0};
			colorPictureSelected[] = {0,0,0,0};
			colorScrollbar[] = {0,0,0,0};
			colorselect[] = {0,0,0,0};
			colorselectBackground[] = {0,0,0,0};
			colorselect2[] = {0,0,0,0};
			colorselectBackground2[] = {0,0,0,0};
		    colorBackground2[] = {1, 1, 1, 0};
		    color[] = {1, 1, 1, 0};
		    color2[] = {1, 1, 1, 0};
		};

		class MissionSettingsBackground: RscText  {
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorPicture[] = {0,0,0,0};
			colorPictureDisabled[] = {0,0,0,0};
			colorPictureSelected[] = {0,0,0,0};
			colorScrollbar[] = {0,0,0,0};
			colorselect[] = {0,0,0,0};
			colorselectBackground[] = {0,0,0,0};
			colorselect2[] = {0,0,0,0};
			colorselectBackground2[] = {0,0,0,0};
		};

		class NumOfPlayersBackground: RscText  {
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorPicture[] = {0,0,0,0};
			colorPictureDisabled[] = {0,0,0,0};
			colorPictureSelected[] = {0,0,0,0};
			colorScrollbar[] = {0,0,0,0};
			colorselect[] = {0,0,0,0};
			colorselectBackground[] = {0,0,0,0};
			colorselect2[] = {0,0,0,0};
			colorselectBackground2[] = {0,0,0,0};
		};

		class SideBackground: RscText  {
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorPicture[] = {0,0,0,0};
			colorPictureDisabled[] = {0,0,0,0};
			colorPictureSelected[] = {0,0,0,0};
			colorScrollbar[] = {0,0,0,0};
			colorselect[] = {0,0,0,0};
			colorselectBackground[] = {0,0,0,0};
			colorselect2[] = {0,0,0,0};
			colorselectBackground2[] = {0,0,0,0};
		};
		
		class RolesBackground: RscText {
			y = "10 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY)";
			h = "(14 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) + 0.7*(safezoneH -(((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "(50 * (((safezoneW / safezoneH) min 1.2) / 40)) + 0.45*(safezoneW -((safezoneW / safezoneH) min 1.2))";
			x = "4 * (((safezoneW / safezoneH) min 1.2) / 40) + (SafezoneX)";
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorPicture[] = {0,0,0,0};
			colorPictureDisabled[] = {0,0,0,0};
			colorPictureSelected[] = {0,0,0,0};
			colorScrollbar[] = {0,0,0,0};
			colorselect[] = {0,0,0,0};
			colorselectBackground[] = {0,0,0,0};
			colorselect2[] = {0,0,0,0};
			colorselectBackground2[] = {0,0,0,0};
		};

		class MainBackground : RscPicture {
			text = "\Exilia_data\textures\background_exilia.paa";
			x = "safezoneX";
			w = "safezoneW";
			y = "safezoneY";
			h = "safezoneH";
		};	
		
		class REHAB_Bg : RscPicture {
			idc = 10521;
			text = "\Exilia_ModifMenu\Images\REHAB.paa";
			y = "1 *((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) +(safezoneY)";
			x = "53 *(((safezoneW / safezoneH) min 1.2) / 40) +(SafezoneX)";
			h = "8 *((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "8 *(((safezoneW / safezoneH) min 1.2) / 40)";
		};

		class IDAP_Bg : RscPicture {
			idc = 10522;
			text = "\Exilia_ModifMenu\Images\IDAP.paa";
			y = "1 *((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) +(safezoneY)";
			x = "33 *(((safezoneW / safezoneH) min 1.2) / 40) +(SafezoneX)";
			h = "8 *((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "8 *(((safezoneW / safezoneH) min 1.2) / 40)";
		};

		class EXILE_Bg : RscPicture {
			idc = 10523;
			text = "\Exilia_ModifMenu\Images\EXILE.paa";
			y = "1 *((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) +(safezoneY)";
			x = "13 *(((safezoneW / safezoneH) min 1.2) / 40) +(SafezoneX)";
			h = "8 *((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "8 *(((safezoneW / safezoneH) min 1.2) / 40)";
		};

		class REHAB_Text : RscText {
			idc = -1;
			text = "REHAB";
			font = "PuristaBold";
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2)";
			style = 2;
			y = "7 *((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) +(safezoneY)";
			x = "53.15 *(((safezoneW / safezoneH) min 1.2) / 40) +(SafezoneX)";
			h = "2 *((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "8 *(((safezoneW / safezoneH) min 1.2) / 40)";
		};

		class IDAP_Text : RscText {
			idc = -1;
			text = "IDAP";
			font = "PuristaBold";
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2)";
			style = 2;
			y = "7 *((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) +(safezoneY)";
			x = "33 *(((safezoneW / safezoneH) min 1.2) / 40) +(SafezoneX)";
			h = "2 *((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "8 *(((safezoneW / safezoneH) min 1.2) / 40)";
		};

		class EXILE_Text : RscText {
			idc = -1;
			text = "EXILÉ";
			font = "PuristaBold";
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2)";
			style = 2;
			y = "7 *((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) +(safezoneY)";
			x = "13 *(((safezoneW / safezoneH) min 1.2) / 40) +(SafezoneX)";
			h = "2 *((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "8 *(((safezoneW / safezoneH) min 1.2) / 40)";
		};

				
	};
};
class RscDisplayInterrupt : RscStandardDisplay {
	class controls
	{
		class ButtonGame {};
	};
};

class RscDisplayMain: RscStandardDisplay
{
	enableDisplay=0;
	class Spotlight
	{
	};
	class controls
	{
		class Spotlight1
		{
		};
		class Spotlight2
		{
		};
		class Spotlight3
		{
		};
		class BackgroundSpotlightRight
		{
		};
		class BackgroundSpotlightLeft
		{
		};
		class BackgroundSpotlight
		{
		};
		class SpotlightNext 
		{
		};
		class SpotlightPrev 
		{
		};

		class Btn_Connect : RscButtonMenuOK {
			idc = 12166;
			onButtonClick = "with uiNameSpace do {ctrlActivate ((findDisplay 0) displayCtrl 105);ctrlActivate ((findDisplay 8) displayCtrl 166)};";
			text = "";
			animTextureNormal = "#(argb,8,8,3)color(1,1,1,0)";
		    animTextureDisabled = "#(argb,8,8,3)color(1,1,1,0)";
		    animTextureOver = "#(argb,8,8,3)color(1,1,1,0)";
		    animTextureFocused = "#(argb,8,8,3)color(1,1,1,0)";
		    animTexturePressed = "#(argb,8,8,3)color(1,1,1,0)";
		    animTextureDefault = "#(argb,8,8,3)color(1,1,1,0)";
		    colorBackground[] = {0, 0, 0, 0};
		    colorBackground2[] = {1, 1, 1, 0};
		    color[] = {1, 1, 1, 0};
		    color2[] = {1, 1, 1, 0};
		    colorText[] = {1, 1, 1, 0};
		    colorDisabled[] = {1, 1, 1, 0};
			x = 0.614583 * safezoneW + safezoneX;
			y = 0.19212 * safezoneH + safezoneY;
			w = 0.366667 * safezoneW;
			h = 0.131949 * safezoneH;
		};
	};
	class ControlsBackground {
		class EX_Picture: RscPicture {
			text = "\Exilia_data\textures\background_exilia.paa";
			x = "safezoneX";
			w = "safezoneW";
			y = "safezoneY";
			h = "safezoneH";
		};

		class ConnexionButton: RscPicture
		{
			idc = 1200;
			text = "\Exilia_data\textures\Connect_to_Server.paa";
			x = 0.614583 * safezoneW + safezoneX;
			y = 0.19212 * safezoneH + safezoneY;
			w = 0.366667 * safezoneW;
			h = 0.131949 * safezoneH;
		};

	};
};

class CfgInventoryGlobalVariable
{
	maxSoldierLoad=5000;
};