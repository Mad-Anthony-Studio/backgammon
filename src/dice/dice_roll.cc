#include<cstdlib>
using namespace std;
bool turnOver, player;
// This function is used to determin who goes first buy returning a true if the Play win the roll of the die. 
// It will return Faults if the computer wins.
bool  begin_roll(bool newGame)
{
	if (new_game == true)
		{
		dice_roll();
		while (die[1] == die[2])
			{
	  			dice_roll();
			}
		newGame = faults;
		}
        if (die[0] > die[1])
	{
		player = true;
	}
	
	else
	{ 
		player = faults;
	}
	return(player) 
}

// This function check for doubles and if there is doubles add two more dice values.

void checkForDoubles()
{
  dice_roll()
  if( die[0] == die[1]) 
    {
	die[2] = die[3] = die[1];
    }
    else 
    {
       die[2] =  die[3] = 0;
    }
}

// This functions is used to keep track of used rolles and determin when a player has used all of his rolls.
// If they have then it return true. 
bool remove_move(int move)
{
int x=0
	while ((move != 0) || (x <=3))
	{
	 if (move == die[x])
	  {
	   die[x] = move = 0;
	  }
        }

if (x=0) && (die[x] == die[x++] == die[x++] == die[x++] == 0)
   {
	turnOver= true;
   }
else
  {
 turnOver = faults;
  }
