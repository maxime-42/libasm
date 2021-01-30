global	ft_read
extern	__errno_location

ft_read:
	mov		rax, 0				; syscall a read
	syscall
	cmp		rax, 0				; compare if the return of syscall is equal to 0
	jl		error				; if rax is less than 0 we go to error
	ret							; otherwise we return rax

error:
	neg		rax					; because the syscall returns in rax errno but in negative
	mov		rdi, rax			; rdi serves as a buffer because after rax will take the return from errno location
	call	__errno_location	;errno location returns a pointer to errno in rax
	mov		[rax], 	rdi			; from where we put rdi in errno
	mov		rax, -1				; we put -1 in rax to return the correct value of a call to read
	ret						; return rax