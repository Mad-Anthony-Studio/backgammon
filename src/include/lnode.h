#ifndef __LNODE_H
#define __LNODE_H

#include "node.h"

class LNode : public Node
{
	public:
		LNode();			// Constructor
		LNode(int);			// Overloaded Constructor
		~LNode();			// Destructor
		virtual LNode *copy();		// Duplicate node
		LNode *getNext();
		bool setNext(LNode *);
		LNode *getPrev();
		bool setPrev(LNode *);

	private:
		LNode *data;
		LNode *prev;
		LNode *next;
};
#endif
