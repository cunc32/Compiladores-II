
	sub esp, 4
prg:
	push ebp
	mov ebp, esp
	sub esp, 8


	mov dword [ebp + 4], 1
dwhile4:

	mov eax, 1
	mov ebx, dword [ebp + 4]
	int 0x80
	mov eax, 11
	mov ebx, 10
	int 0x80

	mov edx, dword [ebp + 4]
	add edx, 1
	mov dword [ebp - 12], edx

	mov eax, dword [ebp - 12]
	mov dword [ebp + 4], eax


	mov edx, dword [ebp + 4]
	cmp edx, 100
	jg greater8
	mov dword [ebp - 8], 0
	jmp ngreater8

greater8:
	mov dword [ebp - 8], 1

ngreater8:
	mov edx, 1
	cmp edx, dword [ebp - 8]
	jne dwhile4
	jmp enddwhile4
enddwhile4: