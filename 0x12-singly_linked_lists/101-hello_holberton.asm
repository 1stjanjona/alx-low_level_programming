section .data
    hello_fmt db "Hello, Holberton",10,0  ; The format string with newline
    hello_args db 0                      ; Null-terminated argument list

section .text
    global main
    extern printf

main:
    ; Call printf function
    mov rdi, hello_fmt
    mov rax, 0              ; printf has variable number of arguments, so set RAX to 0
    call printf

    ; Exit program
    mov rax, 60             ; syscall number for exit
    xor rdi, rdi            ; exit status 0
    syscall
