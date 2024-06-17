section .data

section .text
    global ft_read  ; Declare the function as global

    extern __errno_location

ft_read:
    mov rax, 0x00 ; syscall number for sys_read
    syscall

    cmp rax, 0 ; Check if the syscall failed
    jl .error ; If it did, jump to the error handling code
    ret

.error:
    neg rax ; Negate the return value
    mov rdi, rax ; Move the return value to rdi
    call __errno_location wrt ..plt ; Call __errno_location to get the error number
    mov [rax], rdi ; Move the error number to rdi
    mov rax, -1 ; Set the return value to -1
    ret