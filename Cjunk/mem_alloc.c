/*
	AUTHOR: JUGNU
	PROJECT: Dynamic Memory Allocation
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char *str = NULL;

	/* Initial memory allocation */

	str = (char *) malloc(15);
	strcpy(str, "jugnu");	//Copying jugnu to str!
	printf("String = %s, Address = %p\n", str, str);

	/* Reallocating memory */
	str = (char *) realloc(str, 25);
	strcat(str, ".edu");	//Concatinating the strings!
	printf("String = %s, Address = %p\n", str, str);

	free(str); //To Free all The allocated memory

	return 0;
}

