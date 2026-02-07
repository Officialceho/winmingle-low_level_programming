; Author: Okoye Chijioke Henry
; Program: WinMingle Community C Training.
; Description: Prints Hello, WINMINGLE using printf.

global main
extern printf

section .data
msg db "Hello, WINMINGLE", 10, 0

section .text

main:
    mov rdi, msg
    xor rax, rax
    call printf
    ret

