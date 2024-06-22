
	sub esp, 12
prg:
	push ebp
	mov ebp, esp
	sub esp, 8


	mov dword [ebp + 4], 3
	mov dword [ebp + 8], 2

	mov eax, dword [ebp + 4]
	mov ecx, dword [ebp + 8]
	imul ecx
	mov dword [ebp - 4], eax

	mov eax, dword [ebp - 4]
	mov dword [ebp + 12], eax

	mov eax, dword [ebp + 12]
	mov ecx, -2
	cdq
	cmp eax, 0
	jg div8
	cmp ecx, 0
	jg idiv8
	jmp div9
	idiv8:
	idiv ecx
	jmp enddiv8
	div8:
	cmp ecx, 0
	jl idiv8
	div ecx
	jmp enddiv8
	div9:
	mov ebx, -1
	imul ebx
	idiv ecx
	imul ebx
	enddiv8:
	mov dword [ebp - 8], eax


	mov eax, 1
	mov ebx, dword [ebp - 8]
	int 0x80
	mov eax, 11
	mov ebx, 10
	int 0x80