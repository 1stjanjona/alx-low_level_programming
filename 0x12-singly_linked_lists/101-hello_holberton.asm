section .data
    hello_fmt db "Hello, Holberton",10,0  ; The format string with newline

section .text
    global main
    extern printf

main:
    ; Call printf function
    mov rdi, hello_fmt
    xor rax, rax              ; Clear RAX register (no xmm registers used, so no need for RAX = 0)
    call printf

    ; Exit program
    mov rax, 60             ; syscall number for exit
    xor rdi, rdi            ; exit status 0
    syscall
