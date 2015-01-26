#include "bintree.h"
#include <cstdlib>

/*
 *************************************************************
 *
 * BinTree() - construct an empty binary tree with NULL value
 *
 *************************************************************
 */

BinNode :: BinNode(){

	value = 0;
	this -> right = NULL;
	this -> left = NULL;
	this -> parent = NULL; // root node
}

/*
 *************************************************************
 *
 * BinNode(int) - construct a binary tree node with value = value
 * @param: int v = value to be given to the new node
 *
 *************************************************************
 */

BinNode :: BinNode(int v){

	this -> value = v;
	this -> right = NULL;
	this -> left = NULL;
	this -> parent = NULL; // root node
}

