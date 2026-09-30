/*
*    Format:
*        level: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*            3: Custom exit message (Optional)
*/
class VirtualShops
{

    #include "shops.hpp"

};

/*
*    CLASS:
*        variable = Variable Name
*        displayName = Item Name
*        weight = Item Weight
*        buyPrice = Item Buy Price
*        sellPrice = Item Sell Price
*        illegal = Illegal Item
*        edible = Item Edible (-1 = Disabled)
*        icon = Item Icon
*        processedItem = Processed Item
*/
class VirtualItems
{

    #include "autres.hpp"
    #include "drink.hpp"
    #include "fish.hpp"
    #include "food.hpp"
    #include "items.hpp"
    #include "ressources_legal.hpp"
    #include "ressources_illegal.hpp"
    #include "ressources_entreprise.hpp"
    #include "Houses_Items.hpp"

};
