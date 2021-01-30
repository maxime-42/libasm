global ft_strdup
extern malloc
extern ft_strlen
extern ft_strcpy
extern __errno_location

ft_strdup:
	call	ft_strlen		; call ft_strlen (rdi) where rdi is still * s
	push	rdi				; rdi contains * s which we will need later for ft_strcpy. We push in the stack to not lose * s
	inc	rax					; rax contains the size returned by ft_strlen, we increment by 1 pr the \ 0
	mov	rdi, rax			; rdi will be sent to malloc so must equal the number of characters in * s ie rax
	call	malloc			;called for malloc malloquer the new chain of characters rax (return the pointer to the memory space in rax)
	cmp	rax, 0				; if malloc failure
	jz	error				; if failure jump in return
	mov	rdi, rax			; we put rax in rdi so that rdi has the memory space for then send to strcpy
	pop	rsi					; I put * s back in rsi
	call ft_strcpy			; cpopy rsi in rdi
	ret						; return rax

error:
	neg	rax						; because the call to malloc returns in rax errno but in negative
	mov	rdi,	rax				; rdi serves as a buffer because after rax will take the return from errno location
	call	__errno_location	; errno location returns in rax a pointer to errno
	mov	[rax], rdi				; from where we put the value of rdi in rax
	mov	rax, -1					; we set rax to -1 to return the correct value of a call to strdup
	ret							; return rax