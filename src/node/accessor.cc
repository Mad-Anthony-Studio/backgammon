#include "node.h"

int Node :: getValue()
{
	return(this -> value);
}

bool Node :: setValue(int value)
{
	bool status = false;

	if ((this -> value = value) == value)
		status = true;

	return(status);
}
