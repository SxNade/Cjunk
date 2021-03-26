#include <stdio.h>
#include <stdlib.h>


int str_len(const char string[]);


int str_len(const char string[])
{
	int count = 0;

	while (string[count] != '\0')
		++count;
	return count;	//Return the value of count when the Loop Ends...
}

//Lets Use this Now...

int main()
{	
	char str[100];
	int len;
	printf("Hey Enter a Word: ");
	scanf("%s", str);

	len = str_len(str);

	printf("\nThe Length of Entred String is %i\n", len);
	return 0;
}

