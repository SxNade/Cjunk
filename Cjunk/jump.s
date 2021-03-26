.section .text
.globl _start

_start:
	nop
	movl $34, %eax
	jmp _bottom
	movl $67, %ebx
	nop

_bottom:
	movl $56, %ecx
	
