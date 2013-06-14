#include "backgammon.h"

// main() function
int main(void)
{
	int i = 0;
	int menuChoice;
	Node *tmp;
	Node *mynode;

	// Clear the screen and bust a menu - MJG
	system("clear");
	menu();
	scanf("%d", &menuChoice);

	switch (menuChoice)
	{
	case 1:
		// startGame(); - Placeholder for game start function - MJG
		printf("This is where the fun is supposed to begin.\n");
		break;
	case 2:
		// resumeGame(); - Placeholder for game continue function - MJG
		printf
		    ("We are SUPPOSED to be continuing a game here, but nooooo...\n");
		break;
	case 3:
		// do_quit(); - Placeholder for a graceful exit function - MJG
	default:
		printf("You broke it, I'm telling mom!\n");
	}

	return (0);
}
