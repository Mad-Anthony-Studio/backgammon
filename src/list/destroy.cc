#include "list.h"

//
//~List() - List class destructor
//
//Parameters: none
//
//Return Value: none
//

List::~List()
{
	LNode *tmp;

	while (this->end != NULL)
	{
		if (this -> start == this -> end)
		{
			tmp = this -> start;
			this -> start = NULL;
			this -> end = NULL;
		}
		else
		{
			tmp = this->end;
			this->end = this->end->getPrev();
			this->end->setNext(NULL);
			tmp->setPrev(NULL);
		}

		delete tmp;
		this->qty = this->qty - 1;
	}
}
