#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define YYDEBUG 1

unsigned short code[4096];
int pc=0;


int yyval;
int line=1;
int errs=0;

void declare_label(int ind);
void process_op(int ins);
int ref_label(int ind, int type);

int yylex(void);
void yyerror(char *err);

#include "pdp8asm.tab.c"

struct tab {char *name; int token; };

struct tab reserved[] = {
	"acl", t_acl,
	"ACL", t_acl,
	"mqa", t_mqa,
	"MQA", t_mqa,
	"mql", t_mql,
	"MQL", t_mql,
	"cam", t_cam,
	"CAM", t_cam,
	"swp", t_swp,
	"SWP", t_swp,
	"nop", t_nop,
	"NOP", t_nop,
	"page", t_page,
	"PAGE", t_page,
	"word", t_word,
	"WORD", t_word,
	"skon", t_skon,
	"SKON", t_skon,
	"iot", t_iot,
	"IOT", t_iot,
	"caf", t_caf,
	"CAF", t_caf,
	"bsw", t_bsw,
	"BSW", t_bsw,
	"hlt", t_hlt,
	"HLT", t_hlt,
	"szl", t_szl,
	"SZL", t_szl,
	"sna", t_sna,
	"SNA", t_sna,
	"spa", t_spa,
	"SPA", t_spa,
	"skp", t_skp,
	"SKP", t_skp,
	"snl", t_snl,
	"SNL", t_snl,
	"sza", t_sza,
	"SZA", t_sza,
	"sma", t_sma,
	"SMA", t_sma,
	"rtl", t_rtl,
	"RTL", t_rtl,
	"rtr", t_rtr,
	"RTR", t_rtr,
	"ral", t_ral,
	"RAL", t_ral,
	"rar", t_rar,
	"RAR", t_rar,
	"iac", t_iac,
	"IAC", t_iac,
	"cll", t_cll,
	"CLL", t_cll,
	"cma", t_cma,
	"CMA", t_cma,
	"cml", t_cml,
	"CML", t_cml,
	"cla", t_cla,
	"CLA", t_cla,
	"iof", t_iof,
	"IOF", t_iof,
	"ion", t_ion,
	"ION", t_ion,
	"tcf", t_tcf,
	"TCF", t_tcf,
	"tsf", t_tsf,
	"TSF", t_tsf,
	"tpc", t_tpc,
	"TPC", t_tpc,
	"jmp", t_jmp,
	"JMP", t_jmp,
	"jms", t_jms,
	"JMS", t_jms,
	"dca", t_dca,
	"DCA", t_dca,
	"isz", t_isz,
	"ISZ", t_isz,
	"tad", t_tad,
	"TAD", t_tad,
	"and", t_and,
	"AND", t_and,
	"I", t_i,
	"i", t_i,
	"Z", t_z,
	"z", t_z,
	0, 0
};

struct symbol {
	char *name;
	int offset;
	int index;
	struct symbol *next;
	unsigned char found;	// 0 referenced, 1 defined
};
int sym_index=0;
struct symbol *list=0;

struct reloc {
	int offset;
	int index;
	int line;
	int type;
	struct reloc *next;
};
int reloc_index=0;
struct reloc *reloc_first;
struct reloc *reloc_last;

void
declare_label(int ind)
{
	struct symbol *sp;
	for (sp = list; sp; sp = sp->next) 
	if (sp->index == ind) {
		if (sp->found) {
			errs++;
			fprintf(stderr, "%d: label '%s' declared twice\n", line, sp->name);
		}
//printf("ind=%d offset=%d\n", ind, pc);
		sp->offset = pc;
		sp->found = 1;
		return;
	}
	assert(1);
}
int
ref_label(int ind, int type)
{
	struct reloc *rp;
	rp = malloc(sizeof(*rp));
	rp->offset = pc;
	rp->index = ind;
	rp->line = line-1;
	rp->type = type;
	rp->next = 0;
	if (reloc_last) {
		reloc_last->next = rp;
		reloc_last = rp;
	} else {
		reloc_first = rp;
		reloc_last = rp;
	}
	return 0;
}

void
process_op(int ins)
{
	static int over=0;

	if (pc >= (sizeof(code)/sizeof(code[0]))) {
		if (!over) {
			fprintf(stderr, "%d: ran out of code space\n", line-1);
			errs++;
			over = 1;
		}
		return;
	}
//printf("@%x %o\n", pc, ins);
	code[pc++] = ins;
}

FILE *fin;
int eof=0;

void
yyerror(char *err)
{
	errs++;
	fprintf(stderr, "%d: %s\n", line, err);
}

