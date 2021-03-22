#include <stdio.h>

int main()
{
	_Bool a = 1;
	_Bool b = 1;
	_Bool result;

	result = a && b;	//&& will give 1[True] if both  a and b are True if either one is 0 it gives False//
	
	printf("%d", result);
	return 0;
}

