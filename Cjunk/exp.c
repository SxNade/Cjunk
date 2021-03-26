#include <stdio.h>
#include <string.h>

int main() {
	char * str = "Hello World\n";
	long len = strlen(str);
	int ret = 0;

	__asm__(
		"movq $1,%%rax \n\t"		/* Double precentage remember the extended Format*/
		"movq $1, %%rdi \n\t"
		"movq %1, %%rsi \n\t"	/* %1 is output operand g(str)..we move it into rsi*/
		"movl %2, %%edx \n\t"	/* %2 is output operand g(len)..we move it into edx*/
		"syscall"
		: "=g"(ret)
		: "g"(str),"g"(len)
		);

}


