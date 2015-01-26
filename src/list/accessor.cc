
#include "list.h"

//
//getQty() - show how many nodes are in the list
//
//Parameters: none
//
//Return Value: int - size of list
//

int List::getQty()
{
        return (this->qty);
}

//
//setQty() - sets size of list
//
//Parameters: int value - size to make list
//
//Return Value: bool - status variable indicating success or failure
//

bool List :: setQty(int value)
{
        bool status = false;

        this -> qty = value;

        if (this -> qty == value)
        {
                status = true;
        }

        return (status);
}

