section .text
global ft_write
extern __errno_location

ft_write:
        mov rax , 1     				; num d'app system de write sur linux
        syscall       					; app system
        cmp rax , 0   					; verification d'erreur 
        jl  error      					; si rax (qui correspond au retour du syscall) negatif = error
        ret

error:
    	neg rax                         ; les codes errno sont positif
		mov r10, rax					; store value rax in r10
		push r10						; store value in stack
        call    __errno_location        ; appeler la fonction __errno_location qui renvoie l'adresse ou mettre l'erreur 
		pop r10
		mov [rax], r10 					; ici rax contient l'adresse de errno donc en faisant ca on met rdi dans errno
		mov rax, -1
		ret