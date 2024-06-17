section .data

section .text
    global ft_strlen  ; Declare the function as global

ft_strlen:
    mov rax, 0  ; Counter

.loop:
    mov bl, [rdi + rax] ; Load the character
    cmp bl, 0   ; Check if it is the null terminator
    je .end     ; If it is, jump to the end
    inc rax     ; Increment the counter
    jmp .loop   ; Repeat the loop

.end:
    ret