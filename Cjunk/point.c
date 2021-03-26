#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int number = 0;
	int *pnumber = NULL;

	number = 10;
	printf("numbers address: %p\n", &number);
	printf("numbers value: %d\n\n", number);

	pnumber = &number;	//Store the address of number in pointer pnumber

	printf("pnumbers address: %p\n", pnumber);
	printf("size of pnumber: %zd bytes\n", sizeof(pnumber));
	printf("value pnumber is pointing to: %d\n", *pnumber);	//Dereferencing it using the * 
	return 0;
}

