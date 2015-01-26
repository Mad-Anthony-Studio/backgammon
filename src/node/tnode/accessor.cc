#include "tnode.h"

TNode * TNode :: getRight()
{
	return(this -> right);
}

bool TNode :: setRight(TNode *tmp)
{
	bool status = false;

	this -> right = tmp;

	if (this -> right == tmp)
	{
		status = true;
	}

	return(status);
}

TNode * TNode :: getLeft()
{
	return(this -> left);
}

bool TNode :: setLeft(TNode *tmp)
{
	bool status = false;

	this -> left = tmp;

	if (this -> left == tmp)
	{
		status = true;
	}

	return(status);
}
