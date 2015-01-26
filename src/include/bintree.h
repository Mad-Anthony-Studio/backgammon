/*
 * bintree.h - binary tree headers
 *
 */

#ifndef __BINTREE_H
#define __BINTREE_H

#include <cstdio>
#include <cstdlib>

class BinNode {
	public:
		BinNode();	// constructor
		BinNode(int);	// overloaded constructor
		~BinNode();	// DEconstructor

		void insert(int); 	// insert into the tree
		void search(int);	// find values in tree
		void remove(int);	// house cleaning
		void showTree();	// how else would you ever know?
		void showTree(BinNode*); //recursive
		int getValue();		// return the value

		BinNode *right; // the right side
		BinNode *left;	// the left side

	private:
		int value;	// the value
		int index;	// the order it was added
		// might not use index ... but it's here if needed
};

#endif