int
yylex(void)
{
	int c;

	if (eof)
		return 0;
	c = fgetc(fin);
	while (c == ' ' || c == '\t')
		c = fgetc(fin);
	if (c == EOF) {
		eof = 1;
		line++;
		return t_nl;
	} else
	if (c == '#') {
		for (;;) {
			c = fgetc(fin);
			if (c == EOF || c == '\n')
				break;
		}
		line++;
		return t_nl;
	} else
	if (c == '\n') {
		line++;
		return t_nl;
	} else
	if (c >= '0' && c <= '9') {
		int ind;
		char v[100];
		char c1;
		c1 = c;
		ind = 0;
		v[ind++] = c;
		c = fgetc(fin);
		if (c1 == '0' && (c == 'x' || c == 'X')) {
			v[ind++] = c;
			c = fgetc(fin);
			while (isxdigit(c)) {
				if (ind < (sizeof(v)-1))
					v[ind++] = c; 
				c = fgetc(fin);
			}
			v[ind] = 0;
			ungetc(c, fin);
			yylval = strtol(v, NULL, 16);
		} else {
			while (isdigit(c)) {
				if (ind < (sizeof(v)-1))
					v[ind++] = c; 
				c = fgetc(fin);
			}
			v[ind] = 0;
			ungetc(c, fin);
			yylval = strtol(v, NULL, 0);
		}
		return t_value;
	} else
	if ((c >= 'a' && c <= 'z') ||
	    (c >= 'A' && c <= 'Z') || c == '_') {		
		int i;
		int ind=0;
		char v[256];
		struct symbol *sp;

		while ((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9') ||
            	       (c >= 'A' && c <= 'Z') || c == '_' ) {
			if (ind < (sizeof(v)-1))
				v[ind++] = c; 
			c = fgetc(fin);
		}
		ungetc(c, fin);
		v[ind] = 0;
		for (i = 0; reserved[i].name; i++)
		if (strcmp(v, reserved[i].name) == 0)
			return reserved[i].token;
		for (sp = list; sp; sp=sp->next)
		if (strcmp(v, sp->name) == 0) {
			yylval = sp->index;
			return t_name;
		}
		sp = malloc(sizeof(*sp));
		sp->index = sym_index++;
		sp->found = 0;
		sp->name = strdup(v);
		sp->next = list;
		list = sp;
		yylval = sp->index;
		return t_name;
	} else {
		if (c == '/') {
			c = fgetc(fin);
			if (c == '/') {		
				while (c != '\n' && c != EOF)
					c = fgetc(fin);
				return t_nl;
			}
			ungetc(c, fin);
			c = '/';
		}
		return c;
	}
}

int
main(int argc, char **argv)
{
	int i, src_out=0;
	struct reloc *rp;
	char *in_name = 0;
	char *out_name = "a.out";

	yydebug = 0;
	for (i = 1; i < argc; i++) {	
		if (strcmp(argv[i], "-y") == 0) {
			yydebug = 1;
		} else
		if (strcmp(argv[i], "-s") == 0) {
			src_out = 1;
		} else
		if (strcmp(argv[i], "-o") == 0 && i != (argc-1)) {
			i++;
			out_name = argv[i];
		} else {
			if (in_name) {
				fprintf(stderr, "too many inout files\n");
				errs++;
			}
			in_name = argv[i];
		}
	}

	if (!in_name) {
		fprintf(stderr, "No file specified\n");
		return 1;
	}
	fin = fopen(in_name, "r");
	if (!fin) {
		fprintf(stderr, "Can't open '%s'\n", in_name);
		return 1;
	}
	if (yyparse()) {
		//fprintf(stderr, "%d: syntax error\n", line);
		return 1;
	}
	for (rp = reloc_first; rp; rp = rp->next) {
		struct symbol *sp;
		int found = 0;
		for (sp = list; sp; sp=sp->next) 
		if (rp->index == sp->index) {
			int v;
			found = 1;
			if (!sp->found) {
				errs++;
				fprintf(stderr, "%d: '%s' not defined\n", rp->line, sp->name);
			} else
			if (rp->type) {
				code[rp->offset] += sp->offset;
			} else {
//printf("reloc @%x '%s' ind=%d offset=%x\n", rp->offset, sp->name, sp->index, sp->offset);
				if ((sp->offset&~0x7f) == 0) {
					code[rp->offset] |= sp->offset;
				} else
				if ((sp->offset&~0x7f) == (rp->offset&~0x7f) ) {
					code[rp->offset] |= 0x80|(sp->offset&0x7f);
				} else {
					errs++;
					fprintf(stderr, "%d: '%s' not a local or 0 ref\n", rp->line, sp->name);
				}
			}
		}
		assert(found);
	}
	if (!errs) {
		if (src_out) {
			FILE *fout = fopen(out_name, "wb");
			if (fout) {
				for (i = 0; i < pc; i++)
					fprintf(fout, "	sram[12'h%02x] = 12'o%04o;\n", i, code[i]);
				fclose(fout);
			} else {
				fprintf(stderr, "Can't open output file '%s'\n", out_name);
				errs++;
			}
		} else {
			FILE *fout = fopen(out_name, "w");
			if (fout) {
				fwrite(code, 1, pc*2, fout);	
				fclose(fout);
			} else {
				fprintf(stderr, "Can't open output file '%s'\n", out_name);
				errs++;
			}
		}
	}
	return errs != 0?1:0;
}
