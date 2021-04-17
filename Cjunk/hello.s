.section .text
.globl _start

_start:
    mov     $1, %rax    /* System call in rax, write */
    mov     $1, %rdi    /* file handle 1 i.e stdout */
    mov     $message, %rsi
    mov     $13, %rdx
    syscall
    mov     $60, %rax   /* syscall to exit */
    xor     %rdi, %rdi  /* To return exit code */
    syscall

message:
    .ascii "Hello From ?"
    
