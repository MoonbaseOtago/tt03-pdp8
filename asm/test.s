	.=0
	cla
	tad	f0
	tad	f1
	iot     0x3f , 4
	hlt
f0:	.word 1
f1:	.word 2
