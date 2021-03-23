#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Guess the NUmber Bozzy

int main()
{	
	printf("\nNUMBER GUESSING GAME---I CHOOSE A NUMBER BETWEEN 1-20 GUESS IT!\n");
	
	//Generating a Random number
	time_t t;
	srand((unsigned) time(&t));
	int rd_num = rand() % 21;	//21 for random number between 0-20//
	int tries = 1;
	int num;
	
	//start the loop
	while ( tries <= 5)
	{	
		printf("\nYou have %i Tries Left",(5-tries));
		printf("\nEnter Your Guess: ");
		scanf("%i", &num);
		++tries;
		if (rd_num == num)
		{
			printf("\nCongratulations your Guess is Right");
			printf("\nNow You Get a Chance to sleep with sunny-leone\n");
			break;
		}
		
		else if (rd_num < num)
		{
			printf("\nSorry %i is a Worng Guess, My number is Less than that", num);
			continue;
		}
		else if (rd_num > num)
		{
			printf("\nSorry %i is a Wrong Guess, My number is More than that", num);
			continue;
		}
	}


}
