//WIP
#include "stack.h"

using namespace std;

Stack::Stack()
{
	this->info = new List();
	top = this -> info -> end;
	length = 0;
}

Stack::Stack(int value)
{
	this->info = new List();
	top = this -> info -> end;
	length = value;
}
