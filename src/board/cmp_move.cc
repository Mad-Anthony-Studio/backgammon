///////////////////////////////////////////
//
//  cmp_move.cc
//  Functions for moving a piece.  Can be
//    used in all graphical/text interfaces.
//
///////////////////////////////////////////

#include "list.h"


// Source is the board location a piece can be
// moved from, moveNum is the selected moves
// provided by dice roll
// TODO: Create piece pointers.
// TODO: Create determine_move functions.
// TODO: Create error function.

int do_cmp_move(int dieValue1, int dieValue2)
{
	piece* source;

	piece = sorce->location;

	determine_move(dieValue1, dieValue2);

	if( is_valid(move) == "VALID")
	{
		piece->move_piece(moveNum);
	}
	else
	{
		err("Move is invalid, please try again.\n");
	}
	return(0);
}

}


