/*
	__asm("assembly code
		
		: "=r"(result)
		: "r"(data1), "r"(data2));

		will produce:
		%0 will repersent reg for result
		%1 will repersent reg for data1
		%2 will repersent reg for data2

# Remeber r here tells to take from any general purpose register
# and also remeber that the equal sign before r in line 4 is for output
*/

#include <stdio.h>

int main() {
	
	int data1 = 10;
	int data2 = 20;
	int result;

	__asm__(
		"imull %1, %2 \n\t" /* as we know these will be random registers so we multiply %1 by %2 and then store it in
					%2 after we move %2 to %0 which is the register of result =r "=" for output*/
		"movl %2, %0 \n\t"
		:"=r"(result)
		:"r"(data1),"r"(data2)
);

	printf("The Result is %d\n",result);
	return 0;

}

