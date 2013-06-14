#ifndef __LIST_H
#define __LIST_H

#include "node.h"
#include "lnode.h"

class List
{
	public:
		List();				// Constructor
		List(int);			// Overloaded Constructor
		~List();			// Destructor

		LNode *search(int);		// Locate Lnode containing value in list

		bool insert(int);		// Insert value at start of list
		bool insert(LNode *);		// Insert Lnode at start of list
		bool insert(int, LNode *);	// Insert value at location
		bool insert(LNode *, LNode *);	// Insert LNode at location

		bool append(int);               // Append value at end
		bool append(LNode *);            // Append LNode at end
		bool append(int, LNode *);       // Append value at location
		bool append(LNode *, LNode *);  // Append LNode at location

		LNode* remove(LNode *); // Remove node and return pointer to it

		int getQty();                   //  Returns the value of qty
		bool setQty(int);               //  Sets Qty to an int value returns a status bool 

		LNode *start;                   // For the beginning of the list
		LNode *end;                     // For the end of the list
	
	private:
		LNode *data;
		int qty;
};
#endif
