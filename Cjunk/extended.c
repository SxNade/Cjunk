/* 

"constraint" (variable)
a: eax,rax,ax,al
b: ebx,rbx,bx,bl
c: ecx....
.
.
.
r: anu general purpose register
g: use any general purpose reg or mem location

::something Like this::

__asm__("assembly code" : "a"(result): "d"(data1),"c"(data2))
this means : edx = data1, ecx = data2, result = eax
*/

#include <stdio.h>

int main() {
	
	int data1 = 10;
	int data2 = 20;
	int result;

	__asm__(
		"imull %%edx, %%ecx \n\t" /* Here imull tells to multiply content of edx with ecx and then store that in ecx*/
/* In extended Format we have to use Double Precentage Sign Before Registers */
		"movl %%ecx, %%eax"
		: "=a"(result) /* Result takes from eax and multiplication answer is in ecx from which we moved content to ecx
													in previous line*/
		: "d"(data1),"c"(data2)); /* a tells that result is going to get its value from eax
					   d tells that data1 is going to get its value from edx && c from ecx*/
	printf("The result is %d\n", result);	
	return 0;
}

/*The = sign before a in the line 31 signifies output ...what is in eax will be put into result 
where as with data1 and data2 they take input from edx and ecx! */




