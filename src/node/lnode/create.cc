#include "lnode.h"
#include <cstdlib>

LNode :: LNode()
{
	value = 0;
	this -> next = NULL;
	this -> prev = NULL;
	this -> data = NULL;
}

LNode :: LNode(int value)
{
	this -> value = value;
	next = NULL;
	prev = NULL;
	data = NULL;
}
