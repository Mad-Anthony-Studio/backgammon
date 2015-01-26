#include "list.h"
#include <cstdlib>

//
// List() - List class default constructor
//
//  parameters: none
//
//  return value: none
//

List::List()
{
	qty = 0;
	this -> data = NULL;
	start = NULL;
	end = NULL;
}

//
// List() - List class overloaded constructor
//
//  parameters: int value - value to place into new list
//
//  return value: none
//

List::List(int value)
{
	data = new LNode(value);
	qty = 1;
	start = data;
	end = data;
}
