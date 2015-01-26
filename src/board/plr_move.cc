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
// TODO: Create movement functions.
// TODO: Create error function.

int do_cmp_move(int source, int moveNum)
{
	piece* source;

	piece = sorce->location;
	if(piece->move_num == "VALID")
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


