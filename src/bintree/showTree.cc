#include "bintree.h"
#include <cstdlib>

/*
 *************************************************************
 *
 * showTree() - once it's been created ... show it to the world
 *
 *************************************************************
 */

void BinNode :: showTree(){


	BinNode *tmp = this;

        if (tmp != NULL){

		tmp -> showTree(tmp -> left);
		printf("%d ", tmp -> getValue());
		tmp -> showTree(tmp -> right);

        }
}

void BinNode :: showTree(BinNode *current){

        if (current != NULL){

		current -> showTree(current -> left);
		printf("%d ", current -> getValue());
		current -> showTree(current -> right);

	}        
}

