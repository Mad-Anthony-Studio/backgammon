///////////////////////////////////////////////////////////////
//
//   Class defnitions for the ncurses game board
//
///////////////////////////////////////////////////////////////

#ifndef __BOARD_H
#define __BOARD_H

#include "node.h"
#include <curses.h>
///////////////////////////////
//
// Board/movement prototype functions
//
///////////////////////////////

int determine_move(int rollValue1, int rollValue2);
int do_plr_move(int source, int moveNum);
int do_cmp_move(int rollValue1, int rollValue2);

class Board
{
	public:
		Board();			// Constructor
		Board(int);			// Overloaded Constructor
		~Board();			// Destructor
		int create_board(); // Board creater
		int update_board(); // Call for update functions

		int move_piece(int stack, int num_moves);

	private:
};
#endif
