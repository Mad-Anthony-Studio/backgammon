include "bintree.h"
#include <cstdlib>

/*
 *
 * BinNode :: ~BinNode() - Deconstructor for the BinNode class
 *
 * This function acts upon the BinNode to be deleted, setting
 * directing its parent node to its left 
 *
 *	this -> parent = this -> left 
 *
 * and the right of its left is set to its right 
 *
 * 	 this -> left -> right = this -> right 
 *
 * then delete
 * 
 *	delete this
 *
 */

BinNode :: ~BinNode(){

	BinNode *tmp;
	tmp = this;

        delete tmp;
}

