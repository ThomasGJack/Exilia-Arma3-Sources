class Popoff_ATM_Dialog {
     idd = 9999;
     movingEnabled = false;
     class controlsBackground {
            class Popoff_ATM_fond: CW_RscPicture {
                  idc = 1200;
                  text = "\Popoff_Scripts\Textures\AtmMenu.jpg";
                  x = 0.234375 * safezoneW + safezoneX;
                  y = 0.177 * safezoneH + safezoneY;
                  w = 0.53125 * safezoneW;
                  h = 0.612 * safezoneH;
            };
     };
     class controls {

            class Popoff_ATM_retrait_20: CW_RscButtonInvisible
            {
            	idc = 1600;
            	text = ""; //--- ToDo: Localize;
                  onButtonClick = "[0,20] call popoff_fnc_atmTransfert";
            	x = 0.260938 * safezoneW + safezoneX;
            	y = 0.2755 * safezoneH + safezoneY;
            	w = 0.035 * safezoneW;
            	h = 0.03 * safezoneH;
            };
            class Popoff_ATM_retrait_100: CW_RscButtonInvisible
            {
            	idc = 1601;
            	text = "";
                onButtonClick = "[0,100] call popoff_fnc_atmTransfert";
            	x = 0.260938 * safezoneW + safezoneX;
            	y = 0.335 * safezoneH + safezoneY;
            	w = 0.035 * safezoneW;
            	h = 0.03 * safezoneH;
            };
			
            class Popoff_ATM_retait_1000: CW_RscButtonInvisible
            {
            	idc = 1602;
                  onButtonClick = "[0,1000] call popoff_fnc_atmTransfert";
            	text = ; //--- ToDo: Localize;
            	x = 0.260938 * safezoneW + safezoneX;
            	y = 0.3937 * safezoneH + safezoneY;
            	w = 0.035 * safezoneW;
            	h = 0.03 * safezoneH;
            };
            class Popoff_ATM_retrait_10000: CW_RscButtonInvisible
            {
            	idc = 1603;
            	text = ""; //--- ToDo: Localize;
                  onButtonClick = "[0,10000] call popoff_fnc_atmTransfert";
            	x = 0.260938 * safezoneW + safezoneX;
            	y = 0.45 * safezoneH + safezoneY;
            	w = 0.035 * safezoneW;
            	h = 0.03 * safezoneH;
            };
            class Popoff_ATM_retrait_100000: CW_RscButtonInvisible
            {
            	idc = 1604;
            	text = ""; //--- ToDo: Localize;
                  onButtonClick = "[0,100000] call popoff_fnc_atmTransfert";
            	x = 0.260938 * safezoneW + safezoneX;
            	y = 0.505 * safezoneH + safezoneY;
            	w = 0.034 * safezoneW;
            	h = 0.03 * safezoneH;
            };
            class Popoff_ATM_depot_20: CW_RscButtonInvisible
            {
            	idc = 1605;
            	text = ""; //--- ToDo: Localize;
                  onButtonClick = "[1,20] call popoff_fnc_atmTransfert";
            	x = 0.7075 * safezoneW + safezoneX;
            	y = 0.2755 * safezoneH + safezoneY;
            	w = 0.035 * safezoneW;
            	h = 0.03 * safezoneH;
            };
            class Popoff_ATM_depot_100: CW_RscButtonInvisible
            {
            	idc = 1606;
            	text = ""; //--- ToDo: Localize;
                  onButtonClick = "[1,100] call popoff_fnc_atmTransfert";
            	x = 0.7075 * safezoneW + safezoneX;
            	y = 0.335 * safezoneH + safezoneY;
            	w = 0.035 * safezoneW;
            	h = 0.03 * safezoneH;
            };
            class Popoff_ATM_depot_1000: CW_RscButtonInvisible
            {
            	idc = 1607;
            	text = ""; //--- ToDo: Localize;
            onButtonClick = "[1,1000] call popoff_fnc_atmTransfert";
            	x = 0.7075 * safezoneW + safezoneX;
            	y = 0.3937 * safezoneH + safezoneY;
            	w = 0.035 * safezoneW;
            	h = 0.03 * safezoneH;
            };
            class Popoff_ATM_depot_10000: CW_RscButtonInvisible
            {
            	idc = 1608;
            	text = ""; //--- ToDo: Localize;
                  onButtonClick = "[1,10000] call popoff_fnc_atmTransfert";
            	x = 0.7075 * safezoneW + safezoneX;
            	y = 0.45 * safezoneH + safezoneY;
            	w = 0.035 * safezoneW;
            	h = 0.03 * safezoneH;
            };
            class Popoff_ATM_depot_100000: CW_RscButtonInvisible
            {
            	idc = 1609;
            	text = ""; //--- ToDo: Localize;
                  onButtonClick = "[1,100000] call popoff_fnc_atmTransfert";
            	x = 0.7075 * safezoneW + safezoneX;
            	y = 0.505 * safezoneH + safezoneY;
            	w = 0.034 * safezoneW;
            	h = 0.03 * safezoneH;
            };
            class Popoff_ATM_balance: CW_RscText
            {
            	idc = 1610;
                  style = 0x10 + 0x02;
            	text = ""; //--- ToDo: Localize;
            	x = 0.381406 * safezoneW + safezoneX;
                  y = 0.412 * safezoneH + safezoneY;
                  w = 0.242344 * safezoneW;
                  h = 0.1 * safezoneH;
                  sizeEx = 0.06;
            };
            class Popoff_ATM_secours: CW_RscButtonInvisible
            {
            	idc = 1611;
            	text = ""; //--- ToDo: Localize;
                  onButtonClick = "[] call popoff_fnc_atmHelp";
            	x = 0.427 * safezoneW + safezoneX;
            	y = 0.72 * safezoneH + safezoneY;
            	w = 0.037 * safezoneW;
            	h = 0.031 * safezoneH;
            };
     };
};