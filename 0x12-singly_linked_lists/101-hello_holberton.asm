extern _printf
global _main

section .text

_start:
_main :
	push msg
	call _printf
	ret

section .data
	msg db "Hello, Holberton", 0xa
	len equ $ -msg
