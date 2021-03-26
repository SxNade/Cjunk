.section .data
data:
    .int 40

.section .text
.globl _start

_start:
    nop
    movl    $0, %eax
    movl    $0, %ebx
    movb    $20, %al
    subb    $10, %al    /* subb means subtract byte */
    movsx   %al, %eax   /* moving from lower to higher bit by maintaning the same value::also helps to maintain sign */
    movw    $100, %cx
    subw    %cx, %bx    /* subtract content of cx from bx and save result back into bx */
    movsx   %bx, %ebx
    movl    $100, %edx
    subl    %eax, %edx
    subl    data, %eax
    subl    %eax, data
    
    /* Generating the interrupt */

    movl    $1, %eax
    movl    $0, %ebx
    int     $0x80

