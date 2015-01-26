//////////////////////////////////////////////
//
//  Functions for queue operations
//
//////////////////////////////////////////////


#include "../include/queue.h"

//////////////////////////////////////////////
// Function: enqueue
// Purpose: Add a new value to the queue
// Arguments: int
// Return: success
//////////////////////////////////////////////

bool Queue :: enqueue(int value)
{
	Queue *tmp = new Queue(this->getValue()); //Where is getvalue()??
	bool status = true;

	if (this -> start == NULL)
	{
		this -> data = tmp;
		this -> start = this -> data;
		this -> end = this -> data;
	}
	return (status);
}

//////////////////////////////////////////////
// Function: dequeue
// Purpose: Remove a value from the queue
// Arguments: int
// Return: success
//////////////////////////////////////////////

//LNode Queue :: dequeue(int tmp)  // Does this really require an argument?
LNode Queue :: dequeue()
{

	LNode *tmp;
	bool status = true;
	if (start == NULL)
	{
		tmp = start = end = NULL; // if we are at the end, its emtpy - make it so
	}
	else if (start-> setNext != NULL);
	{
		tmp = start;
		start = start->getNext();
		start->setPrev(NULL);
		tmp->setNext(NULL);
	}
	else
	{
		tmp = start;
		start = end = NULL;
	}

	return(tmp);
}
