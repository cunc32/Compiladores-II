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
#define YYPURE 2

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* "%code top" blocks.  */
#line 7 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprParserImpl.y"


#include <iostream>
#include <stdexcept>
#include "ExprLexer.hpp"
#include "ExprParser.hpp"


#define yylex(v) static_cast<int>(parser.getLexer().nextToken(v))

void yyerror(const ExprParser& parser, const char *msg)
{
      std::cout << "Line no.:" << (const_cast<ExprParser&>(parser)).getLexer().getLine() << std::endl;
      std::cout << "Column no.: " << (const_cast<ExprParser&>(parser)).getLexer().getColumn() << std::endl;
      throw std::runtime_error(msg);
}


#line 87 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/build/ExprParserImpl.cpp"




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

#include "ExprParserImpl.hpp"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_OpAdd = 3,                      /* "+"  */
  YYSYMBOL_OpMult = 4,                     /* "*"  */
  YYSYMBOL_OpenPar = 5,                    /* "("  */
  YYSYMBOL_ClosePar = 6,                   /* ")"  */
  YYSYMBOL_Number = 7,                     /* "numero"  */
  YYSYMBOL_Ident = 8,                      /* "identificador"  */
  YYSYMBOL_OpEq = 9,                       /* "="  */
  YYSYMBOL_Semi = 10,                      /* ";"  */
  YYSYMBOL_OpSub = 11,                     /* "-"  */
  YYSYMBOL_DefInt = 12,                    /* "entero"  */
  YYSYMBOL_DefDbl = 13,                    /* "real"  */
  YYSYMBOL_DefStr = 14,                    /* "cadena"  */
  YYSYMBOL_DefChar = 15,                   /* "caracter"  */
  YYSYMBOL_DefBool = 16,                   /* "booleano"  */
  YYSYMBOL_DefArr = 17,                    /* "arreglo"  */
  YYSYMBOL_de = 18,                        /* "de"  */
  YYSYMBOL_DefFunc = 19,                   /* "funcion"  */
  YYSYMBOL_DefProc = 20,                   /* "procedimiento"  */
  YYSYMBOL_Var = 21,                       /* "var"  */
  YYSYMBOL_Inicio = 22,                    /* "inicio"  */
  YYSYMBOL_Fin = 23,                       /* "fin"  */
  YYSYMBOL_Final = 24,                     /* "final"  */
  YYSYMBOL_StructSi = 25,                  /* "si"  */
  YYSYMBOL_Entonces = 26,                  /* "entonces"  */
  YYSYMBOL_StructSino = 27,                /* "sino"  */
  YYSYMBOL_StructPara = 28,                /* "para"  */
  YYSYMBOL_StructMientras = 29,            /* "mientras"  */
  YYSYMBOL_Haga = 30,                      /* "haga"  */
  YYSYMBOL_Str = 31,                       /* "StringConstant"  */
  YYSYMBOL_OpDiv = 32,                     /* "div"  */
  YYSYMBOL_OpMod = 33,                     /* "mod"  */
  YYSYMBOL_CompEq = 34,                    /* "=="  */
  YYSYMBOL_CompDif = 35,                   /* "<>"  */
  YYSYMBOL_CompLess = 36,                  /* "<"  */
  YYSYMBOL_CompELess = 37,                 /* "<="  */
  YYSYMBOL_CompGreat = 38,                 /* ">"  */
  YYSYMBOL_CompEGreat = 39,                /* ">="  */
  YYSYMBOL_Hex = 40,                       /* "Hexa"  */
  YYSYMBOL_Binary = 41,                    /* "Binary"  */
  YYSYMBOL_Comma = 42,                     /* ","  */
  YYSYMBOL_Escriba = 43,                   /* "Escriba"  */
  YYSYMBOL_Leer = 44,                      /* "Leer"  */
  YYSYMBOL_Verdadero = 45,                 /* "Verdadero"  */
  YYSYMBOL_Falso = 46,                     /* "Falso"  */
  YYSYMBOL_OppAssign = 47,                 /* "<-"  */
  YYSYMBOL_Char = 48,                      /* "constantCharacter"  */
  YYSYMBOL_Repita = 49,                    /* "Repita"  */
  YYSYMBOL_Hasta = 50,                     /* "Hasta"  */
  YYSYMBOL_Y = 51,                         /* "Y"  */
  YYSYMBOL_O = 52,                         /* "O"  */
  YYSYMBOL_OpenBr = 53,                    /* "["  */
  YYSYMBOL_CloseBr = 54,                   /* "]"  */
  YYSYMBOL_Llamar = 55,                    /* "Llamar"  */
  YYSYMBOL_Colon = 56,                     /* ":"  */
  YYSYMBOL_Retorne = 57,                   /* "Retorne"  */
  YYSYMBOL_Type = 58,                      /* "Tipo"  */
  YYSYMBOL_Es = 59,                        /* "Es"  */
  YYSYMBOL_Lea = 60,                       /* "Lea"  */
  YYSYMBOL_SinoSi = 61,                    /* "Sino Si"  */
  YYSYMBOL_YYACCEPT = 62,                  /* $accept  */
  YYSYMBOL_start = 63,                     /* start  */
  YYSYMBOL_program = 64,                   /* program  */
  YYSYMBOL_codeBlock = 65,                 /* codeBlock  */
  YYSYMBOL_line = 66,                      /* line  */
  YYSYMBOL_return = 67,                    /* return  */
  YYSYMBOL_read = 68,                      /* read  */
  YYSYMBOL_write = 69,                     /* write  */
  YYSYMBOL_typeBlock = 70,                 /* typeBlock  */
  YYSYMBOL_defType = 71,                   /* defType  */
  YYSYMBOL_varType = 72,                   /* varType  */
  YYSYMBOL_arrId = 73,                     /* arrId  */
  YYSYMBOL_id = 74,                        /* id  */
  YYSYMBOL_valBool = 75,                   /* valBool  */
  YYSYMBOL_simpleDef = 76,                 /* simpleDef  */
  YYSYMBOL_def = 77,                       /* def  */
  YYSYMBOL_defBlock = 78,                  /* defBlock  */
  YYSYMBOL_paramType = 79,                 /* paramType  */
  YYSYMBOL_paramList = 80,                 /* paramList  */
  YYSYMBOL_procDef = 81,                   /* procDef  */
  YYSYMBOL_funcDef = 82,                   /* funcDef  */
  YYSYMBOL_funcsAndProcs = 83,             /* funcsAndProcs  */
  YYSYMBOL_paramEnter = 84,                /* paramEnter  */
  YYSYMBOL_calls = 85,                     /* calls  */
  YYSYMBOL_subprId = 86,                   /* subprId  */
  YYSYMBOL_repeat = 87,                    /* repeat  */
  YYSYMBOL_while = 88,                     /* while  */
  YYSYMBOL_for = 89,                       /* for  */
  YYSYMBOL_if = 90,                        /* if  */
  YYSYMBOL_else = 91,                      /* else  */
  YYSYMBOL_elseIf = 92,                    /* elseIf  */
  YYSYMBOL_elseBlock = 93,                 /* elseBlock  */
  YYSYMBOL_structures = 94,                /* structures  */
  YYSYMBOL_assign = 95,                    /* assign  */
  YYSYMBOL_arrAssign = 96,                 /* arrAssign  */
  YYSYMBOL_allAssign = 97,                 /* allAssign  */
  YYSYMBOL_expr = 98,                      /* expr  */
  YYSYMBOL_term = 99,                      /* term  */
  YYSYMBOL_factor = 100,                   /* factor  */
  YYSYMBOL_boolExpr = 101,                 /* boolExpr  */
  YYSYMBOL_boolTerm = 102,                 /* boolTerm  */
  YYSYMBOL_boolFactor = 103,               /* boolFactor  */
  YYSYMBOL_boolOperation = 104             /* boolOperation  */
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
typedef yytype_int16 yy_state_t;

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

