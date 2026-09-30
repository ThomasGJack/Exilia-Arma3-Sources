class Popoff_matierepremiere2_Dialog {
     idd = 16675;
     movingEnabled = false;
     class controlsBackground {
            class Popoff_matierepremiere_fond: CW_RscPicture {
                  idc = 1200;
                  text = "\Popoff_Scripts\Textures\matierepremiere2.jpg";
                	x = 0.27087 * safezoneW + safezoneX;
                	y = 0.224957 * safezoneH + safezoneY;
                	w = 0.45826 * safezoneW;
                	h = 0.550087 * safezoneH;
            };
     };
     class controls {

            class Popoff_matierepremiere_fer_achat: CW_RscButton2
            {
            	idc = 1600;
            	text = "Lingot Fer"; //--- ToDo: Localize;
                  onButtonClick = "call popoff_fnc_achat_fer";
                	x = 0.282327 * safezoneW + safezoneX;
                	y = 0.477997 * safezoneH + safezoneY;
                	w = 0.068739 * safezoneW;
                	h = 0.0440069 * safezoneH;
            };
            class Popoff_matierepremiere_cuivre_achat: CW_RscButton2
            {
            	idc = 1601;
            	text = "Lingot Cuivre";
                onButtonClick = "call popoff_fnc_achat_cuivre";
              	x = 0.282327 * safezoneW + safezoneX;
              	y = 0.544007 * safezoneH + safezoneY;
              	w = 0.068739 * safezoneW;
              	h = 0.0440069 * safezoneH;
            };
            class Popoff_matierepremiere_argent_achat: CW_RscButton2
            {
            	idc = 1602;
            	text = "Lingot Argent";
                onButtonClick = "call popoff_fnc_achat_argent";
              	x = 0.282327 * safezoneW + safezoneX;
              	y = 0.610017 * safezoneH + safezoneY;
              	w = 0.068739 * safezoneW;
              	h = 0.0440069 * safezoneH;
            };
            class Popoff_matierepremiere_or_achat: CW_RscButton2
            {
            	idc = 1603;
            	text = "Lingot Or";
                onButtonClick = "call popoff_fnc_achat_or";
              	x = 0.282327 * safezoneW + safezoneX;
              	y = 0.676028 * safezoneH + safezoneY;
              	w = 0.068739 * safezoneW;
              	h = 0.0440069 * safezoneH;
            };
            class Popoff_matierepremiere_plastique_achat: CW_RscButton2
            {
            	idc = 1604;
            	text = "Lingot Plastique";
                onButtonClick = "call popoff_fnc_achat_plastic";
              	x = 0.373979 * safezoneW + safezoneX;
              	y = 0.477997 * safezoneH + safezoneY;
              	w = 0.068739 * safezoneW;
              	h = 0.0440069 * safezoneH;
            };
     };
};
