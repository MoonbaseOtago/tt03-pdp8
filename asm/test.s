	.=0
	.word 0
	jmp	interrupt
start:
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
tt2:	.word 0xffe
interrupt: hlt
	.=0200
	jmp	start
	.page
t1:	.word 0xffe
t2:	.word tt2
rem_call:	
	.word 0
	iac
	tpc		#17
	jmp	i rem_call
rem_jmp:
	iac
	tpc		#19
	CLA CMA	
	tpc		#fff
	CLA CMA	CLL RAL	
	tpc		#ffe
	CLA CMA	CLL RTL	
	tpc		#ffd
	CLA IAC
	tpc		#1
	CLA CLL CML RTL
	tpc		#2
	CLA CLL CML RTR
	tpc		#1024
	CLA CMA CLL RAR
	tpc		#2047
	CLA CLL CML RAR
	tpc		#2048
	CLA iac bsw
	tpc		#0x040
	isz	t1
	iac
	tpc		#0x041
	isz	t1
	iac
	tpc		#0x041
	isz	i t2
	iac
	tpc		#0x042
	isz	i t2
	iac
	tpc		#0x042
	sza
	iac
	tpc		#0x043
	sna
	iac
	tpc		#0x043
	sma
	iac
	tpc		#0x044
	spa
	iac
	tpc		#0x044
	cla
	sza
	iac
	tpc		#0x0
	sna
	iac
	tpc		#0x1
	cma
	sma
	iac
	tpc		#0xffe
	spa
	iac
	tpc		#0xfff
	
	cla cll
	szl
	iac
	tpc		#0x0
	snl
	iac
	tpc		#0x1

	cml
	szl
	iac
	tpc		#0x2
	snl
	iac
	tpc		#0x2
	cla
	tad	i x1
	tpc		#0x123
	cla cma
	and	i x1
	tpc		#0x123
	iac
	dca	i x1
	tad	ax1
	tpc		#0x124
	mql
	tpc             #0
	swp	
	tpc             #0x124
	swp
	iac
	mqa
	tpc             #0x125

	hlt
x1:	.word ax1
ax1:	.word 0x123

