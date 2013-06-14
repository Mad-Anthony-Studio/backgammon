#include "lnode.h"
#include "list.h"
#include <cstdio>
#include <cstdlib>

int main()
{

	int i = 0, input = 0;
	bool status = false;
	LNode *tmp = NULL;
	int tmp2 = NULL;
	List *mylist = NULL;
	LNode *tmpNode = new LNode;

	printf("[listtest] listtest.cc (List Class) test application.\n");
	printf
	    ("[listtest] Instantiating object (parameterless constructor) .... ");

	//Create an instance of our list object
	mylist = new List;

	if (mylist != NULL)
		printf("SUCCESS.\n");
	else
		printf("FAILED.\n");

	do
	{
		printf("Enter an integer or -1 to stop: ");
		scanf("%d", &input);

		if (input != -1)
		{
			printf
			    ("[listtest] Setting list's value via insert(value)..............");
			status = mylist->insert(input);	// set its contents

			if (status == true)
				printf("SUCCESS.\n");
			else
				printf("FAILED.\n");
		}

	} while (input != -1);

	tmp = mylist->start;

	printf
	    ("[listtest] Retrieving lists's value ............................. ");

	while (tmp != NULL)
	{

		tmp2 = tmp->getValue();
		printf("%d -> ", tmp2);
		tmp = (tmp->getNext());

	}

	printf("NULL\n");
	printf
	    ("[listtest] De-allocating list (destructor) .....................");
	//delete mylist; <-- Segfaults here!!
	mylist = NULL;
	printf("DONE.\n");

	printf
	    ("[listtest] Instantiating object (parametered constructor) ....");

	//Create an instance of our list object
	mylist = new List(10);

	if (mylist != NULL)
		printf("SUCCESS.\n");
	else
		printf("FAILED.\n");

	do
	{
		printf("Enter an integer or -1 to stop: ");
		scanf("%d", &input);

		if (input != -1)
		{
			printf
			    ("[listtest] Setting list's value via append(value)..............");
			status = mylist->append(input);	// set its contents

			if (status == true)
				printf("SUCCESS.\n");
			else
				printf("FAILED.\n");
		}

	} while (input != -1);

	tmp = mylist->start;

	printf
	    ("[listtest] Retrieving lists's value ............................. ");

	while (tmp != NULL)
	{

		tmp2 = tmp->getValue();
		printf("%d -> ", tmp2);
		tmp = (tmp->getNext());

	}

	printf("NULL\n");

	//Inserts an empty node at the beginning of the list
	printf
	    ("[listtest] Inserting an empty Node ...................................");

	status = mylist->insert(tmpNode);

	if (status == true)
		printf("SUCCESS.\n");
	else
		printf("FAILED.\n");

	tmp = mylist->start;

	printf
	    ("[listtest] Retrieving lists's value ............................. ");

	while (tmp != NULL)
	{

		tmp2 = tmp->getValue();
		printf("%d -> ", tmp2);
		tmp = (tmp->getNext());

	}

	printf("NULL\n");

	//Inserts a node with value 33 at specified location
	int value = 33;

	LNode *location = NULL;

	printf("Enter location to insert 33 before:");
	scanf("%d", &input);

	tmp = mylist->start;

	for (i = 0; i < input; i++)
	{
		if ((tmp->getNext()) != NULL)
		{
			tmp = tmp->getNext();
		}
		else
		{
			i = input;
		}
	}

	location = tmp;

	status = mylist->insert(value, location);
	printf
	    ("[listtest] Inserting a node with value 33 at specified location...............");

	if (status == true)
		printf("SUCCESS.\n");
	else
		printf("FAILED.\n");

	tmp = mylist->start;

	printf("[listtest] Retrieving lists's value ................ ");

	while (tmp != NULL)
	{

		tmp2 = tmp->getValue();
		printf("%d -> ", tmp2);
		tmp = (tmp->getNext());

	}

	printf("NULL\n");

	//Inserts an empty node at specified location

	location = NULL;
	printf("Enter location to insert an empty node at:");
	scanf("%d", &input);
	tmp = mylist->start;

	for (i = 0; i < input; i++)
	{
		if ((tmp->getNext()) != NULL)
		{
			tmp = tmp->getNext();
		}
		else
		{
			i = input;
		}
	}

	location = tmp;

	LNode *tmpNode2 = new LNode;

	status = mylist->insert(tmpNode2, location);
	printf
	    ("[listtest] Inserting an empty node at specified location...............");

	if (status == true)
		printf("SUCCESS.\n");
	else
		printf("FAILED.\n");

	tmp = mylist->start;

	printf("[listtest] Retrieving lists's value ................ ");

	while (tmp != NULL)
	{

		tmp2 = tmp->getValue();
		printf("%d -> ", tmp2);
		tmp = (tmp->getNext());

	}

	printf("NULL\n");

	//Appends an empty node at the end of the list
	printf
	    ("[listtest] Appending an empty Node ...................................");

	tmpNode = new LNode;
	status = mylist->append(tmpNode);

	if (status == true)
		printf("SUCCESS.\n");
	else
		printf("FAILED.\n");

	tmp = mylist->start;

	printf
	    ("[listtest] Retrieving lists's value ............................. ");

	while (tmp != NULL)
	{
		tmp2 = tmp->getValue();
		printf("%d -> ", tmp2);
		tmp = (tmp->getNext());

	}

	printf("NULL\n");

	//Appends a node with value 44 at specified location
	value = 44;

	location = NULL;
	printf("Enter location to insert 44 after:");
	scanf("%d", &input);
	tmp = mylist->start;

	for (i = 0; i < input; i++)
	{
		if ((tmp->getNext()) != NULL)
		{
			tmp = tmp->getNext();
		}
		else
		{
			i = input;
		}
	}

	location = tmp;

	status = mylist->append(value, location);
	printf
	    ("[listtest] Appending a node with value 44 after specified location........");

	if (status == true)
		printf("SUCCESS.\n");
	else
		printf("FAILED.\n");

	tmp = mylist->start;

	printf("[listtest] Retrieving lists's value ................ ");

	while (tmp != NULL)
	{

		tmp2 = tmp->getValue();
		printf("%d -> ", tmp2);
		tmp = (tmp->getNext());

	}

	printf("NULL\n");

	//Appends an empty node after specified location

	location = NULL;
	printf("Enter location to append an empty node after:");
	scanf("%d", &input);
	tmp = mylist->start;

	for (i = 0; i < input; i++)
	{
		if ((tmp->getNext()) != NULL)
		{
			tmp = tmp->getNext();
		}
		else
		{
			i = input;
		}
	}

	location = tmp;

	tmpNode2 = new LNode;
	status = mylist->append(tmpNode2, location);
	printf
	    ("[listtest] Appending an empty node at specified location...............");

	if (status == true)
		printf("SUCCESS.\n");
	else
		printf("FAILED.\n");
	tmp = mylist->start;

	printf("[listtest] Retrieving lists's value ................ ");

	while (tmp != NULL)
	{

		tmp2 = tmp->getValue();
		printf("%d -> ", tmp2);
		tmp = (tmp->getNext());

	}

	printf("NULL\n");

	//Removes a node from the list

	location = NULL;
	printf("Enter location to remove:");
	scanf("%d", &input);
	tmp = mylist->start;

	for (i = 0; i < input; i++)
	{
		if ((tmp->getNext()) != NULL)
		{
			tmp = tmp->getNext();
		}
		else
		{
			i = input;
		}
	}

	location = tmp;

	tmp = mylist->remove(location);
	printf
	    ("[listtest] Removing selected node from the list...............");

	if (status == true)
		printf("SUCCESS.\n");
	else
		printf("FAILED.\n");
	tmp = mylist->start;

	printf("[listtest] Retrieving lists's value ................ ");

	while (tmp != NULL)
	{

		tmp2 = tmp->getValue();
		printf("%d -> ", tmp2);
		tmp = (tmp->getNext());

	}

	printf("NULL\n");

	//Searches for a value in the list

	location = NULL;
	tmp = NULL;
	printf("Enter value to search for:");
	scanf("%d", &input);

	tmp = mylist->search(input);

	printf
	    ("[listtest] Searching for selected node in the list...............");

	if (tmp != NULL)
		printf("SUCCESS.\n");
	else
		printf("FAILED.\n");
	tmp = mylist->start;
	printf("[listtest] Retrieving lists's value ................ ");

	while (tmp != NULL)
	{

		tmp2 = tmp->getValue();
		printf("%d -> ", tmp2);
		tmp = (tmp->getNext());

	}

	printf("NULL\n");

	tmp = mylist->end;
	printf("[listtest] Testing prev pointers: ");
	while (tmp != NULL)
	{
		printf("%d -> ", tmp->getValue());
		tmp = (tmp->getPrev());
	}
	printf("NULL\n");

	printf("[listtest]Testing next pointers: ");

	tmp = mylist->start;
	while (tmp != NULL)
	{
		printf("%d -> ", tmp->getValue());
		tmp = (tmp->getNext());
	}
	printf("NULL\n");

	printf
	    ("[listtest] De-allocating everything we used...................... ");
	while (tmp != NULL)
	{
		delete tmp;
		delete tmpNode;
		delete location;
		delete mylist;
		delete tmpNode2;
	}
	printf("DONE.\n");

	printf("\n[listtest] Tests Complete.\n\n");

	return (0);
}
