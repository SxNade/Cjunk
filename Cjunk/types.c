#include <stdio.h>

int main()
{

	int integerVar = 100;
	float floatingVar = 331.79;
	double doubleVar = 8.44e+11;
	char charVar = 'W';

	_Bool boolVar = 0;

	printf("integerVar = %i\n", integerVar); // %i signifies integer
	printf("floatingVar = %f\n", floatingVar); // %f signifies floating point number
	printf("doubleVar = %e\n", doubleVar); // %e signifies double 
	printf("doubleVar = %g\n", doubleVar); // %g is for double as well
	printf("charVar = %c\n", charVar); // %c will repersent char
	
	printf("boolVar = %i\n", boolVar); // %i as bool is also a integer

	return 0;

}


