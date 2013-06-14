#ifndef __STACK_H
#define __STACK_H

#include "node.h"
#include "lnode.h"
#include "list.h"

class Stack
{
	public:
		Stack();  // Default constructor
		Stack(int); // Accepts an integer value to dictate the maximum size of the stack 

		~Stack(); // Destructor
		
		bool push(LNode *tmp);  //Adds a node onto stack
		bool push(int value); //Adds a integer value onto stack
		LNode *pop();  // Removes the top node while also making the stack 1 element smaller.
		LNode *peek(); // Returns the value of the top node.

		int getLength();
		bool setLength(int);

	private:
		List *info;
		LNode *top;
		int length;
};
#endif