#if 1

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
#endif /* 1 */

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
#define YYFINAL  49
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   889

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  43
/* YYNRULES -- Number of rules.  */
#define YYNRULES  118
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  286

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   316


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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   102,   102,   104,   105,   106,   107,   108,   109,   110,
     111,   114,   115,   118,   119,   120,   121,   122,   123,   126,
     129,   132,   133,   134,   135,   136,   139,   140,   143,   144,
     147,   148,   149,   150,   153,   156,   157,   158,   161,   162,
     165,   166,   169,   170,   173,   174,   177,   178,   179,   180,
     183,   184,   187,   188,   189,   190,   191,   192,   195,   196,
     198,   199,   200,   201,   204,   205,   206,   207,   210,   211,
     214,   215,   218,   219,   222,   225,   228,   231,   232,   233,
     236,   239,   242,   243,   246,   247,   248,   249,   252,   253,
     254,   257,   258,   259,   262,   263,   266,   267,   268,   271,
     272,   273,   274,   277,   278,   279,   282,   283,   286,   287,
     290,   291,   294,   295,   296,   297,   298,   299,   300
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "\"+\"", "\"*\"",
  "\"(\"", "\")\"", "\"numero\"", "\"identificador\"", "\"=\"", "\";\"",
  "\"-\"", "\"entero\"", "\"real\"", "\"cadena\"", "\"caracter\"",
  "\"booleano\"", "\"arreglo\"", "\"de\"", "\"funcion\"",
  "\"procedimiento\"", "\"var\"", "\"inicio\"", "\"fin\"", "\"final\"",
  "\"si\"", "\"entonces\"", "\"sino\"", "\"para\"", "\"mientras\"",
  "\"haga\"", "\"StringConstant\"", "\"div\"", "\"mod\"", "\"==\"",
  "\"<>\"", "\"<\"", "\"<=\"", "\">\"", "\">=\"", "\"Hexa\"", "\"Binary\"",
  "\",\"", "\"Escriba\"", "\"Leer\"", "\"Verdadero\"", "\"Falso\"",
  "\"<-\"", "\"constantCharacter\"", "\"Repita\"", "\"Hasta\"", "\"Y\"",
  "\"O\"", "\"[\"", "\"]\"", "\"Llamar\"", "\":\"", "\"Retorne\"",
  "\"Tipo\"", "\"Es\"", "\"Lea\"", "\"Sino Si\"", "$accept", "start",
  "program", "codeBlock", "line", "return", "read", "write", "typeBlock",
  "defType", "varType", "arrId", "id", "valBool", "simpleDef", "def",
  "defBlock", "paramType", "paramList", "procDef", "funcDef",
  "funcsAndProcs", "paramEnter", "calls", "subprId", "repeat", "while",
  "for", "if", "else", "elseIf", "elseBlock", "structures", "assign",
  "arrAssign", "allAssign", "expr", "term", "factor", "boolExpr",
  "boolTerm", "boolFactor", "boolOperation", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-70)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      74,   -70,   -70,   -70,   -70,   -24,    28,    42,   635,    48,
      62,   -70,   173,   -70,    63,    31,   -70,   721,   -70,   -70,
      58,   148,     9,   357,     1,   218,    75,   218,   100,   635,
      77,   148,    87,   238,   -70,   -70,   -70,    55,    53,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,    47,   -70,
     635,   -70,   734,   277,   -70,    93,   635,   -70,   305,   635,
     -70,   -70,   148,   -70,    15,   -70,   -70,   -70,     6,    43,
     -70,   420,   153,   711,   635,   747,   212,   148,   218,   665,
     -10,    65,   -70,   -70,    67,    76,    -7,   -70,   -70,    30,
     251,   125,   -70,    30,   -70,   -70,   -70,   129,   267,   163,
     306,   635,   356,   635,   -70,   360,   635,   396,    29,   135,
     148,   148,   120,   148,   148,   148,    98,    96,   239,   138,
     -70,    13,   758,   769,    16,   415,   635,   -70,   -70,   -70,
     -70,    30,     7,   677,    18,   148,   148,   148,   148,   148,
     148,   148,   635,   218,   218,   148,   635,   218,   -70,    30,
     -70,   -70,    30,   105,   -70,   -70,   438,   635,   451,   -70,
     461,   -70,   -70,   -70,    21,    30,    43,    43,   153,   -70,
     -70,   -70,   153,   156,   111,   159,   -70,   117,   868,   635,
     780,   635,   791,   802,   -70,   474,   -70,   -70,    30,    30,
      30,    30,    30,    30,    30,    90,    65,   -70,    99,   484,
     131,   148,   -70,   497,   -70,   -70,   -70,   148,   169,   813,
     132,   184,   -70,   153,   -70,   507,   635,   520,   635,   635,
     824,   -70,   175,   635,   218,   179,   -70,    -8,   635,   182,
      10,   -70,    30,   -70,   635,   835,   186,   154,   846,   -70,
     530,   -70,   543,   553,   635,   -70,   635,    -1,   190,   191,
     -70,   566,   -70,   206,   576,   635,   153,   223,   635,   857,
     -70,   -70,   -70,   589,   635,   -70,   -70,   216,   153,   -70,
     599,   237,   153,   612,   635,   -70,   635,   -70,   -70,   -70,
     -70,   240,   -70,   622,   -70,   -70
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    33,    30,    31,    32,     0,     0,     0,     0,     0,
       0,     2,     0,    27,     0,    42,    45,     0,    66,    67,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    12,    18,    14,    13,     0,    17,
      84,    85,    86,    87,    16,    94,    95,    15,     0,     1,
       0,    26,     0,     0,    41,     0,     0,    44,     0,     0,
      64,    65,     0,   104,    35,    36,   105,    37,     0,    98,
     102,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   107,   109,   111,     0,     0,     0,    23,    25,    24,
       0,    71,    70,    19,    20,     3,    11,     0,     0,     0,
       0,     0,     0,     0,    40,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      51,     0,     0,     0,     0,     0,     0,    38,    39,    90,
      89,    88,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    21,    22,
      92,    93,    91,     0,    28,     7,     0,     0,     0,     4,
       0,     6,   103,    72,     0,    69,    96,    97,     0,    99,
     100,   101,     0,     0,     0,     0,    48,     0,     0,     0,
       0,     0,     0,     0,    57,     0,    34,   110,   112,   113,
     114,   115,   116,   117,   118,     0,   106,   108,     0,     0,
      74,     0,     8,     0,    10,     5,    73,     0,     0,     0,
       0,     0,    46,     0,    50,     0,     0,     0,     0,     0,
       0,    56,     0,     0,     0,     0,    83,     0,     0,     0,
       0,     9,    68,    43,     0,     0,     0,     0,     0,    63,
       0,    55,     0,     0,     0,    77,    80,     0,     0,     0,
      82,     0,    75,     0,     0,     0,     0,     0,     0,     0,
      62,    54,    53,     0,     0,    78,    79,     0,     0,    61,
       0,     0,     0,     0,     0,    52,    81,    76,    29,    60,
      49,     0,    59,     0,    47,    58
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -70,   -70,   -70,   -22,   -33,   -70,   -70,   -70,   -70,   250,
     -69,   207,   217,   166,   -70,    -6,   -11,    92,   192,   -15,
     -14,    14,   -70,   -70,   241,   -70,   -70,   -70,   -70,   -70,
      41,   -70,   -70,   247,   -70,   -70,   261,    11,   278,   -19,
     134,   142,   -70
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    10,    11,    33,    34,    35,    36,    37,    12,    13,
      14,    38,    66,   130,    15,    16,    17,   120,   121,    18,
      19,    20,   164,    39,    67,    40,    41,    42,    43,   225,
     226,   227,    44,    45,    46,    47,    79,    69,    70,    80,
      81,    82,    83
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      96,    52,   119,   122,   119,    60,    61,    90,    86,   110,
     110,    57,    75,   110,    71,   249,   142,   111,   111,   177,
     109,   111,   183,   146,   187,   264,    53,   206,   100,    21,
     154,    58,   110,   110,   105,   162,    22,   107,    60,    61,
     111,   111,   143,    60,    61,   143,    57,   113,    76,   175,
      23,   143,   125,   224,    77,   178,    48,    96,   178,   134,
     112,   186,    49,   207,   253,    72,   102,    96,    77,    57,
     143,    54,    96,    55,    96,   114,   115,     6,     7,   156,
      59,   158,     1,    84,   160,    91,     2,    60,    61,     3,
       4,     5,    96,     6,     7,    64,     8,    97,    24,   208,
      98,   104,   110,   209,   185,    62,    99,    63,    64,   119,
     111,   180,   182,   222,    76,    25,   144,   223,    26,    27,
     195,   166,   167,    96,   199,    96,   145,    96,   200,   228,
     109,    87,     9,    28,    62,   203,    63,    64,   168,    29,
      62,   163,    63,    64,   238,    30,   176,    31,    88,   173,
      32,   224,    96,    62,   172,    63,    64,   215,   201,   217,
     148,     1,    96,   210,   211,     2,    96,   212,     3,     4,
      96,     1,   220,   213,    57,     2,    57,   233,     3,     4,
     153,     1,    96,   143,    96,     2,   236,   271,     3,     4,
       5,   237,     6,     7,   240,    50,   242,   243,   235,   278,
     245,   246,   248,   281,   256,   247,   251,    96,   257,    96,
      96,   252,   254,    96,    57,   265,   266,    62,    96,    63,
      64,    96,   263,    78,   268,    63,    64,   259,    65,    57,
      96,     9,    65,   270,    65,    65,   273,    96,    65,    65,
      96,   272,   276,    96,   277,   280,    24,     1,   284,    94,
      96,     2,   283,    57,     3,     4,   174,   127,   128,    24,
     129,    95,    51,    25,   151,   124,    26,    27,   250,    65,
     214,    92,    62,    85,    63,    64,    25,   196,     0,    26,
      27,    28,    68,    65,    65,    65,   197,    29,     0,    89,
       0,     0,    93,    30,    28,    31,     6,     7,    32,   103,
      29,   147,     0,     0,    65,    65,    30,     0,    31,     0,
       0,    32,   127,   128,    24,   150,    65,    65,    65,     0,
      65,    65,    65,   108,     6,     7,     0,   106,     0,   155,
       0,    25,     0,     0,    26,    27,     0,   131,   132,   133,
       0,     0,    65,    65,    65,    65,    65,    65,    65,    28,
      65,    65,    65,     0,    65,    29,     0,     0,   149,   152,
       0,    30,    73,    31,     0,     1,    32,     0,    24,     2,
     165,     0,     3,     4,     5,     6,     7,     0,   157,    74,
       0,     0,     0,   159,     0,    25,     0,     0,    26,    27,
       0,   169,   170,   171,     0,     0,   188,   189,   190,   191,
     192,   193,   194,    28,    24,     0,   198,     0,    65,    29,
       0,     0,     0,     0,    65,    30,     0,    31,     0,   161,
      32,    25,     0,    24,    26,    27,   116,     0,     1,     0,
       0,    65,     2,     0,     0,     3,     4,   117,   184,    28,
      25,   118,     0,    26,    27,    29,    24,     0,     0,     0,
       0,    30,     0,    31,     0,     0,    32,     0,    28,    24,
       0,   202,   230,    25,    29,     0,    26,    27,   232,    24,
      30,     0,    31,     0,   204,    32,    25,     0,     0,    26,
      27,    28,    24,     0,   205,     0,    25,    29,     0,    26,
      27,     0,    24,    30,    28,    31,     0,   221,    32,    25,
      29,     0,    26,    27,    28,    24,    30,   229,    31,    25,
      29,    32,    26,    27,     0,    24,    30,    28,    31,     0,
     231,    32,    25,    29,     0,    26,    27,    28,    24,    30,
     239,    31,    25,    29,    32,    26,    27,     0,    24,    30,
      28,    31,     0,   241,    32,    25,    29,     0,    26,    27,
      28,    24,    30,   260,    31,    25,    29,    32,    26,    27,
       0,    24,    30,    28,    31,     0,   261,    32,    25,    29,
       0,    26,    27,    28,    24,    30,   262,    31,    25,    29,
      32,    26,    27,     0,    24,    30,    28,    31,     0,   267,
      32,    25,    29,     0,    26,    27,    28,    24,    30,   269,
      31,    25,    29,    32,    26,    27,     0,    24,    30,    28,
      31,     0,   275,    32,    25,    29,     0,    26,    27,    28,
      24,    30,   279,    31,    25,    29,    32,    26,    27,     0,
      24,    30,    28,    31,     0,   282,    32,    25,    29,     0,
      26,    27,    28,    24,    30,   285,    31,    25,    29,    32,
      26,    27,     0,     0,    30,    28,    31,     0,     0,    32,
      25,    29,     0,    26,    27,    28,     0,    30,   110,    31,
       0,    29,    32,     0,   135,     0,   111,    30,    28,    31,
     110,     0,    32,   162,    29,     0,   135,     0,   111,     0,
      30,     0,    31,     0,     0,    32,     0,     0,     0,   136,
     137,   138,   139,   140,   141,     0,     0,     0,     0,     0,
       0,   136,   137,   138,   139,   140,   141,   123,     0,     1,
       0,     0,     0,     2,     0,     0,     3,     4,   117,     1,
       0,     0,   118,     2,     0,     0,     3,     4,     5,     0,
       6,     7,     1,    56,     0,     0,     2,     0,     0,     3,
       4,     5,     0,     6,     7,     1,   101,     0,     0,     2,
       0,     0,     3,     4,     5,     0,     1,     0,     0,   126,
       2,     0,     0,     3,     4,     5,     0,     1,     0,     0,
     179,     2,     0,     0,     3,     4,     5,     0,     1,     0,
       0,   181,     2,     0,     0,     3,     4,     5,     0,     1,
       0,     0,   216,     2,     0,     0,     3,     4,     5,     0,
       1,     0,     0,   218,     2,     0,     0,     3,     4,     5,
       0,     1,     0,     0,   219,     2,     0,     0,     3,     4,
       5,     0,     1,     0,     0,   234,     2,     0,     0,     3,
       4,     5,     0,     1,     0,     0,   244,     2,     0,     0,
       3,     4,     5,     0,     1,     0,     0,   255,     2,     0,
       0,     3,     4,     5,     0,     1,     0,     0,   258,     2,
       0,     0,     3,     4,     5,     0,     1,     0,     0,   274,
       2,     0,     0,     3,     4,   117,     0,     0,     0,   118
};

