#ifndef __TNODE_H
#define __TNODE_H

#include "node.h"

class TNode : public Node
{
	public:
		TNode();					// Constructor
		TNode(int);					// Overloaded Constructor
		~TNode();					// Destructor
		virtual TNode *copy();		// Duplicate node
		TNode *getLeft();
		bool setLeft(TNode *);
		TNode *getRight();
		bool setRight(TNode *);
		int getLevel();
		bool setLevel(int);

	private:
		TNode *data;
		TNode *left;
		TNode *right;
		int level;
};
#endif
