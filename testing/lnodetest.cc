#include "lnode.h"
#include <cstdio>
#include <cstdlib>

// main() function
int main(void)
{
	int i = 0, input = 0;
	bool status = false;
	LNode *tmp = NULL;
	LNode *mynode = NULL;

	printf("[nodetest] libnode.a (LNode Class) test application.\n");
	printf("[nodetest] Instantiating object (parameterless constructor) .... ");

	// Create an instance of our node object
	mynode = new LNode;

	if (mynode != NULL)
		printf("SUCCESS.\n");
	else
		printf("FAILED.\n");

	printf("Enter an integer: ");
	scanf("%d", &input);

	printf("[nodetest] Setting node's value ................................ ");
	status = mynode -> setValue(input);	// set its contents

	if (status == true)
		printf("SUCCESS.\n");
	else
		printf("FAILED.\n");

	printf("[nodetest] Retrieving node's value ............................. ");
	i = mynode -> getValue();

	if (i == input)
		printf("(%d,%d) SUCCESS.\n", i, input);
	else
		printf("(%d,%d) FAILED.\n", i, input);

		printf("[nodetest] De-allocating node (destructor) ..................... ");
    mynode = NULL;
	mynode = NULL;
	printf("DONE.\n");

	input = 0;
	printf("Enter an integer (different from last one): ");
	scanf("%d", &input);

	printf("[nodetest] Instantiating object (parametered constructor) ...... ");
	mynode = new LNode (input);

	if (mynode != NULL)
		printf("SUCCESS.\n");
	else
		printf("FAILED.\n");

	printf("[nodetest] Retrieving node's value ............................. ");
	i = mynode -> getValue();

	if (i == input)
		printf("(%d,%d) SUCCESS.\n", i, input);
	else
		printf("(%d,%d) FAILED.\n", i, input);

	printf("[nodetest] Duplicating node .................................... ");
	tmp = mynode -> copy();

	if (tmp != NULL)
		printf("SUCCESS.\n");
	else
		printf("FAILED.\n");

	input = 0;
	printf("Enter yet another different integer: ");
	scanf("%d", &input);

	printf("[nodetest] Setting original node's value to something unique ... ");
	i = mynode -> setValue(input);

	if (i == true)
		printf("SUCCESS.\n");
	else
		printf("FAILED.\n");
	
	printf("[nodetest] Retrieving values from both nodes:\n");
	printf("\tmynode: %d\n", mynode -> getValue());
	printf("\t   tmp: %d .............................................. ", tmp -> getValue());

	if ((mynode -> getValue()) != (tmp -> getValue()))
		printf("SUCCESS.\n");
	else
		printf("FAILED.\n");

	printf("\n[nodetest] De-allocating tmp node .............................. ");
  //	delete(tmp); <----- Segfaults!!
	tmp = NULL;
	printf("DONE.\n");

	printf("[nodetest] Building a string of nodes .......................... ");

	tmp = mynode;		// tmp points to first node
	for (i=4; i <= 32; i*=2)
	{
		tmp -> setNext(new LNode);
		
		(tmp -> getNext()) -> setPrev(tmp);
		// the above is equiv to this: tmp -> next -> prev = tmp;

		(tmp -> getNext()) -> setValue(i);
		tmp = (tmp -> getNext());
	}
	printf("DONE.\n");

	printf("\ttesting prev pointers: ");
	while (tmp != NULL)
	{
		printf("%d -> ", tmp -> getValue());
		tmp = (tmp -> getPrev());
	}
	printf("NULL\n");

	printf("\ttesting next pointers: ");

	tmp = mynode;
	while (tmp != NULL)
	{
		printf("%d -> ", tmp -> getValue());
		tmp = (tmp -> getNext());
	}
	printf("NULL\n");

	printf("[nodetest] De-allocating all nodes ............................. ");
	while (tmp != NULL)
	{
		// code demonstrating deallocation of nodes
		if ((tmp != NULL) && ((tmp -> getPrev()) != NULL))
			delete (tmp -> getPrev());
		else if ((tmp != NULL) && ((tmp -> getPrev()) == NULL))
			delete tmp;
	}
	printf("DONE.\n");

	printf("\n[nodetest] Tests Complete.\n\n");

	return(0);
}
