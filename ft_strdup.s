section .data

section .text
    global ft_strdup  ; Declare the function as global
    extern ft_strlen
    extern malloc

ft_strdup:
    push rdi ; Save the pointer to the string

    call ft_strlen
    inc rax ; Increment the length to include the null terminator
    mov rdi, rax ; Allocate memory for the new string
    call malloc wrt ..plt

    pop rdi ; Restore the pointer to the string
    mov rsi, rax ; Save the pointer to the new string
    mov rcx, 0 ; Counter

.loop:
    mov bl, [rdi + rcx] ; Load the character
    cmp bl, 0 ; Check if it is the null terminator
    je .end ; If it is, jump to the end
    mov BYTE [rsi + rcx], bl ; Copy the character
    inc rcx ; Increment the counter
    jmp .loop ; Repeat the loop

.end:
    mov BYTE [rsi + rcx], 0 ; Add null terminator
    mov rax, rsi ; Return the pointer to the new string
    ret