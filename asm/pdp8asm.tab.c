/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1





# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    t_i = 258,                     /* t_i  */
    t_z = 259,                     /* t_z  */
    t_name = 260,                  /* t_name  */
    t_value = 261,                 /* t_value  */
    t_cll = 262,                   /* t_cll  */
    t_cml = 263,                   /* t_cml  */
    t_rar = 264,                   /* t_rar  */
    t_ral = 265,                   /* t_ral  */
    t_rtr = 266,                   /* t_rtr  */
    t_rtl = 267,                   /* t_rtl  */
    t_bsw = 268,                   /* t_bsw  */
    t_and = 269,                   /* t_and  */
    t_tad = 270,                   /* t_tad  */
    t_isz = 271,                   /* t_isz  */
    t_dca = 272,                   /* t_dca  */
    t_jms = 273,                   /* t_jms  */
    t_jmp = 274,                   /* t_jmp  */
    t_word = 275,                  /* t_word  */
    t_hlt = 276,                   /* t_hlt  */
    t_szl = 277,                   /* t_szl  */
    t_sna = 278,                   /* t_sna  */
    t_skp = 279,                   /* t_skp  */
    t_snl = 280,                   /* t_snl  */
    t_sza = 281,                   /* t_sza  */
    t_sma = 282,                   /* t_sma  */
    t_spa = 283,                   /* t_spa  */
    t_nl = 284,                    /* t_nl  */
    t_page = 285,                  /* t_page  */
    t_cla = 286,                   /* t_cla  */
    t_ion = 287,                   /* t_ion  */
    t_iof = 288,                   /* t_iof  */
    t_caf = 289,                   /* t_caf  */
    t_skon = 290,                  /* t_skon  */
    t_tcf = 291,                   /* t_tcf  */
    t_tsf = 292,                   /* t_tsf  */
    t_tpc = 293,                   /* t_tpc  */
    t_iac = 294,                   /* t_iac  */
    t_cma = 295,                   /* t_cma  */
    t_iot = 296                    /* t_iot  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);



/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_t_i = 3,                        /* t_i  */
  YYSYMBOL_t_z = 4,                        /* t_z  */
  YYSYMBOL_t_name = 5,                     /* t_name  */
  YYSYMBOL_t_value = 6,                    /* t_value  */
  YYSYMBOL_t_cll = 7,                      /* t_cll  */
  YYSYMBOL_t_cml = 8,                      /* t_cml  */
  YYSYMBOL_t_rar = 9,                      /* t_rar  */
  YYSYMBOL_t_ral = 10,                     /* t_ral  */
  YYSYMBOL_t_rtr = 11,                     /* t_rtr  */
  YYSYMBOL_t_rtl = 12,                     /* t_rtl  */
  YYSYMBOL_t_bsw = 13,                     /* t_bsw  */
  YYSYMBOL_t_and = 14,                     /* t_and  */
  YYSYMBOL_t_tad = 15,                     /* t_tad  */
  YYSYMBOL_t_isz = 16,                     /* t_isz  */
  YYSYMBOL_t_dca = 17,                     /* t_dca  */
  YYSYMBOL_t_jms = 18,                     /* t_jms  */
  YYSYMBOL_t_jmp = 19,                     /* t_jmp  */
  YYSYMBOL_t_word = 20,                    /* t_word  */
  YYSYMBOL_t_hlt = 21,                     /* t_hlt  */
  YYSYMBOL_t_szl = 22,                     /* t_szl  */
  YYSYMBOL_t_sna = 23,                     /* t_sna  */
  YYSYMBOL_t_skp = 24,                     /* t_skp  */
  YYSYMBOL_t_snl = 25,                     /* t_snl  */
  YYSYMBOL_t_sza = 26,                     /* t_sza  */
  YYSYMBOL_t_sma = 27,                     /* t_sma  */
  YYSYMBOL_t_spa = 28,                     /* t_spa  */
  YYSYMBOL_t_nl = 29,                      /* t_nl  */
  YYSYMBOL_t_page = 30,                    /* t_page  */
  YYSYMBOL_t_cla = 31,                     /* t_cla  */
  YYSYMBOL_t_ion = 32,                     /* t_ion  */
  YYSYMBOL_t_iof = 33,                     /* t_iof  */
  YYSYMBOL_t_caf = 34,                     /* t_caf  */
  YYSYMBOL_t_skon = 35,                    /* t_skon  */
  YYSYMBOL_t_tcf = 36,                     /* t_tcf  */
  YYSYMBOL_t_tsf = 37,                     /* t_tsf  */
  YYSYMBOL_t_tpc = 38,                     /* t_tpc  */
  YYSYMBOL_t_iac = 39,                     /* t_iac  */
  YYSYMBOL_t_cma = 40,                     /* t_cma  */
  YYSYMBOL_t_iot = 41,                     /* t_iot  */
  YYSYMBOL_42_ = 42,                       /* '+'  */
  YYSYMBOL_43_ = 43,                       /* '-'  */
  YYSYMBOL_44_ = 44,                       /* '*'  */
  YYSYMBOL_45_ = 45,                       /* '/'  */
  YYSYMBOL_46_ = 46,                       /* '('  */
  YYSYMBOL_47_ = 47,                       /* ')'  */
  YYSYMBOL_48_ = 48,                       /* ','  */
  YYSYMBOL_49_ = 49,                       /* '.'  */
  YYSYMBOL_50_ = 50,                       /* ':'  */
  YYSYMBOL_51_ = 51,                       /* '='  */
  YYSYMBOL_YYACCEPT = 52,                  /* $accept  */
  YYSYMBOL_exp = 53,                       /* exp  */
  YYSYMBOL_e1 = 54,                        /* e1  */
  YYSYMBOL_e2 = 55,                        /* e2  */
  YYSYMBOL_mem = 56,                       /* mem  */
  YYSYMBOL_memr = 57,                      /* memr  */
  YYSYMBOL_io = 58,                        /* io  */
  YYSYMBOL_ins = 59,                       /* ins  */
  YYSYMBOL_opr = 60,                       /* opr  */
  YYSYMBOL_g1 = 61,                        /* g1  */
  YYSYMBOL_group1 = 62,                    /* group1  */
  YYSYMBOL_g2a1 = 63,                      /* g2a1  */
  YYSYMBOL_g2a2 = 64,                      /* g2a2  */
  YYSYMBOL_g2a1l = 65,                     /* g2a1l  */
  YYSYMBOL_g2a2l = 66,                     /* g2a2l  */
  YYSYMBOL_group2 = 67,                    /* group2  */
  YYSYMBOL_label = 68,                     /* label  */
  YYSYMBOL_line = 69,                      /* line  */
  YYSYMBOL_program = 70                    /* program  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  83
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   253

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  19
/* YYNRULES -- Number of rules.  */
#define YYNRULES  78
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  113

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   296


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      46,    47,    44,    42,    48,    43,    49,    45,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    50,     2,
       2,    51,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int8 yyrline[] =
{
       0,     5,     5,     6,     7,    10,    11,    12,    14,    15,
      16,    17,    20,    21,    22,    25,    26,    29,    30,    31,
      32,    33,    34,    35,    36,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    52,    53,    54,    55,
      56,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      70,    71,    74,    75,    76,    79,    80,    81,    82,    85,
      86,    89,    90,    93,    94,    95,    96,    97,   102,   103,
     106,   107,   108,   109,   110,   111,   112,   115,   116
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "t_i", "t_z", "t_name",
  "t_value", "t_cll", "t_cml", "t_rar", "t_ral", "t_rtr", "t_rtl", "t_bsw",
  "t_and", "t_tad", "t_isz", "t_dca", "t_jms", "t_jmp", "t_word", "t_hlt",
  "t_szl", "t_sna", "t_skp", "t_snl", "t_sza", "t_sma", "t_spa", "t_nl",
  "t_page", "t_cla", "t_ion", "t_iof", "t_caf", "t_skon", "t_tcf", "t_tsf",
  "t_tpc", "t_iac", "t_cma", "t_iot", "'+'", "'-'", "'*'", "'/'", "'('",
  "')'", "','", "'.'", "':'", "'='", "$accept", "exp", "e1", "e2", "mem",
  "memr", "io", "ins", "opr", "g1", "group1", "g2a1", "g2a2", "g2a1l",
  "g2a2l", "group2", "label", "line", "program", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-41)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     113,   -31,   -41,   -41,   -41,   -41,   -41,   -41,   -41,    -2,
      -2,    -2,    -2,    -2,    -2,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,   -41,   -41,   191,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,   -41,   -41,    21,   -15,   -41,    -9,   -41,   -41,
     213,   -41,   -41,   -13,    10,   -41,   156,   -41,    70,   -41,
     -41,     5,    21,   -41,   -41,    21,    21,    21,   -41,   -18,
     -16,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   213,   -41,
     -32,    16,    -3,     0,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,    25,     1,   -41,   -41,   -41,   -41,   -41,   -41,     3,
      21,    21,    21,    21,    21,    19,   -41,   -41,    23,    37,
     -41,   -41,   -41,   -41,   -41,   -41,   -41,    21,    21,   -41,
     -41,    39,   -41
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,    41,    43,    44,    45,    46,    47,    48,     0,
       0,     0,     0,     0,     0,    65,    58,    57,    55,    54,
      53,    52,    56,    76,    38,    20,    21,    23,    22,    18,
      17,    19,    49,    42,     0,     0,    31,     0,    32,    50,
      39,    59,    61,    63,    64,    40,     0,    77,     0,    69,
      68,     0,     0,    12,    11,     0,     0,     0,    14,     4,
       7,    15,    25,    26,    27,    28,    29,    30,    36,    37,
       0,     0,     0,     0,    72,    51,    66,    60,    67,    62,
      70,     0,     0,     1,    78,    16,    13,     8,     9,     0,
       0,     0,     0,     0,     0,    34,    33,    75,     0,     0,
      71,    10,     2,     3,     5,     6,    24,     0,     0,    73,
      35,     0,    74
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -41,   -34,   -40,    -1,    18,   102,   -41,    26,   -41,   -33,
      47,    33,    46,   -41,   -41,    76,   -41,    69,   -41
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,    58,    59,    60,    61,    62,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      70,    51,    52,    53,    54,    71,    54,    75,    76,    52,
      53,    54,    19,    20,    21,    72,    94,    49,    86,    50,
      74,    95,    54,    89,    90,    91,    97,    54,    92,    93,
     100,    78,    16,    17,    18,    75,    73,    96,    22,    99,
      55,    56,    55,    56,    57,    71,    57,    55,    56,    98,
     101,    57,   104,   105,    87,    88,   102,   103,    55,    56,
     106,   107,    57,    55,    56,   108,   109,    57,   112,    85,
      83,    68,    82,   110,   111,     1,    77,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      79,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      69,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    63,    64,    65,    66,    67,    84,     1,    35,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,     0,    15,    16,    17,    18,    19,    20,
      21,    22,    23,     0,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,     0,     0,     0,     0,     0,
       0,     0,    35,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,     0,    15,    16,    17,
      18,    19,    20,    21,    22,    80,     0,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,     2,     3,
       4,     5,     6,     7,     8,    81,     0,     0,     0,     0,
       0,     0,    15,    16,    17,    18,    19,    20,    21,    22,
       2,     3,     4,     5,     6,     7,     8,     0,     0,     0,
      32,    33,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    32,    33
};

