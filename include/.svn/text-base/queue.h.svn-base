////////////////////////////////////////////////////
//
// Definition file for queue functions and class
//
////////////////////////////////////////////////////

#ifndef __QUEUE_H
#define __QUEUE_H
#include "node.h"
#include "list.h"
#include "lnode.h"

// Queue class
class Queue
{
	public:
		Queue();				// Constructor
		Queue(int);			// Overloaded Constructor
		~Queue();			// Destructor


		bool enqueue(int);		// Insert value at top of list
		bool enqueue(LNode *);		// Insert node at end of list
        
//		LNode *dequeue(LNode *);           // Remove node and return pointer to it
		LNode *dequeue();           // Should not require an argument - /mg
		LNode *peek(LNode *);	// Peek at the next node in the list
		LNode *start;
		LNode *end;	

	private:
		List *data;
		int buff;
		int qty;
};
#endif
