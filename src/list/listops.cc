#include "list.h"

//
//remove() - removes node located at the currentListItem
//
//Parameters: LNode *currentListNode - location to remove node from
//
//Return Value: LNode *currentListNode - pointer to node just removed
//

LNode * List::remove(LNode * currentListNode)
{
	LNode *tmpNode;
	if (currentListNode == start)
	{
		tmpNode = currentListNode->getNext();
		tmpNode->setPrev(NULL);
		currentListNode->setNext(NULL);
		start = tmpNode;
	}

	else if (currentListNode == end)
	{
		tmpNode = currentListNode->getPrev();
		tmpNode->setNext(NULL);
		currentListNode->setPrev(NULL);
		end = tmpNode;
	}
	else
	{
		tmpNode = currentListNode->getNext();
		tmpNode->setPrev(currentListNode->getPrev());
		tmpNode = currentListNode->getPrev();
		tmpNode->setNext(currentListNode->getNext());
		currentListNode->setNext(NULL);
		currentListNode->setPrev(NULL);
	}
	return (currentListNode);
}

//
//search() - searches for a specified value
//
//Parameters: int value - value to search for
//
//Return Value: LNode * currentListNode - location of searched for value
//

LNode * List::search(int value)
{
	LNode *currentListNode;
	int found = 0;

	currentListNode = this->start;

	while (currentListNode != NULL && (found != 1))
	{
		if (currentListNode->getValue() >= value)
		{
			found = 1;
		}
		else
		{
			currentListNode = currentListNode->getNext();
		}
	}
	return (currentListNode);
}
