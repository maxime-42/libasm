global ft_strcmp

ft_strcmp:
	loop:
		movzx rax, byte [rdi]		;  move the contents of memory rdi into a register rax
		movzx rcx, byte [rsi]		;  move the contents of memory into a register rcx
		sub rax, rcx				;  
		jnz return					; if is not zero thus not the same character
		cmp byte [rdi], 0			; end string
		je return
		inc rdi
		inc rsi
		jmp loop
	return:
		ret