section .data

section .text
    global ft_list_push_front  ; Declare the function as global
    extern malloc

ft_list_push_front:
    mov QWORD rbx, rdi ; Save the pointer to the list

    mov rdi, 16 ; Allocate memory for the new element
    call malloc wrt ..plt ; Allocate memory for the new element
    cmp rax, 0 ; Check if malloc failed
    je .end ; If it did, jump to the error handling code

    mov QWORD [rax], rsi ; Set the data of the new element
    mov QWORD [rax + 8], rbx ; Set the next pointer of the new element

.end:
    ret