
	sub esp, 8
prg:
	push ebp
	mov ebp, esp
	sub esp, 80


	mov dword [ebp + 4], 10

	mov ecx, dword [ebp + 4]
	cmp ecx, 10
	jl less8
	mov dword [ebp - 8], 0
	jmp nless8

less8:
	mov dword [ebp - 8], 1

nless8:

	mov ecx, 1
	cmp ecx, dword [ebp - 8]
	jne false4


	mov eax, 1
	mov ebx, 0
	int 0x80
	mov eax, 11
	mov ebx, 10
	int 0x80
	jmp endif4

false4:

	mov ecx, dword [ebp + 4]
	cmp ecx, 10
	jg greater16
	mov dword [ebp - 16], 0
	jmp ngreater16

greater16:
	mov dword [ebp - 16], 1

ngreater16:

	mov ecx, 1
	cmp ecx, dword [ebp - 16]
	jne endelif20


	mov eax, 1
	mov ebx, 100
	int 0x80
	mov eax, 11
	mov ebx, 10
	int 0x80

endelif20:

	mov ecx, dword [ebp + 4]
	cmp ecx, 10
	je equal24
	mov dword [ebp - 24], 0
	jmp nequal24

equal24:
	mov dword [ebp - 24], 1

nequal24:

	mov ecx, 1
	cmp ecx, dword [ebp - 24]
	jne endelif28


	mov eax, 1
	mov ebx, 10
	int 0x80
	mov eax, 11
	mov ebx, 10
	int 0x80

endelif28:

endif4:
	mov dword [ebp + 4], 5

	mov ecx, dword [ebp + 4]
	cmp ecx, 10
	jl less36
	mov dword [ebp - 36], 0
	jmp nless36

less36:
	mov dword [ebp - 36], 1

nless36:

	mov ecx, 1
	cmp ecx, dword [ebp - 36]
	jne false32


	mov eax, 11
	mov ebx,65
	int 0x80
	mov eax, 11
	mov ebx, 10
	int 0x80
	jmp endif32

false32:

	mov ecx, dword [ebp + 4]
	cmp ecx, 10
	jg greater40
	mov dword [ebp - 40], 0
	jmp ngreater40

greater40:
	mov dword [ebp - 40], 1

ngreater40:

	mov ecx, 1
	cmp ecx, dword [ebp - 40]
	jne endelif44


	mov eax, 1
	mov ebx, 100
	int 0x80
	mov eax, 11
	mov ebx, 10
	int 0x80

endelif44:

	mov ecx, dword [ebp + 4]
	cmp ecx, 10
	je equal48
	mov dword [ebp - 48], 0
	jmp nequal48

equal48:
	mov dword [ebp - 48], 1

nequal48:

	mov ecx, 1
	cmp ecx, dword [ebp - 48]
	jne endelif52


	mov eax, 1
	mov ebx, 10
	int 0x80
	mov eax, 11
	mov ebx, 10
	int 0x80

endelif52:

endif32:
	mov dword [ebp + 4], 73

	mov ecx, dword [ebp + 4]
	cmp ecx, 10
	jl less60
	mov dword [ebp - 60], 0
	jmp nless60

less60:
	mov dword [ebp - 60], 1

nless60:

	mov ecx, 1
	cmp ecx, dword [ebp - 60]
	jne false56


	mov eax, 1
	mov ebx, 0
	int 0x80
	mov eax, 11
	mov ebx, 10
	int 0x80
	jmp endif56

false56:

	mov ecx, dword [ebp + 4]
	cmp ecx, 10
	jg greater68
	mov dword [ebp - 68], 0
	jmp ngreater68

greater68:
	mov dword [ebp - 68], 1

ngreater68:

	mov ecx, 1
	cmp ecx, dword [ebp - 68]
	jne endelif72


	mov eax, 1
	mov ebx, 100
	int 0x80
	mov eax, 11
	mov ebx, 10
	int 0x80

endelif72:

	mov ecx, dword [ebp + 4]
	cmp ecx, 10
	je equal76
	mov dword [ebp - 76], 0
	jmp nequal76

equal76:
	mov dword [ebp - 76], 1

nequal76:

	mov ecx, 1
	cmp ecx, dword [ebp - 76]
	jne endelif80


	mov eax, 1
	mov ebx, 10
	int 0x80
	mov eax, 11
	mov ebx, 10
	int 0x80

endelif80:

endif56: