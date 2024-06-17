section .data

section .text
    global ft_read  ; Declare the function as global

ft_read:
    mov rax, 0x00 ; syscall number for sys_read
    syscall
    ret