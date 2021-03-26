#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char str[100];
	int l, i;
	
	printf("\nReverse Bro!\n");
	printf("-----------------------------------------------------------");
	printf("\nEnter the String Bozzy:  ");
	scanf("%s", str);

	l = strlen(str);


	printf("The reverse order is : \n");

	for (i = l; i >=0; i--)
	{
		printf("%c", str[i]);
	}
	printf("\n");
	printf("------------------------------------------------\n");
}

