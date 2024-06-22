
	sub esp, 4
prg:
	push ebp
	mov ebp, esp
	sub esp, 12


	mov dword [ebp + 4], 1
while4:

	mov edx, dword [ebp + 4]
	cmp edx, 100
	jle lesse8
	mov dword [ebp - 8], 0
	jmp nlesse8

lesse8:
	mov dword [ebp - 8], 1

nlesse8:
	mov edx, 1
	cmp edx, dword [ebp - 8]
	jne endwhile4

	mov eax, 1
	mov ebx, dword [ebp + 4]
	int 0x80
	mov eax, 11
	mov ebx, 10
	int 0x80

	mov edx, dword [ebp + 4]
	add edx, 1
	mov dword [ebp - 16], edx

	mov eax, dword [ebp - 16]
	mov dword [ebp + 4], eax
	jmp while4
endwhile4: