#include "queue.h"

// Queue constructor
Queue :: Queue()
{
        qty = 0;
        data = NULL;
        start = NULL;
        end = NULL;
}
// Queue overload
Queue :: Queue(int value)
{
        data = new LNode(value);
        qty = 1;
        start = data;
        end = data;
}

