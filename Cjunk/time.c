/*
	Author: Jugnu
	Purpose: Convert Years,min,sec wtf...!
*/

#include <stdio.h>

int main()
{
	long float min;
	printf("\n[*] Ready to Calculate Years|min|sec \n");
	printf("\nEnter the number of Minutes you wish to convert: ");
	scanf("%f", &min);
	printf("\n\nHere are the number of minutes:: %f", min);
	
	long float years;
	long float min_in_years = 365 * 24 * 60;

	years = min / min_in_years;
	
	printf("\n\nThe Number of Years Equal To: %f\n\n", years);
}


