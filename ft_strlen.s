section .text
global ft_strlen

ft_strlen:
    mov rax, 0          		; init rax to zero
loop:
    cmp BYTE [rdi + rax] , 0    ; check if we haven't reached the null char
    je end                      ; if char null retourner
    inc rax                     ; otherwise increase the compteur
    jmp loop                   	; continue the loop

end:
    ret                         ; return rax