static const yytype_int8 yycheck[] =
{
      34,     3,     4,     5,     6,    20,     6,    40,    21,     4,
       5,     6,    25,    26,    27,    30,    48,    48,    52,    50,
      29,     5,     6,    57,    42,    43,    29,     6,    44,    45,
      29,    21,    22,    23,    24,    68,    51,    71,    28,    73,
      42,    43,    42,    43,    46,    20,    46,    42,    43,    49,
      47,    46,    92,    93,    55,    56,    90,    91,    42,    43,
      94,    42,    46,    42,    43,    42,    29,    46,    29,    51,
       0,    24,    46,   107,   108,     5,    43,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      44,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      24,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    10,    11,    12,    13,    14,    48,     5,    49,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    49,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    -1,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    -1,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,     7,     8,
       9,    10,    11,    12,    13,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    21,    22,    23,    24,    25,    26,    27,    28,
       7,     8,     9,    10,    11,    12,    13,    -1,    -1,    -1,
      39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    40
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     5,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    49,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    48,
      50,     3,     4,     5,     6,    42,    43,    46,    53,    54,
      55,    56,    57,    57,    57,    57,    57,    57,    62,    67,
      53,    20,    30,    51,    29,    61,    21,    63,    21,    64,
      29,    49,    59,     0,    69,    56,    53,    55,    55,    53,
      42,    43,    44,    45,    48,     5,    53,    29,    49,    53,
      29,    47,    53,    53,    54,    54,    53,    42,    42,    29,
      53,    53,    29
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    52,    53,    53,    53,    54,    54,    54,    55,    55,
      55,    55,    56,    56,    56,    57,    57,    58,    58,    58,
      58,    58,    58,    58,    58,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    60,    60,    60,    60,
      60,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      62,    62,    63,    63,    63,    64,    64,    64,    64,    65,
      65,    66,    66,    67,    67,    67,    67,    67,    68,    68,
      69,    69,    69,    69,    69,    69,    69,    70,    70
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     3,     1,     3,     3,     1,     2,     2,
       3,     1,     1,     2,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     4,     2,     2,     2,     2,     2,
       2,     1,     1,     3,     3,     5,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     2,     1,     1,     1,     2,     2,     2,     2,
       2,     3,     2,     4,     6,     3,     1,     1,     2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* exp: e1 '+' exp  */
#line 5 "pdp8asm.y"
                                        { yyval = yyvsp[-2] + yyvsp[0]; }
#line 1304 "pdp8asm.tab.c"
    break;

  case 3: /* exp: e1 '-' exp  */
#line 6 "pdp8asm.y"
                                        { yyval = yyvsp[-2] - yyvsp[0]; }
#line 1310 "pdp8asm.tab.c"
    break;

  case 4: /* exp: e1  */
#line 7 "pdp8asm.y"
                                        { yyval = yyvsp[0]; }
#line 1316 "pdp8asm.tab.c"
    break;

  case 5: /* e1: e2 '*' e1  */
#line 10 "pdp8asm.y"
                                        { yyval = yyvsp[-2] * yyvsp[0]; }
#line 1322 "pdp8asm.tab.c"
    break;

  case 6: /* e1: e2 '/' e1  */
#line 11 "pdp8asm.y"
                                        { yyval = (yyvsp[0]==0?0:yyvsp[-2] / yyvsp[0]); }
#line 1328 "pdp8asm.tab.c"
    break;

  case 7: /* e1: e2  */
#line 12 "pdp8asm.y"
                                        { yyval = yyvsp[0]; }
#line 1334 "pdp8asm.tab.c"
    break;

  case 8: /* e2: '+' e2  */
#line 14 "pdp8asm.y"
                                        { yyval = yyvsp[0]; }
#line 1340 "pdp8asm.tab.c"
    break;

  case 9: /* e2: '-' e2  */
#line 15 "pdp8asm.y"
                                        { yyval = -yyvsp[0]; }
#line 1346 "pdp8asm.tab.c"
    break;

  case 10: /* e2: '(' exp ')'  */
#line 16 "pdp8asm.y"
                                        { yyval = yyvsp[-1]; }
#line 1352 "pdp8asm.tab.c"
    break;

  case 11: /* e2: t_value  */
#line 17 "pdp8asm.y"
                                        { yyval = yyvsp[0]; }
#line 1358 "pdp8asm.tab.c"
    break;

  case 12: /* mem: t_name  */
#line 20 "pdp8asm.y"
                                        { yyval = ref_label(yyvsp[0], 0);}
#line 1364 "pdp8asm.tab.c"
    break;

  case 13: /* mem: t_z exp  */
#line 21 "pdp8asm.y"
                                        { yyval = yyvsp[-1]|0x80;  }
#line 1370 "pdp8asm.tab.c"
    break;

  case 14: /* mem: exp  */
#line 22 "pdp8asm.y"
                                        { yyval = yyvsp[0]; }
#line 1376 "pdp8asm.tab.c"
    break;

  case 15: /* memr: mem  */
#line 25 "pdp8asm.y"
                                        { yyval = yyvsp[0]; }
#line 1382 "pdp8asm.tab.c"
    break;

  case 16: /* memr: t_i mem  */
#line 26 "pdp8asm.y"
                                        { yyval = yyvsp[-1]|0x100; }
#line 1388 "pdp8asm.tab.c"
    break;

  case 17: /* io: t_tsf  */
#line 29 "pdp8asm.y"
                                        { yyval = (4<<3)|1; }
#line 1394 "pdp8asm.tab.c"
    break;

  case 18: /* io: t_tcf  */
#line 30 "pdp8asm.y"
                                        { yyval = (4<<3)|2; }
#line 1400 "pdp8asm.tab.c"
    break;

  case 19: /* io: t_tpc  */
#line 31 "pdp8asm.y"
                                        { yyval = (4<<3)|4; }
#line 1406 "pdp8asm.tab.c"
    break;

  case 20: /* io: t_ion  */
#line 32 "pdp8asm.y"
                                        { yyval = (0<<3)|1; }
#line 1412 "pdp8asm.tab.c"
    break;

  case 21: /* io: t_iof  */
#line 33 "pdp8asm.y"
                                        { yyval = (0<<3)|2; }
#line 1418 "pdp8asm.tab.c"
    break;

  case 22: /* io: t_skon  */
#line 34 "pdp8asm.y"
                                        { yyval = (0<<3)|0; }
#line 1424 "pdp8asm.tab.c"
    break;

  case 23: /* io: t_caf  */
#line 35 "pdp8asm.y"
                                        { yyval = (0<<3)|7; }
#line 1430 "pdp8asm.tab.c"
    break;

  case 24: /* io: t_iot exp ',' exp  */
#line 36 "pdp8asm.y"
                                        { yyval = ((yyvsp[-2]&0x3f)<<3)|(yyvsp[-1]&7); }
#line 1436 "pdp8asm.tab.c"
    break;

  case 25: /* ins: t_and memr  */
#line 39 "pdp8asm.y"
                                        {  yyval = yyvsp[0]; }
#line 1442 "pdp8asm.tab.c"
    break;

  case 26: /* ins: t_tad memr  */
#line 40 "pdp8asm.y"
                                        {  yyval = (1<<9)| yyvsp[0]; }
#line 1448 "pdp8asm.tab.c"
    break;

  case 27: /* ins: t_isz memr  */
#line 41 "pdp8asm.y"
                                        {  yyval = (2<<9)| yyvsp[0]; }
#line 1454 "pdp8asm.tab.c"
    break;

  case 28: /* ins: t_dca memr  */
#line 42 "pdp8asm.y"
                                        {  yyval = (3<<9)| yyvsp[0]; }
#line 1460 "pdp8asm.tab.c"
    break;

  case 29: /* ins: t_jms memr  */
#line 43 "pdp8asm.y"
                                        {  yyval = (4<<9)| yyvsp[0]; }
#line 1466 "pdp8asm.tab.c"
    break;

  case 30: /* ins: t_jmp memr  */
#line 44 "pdp8asm.y"
                                        {  yyval = (5<<9)| yyvsp[0]; }
#line 1472 "pdp8asm.tab.c"
    break;

  case 31: /* ins: io  */
#line 45 "pdp8asm.y"
                                        {  yyval = (6<<9)| yyvsp[0]; }
#line 1478 "pdp8asm.tab.c"
    break;

  case 32: /* ins: opr  */
#line 46 "pdp8asm.y"
                                        {  yyval = (7<<9)| yyvsp[0]; }
#line 1484 "pdp8asm.tab.c"
    break;

  case 33: /* ins: '.' t_word exp  */
#line 47 "pdp8asm.y"
                                        { yyval = yyvsp[0]; }
#line 1490 "pdp8asm.tab.c"
    break;

  case 34: /* ins: '.' t_word t_name  */
#line 48 "pdp8asm.y"
                                        { yyval = 0; ref_label(yyvsp[0], 1);}
#line 1496 "pdp8asm.tab.c"
    break;

  case 35: /* ins: '.' t_word t_name '+' exp  */
#line 49 "pdp8asm.y"
                                          { yyval = yyvsp[0]; ref_label(yyvsp[-2], 1); }
#line 1502 "pdp8asm.tab.c"
    break;

  case 36: /* opr: t_cla group1  */
#line 52 "pdp8asm.y"
                                        { yyval = (1<<7)|yyvsp[0]; }
#line 1508 "pdp8asm.tab.c"
    break;

  case 37: /* opr: t_cla group2  */
#line 53 "pdp8asm.y"
                                        { yyval = (3<<7)|yyvsp[0]; }
#line 1514 "pdp8asm.tab.c"
    break;

  case 38: /* opr: t_cla  */
#line 54 "pdp8asm.y"
                                        { yyval = (1<<7); }
#line 1520 "pdp8asm.tab.c"
    break;

  case 39: /* opr: group1  */
#line 55 "pdp8asm.y"
                                        { yyval = yyvsp[0]; }
#line 1526 "pdp8asm.tab.c"
    break;

  case 40: /* opr: group2  */
#line 56 "pdp8asm.y"
                                        { yyval = yyvsp[0]|(2<<7); }
#line 1532 "pdp8asm.tab.c"
    break;

  case 41: /* g1: t_cll  */
#line 59 "pdp8asm.y"
                                        { yyval = (1<<6); }
#line 1538 "pdp8asm.tab.c"
    break;

  case 42: /* g1: t_cma  */
#line 60 "pdp8asm.y"
                                        { yyval = (1<<5); }
#line 1544 "pdp8asm.tab.c"
    break;

  case 43: /* g1: t_cml  */
#line 61 "pdp8asm.y"
                                        { yyval = (1<<4); }
#line 1550 "pdp8asm.tab.c"
    break;

  case 44: /* g1: t_rar  */
#line 62 "pdp8asm.y"
                                        { yyval = 4<<1; }
#line 1556 "pdp8asm.tab.c"
    break;

  case 45: /* g1: t_ral  */
#line 63 "pdp8asm.y"
                                        { yyval = 2<<1; }
#line 1562 "pdp8asm.tab.c"
    break;

  case 46: /* g1: t_rtr  */
#line 64 "pdp8asm.y"
                                        { yyval = 5<<1; }
#line 1568 "pdp8asm.tab.c"
    break;

  case 47: /* g1: t_rtl  */
#line 65 "pdp8asm.y"
                                        { yyval = 3<<1; }
#line 1574 "pdp8asm.tab.c"
    break;

  case 48: /* g1: t_bsw  */
#line 66 "pdp8asm.y"
                                        { yyval = 6<<1; }
#line 1580 "pdp8asm.tab.c"
    break;

  case 49: /* g1: t_iac  */
#line 67 "pdp8asm.y"
                                        { yyval = 1<<0; }
#line 1586 "pdp8asm.tab.c"
    break;

  case 50: /* group1: g1  */
#line 70 "pdp8asm.y"
                                        { yyval = yyvsp[0];}
#line 1592 "pdp8asm.tab.c"
    break;

  case 51: /* group1: group1 g1  */
#line 71 "pdp8asm.y"
                                        { yyval = yyvsp[-1]|yyvsp[0];}
#line 1598 "pdp8asm.tab.c"
    break;

  case 52: /* g2a1: t_sma  */
#line 74 "pdp8asm.y"
                                        { yyval = 8<<4; }
#line 1604 "pdp8asm.tab.c"
    break;

  case 53: /* g2a1: t_sza  */
#line 75 "pdp8asm.y"
                                        { yyval = 4<<4; }
#line 1610 "pdp8asm.tab.c"
    break;

  case 54: /* g2a1: t_snl  */
#line 76 "pdp8asm.y"
                                        { yyval = 2<<4; }
#line 1616 "pdp8asm.tab.c"
    break;

  case 55: /* g2a2: t_skp  */
#line 79 "pdp8asm.y"
                                        { yyval = (1<<4); }
#line 1622 "pdp8asm.tab.c"
    break;

  case 56: /* g2a2: t_spa  */
#line 80 "pdp8asm.y"
                                        { yyval = (9<<4); }
#line 1628 "pdp8asm.tab.c"
    break;

  case 57: /* g2a2: t_sna  */
#line 81 "pdp8asm.y"
                                        { yyval = (5<<4); }
#line 1634 "pdp8asm.tab.c"
    break;

  case 58: /* g2a2: t_szl  */
#line 82 "pdp8asm.y"
                                        { yyval = (3<<4); }
#line 1640 "pdp8asm.tab.c"
    break;

  case 59: /* g2a1l: g2a1  */
#line 85 "pdp8asm.y"
                                        { yyval = yyvsp[0]; }
#line 1646 "pdp8asm.tab.c"
    break;

  case 60: /* g2a1l: g2a1l g2a1  */
#line 86 "pdp8asm.y"
                                        { yyval = yyvsp[-1]|yyvsp[0]; }
#line 1652 "pdp8asm.tab.c"
    break;

  case 61: /* g2a2l: g2a2  */
#line 89 "pdp8asm.y"
                                        { yyval = yyvsp[0]; }
#line 1658 "pdp8asm.tab.c"
    break;

  case 62: /* g2a2l: g2a2l g2a2  */
#line 90 "pdp8asm.y"
                                        { yyval = yyvsp[-1]|yyvsp[0]; }
#line 1664 "pdp8asm.tab.c"
    break;

  case 63: /* group2: g2a1l  */
#line 93 "pdp8asm.y"
                                        { yyval = yyvsp[0]; }
#line 1670 "pdp8asm.tab.c"
    break;

  case 64: /* group2: g2a2l  */
#line 94 "pdp8asm.y"
                                        { yyval = yyvsp[0]; }
#line 1676 "pdp8asm.tab.c"
    break;

  case 65: /* group2: t_hlt  */
#line 95 "pdp8asm.y"
                                        { yyval = 2; }
#line 1682 "pdp8asm.tab.c"
    break;

  case 66: /* group2: g2a1l t_hlt  */
#line 96 "pdp8asm.y"
                                        { yyval = yyvsp[-1]|2; }
#line 1688 "pdp8asm.tab.c"
    break;

  case 67: /* group2: g2a2l t_hlt  */
#line 97 "pdp8asm.y"
                                        { yyval = yyvsp[-1]|2; }
#line 1694 "pdp8asm.tab.c"
    break;

  case 68: /* label: t_name ':'  */
#line 102 "pdp8asm.y"
                                        { declare_label(yyvsp[-1]); }
#line 1700 "pdp8asm.tab.c"
    break;

  case 69: /* label: t_name ','  */
#line 103 "pdp8asm.y"
                                        { declare_label(yyvsp[-1]); }
#line 1706 "pdp8asm.tab.c"
    break;

  case 71: /* line: label ins t_nl  */
#line 107 "pdp8asm.y"
                                        { process_op(yyvsp[-1]);  }
#line 1712 "pdp8asm.tab.c"
    break;

  case 72: /* line: ins t_nl  */
#line 108 "pdp8asm.y"
                                        { process_op(yyvsp[-1]);  }
#line 1718 "pdp8asm.tab.c"
    break;

  case 73: /* line: '.' '=' exp t_nl  */
#line 109 "pdp8asm.y"
                                        { pc = yyvsp[-1]; }
#line 1724 "pdp8asm.tab.c"
    break;

  case 74: /* line: '.' '=' '.' '+' exp t_nl  */
#line 110 "pdp8asm.y"
                                        { pc += yyvsp[-1]; }
#line 1730 "pdp8asm.tab.c"
    break;

  case 75: /* line: '.' t_page t_nl  */
#line 111 "pdp8asm.y"
                                        { pc += (pc+0x7f)&~0x7f; }
#line 1736 "pdp8asm.tab.c"
    break;


#line 1740 "pdp8asm.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

