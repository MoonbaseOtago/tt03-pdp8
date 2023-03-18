	.=0
	cla
	tad	f0
	tad	f1
	tpc		#3
	and	f0
	tpc		#1
	tad	f1
	tad	f1
	dca	f2
	tpc		#0
	tad	f2
	tpc		#5
	jms	local_call
	tad	f2
	tpc		#15
	jmp	cont
f0:	.word 1
f1:	.word 2
f2:	.word 0x99
local_call:
	.word	0
	tad	f2
	tpc		#10
	jmp	i local_call
cont:	iac
	tpc		#16
	jms	i rc
	iac
	tpc		#18
	jmp	i rj
rc:	.word	rem_call
rj:	.word	rem_jmp
	.page
rem_call:	
	.word 0
	iac
	tpc		#17
	jmp	i rem_call
rem_jmp:
	iac
	tpc		#19
	hlt

