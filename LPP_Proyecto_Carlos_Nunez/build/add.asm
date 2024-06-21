
	sub esp, 24
prg:
	push ebp
	mov ebp, esp
	sub esp, 4


	mov dword [ebp + 4], 65
	mov dword [ebp + 8], 27

	mov edx, dword [ebp + 4]
	add edx, dword [ebp + 8]
	mov dword [ebp - 4], edx

	mov eax, dword [ebp - 4]
	mov dword [ebp + 12], eax

	mov edx, dword [ebp + 12]
	sub edx, dword [ebp + 4]
	mov dword [ebp - 4], edx


	mov eax, 1
	mov ebx, dword [ebp - 4]
	int 0x80
	mov eax, 11
	mov ebx, 10
	int 0x80
	mov eax, dword [ebp + 12]
	mov dword [ebp + 16], eax
	mov dword [ebp + 20], 123

	mov edx, dword [ebp + 16]
	add edx, dword [ebp + 20]
	mov dword [ebp - 8], edx

	mov eax, dword [ebp - 8]
	mov dword [ebp + 24], eax

	mov eax, 1
	mov ebx, dword [ebp + 24]
	int 0x80
	mov eax, 11
	mov ebx, 10
	int 0x80