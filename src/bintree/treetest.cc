#include "bintree.h"
#include <cstdio>
#include <cstdlib>

int main (){

	int input = 0;
	BinNode *myTree = NULL;
//	BinNode *tmp = NULL;

	myTree = new BinNode;

	if(myTree != NULL){

		printf("SUCCESS!\n");

	}else{

		printf("DAMMIT, FAILED!\n");

	}

	printf("Please enter a value: ");
	scanf("%d", &input);

	myTree = new BinNode(input);

	if(myTree != NULL){

		printf("SUCCESS! -> %d\n", myTree -> getValue());

	}else{

		printf("DAMMIT, FAILED!\n");

	}

	printf("Please enter another value: ");
	scanf("%d", &input);

	myTree -> insert(input);

	if(myTree -> right != NULL){

		printf("SUCCESS! -> %d\n", myTree -> right -> getValue());

	}else if(myTree -> left != NULL){

		printf("SUCCESS! -> %d\n", myTree -> left -> getValue());

	}else{

		printf("DAMMIT, FAILED!\n");
		printf("THE RIGHT -> %d\n", myTree -> right -> getValue());
		printf("THE LEFT -> %d\n", myTree -> left -> getValue());

	}

	myTree -> showTree();

	return(0);
}
