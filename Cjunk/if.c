#include <stdio.h>

int main()
{
	int number_to_test, remainder;
	
	printf("Enter a number to be Tested!: ");
	scanf("%i", &number_to_test);
	remainder = number_to_test % 2;

	//Lets Begin the if statement now

	if ( remainder == 0 )
	{
		printf("\nThe number seems to be Even!\n");
	}
	else
	{
		printf("\nThe number seems to be Odd\n");
	
	}	
	return 0;
}

