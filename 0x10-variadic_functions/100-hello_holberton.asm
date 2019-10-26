	section .text
	global main

main:
	mov edx,msglen
	mov ecx,msg
	mov ebx,1
	mov eax,4
	int 0x80

	mov eax,1
	int 0x80

	section .data
msg:	db 'Hello world!', 0xa
msglen:	equ $-msg
