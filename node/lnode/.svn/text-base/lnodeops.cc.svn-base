#include "lnode.h"
#include <cstdlib>

// copy() will duplicate the node's contents, except NULL next and prev
LNode * LNode :: copy()
{
	LNode *tmp = new LNode(this -> getValue());

	if (this -> data != NULL)
		//tmp -> data = new LNode(this -> data -> getValue());
		tmp -> data -> setValue(this -> data -> getValue());

	tmp -> next = NULL;
	tmp -> prev = NULL;

	return(tmp);
}
