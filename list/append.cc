#include "list.h"
//
// append() - append empty Node at end of list
//
// parameters: LNode *uniqueNode - independed node to be appended to end of list
//
// return value: bool - status variable indicating success or failure
//
bool List::append(LNode * uniqueNode)
{

	bool status = true;

	if (this -> start == NULL)
	{
		this -> data = uniqueNode;
		this -> start = uniqueNode;
		this -> end = uniqueNode;
		this -> start -> setNext(NULL);
		this -> start -> setPrev(NULL);
	}
	else
	{
		this -> end -> setNext(uniqueNode);
		uniqueNode -> setPrev(this -> end);
		this -> end = uniqueNode;
		this -> end -> setNext(NULL);
	}

	this -> qty = this -> qty + 1;

	return (status);

}

//
// append() - append "uniqueNode" after "currentListNode"
//
//  parameters: LNode *uniqueNode - independed node to be appended to list
//              LNode *currentListNode - existing node in list to append after
//
//  return value: bool - status variable indicating success or failure
//
bool List::append(LNode * uniqueNode, LNode * currentListNode)
{
	bool status = false;

	if (currentListNode != NULL)
	{
		if (this -> start == NULL)
		{
			this -> data = uniqueNode;
			this -> start = uniqueNode;
			this -> end = uniqueNode;
			this -> start -> setNext(NULL);
			this -> start -> setPrev(NULL);
		}
		else if (currentListNode -> getNext() == NULL)
		{
			this -> end -> setNext(uniqueNode);
			uniqueNode -> setPrev(this -> end);
			this -> data = uniqueNode;
			this -> end = uniqueNode;
			end -> setNext(NULL);
		}
		else
		{
			uniqueNode -> setNext(currentListNode -> getNext());
			(currentListNode -> getNext()) -> setPrev(uniqueNode);
			currentListNode -> setNext(uniqueNode);
			uniqueNode -> setPrev(currentListNode);
		}

		this -> qty = this -> qty + 1;
		status = true;
	}
	return (status);
}

//
// append() - append value into new Node after "currentListNode"
//
//  parameters: int value - value to be placed into a node then appended
//              LNode *currentListNode - existing node in list to append after
//
//  return value: bool - status variable indicating success or failure
//

bool List::append(int value, LNode * currentListNode)
{
	bool status = false;
	LNode *uniqueNode = new LNode(value);

	if (currentListNode == NULL)
	{
		status = false;
	}
	if (currentListNode != end)
	{
		if (this -> start == NULL)
		{
			this -> data = uniqueNode;
			this -> start = uniqueNode;
			this -> end = uniqueNode;
			this -> start -> setNext(NULL);
			this -> start -> setPrev(NULL);
			status = true;
		}
		else
		{
			uniqueNode -> setNext(currentListNode -> getNext());
			uniqueNode -> setPrev(currentListNode);
			(currentListNode -> getNext()) -> setPrev(uniqueNode);
			currentListNode -> setNext(uniqueNode);
			status = true;
		}
	}
	else
	{
		end->setNext(uniqueNode);
		uniqueNode->setPrev(currentListNode);
		uniqueNode->setNext(NULL);
		end = uniqueNode;
		status = true;
	}
	this -> qty = this -> qty + 1;
	return (status);
}

//
// append() - append value into new node which will be appended to end of list
//
//  parameters: int value - value to be placed in new node
//
//  return value: bool - status variable indicating success or failure
//

bool List::append(int value)
{
	bool status = false;

	LNode *uniqueNode = new LNode(value);

	if (this -> start == NULL)
	{
		start = uniqueNode;
		end = uniqueNode;
		this -> start -> setNext(NULL);
		this -> start -> setPrev(NULL);
		status = true;
	}

	else
	{
		this -> end -> setNext(uniqueNode);
		uniqueNode -> setPrev(this -> end);
		this -> end = uniqueNode;
		this -> end -> setNext(NULL);
		status = true;
	}

	this -> qty = this -> qty + 1;

	return (status);
}
