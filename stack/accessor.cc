//WIP
#include "stack.h"

int Stack::getLength()
{
	return (this -> length);
}

bool Stack::setLength(int value)
{
	bool status = false;

	this -> length = value;

	if (this -> length == value)
	{
		status = true;
	}

	return (status);
}
