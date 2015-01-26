//WIP
#include "stack.h"
#include <cstdlib>
#include <iostream>

using namespace std;

bool Stack::push(LNode *tmp)
{
	bool status = false;

	if (this -> length == 0 || this -> info -> getQty() < this -> length)
	{
		this -> info -> append(tmp);
		this -> top = this -> info -> end;
	}

	else
	{
		cout << "Error" << endl;
	}

	if (this -> top == tmp)
	{
		status = true;
	}

	return (status);

}

bool Stack::push(int value)
{
	bool status = false;

	if (this -> length == 0 || this -> info -> getQty() < this -> length)
	{
		this -> info -> append(value);
		this -> top = this -> info -> end;
	}

	else
	{
		cout << "Error" << endl;
	}

	if (this -> top -> getValue() == value)
	{
		status = true;
	}

	return (status);
}

LNode *Stack::pop()
{
	LNode *tmp = NULL;

	if (this -> top == NULL)
	{
		cout << "Stack empty" << endl;
	}
	else
	{
		tmp = this -> top;
		this -> top = this -> top -> getPrev();
		this -> top -> setNext(NULL);
		tmp -> setNext(NULL);
		tmp -> setPrev(NULL);
	}

	this -> info -> setQty((this -> info -> getQty()) - 1);

	return (tmp);
}

LNode *Stack::peek()
{
	if (this -> top == NULL)
	{
		cout << "Stack empty" << endl;
	}
		
	return (this -> top);
}
