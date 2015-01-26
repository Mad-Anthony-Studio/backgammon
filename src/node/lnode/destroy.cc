#include "lnode.h"
#include <cstdlib>

LNode :: ~LNode()
{
	value = 0;
	next = NULL;
	prev = NULL;
	delete data;
}
