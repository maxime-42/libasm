global ft_strcpy

ft_strcpy:
	mov		rcx, 0					; on copie 0 dans rcx

loop:
	cmp		byte [rsi + rcx], 0		; if rsi[rcx] == '\0' --> ZF = 1
	jz		return					; si ZF = 1 on va à return
	mov		dl, [rsi + rcx]			; copy the character to copy (rsi [rcx]) to dl (because dl is 1 byte)
	mov		[rdi + rcx], dl			; copy the character to copy which is in dl to rdi [rcx]
	inc		rcx						; we increment rcx
	jmp		loop					; on loop

return:
	mov		byte [rdi + rcx], 0		; we add the final 0
	mov		rax, rdi				; we put in rax the char * we send back
	ret