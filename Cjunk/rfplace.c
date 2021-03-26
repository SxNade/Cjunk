#include <stdio.h>

int main() {

	int data1 = 10;
	int data2 = 20;

	__asm__(

		"imull %1, %0 \n\t"	/* %1 refers to data1 the input and %0 [refers to the result or the return value] output data2*/
		:"=r"(data2)
		:"r"(data1),"0"(data2) /* This 0 refers to the %0 remember they are sharing a common variable*/

	);

	printf("The Result is %d\n",data2);
	return 0;

}

/*So data2 is not only storing the value 20 but also the result of multiplication*/

