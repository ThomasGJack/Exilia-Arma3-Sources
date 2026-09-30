class Popoff_Boucherie_Dialog {
     idd = 15574;
     movingEnabled = false;
     class controlsBackground {
            class Popoff_Boucherie_fond: CW_RscPicture {
                  idc = 1200;
                  text = "\Popoff_Scripts\Textures\boucher.jpg";
                  x = 0.234375 * safezoneW + safezoneX;
                  y = 0.177 * safezoneH + safezoneY;
                  w = 0.53125 * safezoneW;
                  h = 0.612 * safezoneH;
            };
     };
     class controls {

            class Popoff_Boucherie_Achat: CW_RscButtonInvisible
            {
            	idc = 1600;
            	text = ""; //--- ToDo: Localize;
                  onButtonClick = "call popoff_fnc_achat_boucherie";
            	x = 0.260938 * safezoneW + safezoneX;
            	y = 0.57 * safezoneH + safezoneY;
            	w = 0.2 * safezoneW;
            	h = 0.2 * safezoneH;
            };
            class Popoff_Boucherie_vente: CW_RscButtonInvisible
            {
            	idc = 1601;
            	text = "";
                onButtonClick = "call popoff_fnc_vente_boucherie";
            x = 0.6875 * safezoneW + safezoneX;
            y = 0.57 * safezoneH + safezoneY;
            w = 0.2 * safezoneW;
            h = 0.2 * safezoneH;
            };
     };
};
