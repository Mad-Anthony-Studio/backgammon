#include "tnode.h"

// copy() will duplicate the node's contents, except NULL right and left
TNode * TNode :: copy()
{
	TNode *tmp = new TNode(this -> getValue());

	if (this -> data != NULL)
		//tmp -> data = new TNode(this -> data -> getValue());
		tmp -> data -> setValue(this -> data -> getValue());

	tmp -> right = NULL;
	tmp -> left = NULL;

	return(tmp);
}
