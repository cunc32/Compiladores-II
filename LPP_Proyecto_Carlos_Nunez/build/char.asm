
	sub esp, 4
prg:
	push ebp
	mov ebp, esp
	sub esp, 4


	mov dword [ebp + 4], 72

	mov eax, 11
	mov ebx,dword [ebp + 4]
	int 0x80
	mov eax, 11
	mov ebx, 10
	int 0x80