static const yytype_int16 yycheck[] =
{
      33,    12,    71,    72,    73,    20,    20,    29,    27,     3,
       3,    17,    23,     3,     5,    23,    26,    11,    11,     6,
       5,    11,     6,    30,     6,    26,    12,     6,    50,    53,
      99,    17,     3,     3,    56,     6,     8,    59,    53,    53,
      11,    11,    52,    58,    58,    52,    52,     4,    47,   118,
       8,    52,    74,    61,    53,    42,     8,    90,    42,    78,
      54,    54,     0,    42,    54,    56,    52,   100,    53,    75,
      52,     8,   105,    42,   107,    32,    33,    19,    20,   101,
      22,   103,     8,     8,   106,     8,    12,   102,   102,    15,
      16,    17,   125,    19,    20,     8,    22,    42,     8,   168,
      47,     8,     3,   172,   126,     5,    59,     7,     8,   178,
      11,   122,   123,    23,    47,    25,    51,    27,    28,    29,
     142,   110,   111,   156,   146,   158,    50,   160,   147,    30,
       5,    31,    58,    43,     5,   157,     7,     8,    18,    49,
       5,     6,     7,     8,   213,    55,     8,    57,    48,    53,
      60,    61,   185,     5,    56,     7,     8,   179,    53,   181,
      31,     8,   195,     7,    53,    12,   199,     8,    15,    16,
     203,     8,   183,    56,   180,    12,   182,     8,    15,    16,
      17,     8,   215,    52,   217,    12,    54,   256,    15,    16,
      17,     7,    19,    20,   216,    22,   218,   219,   209,   268,
      25,   223,    23,   272,    18,   224,   228,   240,    54,   242,
     243,    29,   234,   246,   220,    25,    25,     5,   251,     7,
       8,   254,   244,     5,    18,     7,     8,   238,    21,   235,
     263,    58,    25,   255,    27,    28,   258,   270,    31,    32,
     273,    18,   264,   276,    28,     8,     8,     8,     8,    32,
     283,    12,   274,   259,    15,    16,    17,    45,    46,     8,
      48,    23,    12,    25,    98,    73,    28,    29,   227,    62,
     178,    30,     5,    26,     7,     8,    25,   143,    -1,    28,
      29,    43,    21,    76,    77,    78,   144,    49,    -1,    28,
      -1,    -1,    31,    55,    43,    57,    19,    20,    60,    22,
      49,    50,    -1,    -1,    97,    98,    55,    -1,    57,    -1,
      -1,    60,    45,    46,     8,    48,   109,   110,   111,    -1,
     113,   114,   115,    62,    19,    20,    -1,    22,    -1,    23,
      -1,    25,    -1,    -1,    28,    29,    -1,    76,    77,    78,
      -1,    -1,   135,   136,   137,   138,   139,   140,   141,    43,
     143,   144,   145,    -1,   147,    49,    -1,    -1,    97,    98,
      -1,    55,     5,    57,    -1,     8,    60,    -1,     8,    12,
     109,    -1,    15,    16,    17,    19,    20,    -1,    22,    22,
      -1,    -1,    -1,    23,    -1,    25,    -1,    -1,    28,    29,
      -1,   113,   114,   115,    -1,    -1,   135,   136,   137,   138,
     139,   140,   141,    43,     8,    -1,   145,    -1,   201,    49,
      -1,    -1,    -1,    -1,   207,    55,    -1,    57,    -1,    23,
      60,    25,    -1,     8,    28,    29,     6,    -1,     8,    -1,
      -1,   224,    12,    -1,    -1,    15,    16,    17,    23,    43,
      25,    21,    -1,    28,    29,    49,     8,    -1,    -1,    -1,
      -1,    55,    -1,    57,    -1,    -1,    60,    -1,    43,     8,
      -1,    23,   201,    25,    49,    -1,    28,    29,   207,     8,
      55,    -1,    57,    -1,    23,    60,    25,    -1,    -1,    28,
      29,    43,     8,    -1,    23,    -1,    25,    49,    -1,    28,
      29,    -1,     8,    55,    43,    57,    -1,    23,    60,    25,
      49,    -1,    28,    29,    43,     8,    55,    23,    57,    25,
      49,    60,    28,    29,    -1,     8,    55,    43,    57,    -1,
      23,    60,    25,    49,    -1,    28,    29,    43,     8,    55,
      23,    57,    25,    49,    60,    28,    29,    -1,     8,    55,
      43,    57,    -1,    23,    60,    25,    49,    -1,    28,    29,
      43,     8,    55,    23,    57,    25,    49,    60,    28,    29,
      -1,     8,    55,    43,    57,    -1,    23,    60,    25,    49,
      -1,    28,    29,    43,     8,    55,    23,    57,    25,    49,
      60,    28,    29,    -1,     8,    55,    43,    57,    -1,    23,
      60,    25,    49,    -1,    28,    29,    43,     8,    55,    23,
      57,    25,    49,    60,    28,    29,    -1,     8,    55,    43,
      57,    -1,    23,    60,    25,    49,    -1,    28,    29,    43,
       8,    55,    23,    57,    25,    49,    60,    28,    29,    -1,
       8,    55,    43,    57,    -1,    23,    60,    25,    49,    -1,
      28,    29,    43,     8,    55,    23,    57,    25,    49,    60,
      28,    29,    -1,    -1,    55,    43,    57,    -1,    -1,    60,
      25,    49,    -1,    28,    29,    43,    -1,    55,     3,    57,
      -1,    49,    60,    -1,     9,    -1,    11,    55,    43,    57,
       3,    -1,    60,     6,    49,    -1,     9,    -1,    11,    -1,
      55,    -1,    57,    -1,    -1,    60,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    39,     6,    -1,     8,
      -1,    -1,    -1,    12,    -1,    -1,    15,    16,    17,     8,
      -1,    -1,    21,    12,    -1,    -1,    15,    16,    17,    -1,
      19,    20,     8,    22,    -1,    -1,    12,    -1,    -1,    15,
      16,    17,    -1,    19,    20,     8,    22,    -1,    -1,    12,
      -1,    -1,    15,    16,    17,    -1,     8,    -1,    -1,    22,
      12,    -1,    -1,    15,    16,    17,    -1,     8,    -1,    -1,
      22,    12,    -1,    -1,    15,    16,    17,    -1,     8,    -1,
      -1,    22,    12,    -1,    -1,    15,    16,    17,    -1,     8,
      -1,    -1,    22,    12,    -1,    -1,    15,    16,    17,    -1,
       8,    -1,    -1,    22,    12,    -1,    -1,    15,    16,    17,
      -1,     8,    -1,    -1,    22,    12,    -1,    -1,    15,    16,
      17,    -1,     8,    -1,    -1,    22,    12,    -1,    -1,    15,
      16,    17,    -1,     8,    -1,    -1,    22,    12,    -1,    -1,
      15,    16,    17,    -1,     8,    -1,    -1,    22,    12,    -1,
      -1,    15,    16,    17,    -1,     8,    -1,    -1,    22,    12,
      -1,    -1,    15,    16,    17,    -1,     8,    -1,    -1,    22,
      12,    -1,    -1,    15,    16,    17,    -1,    -1,    -1,    21
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     8,    12,    15,    16,    17,    19,    20,    22,    58,
      63,    64,    70,    71,    72,    76,    77,    78,    81,    82,
      83,    53,     8,     8,     8,    25,    28,    29,    43,    49,
      55,    57,    60,    65,    66,    67,    68,    69,    73,    85,
      87,    88,    89,    90,    94,    95,    96,    97,     8,     0,
      22,    71,    78,    83,     8,    42,    22,    77,    83,    22,
      81,    82,     5,     7,     8,    73,    74,    86,    98,    99,
     100,     5,    56,     5,    22,    78,    47,    53,     5,    98,
     101,   102,   103,   104,     8,    95,   101,    31,    48,    98,
      65,     8,    86,    98,    74,    23,    66,    42,    47,    59,
      65,    22,    83,    22,     8,    65,    22,    65,    98,     5,
       3,    11,    54,     4,    32,    33,     6,    17,    21,    72,
      79,    80,    72,     6,    80,    65,    22,    45,    46,    48,
      75,    98,    98,    98,   101,     9,    34,    35,    36,    37,
      38,    39,    26,    52,    51,    50,    30,    50,    31,    98,
      48,    75,    98,    17,    72,    23,    65,    22,    65,    23,
      65,    23,     6,     6,    84,    98,    99,    99,    18,   100,
     100,   100,    56,    53,    17,    72,     8,     6,    42,    22,
      78,    22,    78,     6,    23,    65,    54,     6,    98,    98,
      98,    98,    98,    98,    98,    65,   102,   103,    98,    65,
     101,    53,    23,    65,    23,    23,     6,    42,    72,    72,
       7,    53,     8,    56,    79,    65,    22,    65,    22,    22,
      78,    23,    23,    27,    61,    91,    92,    93,    30,    23,
      98,    23,    98,     8,    22,    78,    54,     7,    72,    23,
      65,    23,    65,    65,    22,    25,    65,   101,    23,    23,
      92,    65,    29,    54,    65,    22,    18,    54,    22,    78,
      23,    23,    23,    65,    26,    25,    25,    23,    18,    23,
      65,    72,    18,    65,    22,    23,    65,    28,    72,    23,
       8,    72,    23,    65,     8,    23
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    62,    63,    64,    64,    64,    64,    64,    64,    64,
      64,    65,    65,    66,    66,    66,    66,    66,    66,    67,
      68,    69,    69,    69,    69,    69,    70,    70,    71,    71,
      72,    72,    72,    72,    73,    74,    74,    74,    75,    75,
      76,    76,    77,    77,    78,    78,    79,    79,    79,    79,
      80,    80,    81,    81,    81,    81,    81,    81,    82,    82,
      82,    82,    82,    82,    83,    83,    83,    83,    84,    84,
      85,    85,    86,    86,    87,    88,    89,    90,    90,    90,
      91,    92,    93,    93,    94,    94,    94,    94,    95,    95,
      95,    96,    96,    96,    97,    97,    98,    98,    98,    99,
      99,    99,    99,   100,   100,   100,   101,   101,   102,   102,
     103,   103,   104,   104,   104,   104,   104,   104,   104
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     3,     4,     5,     4,     4,     5,     6,
       5,     2,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     3,     3,     2,     2,     2,     2,     1,     4,     9,
       1,     1,     1,     1,     4,     1,     1,     1,     1,     1,
       3,     2,     1,     7,     2,     1,     3,     8,     2,     7,
       3,     1,     9,     8,     8,     7,     6,     5,    11,    10,
      10,     9,     8,     7,     2,     2,     1,     1,     3,     1,
       2,     2,     3,     4,     4,     6,     8,     6,     7,     7,
       2,     4,     2,     1,     1,     1,     1,     1,     3,     3,
       3,     3,     3,     3,     1,     1,     3,     3,     1,     3,
       3,     3,     1,     3,     1,     1,     3,     1,     3,     1,
       3,     1,     3,     3,     3,     3,     3,     3,     3
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
        yyerror (parser, YY_("syntax error: cannot back up")); \
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
                  Kind, Value, parser); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, ExprParser& parser)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (parser);
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, ExprParser& parser)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep, parser);
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
                 int yyrule, ExprParser& parser)
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
                       &yyvsp[(yyi + 1) - (yynrhs)], parser);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, parser); \
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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;
      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, ExprParser& parser)
{
  YY_USE (yyvaluep);
  YY_USE (parser);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}






