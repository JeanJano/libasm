section .data

section .text
    global ft_strcpy  ; Declare the function as global

ft_strcpy:
    mov rcx, 0 ; Counter

.loop:
    mov al, [rsi + rcx] ; Load the character from the dest
    cmp BYTE [rsi + rcx], 0 ; Check if it is the null terminator
    je  .end ; If it is, jump to the end
    mov BYTE [rdi + rcx], al ; Copy the character
    inc rcx ; Increment the counter
    jmp .loop ; Repeat the loop

.end:
    mov BYTE [rdi + rcx], 0 ; Add null terminator
    mov rax, rdi ; Return the destination pointer
    ret