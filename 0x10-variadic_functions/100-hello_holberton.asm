	global main

main:
	mov rax,4
	mov rbx,1
	mov rcx,msg
	mov rdx,msglen
	int 0x80

	mov rax,1
	int 0x80

	section .data
msg:	db 'Hello, Holberton', 0xa
msglen:	equ $-msg
