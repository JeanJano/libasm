section .data

section .text
    global ft_strdup  ; Declare the function as global

    extern ft_strlen
    extern ft_strcpy
    extern malloc

ft_strdup:
    push rdi ; Save the pointer to the string
    call ft_strlen

    inc rax ; Increment the length to include the null terminator
    mov rdi, rax ; Allocate memory for the new string
    call malloc wrt ..plt

    cmp rax, 0 ; Check if malloc failed
    je .error ; If it did, jump to the error handling code

    pop rdi ; Restore the pointer to the string
    mov rsi, rdi ; Copy the pointer to the string
    mov rdi, rax
    call ft_strcpy ; Copy the string

.error:
    ret