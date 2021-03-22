#include <stdio.h>

int main()
{
	int number, sign;

	printf("Type a Number Bozzy: ");
	scanf("%i", &number);

	if ( number < 0 )
		sign = -1;
	else if ( number == 0 )
		sign == 0;
	else //Must be positive
		sign = 1;
	
	printf("Sign = %i\n", sign);
	return 0; 
}

