
	sub esp, 0
prg:
	push ebp
	mov ebp, esp
	sub esp, 0



	mov [0x10000000], 72
	mov [0x10000001], 111
	mov [0x10000002], 108
	mov [0x10000003], 97
	mov [0x10000004], 32
	mov [0x10000005], 77
	mov [0x10000006], 117
	mov [0x10000007], 110
	mov [0x10000008], 100
	mov [0x10000009], 111
	mov [0x10000010], 0
	mov eax, 4
	lea ebx, [0x10000000]
	int 0x80
	mov eax, 11
	mov ebx, 10
	int 0x80