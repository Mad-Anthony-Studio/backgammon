//WIP
#include "stack.h"
#include <cstdlib>

Stack::~Stack()
{
	LNode *tmp = new LNode;

	tmp = this -> top;

	this -> top = this -> top -> getPrev();
	this -> top -> setNext(NULL);

	tmp -> setNext(NULL);
	tmp -> setPrev(NULL);

	delete tmp;
}
