#ifndef __DICE_H
#define __DICE_H

#include "node.h"
#include "lnode.h"
#include "list.h"
 // This is the start of the Dice header it may need more funtions.

class Dice:
{
	public:
		Dice();			// Constructor
		Dice(min, max);			// Overloaded Constructor
		~Dice();			// Destructor

		roll();
		copy();
                setMax();
		setMin();
                getValue()

	private:
		value;
		min;
		max;
};
#endif
