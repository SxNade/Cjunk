#include <stdio.h>

int main()
{
	printf("\nVariables of Type Char Occupy %zd\n", sizeof(char));	
	printf("\nVariables of Type short Occupy %zd\n", sizeof(short));	
	printf("\nVariables of Type int Occupy %zd\n", sizeof(int));
	printf("\nVariables of Type long Occupy %zd\n", sizeof(long));
	printf("\nVariables of Type long-long Occupy %zd\n", sizeof(long long));
	printf("\nVariables of Type float Occupy %zd\n", sizeof(float));
	printf("\nVariables of Type double Occupy %zd\n", sizeof(double));	
	printf("\nVariables of Type long double Occupy %zd\n", sizeof(long double));
	
	return 0;
}

