
	sub esp, 0
prg:
	push ebp
	mov ebp, esp
	sub esp, 0



#set byte [0x10000000] = ["Hola Mundo", 0]
	mov eax, 4
	lea ebx, [0x10000000]
	int 0x80
	mov eax, 11
	mov ebx, 10
	int 0x80