#include "tnode.h"

TNode :: ~TNode()
{
	value = 0;
	right = NULL;
	left = NULL;
	delete data;
}
