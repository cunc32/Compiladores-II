
	sub esp, 8
prg:
	push ebp
	mov ebp, esp
	sub esp, 48


	mov dword [ebp + 4], 10

	mov edx, dword [ebp + 4]
	cmp edx, 10
	jl less8
	mov dword [ebp - 8], 0
	jmp nless8

less8:
	mov dword [ebp - 8], 1

nless8:

	mov edx, 1
	cmp edx, dword [ebp - 8]
	jne false4


	mov eax, 1
	mov ebx, 0
	int 0x80
	mov eax, 11
	mov ebx, 10
	int 0x80
	jmp endif4

false4:

	mov edx, dword [ebp + 4]
	cmp edx, 10
	jg greater12
	mov dword [ebp - 12], 0
	jmp ngreater12

greater12:
	mov dword [ebp - 12], 1

ngreater12:

	mov edx, 1
	cmp edx, dword [ebp - 12]
	jne endelif12


	mov eax, 1
	mov ebx, 100
	int 0x80
	mov eax, 11
	mov ebx, 10
	int 0x80

endelif12:

	mov edx, dword [ebp + 4]
	cmp edx, 10
	je equal16
	mov dword [ebp - 16], 0
	jmp nequal16

equal16:
	mov dword [ebp - 16], 1

nequal16:

	mov edx, 1
	cmp edx, dword [ebp - 16]
	jne endelif16


	mov eax, 1
	mov ebx, 10
	int 0x80
	mov eax, 11
	mov ebx, 10
	int 0x80

endelif16:

endif4:
	mov dword [ebp + 4], 5

	mov edx, dword [ebp + 4]
	cmp edx, 10
	jl less24
	mov dword [ebp - 24], 0
	jmp nless24

less24:
	mov dword [ebp - 24], 1

nless24:

	mov edx, 1
	cmp edx, dword [ebp - 24]
	jne false20


	mov eax, 11
	mov ebx,65
	int 0x80
	mov eax, 11
	mov ebx, 10
	int 0x80
	jmp endif20

false20:

	mov edx, dword [ebp + 4]
	cmp edx, 10
	jg greater28
	mov dword [ebp - 28], 0
	jmp ngreater28

greater28:
	mov dword [ebp - 28], 1

ngreater28:

	mov edx, 1
	cmp edx, dword [ebp - 28]
	jne endelif28


	mov eax, 1
	mov ebx, 100
	int 0x80
	mov eax, 11
	mov ebx, 10
	int 0x80

endelif28:

	mov edx, dword [ebp + 4]
	cmp edx, 10
	je equal32
	mov dword [ebp - 32], 0
	jmp nequal32

equal32:
	mov dword [ebp - 32], 1

nequal32:

	mov edx, 1
	cmp edx, dword [ebp - 32]
	jne endelif32


	mov eax, 1
	mov ebx, 10
	int 0x80
	mov eax, 11
	mov ebx, 10
	int 0x80

endelif32:

endif20:
	mov dword [ebp + 4], 73

	mov edx, dword [ebp + 4]
	cmp edx, 10
	jl less40
	mov dword [ebp - 40], 0
	jmp nless40

less40:
	mov dword [ebp - 40], 1

nless40:

	mov edx, 1
	cmp edx, dword [ebp - 40]
	jne false36


	mov eax, 1
	mov ebx, 0
	int 0x80
	mov eax, 11
	mov ebx, 10
	int 0x80
	jmp endif36

false36:

	mov edx, dword [ebp + 4]
	cmp edx, 10
	jg greater44
	mov dword [ebp - 44], 0
	jmp ngreater44

greater44:
	mov dword [ebp - 44], 1

ngreater44:

	mov edx, 1
	cmp edx, dword [ebp - 44]
	jne endelif44


	mov eax, 1
	mov ebx, 100
	int 0x80
	mov eax, 11
	mov ebx, 10
	int 0x80

endelif44:

	mov edx, dword [ebp + 4]
	cmp edx, 10
	je equal48
	mov dword [ebp - 48], 0
	jmp nequal48

equal48:
	mov dword [ebp - 48], 1

nequal48:

	mov edx, 1
	cmp edx, dword [ebp - 48]
	jne endelif48


	mov eax, 1
	mov ebx, 10
	int 0x80
	mov eax, 11
	mov ebx, 10
	int 0x80

endelif48:

endif36: