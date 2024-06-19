section .data

section .text
    global ft_list_size  ; Declare the function as global

ft_list_size:
    mov rax, 0  ; Counter
    cmp rdi, 0
    je .end

.loop:
    inc rax
    mov rdi, QWORD[rdi + 8] ; Move to the next element
    cmp rdi, 0
    jne .loop

.end:
    ret