//////////////////////////////////////////////////////
//
// board.c 
// All things having to do with graphical manipulation
// of the game board, including board layout, piece display
// and movement, and dice display
//
//////////////////////////////////////////////////////

#include <time.h>
#include <curses.h>
#include <stdlib.h>
//#include "list.h"

// Globals - could possibly put in board class????
int current_getch;
static WINDOW *mainwnd;
WINDOW *my_win;

///////////////////////////////////
//
// Initialize the main window
//
///////////////////////////////////
void screen_init(void) {
   mainwnd = initscr(); // main init
   noecho(); // turn off shell echo
   cbreak(); 
   nodelay(mainwnd, TRUE); // no delay in updating, can be changed if need be
   refresh(); // quick refresh to clear things up
   wrefresh(mainwnd); // update the main window to get rid of any garbage
   box(mainwnd,ACS_DIAMOND, ACS_DIAMOND); // draw a box of diamonds around the playing "surface"
}

// TODO: Hook to move functions!

//////////////////////////////////////
// 
// Start updating the game board
// includes layout of stacks
//
//////////////////////////////////////
static void update_board() 
{
   int stackID;
   int offset;
   // set up our stack windows in arrays
   // one for the player, one for the computer opponent
   static WINDOW *stack[11];
   static WINDOW *mid_stack;
   /*  TODO: work on node structure for game pieces
   LNode *tmp;
   tmp = start;	
   */
   start_color();
   init_pair(1, COLOR_BLACK, COLOR_CYAN); //Game board colors
   init_pair(2, COLOR_GREEN, COLOR_RED);//Game board colors

	// Set up the bottom 6 board stacks for display
   offset = 0;
   for(stackID = 0;stackID < 7;stackID ++)
   {
	   stack[stackID] = newwin(7, 4, 15, offset); //Creates a player stack with width, height, and location
	   box(stack[stackID], ACS_VLINE, ACS_HLINE); //Creates the border around the stack
	   wrefresh(stack[stackID]);
	   wrefresh(mainwnd);
	   offset += 5;
   }
 
   // Reinitialize offset, and set up bottom right 6 board stacks.
   offset = 45;
   for(stackID = 0;stackID < 6;stackID ++)
   {
	   stack[stackID] = newwin(7, 4, 15, offset); //Creates a player stack with width, height, and location
	   box(stack[stackID], ACS_VLINE, ACS_HLINE); //Creates the border around the stack
	   wrefresh(stack[stackID]);
	   wrefresh(mainwnd);
	   offset += 5;
   }

   // Reinitialize offset, and set up top left 6 board stacks.
   offset = 5;
   for(stackID = 0;stackID < 6;stackID ++)
   {
	   stack[stackID] = newwin(7, 4, 1, offset); //Creates a player stack with width, height, and location
	   box(stack[stackID], ACS_VLINE, ACS_HLINE); //Creates the border around the stack
	   wrefresh(stack[stackID]);
	   wrefresh(mainwnd);
	   offset += 5;
   }

   // Reinitialize offset, and set up top right 6 board stacks.
   offset = 45;
   for(stackID = 0;stackID < 6;stackID ++)
   {
	   stack[stackID] = newwin(7, 4, 1, offset); //Creates a player stack with width, height, and location
	   box(stack[stackID], ACS_VLINE, ACS_HLINE); //Creates the border around the stack
	   wrefresh(stack[stackID]);
	   wrefresh(mainwnd);
	   offset += 5;
   }
   // Create the mid-stack
   mid_stack = newwin(21, 4, 1, 37);
   box(mid_stack, ACS_VLINE, ACS_HLINE); //Creates the border around the stack
   wrefresh(mid_stack);
   wrefresh(mainwnd); //One more refresh for the road...

}

///////////////////////////////
//
// Function to exit windows gracefully
//
//////////////////////////////
void screen_end(void) 
{
   endwin();
}

////////////////////////////////
// 
// Function to get the board up and running
// includes some housekeeping
//
////////////////////////////////
//int create_board() 
int main() 
{
   int doloop = 1;
 // more initializations, colors, window background blah blah blah...
   screen_init();
   initscr();
   start_color();
   keypad(stdscr, TRUE);
   color_set(COLOR_PAIR(1), NULL);
   bkgd(COLOR_PAIR(1) | ' '); 
   
   mousemask(ALL_MOUSE_EVENTS, NULL); /* Enable zee moose! */
   MEVENT event;

   update_board();

   while (doloop) {
	   sleep(10);
      current_getch = getch();
switch(current_getch)
		{	case KEY_MOUSE: // Mouse functions - work in progress!! may not be usable outside of x though :(
			if(getmouse(&event) == OK)
			{	/* When the user clicks left mouse button */
				if(event.bstate & BUTTON1_PRESSED)
				mvprintw(22, 1, "Hey, a mouse event just happend!");
				refresh(); 
			}
			break;
		}


      if (current_getch == 113) {
         doloop = 0;
      }
   }
 
   screen_end();
   return 0;
}

