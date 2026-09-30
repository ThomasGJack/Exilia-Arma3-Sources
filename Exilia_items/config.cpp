#include "BIS_AddonInfo.hpp"

class CfgPatches
{
	class Exilia_Items
	{
		units[]={};
		weapons[]=
		{
			"Exilia_Items_Base",
			"Exilia_Items_Blueprint",
			"Exilia_Items_Cocaine",
			"Exilia_Items_Crack",
			"Exilia_Items_Diamond",
			"Exilia_Items_Disc",
			"Exilia_Items_Dogtags",
			"Exilia_Items_Folder",
			"Exilia_Items_Gold",
			"Exilia_Items_Harddrive",
			"Exilia_Items_Map",
			"Exilia_Items_Marijuana",
			"Exilia_Items_Meth",
			"Exilia_Items_Money",
			"Exilia_Items_SDCard",
			"Exilia_Items_SealedContainer",
			"Exilia_Items_Iphone",
			"Exilia_Items_Samsung",
			"Exilia_Items_Alcatel",
			"Exilia_Items_Wiko",
			"Exilia_Items_Nokia",
			"Exilia_Items_CreditCard",
			"Exilia_Items_Carte_sheriff"
		};
		requiredVersion=1;
		requiredAddons[]={"Exilia_Data"};
		fileName="Exilia_Items.pbo";
	};
};
class cfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class Exilia_Items_Base: ItemCore
	{
		scope=1;
		access=3;
		displayName="-";
		detectRange=-1;
		simulation="ItemMineDetector";
		useAsBinocular=0;
		type=4096;
		picture="";
		descriptionShort="";
		class ItemInfo: InventoryItem_Base_F
		{
			mass=0;
		};
	};
	class Exilia_Items_Blueprint: Exilia_Items_Base
	{
		scope=2;
		displayName="Blueprint";
		picture="\Exilia_Items\data\blueprint";
		descriptionShort="A blueprint of some sort of machine or device";
		class ItemInfo: ItemInfo
		{
			mass=1;
		};
	};
	class Exilia_Items_Cocaine: Exilia_Items_Base
	{
		scope=2;
		displayName="Brick of Cocaine";
		picture="\Exilia_Items\data\cocaine";
		descriptionShort="A brick of unprocessed, imported cocaine";
		class ItemInfo: ItemInfo
		{
			mass=4;
		};
	};
	class Exilia_Items_Crack: Exilia_Items_Base
	{
		scope=2;
		displayName="Bag of Crack";
		picture="\Exilia_Items\data\crack";
		descriptionShort="A bag of home-made crack cocaine";
		class ItemInfo: ItemInfo
		{
			mass=2;
		};
	};
	class Exilia_Items_Diamond: Exilia_Items_Base
	{
		scope=2;
		displayName="Rough Diamond";
		picture="\Exilia_Items\data\diamond";
		descriptionShort="A small, unprocessed conflict diamond, most likely originating from Central Africa";
		class ItemInfo: ItemInfo
		{
			mass=1;
		};
	};
	class Exilia_Items_Disc: Exilia_Items_Base
	{
		scope=2;
		displayName="Compact Disc";
		picture="\Exilia_Items\data\disc";
		descriptionShort="A compact disc containing data";
		class ItemInfo: ItemInfo
		{
			mass=1;
		};
	};
	class Exilia_Items_Dogtags: Exilia_Items_Base
	{
		scope=2;
		displayName="Dogtags";
		picture="\Exilia_Items\data\dogtags";
		descriptionShort="Identification tags from a fallen soldier";
		class ItemInfo: ItemInfo
		{
			mass=1;
		};
	};
	class Exilia_Items_Folder: Exilia_Items_Base
	{
		scope=2;
		displayName="Folder";
		picture="\Exilia_Items\data\folder";
		descriptionShort="A folder, containing potentially classified images or documents";
		class ItemInfo: ItemInfo
		{
			mass=2;
		};
	};
	class Exilia_Items_Gold: Exilia_Items_Base
	{
		scope=2;
		displayName="Gold Bars";
		picture="\Exilia_Items\data\gold";
		descriptionShort="A few bars of pure solid gold, worth a considerable amount of money";
		class ItemInfo: ItemInfo
		{
			mass=8;
		};
	};
	class Exilia_Items_Harddrive: Exilia_Items_Base
	{
		scope=2;
		displayName="Hard Disk Drive";
		picture="\Exilia_Items\data\harddrive";
		descriptionShort="A hard drive from a computer containing potentially classified data";
		class ItemInfo: ItemInfo
		{
			mass=3;
		};
	};
	class Exilia_Items_Map: Exilia_Items_Base
	{
		scope=2;
		displayName="Folded Map";
		picture="\Exilia_Items\data\map";
		descriptionShort="A folded map marking several different locations";
		class ItemInfo: ItemInfo
		{
			mass=2;
		};
	};
	class Exilia_Items_Marijuana: Exilia_Items_Base
	{
		scope=2;
		displayName="Bricks of Marijuana";
		picture="\Exilia_Items\data\marijuana";
		descriptionShort="Several bricks of unprocessed, uncut marijuana";
		class ItemInfo: ItemInfo
		{
			mass=4;
		};
	};
	class Exilia_Items_Meth: Exilia_Items_Base
	{
		scope=2;
		displayName="Bag of Methamphetamines";
		picture="\Exilia_Items\data\meth";
		descriptionShort="A small bag of meth, along with a pipe";
		class ItemInfo: ItemInfo
		{
			mass=2;
		};
	};
	class Exilia_Items_Money: Exilia_Items_Base
	{
		scope=2;
		displayName="Briefcase of Money";
		picture="\Exilia_Items\data\money";
		descriptionShort="A briefcase filled to the brim with unmarked bills";
		class ItemInfo: ItemInfo
		{
			mass=6;
		};
	};
	class Exilia_Items_SDCard: Exilia_Items_Base
	{
		scope=2;
		displayName="Secure Digital Card";
		picture="\Exilia_Items\data\sdcard";
		descriptionShort="A small card containing potentially classified data or images";
		class ItemInfo: ItemInfo
		{
			mass=1;
		};
	};
	class Exilia_Items_SealedContainer: Exilia_Items_Base
	{
		scope=2;
		displayName="Sealed Container";
		picture="\Exilia_Items\data\container";
		descriptionShort="A sealed cylinder containing a mysterious chemical substance";
		class ItemInfo: ItemInfo
		{
			mass=6;
		};
	};
	class Exilia_Items_Nokia: Exilia_Items_Base
	{
		scope=2;
		displayName="Nokia 3310";
		picture="\Exilia_Items\data\Telephone\nokia3310";
		descriptionShort="";
		class ItemInfo: ItemInfo
		{
			mass=1;
		};
	};
	class Exilia_Items_Wiko: Exilia_Items_Base
	{
		scope=2;
		displayName="Wiko";
		picture="\Exilia_Items\data\Telephone\wiko";
		descriptionShort="";
		class ItemInfo: ItemInfo
		{
			mass=1;
		};
	};
	class Exilia_Items_Alcatel: Exilia_Items_Base
	{
		scope=2;
		displayName="Alcatel One Touch";
		picture="\Exilia_Items\data\Telephone\Alcatel";
		descriptionShort="";
		class ItemInfo: ItemInfo
		{
			mass=1;
		};
	};
	class Exilia_Items_Samsung: Exilia_Items_Base
	{
		scope=2;
		displayName="Samsung Galaxy Note 8";
		picture="\Exilia_Items\data\Telephone\Samsung";
		descriptionShort="";
		class ItemInfo: ItemInfo
		{
			mass=1;
		};
	};
	class Exilia_Items_Iphone: Exilia_Items_Base
	{
		scope=2;
		displayName="Iphone 7 Plus";
		picture="\Exilia_Items\data\Telephone\Iphone";
		descriptionShort="";
		class ItemInfo: ItemInfo
		{
			mass=1;
		};
	};

	class Exilia_Items_CreditCard: Exilia_Items_Base
	{
		scope=2;
		displayName="Carte de Credits";
		picture="\Exilia_Items\data\creditcard";
		descriptionShort="";
		class ItemInfo: ItemInfo
		{
			mass=1;
		};
	};

	class Exilia_Items_Carte_Rehab: Exilia_Items_Base
	{
		scope=2;
		displayName="Carte d accès Rehab";
		picture="\Exilia_Items\data\carte_sheriff.paa";
		descriptionShort="";
		class ItemInfo: ItemInfo
		{
			mass=1;
		};
	};
};
