section .data

section .text
    global ft_write  ; Declare the function as global

ft_write:
    mov rax, 0x01 ; syscall number for sys_write
    syscall
    ret