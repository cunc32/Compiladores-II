
	sub esp, 4
prg:
	push ebp
	mov ebp, esp
	sub esp, 8


	mov dword [ebp + 4], 1

	mov eax, dword [ebp + 4]
	cmp eax, 1
	je verdadero4
	mov [0x10000000], 70
	mov [0x10000001], 97
	mov [0x10000002], 108
	mov [0x10000003], 115
	mov [0x10000004], 111
	mov [0x10000005], 0
	jmp cprint4
verdadero4:
	mov [0x10000000], 86
	mov [0x10000001], 101
	mov [0x10000002], 114
	mov [0x10000003], 100
	mov [0x10000004], 97
	mov [0x10000005], 100
	mov [0x10000006], 101
	mov [0x10000007], 114
	mov [0x10000008], 111
	mov [0x10000009], 0
cprint4:
	mov eax, 4
	lea ebx, [0x10000000]
	int 0x80
	mov eax, 11
	mov ebx, 10
	int 0x80
	mov dword [ebp + 4], 0

	mov eax, dword [ebp + 4]
	cmp eax, 1
	je verdadero8
	mov [0x10000000], 70
	mov [0x10000001], 97
	mov [0x10000002], 108
	mov [0x10000003], 115
	mov [0x10000004], 111
	mov [0x10000005], 0
	jmp cprint8
verdadero8:
	mov [0x10000000], 86
	mov [0x10000001], 101
	mov [0x10000002], 114
	mov [0x10000003], 100
	mov [0x10000004], 97
	mov [0x10000005], 100
	mov [0x10000006], 101
	mov [0x10000007], 114
	mov [0x10000008], 111
	mov [0x10000009], 0
cprint8:
	mov eax, 4
	lea ebx, [0x10000000]
	int 0x80
	mov eax, 11
	mov ebx, 10
	int 0x80