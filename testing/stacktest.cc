#include "node.h"
#include "lnode.h"
#include "stack.h"
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

// main() function
int main()
{
        bool status = false;
	Stack *mystack = NULL;
	int input = 0;

        printf("[stacktest] stacktest.cc (Stack Class) test application.\n");
        printf("[stacktest] Instantiating object (parameterless constructor) .... ");

        //Create an instance of our Stack object
	mystack = new Stack;

        if (mystack != NULL)
                printf("SUCCESS.\n");
        else
                printf("FAILED.\n");
        do
        {
                printf("Enter an integer or -1 to stop: ");
                scanf("%d", &input);

                if (input != -1)
                {
                        printf("[stacktest] Setting stacks's value via push(value).......");
                        status = mystack -> push(input);     // set its contents
                        if (status == true)
                                printf("SUCCESS.\n");
                        else
                                printf("FAILED.\n");
                }

        }while (input != -1);


	return (0);
}
