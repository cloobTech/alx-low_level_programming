section .data
	fmt db "%s", 10, 0
	msg db "hello world",0

section .text
	section .text
	extern printf
	global main

main:
	push	rbp
	mov	rsi, msg
	mov	rdi, fmt
	mov	rax, 0
	call	printf
	pop	rbp
	mov	rax, 0
	ret
