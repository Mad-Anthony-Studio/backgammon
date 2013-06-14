#include "list.h"

//
//insert() - inserts value into a new node which is inserted at the end of the list
//
//Parameters: int value - value to be placed into new node
//
//Return Value: bool - status variable indicating success or failure
//

bool List::insert(int value)
{
	LNode *uniqueNode = new LNode(value);
	bool status = false;

	if (this->start == NULL)
	{
		this->data = uniqueNode;
		this->start = this->data;
		this->end = this->data;
	}
	else
	{
		uniqueNode->setNext(this->start);
		this->start->setPrev(uniqueNode);
		this->start = uniqueNode;
	}
	status = true;
	this->qty = this->qty + 1;

	return (status);
}

//
//insert() - inserts unique empty node before the lst node of the list
//
//Parameters: LNode * uniqueNode - node to be inserted
//
//Return Value: bool - status variable indicating success or failure
//

bool List::insert(LNode * uniqueNode)
{
	bool status = false;

	if (this->start != NULL)
	{
		uniqueNode->setNext(this->start);
		this->start->setPrev(uniqueNode);
		this->start = uniqueNode;
		this->qty = this->qty + 1;
		status = true;
	}
	return (status);
}

//
//insert() - inserts uniqueNode after currentListNode
//
//Parameters: int value - value to insert into new node
//            LNode *currentListNode - existing node in list to insert before
//
//Return Value: bool - status variable indicating success or failure
//

bool List::insert(int value, LNode * currentListNode)
{
	LNode *uniqueNode = new LNode(value);
	bool status = false;

	if (currentListNode != NULL)
	{

		if (currentListNode == start)
		{
			this->start->setPrev(uniqueNode);
			uniqueNode->setNext(this->start);
			uniqueNode->setPrev(NULL);
			this->start = uniqueNode;
		}
		else
		{

			if (this->start == NULL)
			{
				this->data = uniqueNode;
				this->start = this->data;
				this->end = this->data;
			}

			else
			{
				uniqueNode->setNext(currentListNode);
				uniqueNode->setPrev(currentListNode->getPrev());
				(currentListNode->getPrev())->setNext(uniqueNode);
				currentListNode->setPrev(uniqueNode);
			}
			this->qty = this->qty + 1;	// this adds to "qty" which is node tot
		}
	}
	status = true;

	return (status);
}

//
//insert() - inserts empty node before currentListNode
//
//Parameters: LNode *uniqueNode - node to inserted into list
//	      LNode *currentListNode - existing node in list to be inserted before
//
//Return Value: bool - status variable indicating success or failure
//

bool List::insert(LNode * uniqueNode, LNode * currentListNode)
{

	bool status = false;

	if (currentListNode == NULL || uniqueNode == NULL)
	{
		status = false;
	}
	else
	{
                if (currentListNode == start)
                {
                        this->start->setPrev(uniqueNode);
                        uniqueNode->setNext(this->start);
                        uniqueNode->setPrev(NULL);
                        this->start = uniqueNode;
                }
		else
		{
			(currentListNode->getPrev())->setNext(uniqueNode);
			uniqueNode->setNext(currentListNode);
			uniqueNode->setPrev(currentListNode->getPrev());
			currentListNode->setPrev(uniqueNode);
		}
		status = true;
	}

	this->qty = this->qty + 1;

	return (status);
}
