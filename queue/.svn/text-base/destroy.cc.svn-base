#include "queue.h"

//Queue destructor
Queue :: ~Queue()
{
        LNode *tmp;

        while (this -> end != NULL)
        {
                tmp = this -> end;
                this -> end = this -> end -> getPrev();
                this -> end -> setNext() = NULL;
                tmp -> setPrev() = NULL;

                delete [] tmp;
                this -> qty = this -> qty - 1;
        }
}

