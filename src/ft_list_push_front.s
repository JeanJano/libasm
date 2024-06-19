section .data

section .text
    global ft_list_push_front  ; Declare the function as global
    extern malloc

ft_list_push_front:
    push rsi
    mov rbx, rdi ; Save the pointer to the list

    mov rdi, 16 ; 2 data members of 8 bytes each
    call malloc wrt ..plt ; Allocate memory for the new element
    cmp rax, 0 ; Check if malloc failed
    je .end ; If it did, jump to the error handling code

    pop rsi
    mov [rax], rsi ; Set the data of the new element
    mov rcx, [rbx] ; dereference the pointer to the list
    mov [rax + 8], rcx ; Set the next pointer of the new element
    mov [rbx], rax ; Set the new element as the head of the list

.end:
    ret