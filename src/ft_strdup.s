section .data

section .text
    global ft_strdup  ; Declare the function as global
    extern ft_strlen
    extern malloc

    extern __errno_location

ft_strdup:
    push rdi ; Save the pointer to the string

    call ft_strlen
    inc rax ; Increment the length to include the null terminator
    mov rdi, rax ; Allocate memory for the new string
    call malloc wrt ..plt

    cmp rax, 0 ; Check if malloc failed
    jl .error ; If it did, jump to the error handling code

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

.error:
    neg rax ; Negate the return value
    mov rdi, rax ; Move the return value to rdi
    call __errno_location wrt ..plt ; Call __errno_location to get the error number
    mov [rax], rdi ; Move the error number to rdi
    mov rax, -1 ; Set the return value to -1
    ret