/*----------.
| yyparse.  |
`----------*/

int
yyparse (ExprParser& parser)
{
/* Lookahead token kind.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

    /* Number of syntax errors so far.  */
    int yynerrs = 0;

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

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

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
      yychar = yylex (&yylval);
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
  case 2: /* start: program  */
#line 102 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprParserImpl.y"
               { parser.createAsm(yyvsp[0]->genProgramCode()); }
#line 1769 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/build/ExprParserImpl.cpp"
    break;

  case 3: /* program: "inicio" codeBlock "fin"  */
#line 104 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprParserImpl.y"
                              { yyval = new Program((DefBlockStmt*)nullptr, (Stmt*)yyvsp[-1]); }
#line 1775 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/build/ExprParserImpl.cpp"
    break;

  case 4: /* program: defBlock "inicio" codeBlock "fin"  */
#line 105 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprParserImpl.y"
                                      { yyval = new Program((DefBlockStmt*)yyvsp[-3], (Stmt*)yyvsp[-1]); }
#line 1781 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/build/ExprParserImpl.cpp"
    break;

  case 11: /* codeBlock: codeBlock line  */
#line 114 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprParserImpl.y"
                          { yyval = new BlockStmt(yyvsp[-1], yyvsp[0]); }
#line 1787 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/build/ExprParserImpl.cpp"
    break;

  case 12: /* codeBlock: line  */
#line 115 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprParserImpl.y"
             { yyval = yyvsp[0]; }
#line 1793 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/build/ExprParserImpl.cpp"
    break;

  case 13: /* line: write  */
#line 118 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprParserImpl.y"
            { yyval = yyvsp[0]; }
#line 1799 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/build/ExprParserImpl.cpp"
    break;

  case 14: /* line: read  */
#line 119 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprParserImpl.y"
             { yyval = yyvsp[0]; }
#line 1805 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/build/ExprParserImpl.cpp"
    break;

  case 15: /* line: allAssign  */
#line 120 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprParserImpl.y"
                  { yyval = yyvsp[0]; }
#line 1811 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/build/ExprParserImpl.cpp"
    break;

  case 16: /* line: structures  */
#line 121 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprParserImpl.y"
                   { yyval = yyvsp[0]; }
#line 1817 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/build/ExprParserImpl.cpp"
    break;

  case 17: /* line: calls  */
#line 122 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprParserImpl.y"
              { yyval = yyvsp[0]; }
#line 1823 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/build/ExprParserImpl.cpp"
    break;

  case 18: /* line: return  */
#line 123 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprParserImpl.y"
               { yyval = yyvsp[0]; }
#line 1829 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/build/ExprParserImpl.cpp"
    break;

  case 23: /* write: "Escriba" "StringConstant"  */
#line 134 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprParserImpl.y"
                    { yyval = new PrintStrStmt((Expr*)yyvsp[0]); }
#line 1835 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/build/ExprParserImpl.cpp"
    break;

  case 24: /* write: "Escriba" expr  */
#line 135 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprParserImpl.y"
                     { yyval = new PrintIntStmt((Expr*)yyvsp[0]); }
#line 1841 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/build/ExprParserImpl.cpp"
    break;

  case 25: /* write: "Escriba" "constantCharacter"  */
#line 136 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprParserImpl.y"
                     { yyval = new PrintChStmt((Expr*)yyvsp[0]); }
#line 1847 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/build/ExprParserImpl.cpp"
    break;

  case 40: /* simpleDef: simpleDef "," "identificador"  */
#line 165 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprParserImpl.y"
                                 { yyval = new DefList((DefList*)yyvsp[-2], new DefVar((IdExpr*)yyvsp[0])); }
#line 1853 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/build/ExprParserImpl.cpp"
    break;

  case 41: /* simpleDef: varType "identificador"  */
#line 166 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprParserImpl.y"
                      { yyval = new DefVar((IdExpr*)yyvsp[0]); }
#line 1859 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/build/ExprParserImpl.cpp"
    break;

  case 42: /* def: simpleDef  */
#line 169 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprParserImpl.y"
               { yyval = yyvsp[0]; }
#line 1865 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/build/ExprParserImpl.cpp"
    break;

  case 44: /* defBlock: defBlock def  */
#line 173 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprParserImpl.y"
                       { yyval = new DefBlockStmt((DefBlockStmt*)yyvsp[-1], (DefStmt*)yyvsp[0]); }
#line 1871 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/build/ExprParserImpl.cpp"
    break;

  case 45: /* defBlock: def  */
#line 174 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprParserImpl.y"
            { yyval = new DefStmt((DefList*)yyvsp[0]); }
#line 1877 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/build/ExprParserImpl.cpp"
    break;

  case 59: /* funcDef: "funcion" "identificador" "(" paramList ")" ":" varType "inicio" codeBlock "fin"  */
#line 197 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprParserImpl.y"
      { yyval = new FuncDefStmt((IdExpr*)yyvsp[-8], (ParamList*)yyvsp[-6], (Stmt*)yyvsp[-1]); }
#line 1883 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/build/ExprParserImpl.cpp"
    break;

  case 74: /* repeat: "Repita" codeBlock "Hasta" boolExpr  */
#line 222 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprParserImpl.y"
                                        { yyval = new DWhileStmt((Expr*)yyvsp[0], (Stmt*)yyvsp[-2]); }
#line 1889 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/build/ExprParserImpl.cpp"
    break;

  case 75: /* while: "mientras" boolExpr "haga" codeBlock "fin" "mientras"  */
#line 225 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprParserImpl.y"
                                                                 { yyval = new WhileStmt((Expr*)yyvsp[-4], (Stmt*)yyvsp[-2]); }
#line 1895 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/build/ExprParserImpl.cpp"
    break;

  case 76: /* for: "para" assign "Hasta" expr "haga" codeBlock "fin" "para"  */
#line 228 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprParserImpl.y"
                                                                { yyval = new ForStmt((AssignStmt*)yyvsp[-6], (Expr*)yyvsp[-4], (Stmt*)yyvsp[-2]); }
#line 1901 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/build/ExprParserImpl.cpp"
    break;

  case 77: /* if: "si" boolExpr "entonces" codeBlock "fin" "si"  */
#line 231 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprParserImpl.y"
                                                      { yyval = new IfStmt((Expr*)yyvsp[-4], (Stmt*)yyvsp[-2], (Stmt*)nullptr); }
#line 1907 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/build/ExprParserImpl.cpp"
    break;

  case 78: /* if: "si" boolExpr "entonces" codeBlock else "fin" "si"  */
#line 232 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprParserImpl.y"
                                                               { yyval = new IfStmt((Expr*)yyvsp[-5], (Stmt*)yyvsp[-3], (Stmt*)yyvsp[-2]); }
#line 1913 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/build/ExprParserImpl.cpp"
    break;

  case 79: /* if: "si" boolExpr "entonces" codeBlock elseBlock "fin" "si"  */
#line 233 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprParserImpl.y"
                                                                    { yyval = new IfStmt((Expr*)yyvsp[-5], (Stmt*)yyvsp[-3], (Stmt*)yyvsp[-2]); }
#line 1919 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/build/ExprParserImpl.cpp"
    break;

  case 80: /* else: "sino" codeBlock  */
#line 236 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprParserImpl.y"
                           { yyval = yyvsp[0]; }
#line 1925 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/build/ExprParserImpl.cpp"
    break;

  case 81: /* elseIf: "Sino Si" boolExpr "entonces" codeBlock  */
#line 239 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprParserImpl.y"
                                           { yyval = new ElseIfStmt((Expr*)yyvsp[-2], (Stmt*)yyvsp[0]); }
#line 1931 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/build/ExprParserImpl.cpp"
    break;

  case 82: /* elseBlock: elseBlock elseIf  */
#line 242 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprParserImpl.y"
                            { yyval = new BlockStmt((Stmt*)yyvsp[-1], (Stmt*)yyvsp[0]); }
#line 1937 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/build/ExprParserImpl.cpp"
    break;

  case 83: /* elseBlock: elseIf  */
#line 243 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprParserImpl.y"
               { yyval = yyvsp[0]; }
#line 1943 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/build/ExprParserImpl.cpp"
    break;

  case 84: /* structures: repeat  */
#line 246 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprParserImpl.y"
                   { yyval = yyvsp[0]; }
#line 1949 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/build/ExprParserImpl.cpp"
    break;

  case 85: /* structures: while  */
#line 247 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprParserImpl.y"
              { yyval = yyvsp[0]; }
#line 1955 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/build/ExprParserImpl.cpp"
    break;

  case 86: /* structures: for  */
#line 248 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprParserImpl.y"
            { yyval = yyvsp[0]; }
#line 1961 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/build/ExprParserImpl.cpp"
    break;

  case 87: /* structures: if  */
#line 249 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprParserImpl.y"
           { yyval = yyvsp[0]; }
#line 1967 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/build/ExprParserImpl.cpp"
    break;

  case 88: /* assign: "identificador" "<-" expr  */
#line 252 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprParserImpl.y"
                             { yyval = new AssignStmt((IdExpr*)yyvsp[-2], (Expr*)yyvsp[0]); }
#line 1973 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/build/ExprParserImpl.cpp"
    break;

  case 94: /* allAssign: assign  */
#line 262 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprParserImpl.y"
                  { yyval = yyvsp[0]; }
#line 1979 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/build/ExprParserImpl.cpp"
    break;

  case 95: /* allAssign: arrAssign  */
#line 263 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprParserImpl.y"
                  { yyval = yyvsp[0]; }
#line 1985 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/build/ExprParserImpl.cpp"
    break;

  case 96: /* expr: expr "+" term  */
#line 266 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprParserImpl.y"
                      { yyval = new AddExpr((Expr*)yyvsp[-2], (Expr*)yyvsp[0]); }
#line 1991 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/build/ExprParserImpl.cpp"
    break;

  case 97: /* expr: expr "-" term  */
#line 267 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprParserImpl.y"
                        { yyval = new SubExpr((Expr*)yyvsp[-2], (Expr*)yyvsp[0]); }
#line 1997 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/build/ExprParserImpl.cpp"
    break;

  case 98: /* expr: term  */
#line 268 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprParserImpl.y"
             { yyval = yyvsp[0]; }
#line 2003 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/build/ExprParserImpl.cpp"
    break;

  case 99: /* term: term "*" factor  */
#line 271 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprParserImpl.y"
                         { }
#line 2009 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/build/ExprParserImpl.cpp"
    break;

  case 100: /* term: term "div" factor  */
#line 272 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprParserImpl.y"
                          { }
#line 2015 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/build/ExprParserImpl.cpp"
    break;

  case 101: /* term: term "mod" factor  */
#line 273 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprParserImpl.y"
                          { }
#line 2021 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/build/ExprParserImpl.cpp"
    break;

  case 102: /* term: factor  */
#line 274 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprParserImpl.y"
               { yyval = yyvsp[0]; }
#line 2027 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/build/ExprParserImpl.cpp"
    break;

  case 103: /* factor: "(" expr ")"  */
#line 277 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprParserImpl.y"
                              { }
#line 2033 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/build/ExprParserImpl.cpp"
    break;

  case 104: /* factor: "numero"  */
#line 278 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprParserImpl.y"
               { yyval = yyvsp[0]; }
#line 2039 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/build/ExprParserImpl.cpp"
    break;

  case 105: /* factor: id  */
#line 279 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprParserImpl.y"
            { yyval = yyvsp[0]; }
#line 2045 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/build/ExprParserImpl.cpp"
    break;

  case 106: /* boolExpr: boolExpr "O" boolTerm  */
#line 282 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprParserImpl.y"
                              { }
#line 2051 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/build/ExprParserImpl.cpp"
    break;

  case 107: /* boolExpr: boolTerm  */
#line 283 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprParserImpl.y"
                 { yyval = yyvsp[0]; }
#line 2057 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/build/ExprParserImpl.cpp"
    break;

  case 108: /* boolTerm: boolTerm "Y" boolFactor  */
#line 286 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprParserImpl.y"
                                { }
#line 2063 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/build/ExprParserImpl.cpp"
    break;

  case 109: /* boolTerm: boolFactor  */
#line 287 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprParserImpl.y"
                   { yyval = yyvsp[0]; }
#line 2069 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/build/ExprParserImpl.cpp"
    break;

  case 110: /* boolFactor: "(" boolExpr ")"  */
#line 290 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprParserImpl.y"
                                      { }
#line 2075 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/build/ExprParserImpl.cpp"
    break;

  case 111: /* boolFactor: boolOperation  */
#line 291 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprParserImpl.y"
                      { yyval = yyvsp[0]; }
#line 2081 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/build/ExprParserImpl.cpp"
    break;

  case 112: /* boolOperation: expr "=" expr  */
#line 294 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprParserImpl.y"
                              { yyval = new EqExpr((Expr*)yyvsp[-2], (Expr*)yyvsp[0]); }
#line 2087 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/build/ExprParserImpl.cpp"
    break;

  case 113: /* boolOperation: expr "==" expr  */
#line 295 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprParserImpl.y"
                         { yyval = new EqExpr((Expr*)yyvsp[-2], (Expr*)yyvsp[0]); }
#line 2093 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/build/ExprParserImpl.cpp"
    break;

  case 114: /* boolOperation: expr "<>" expr  */
#line 296 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprParserImpl.y"
                          { yyval = new NeExpr((Expr*)yyvsp[-2], (Expr*)yyvsp[0]); }
#line 2099 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/build/ExprParserImpl.cpp"
    break;

  case 115: /* boolOperation: expr "<" expr  */
#line 297 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprParserImpl.y"
                           { yyval = new LTExpr((Expr*)yyvsp[-2], (Expr*)yyvsp[0]); }
#line 2105 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/build/ExprParserImpl.cpp"
    break;

  case 116: /* boolOperation: expr "<=" expr  */
#line 298 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprParserImpl.y"
                            { yyval = new LETExpr((Expr*)yyvsp[-2], (Expr*)yyvsp[0]); }
#line 2111 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/build/ExprParserImpl.cpp"
    break;

  case 117: /* boolOperation: expr ">" expr  */
#line 299 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprParserImpl.y"
                            { yyval = new GTExpr((Expr*)yyvsp[-2], (Expr*)yyvsp[0]); }
#line 2117 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/build/ExprParserImpl.cpp"
    break;

  case 118: /* boolOperation: expr ">=" expr  */
#line 300 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprParserImpl.y"
                             { yyval = new GETExpr((Expr*)yyvsp[-2], (Expr*)yyvsp[0]); }
#line 2123 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/build/ExprParserImpl.cpp"
    break;


#line 2127 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/build/ExprParserImpl.cpp"

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
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (parser, yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
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
                      yytoken, &yylval, parser);
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, parser);
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
  yyerror (parser, YY_("memory exhausted"));
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
                  yytoken, &yylval, parser);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, parser);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

