section .data

section .text
    global ft_strcmp  ; Declare the function as global

ft_strcmp:
    mov rcx, 0 ; Counter

.loop:
    mov al, BYTE [rdi + rcx] ; Load the character from the s1
    cmp al, 0 ; Check if it is the null terminator
    je  .end ; If it is, jump to the end
    cmp BYTE [rsi + rcx], 0 ; Check if it is the null terminator
    je  .end ; If it is, jump to the end
    cmp BYTE [rsi + rcx], al ; Compare the characters
    jne .end ; If they are different, jump to the end
    inc rcx ; Increment the counter
    jmp .loop ; Repeat the loop

.end:
    mov rax, [rsi + rcx] ; Load the character from the s2
    sub rax, [rdi + rcx] ; Subtract the characters
    cmp rax, 0 ; Check if they are equal
    je  .equal ; If they are, jump to .equal
    jg  .less ; If the result is less than 0, jump to .less
    jl  .greater ; If the result is greater than 0, jump to .greater

.equal:
    mov rax, 0 ; Return 0
    ret

.less:
    mov rax, -1 ; Return -1
    ret

.greater:
    mov rax, 1 ; Return 1
    ret