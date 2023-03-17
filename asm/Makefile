all:	pdp8asm 

pdp8asm:	main.c pdp8asm.tab.c
	gcc -o pdp8asm main.c -g

pdp8asm.tab.c: pdp8asm.y
	bison pdp8asm.y -k

