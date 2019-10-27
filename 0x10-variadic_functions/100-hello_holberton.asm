	global main

main:
	mov rax, 4
	mov rbx, 1
	mov rcx, msg
	mov rdx, 17
	int 0x80

	mov rbx, 0
	mov rax, 1
	int 0x80

	section .data
msg:	db 'Hello, Holberton', 10
