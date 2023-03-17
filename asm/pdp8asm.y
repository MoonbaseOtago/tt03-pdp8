%token t_i t_z t_name t_value t_cll t_cml t_rar t_ral t_rtr t_rtl t_bsw t_and t_tad t_isz t_dca t_jms t_jmp t_word t_hlt t_szl t_sna t_skp t_snl t_sza t_sma  t_spa t_nl t_page t_cla t_ion t_iof t_caf t_skon t_tcf t_tsf t_tpc t_iac t_cma t_iot
%start  program
%%

exp:		e1 '+' exp		{ $$ = $1 + $3; }
	|	e1 '-' exp		{ $$ = $1 - $3; }
	|	e1			{ $$ = $1; }
	;

e1:		e2 '*' e1		{ $$ = $1 * $3; }
	|	e2 '/' e1		{ $$ = ($3==0?0:$1 / $3); }
	|	e2			{ $$ = $1; }
	;
e2:		'+' e2 			{ $$ = $2; }
	|	'-' e2 			{ $$ = -$2; }
	|	'(' exp ')' 		{ $$ = $2; }
	|	t_value 		{ $$ = $1; }
	;

mem:		t_name 			{ $$ = ref_label($1, 0);} 
	|	t_z exp		 	{ $$ = $1|0x80;  }
	|	exp		 	{ $$ = $1; }
	;

memr:		mem			{ $$ = $1; }
	|	t_i mem			{ $$ = $1|0x100; }
	;

io:		t_tsf			{ $$ = (4<<3)|1; }
	|	t_tcf			{ $$ = (4<<3)|2; }
	|	t_tpc			{ $$ = (4<<3)|4; }
	|	t_ion			{ $$ = (0<<3)|1; }
	|	t_iof			{ $$ = (0<<3)|2; }
	|	t_skon			{ $$ = (0<<3)|0; }
	|	t_caf			{ $$ = (0<<3)|7; }
	|	t_iot exp ',' exp	{ $$ = (($2&0x3f)<<3)|($3&7); }
	;

ins:		t_and  memr 		{  $$ = $2; }      
	|	t_tad  memr     	{  $$ = (1<<9)| $2; }
	|	t_isz  memr     	{  $$ = (2<<9)| $2; }
	|	t_dca  memr     	{  $$ = (3<<9)| $2; }
	|	t_jms  memr     	{  $$ = (4<<9)| $2; }
	|	t_jmp  memr     	{  $$ = (5<<9)| $2; }
	|	io		     	{  $$ = (6<<9)| $1; }
	|	opr		     	{  $$ = (7<<9)| $1; }
	|	'.' t_word exp		{ $$ = $3; }
	|	'.' t_word t_name 	{ $$ = 0; ref_label($3, 1);}
	|	'.' t_word t_name '+' exp { $$ = $5; ref_label($3, 1); }
	;

opr:		t_cla group1		{ $$ = (1<<7)|$2; }
	|	t_cla group2		{ $$ = (3<<7)|$2; }
	|	t_cla 			{ $$ = (1<<7); }
	|	group1			{ $$ = $1; }
	|	group2			{ $$ = $1|(2<<7); }
	;

g1:		t_cll			{ $$ = (1<<6); }
	|	t_cma			{ $$ = (1<<5); }
	|	t_cml			{ $$ = (1<<4); }
	|	t_rar			{ $$ = 4<<1; }
	|	t_ral			{ $$ = 2<<1; }
	|	t_rtr			{ $$ = 5<<1; }
	|	t_rtl			{ $$ = 3<<1; }
	|	t_bsw			{ $$ = 6<<1; }
	|	t_iac			{ $$ = 1<<0; }
	;

group1:		g1 			{ $$ = $1;}
	|	group1 g1		{ $$ = $1|$2;}
	;

g2a1:		t_sma			{ $$ = 8<<4; }
	|	t_sza			{ $$ = 4<<4; }
	|	t_snl			{ $$ = 2<<4; }
	;

g2a2:		t_skp			{ $$ = (1<<4); }
	|	t_spa			{ $$ = (9<<4); }
	|	t_sna			{ $$ = (5<<4); }
	|	t_szl			{ $$ = (3<<4); }
	;

g2a1l:		g2a1			{ $$ = $1; }
	|	g2a1l g2a1		{ $$ = $1|$2; }
	;

g2a2l:		g2a2			{ $$ = $1; }
	|	g2a2l g2a2		{ $$ = $1|$2; }
	;

group2:		g2a1l			{ $$ = $1; }
	|	g2a2l			{ $$ = $1; }
	|	t_hlt			{ $$ = 2; }
	|	g2a1l t_hlt		{ $$ = $1|2; }
	|	g2a2l t_hlt		{ $$ = $1|2; }
	;



label:		t_name ':'		{ declare_label($1); }
	|	t_name ','		{ declare_label($1); }
	;

line:		label t_nl 		
	|	label ins t_nl		{ process_op($2);  }
	|	ins t_nl		{ process_op($1);  }
	|	'.' '=' exp t_nl	{ pc = $3; }
	|	'.' '=' '.' '+' exp t_nl{ pc += $5; }
	|	'.' t_page t_nl		{ pc += (pc+0x7f)&~0x7f; }
	|	t_nl
	;

program:	line
	|	program line
	;
