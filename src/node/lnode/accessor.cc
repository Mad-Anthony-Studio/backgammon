#include "lnode.h"
#include <cstdlib>

LNode * LNode :: getNext()
{
	return(this -> next);
}

bool LNode :: setNext(LNode *tmp)
{
	bool status = false;

	this -> next = tmp;

	if (this -> next == tmp)
	{
		status = true;
	}

	return(status);
}

LNode * LNode :: getPrev()
{
	return(this -> prev);
}

bool LNode :: setPrev(LNode *tmp)
{
	bool status = false;

	this -> prev = tmp;

	if (this -> prev == tmp)
	{
		status = true;
	}

	return(status);
}
