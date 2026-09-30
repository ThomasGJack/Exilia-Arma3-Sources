/*
*
*    Author: John Vazquez
*
*    Description: Dialog Iphone 10500
*
*
*                   DISPLAY:
*
*        10500 --> Display Phone Iphone
*        10501 --> Display Phone Iphone Background
*        10502 --> BTN_Home
*
*        10504 --> ICON_Message
*        10505 --> ICON_Sync_Data
*        10506 --> ICON_Settings
*        10507 --> ICON_Map
*        10508 --> ICON_Bourse
*        10509 --> ICON_Compte
*
*        10514 --> BTN_Message
*        10515 --> BTN_Sync_Data
*        10516 --> BTN_Settings
*        10517 --> BTN_Map
*        10518 --> BTN_Bourse
*        10519 --> BTN_Compte
*
*
*
*                   MAIN MESSAGE:
*
*        10520 --> Background
*        10521 --> BTN_NewMessage
*        10522 --> BTN_ReplyMessage
*        10523 --> ListboxHistoryName
*        10524 --> ListboxHistoryMessage
*        10525 --> ListboxHistoryMessageView
*
*
*
*                   SEND MESSAGE:
*
*        10530 --> Background
*        10531 --> TEXT_Name
*        10532 --> EDIT_Message
*        10533 --> BTN_EnvoieMessage
*        10533 --> Text_MessageHistory
*
*                   CONTACT MESSAGE
*
*        10580 -->
*
*
*                   SETTINGS:
*
*        10540 --> Background
*        10541 --> text_1
*        10542 --> text_2
*        10543 --> text_3
*        10544 --> slider_1
*        10545 --> slider_2
*        10546 --> slider_3
*
*
*
*                   MAP:
*
*        10550 --> map
*
*
*
*                   BOURSE
*
*        10560 --> Background Bourse
*        10561 --> Listbox Items
*        10562 --> BTN Refrech
*
*
*
*                   COMPTE
*
*        10570 --> Background Bourse
*        10571 --> TEXT_Montant
*        10572 --> EDIT Montant
*        10573 --> COMBI Playerlist
*        10574 --> BTN Valider
*
*/

#include "..\..\..\Scripts\Phone\Defines.hpp"

class Phone_Iphone{
    idd = 10500;
    name= "Phone_Iphone";
    movingEnable = 0;
    enableSimulation = 1;
    onLoad = "";


    class controlsBackground {

		class Background: RscPicture
		{
			idc = 10501;
            moving = 1;
			text = "Exilia_Phone\Iphone\Backgrounds\iphone_main_bg_Apple.paa";
			x = 0.773281 * safezoneW + safezoneX;
            y = 0.26909 * safezoneH + safezoneY;
            w = 0.226875 * safezoneW;
            h = 0.725717 * safezoneH;
		};
        #include "IphoneMain_Background.hpp"
        #include "Message\IphoneMessageMain_Background.hpp"
        #include "Message\IphoneMessageContact_Background.hpp"
        #include "Message\IphoneMessageSend_Background.hpp"
        #include "Message\IphoneMessageAddContact_Background.hpp"
        #include "Settings\IphoneSettings_Background.hpp"
        #include "Bourse\IphoneBourse_Background.hpp"
        #include "Compte\IphoneCompte_Background.hpp"
        #include "Appel\iphoneappelclavier_background.hpp"
        #include "Appel\iphoneappeldenied_background.hpp"
        #include "Appel\iphoneappelcall_background.hpp"
        #include "Appel\iphoneappelEnd_background.hpp"
        #include "Appel\iphoneappelInProgress_background.hpp"
        #include "Appel\iphoneappelRequest_background.hpp"

    };

    class controls {
        class Btn_Home: Exilia_RscButtonInvisible
        {
            idc = 10502;
            text = "";
            onButtonClick = "[] call Exilia_Phone_fnc_Iphone_Main";
            x = 0.881562 * safezoneW + safezoneX;
            y = 0.939828 * safezoneH + safezoneY;
            w = 0.0257812 * safezoneW;
            h = 0.0439828 * safezoneH;
            tooltip = "Home"; //--- ToDo: Localize;
        };
        #include "IphoneMain_Control.hpp"
        #include "Message\IphoneMessageMain_Control.hpp"
        #include "Message\IphoneMessageSend_Control.hpp"
        #include "Message\IphoneMessageContact_Control.hpp"
        #include "Message\IphoneMessageAddContact_Control.hpp"
        #include "Settings\IphoneSettings_Control.hpp"
        #include "Map\IphoneMap_Control.hpp"
        #include "Bourse\IphoneBourse_Control.hpp"
        #include "Compte\IphoneCompte_Control.hpp"
        #include "Appel\iphoneappelclavier_Control.hpp"
        #include "Appel\iphoneappeldenied_Control.hpp"
        #include "Appel\iphoneappelcall_Control.hpp"
        #include "Appel\iphoneappelEnd_Control.hpp"
        #include "Appel\iphoneappelInProgress_Control.hpp"
        #include "Appel\iphoneappelRequest_Control.hpp"

    };
};