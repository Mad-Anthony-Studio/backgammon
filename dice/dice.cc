#include<time.h>
#include<sys/time.h>
#include<cstdlib>

//  int die=0;

//I don't know where we are gonna want the header but I'll call the function int die_roll()
void  die_roll()
{
//	time_t seconds;
   unsigned int mySeed = set_seed();

//Rolling die
//	time(&seconds);
	srand(mySeed);
for (x=0 ; x <=1 ; x++)
{
	die[x]=rand()%(6-1+1)+1;
}
//Return value from the die roll
	return();
}

unsigned int set_seed()
{  
   unsigned int mySeed;
   timeval timeNow;

   getTimeofday(&timeNow, NULL);

   mySeed = (timeNow.tv_sec ^ timeNow.tv_usec) ^ getpid();
   return (mySeed);
}

