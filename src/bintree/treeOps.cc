#include "bintree.h"
#include <cstdlib>

/*
 *************************************************************
 *
 * necessary operations to be performed on
 * binary search tree (BST) class wherein, for each node,
 * values to the LEFT are LESS THAN the node value
 * values to the RIGHT are GREATER THAN the node value
 *
 *************************************************************
 */


/*
 *************************************************************
 *
 * insert(int) - given a value, insert it into the correct place in the tree
 * @param: inv v = value to be inserted into tree
 *
 *************************************************************
 */

void BinNode :: insert(int v){

	BinNode *tmp = this;
	tmp = this -> search(v);

// tmp is pointing to the correct position
// set the value

	if(v > tmp -> value){

		tmp -> right = new BinNode(v);
		tmp -> right -> parent = tmp;

	}else{

		tmp -> left = new BinNode(v);
		tmp -> left -> parent = tmp;
	}

}

/*
 *************************************************************
 * remove()
 *
 * given a value ... delete it
 *
 * this function acts upon the BinNode to be deleted, setting
 * directing its parent node to its left
 *
 *      tmp -> parent = this -> left   
 *
 * and the right of its left is set to its right
 *
 *       this -> left -> right = this -> right
 *
 * then delete
 *
 *      delete this
 *
 ************************************************************
 */

void BinNode :: remove(int v){


	BinNode *tmp;
	tmp = this -> search(v);	

        if(tmp -> left == NULL && tmp -> right == NULL){

                // end unit
                if(tmp -> parent -> value > tmp -> value){

                        tmp -> parent -> left = NULL;

                }else{

                        tmp -> parent -> right = NULL;

                }

        }else{


                if(tmp -> parent -> value > tmp -> value){

                        tmp -> parent -> left = tmp -> right;
                        tmp -> right -> left = tmp -> left;

                }else{

                        tmp -> parent -> right = tmp -> left;
                        tmp -> left -> right = tmp -> right;

                }

        }

	
	delete tmp;

}


/*
 *************************************************************
 * int getValue()
 *
 * returns the value held in the node
 *
 *************************************************************
 */

int BinNode :: getValue(){

	return this -> value;

}
