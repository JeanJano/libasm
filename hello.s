section .data
    hello_msg db 'Hello world!', 0x0A  ; Define the null-terminated string 'Hello world\n'

section .text
    global _start   ; Entry point for the linker

_start:
    ; Write the string to stdout (file descriptor 1)
    mov rax, 4      ; System call number for sys_write
    mov rbx, 1      ; File descriptor 1 (stdout)
    mov rcx, hello_msg  ; Pointer to the string
    mov rdx, 13     ; Length of the string
    int 0x80        ; Invoke syscall

    ; Exit the program
    mov rax, 1      ; System call number for sys_exit
    xor rbx, rbx    ; Exit status (0)
    int 0x80        ; Invoke syscall