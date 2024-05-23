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
#line 7 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/ExprFlexBisonV3/ExprParserImpl.y"


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


#line 87 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/ExprFlexBisonV3/build/ExprParserImpl.cpp"




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
  YYSYMBOL_YYACCEPT = 61,                  /* $accept  */
  YYSYMBOL_program = 62,                   /* program  */
  YYSYMBOL_codeBlock = 63,                 /* codeBlock  */
  YYSYMBOL_line = 64,                      /* line  */
  YYSYMBOL_return = 65,                    /* return  */
  YYSYMBOL_read = 66,                      /* read  */
  YYSYMBOL_write = 67,                     /* write  */
  YYSYMBOL_typeBlock = 68,                 /* typeBlock  */
  YYSYMBOL_defType = 69,                   /* defType  */
  YYSYMBOL_varType = 70,                   /* varType  */
  YYSYMBOL_arrId = 71,                     /* arrId  */
  YYSYMBOL_id = 72,                        /* id  */
  YYSYMBOL_valBool = 73,                   /* valBool  */
  YYSYMBOL_compOp = 74,                    /* compOp  */
  YYSYMBOL_simpleDef = 75,                 /* simpleDef  */
  YYSYMBOL_def = 76,                       /* def  */
  YYSYMBOL_defBlock = 77,                  /* defBlock  */
  YYSYMBOL_paramType = 78,                 /* paramType  */
  YYSYMBOL_paramList = 79,                 /* paramList  */
  YYSYMBOL_procDef = 80,                   /* procDef  */
  YYSYMBOL_funcDef = 81,                   /* funcDef  */
  YYSYMBOL_funcsAndProcs = 82,             /* funcsAndProcs  */
  YYSYMBOL_paramEnter = 83,                /* paramEnter  */
  YYSYMBOL_calls = 84,                     /* calls  */
  YYSYMBOL_subprId = 85,                   /* subprId  */
  YYSYMBOL_repeat = 86,                    /* repeat  */
  YYSYMBOL_while = 87,                     /* while  */
  YYSYMBOL_for = 88,                       /* for  */
  YYSYMBOL_if = 89,                        /* if  */
  YYSYMBOL_structures = 90,                /* structures  */
  YYSYMBOL_assign = 91,                    /* assign  */
  YYSYMBOL_arrAssign = 92,                 /* arrAssign  */
  YYSYMBOL_allAssign = 93,                 /* allAssign  */
  YYSYMBOL_expr = 94,                      /* expr  */
  YYSYMBOL_term = 95,                      /* term  */
  YYSYMBOL_factor = 96,                    /* factor  */
  YYSYMBOL_boolExpr = 97,                  /* boolExpr  */
  YYSYMBOL_boolTerm = 98,                  /* boolTerm  */
  YYSYMBOL_boolFactor = 99,                /* boolFactor  */
  YYSYMBOL_boolOperation = 100             /* boolOperation  */
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
#define YYFINAL  48
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   844

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  112
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  269

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   315


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
      55,    56,    57,    58,    59,    60
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   100,   100,   101,   102,   103,   104,   105,   106,   107,
     110,   111,   114,   115,   116,   117,   118,   119,   122,   125,
     128,   129,   130,   131,   134,   135,   138,   139,   142,   143,
     144,   145,   148,   151,   152,   153,   156,   157,   160,   161,
     162,   163,   164,   165,   166,   169,   170,   173,   174,   177,
     178,   181,   182,   183,   184,   187,   188,   191,   192,   193,
     194,   195,   196,   199,   200,   201,   202,   203,   204,   207,
     208,   209,   210,   213,   214,   217,   218,   221,   222,   225,
     228,   231,   234,   235,   238,   239,   240,   241,   244,   245,
     246,   249,   250,   251,   254,   255,   258,   259,   260,   263,
     264,   265,   266,   269,   270,   271,   276,   277,   280,   281,
     284,   285,   288
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
  "\"Tipo\"", "\"Es\"", "\"Lea\"", "$accept", "program", "codeBlock",
  "line", "return", "read", "write", "typeBlock", "defType", "varType",
  "arrId", "id", "valBool", "compOp", "simpleDef", "def", "defBlock",
  "paramType", "paramList", "procDef", "funcDef", "funcsAndProcs",
  "paramEnter", "calls", "subprId", "repeat", "while", "for", "if",
  "structures", "assign", "arrAssign", "allAssign", "expr", "term",
  "factor", "boolExpr", "boolTerm", "boolFactor", "boolOperation", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-63)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     228,   -63,   -63,   -63,   -63,     8,    43,    59,   619,    67,
      85,   251,   -63,    86,    55,   -63,   364,   -63,   -63,   232,
     121,     2,   665,   -10,   234,    93,   234,    79,   619,   100,
     121,   103,   273,   -63,   -63,   -63,    70,    72,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,    58,   -63,   619,
     -63,   710,   258,   -63,   113,   619,   -63,   318,   619,   -63,
     -63,   121,   -63,     7,   -63,   -63,   -63,     3,    48,   -63,
     688,   352,   700,   619,   150,    24,   121,   234,   253,    -6,
      90,   -63,   -63,    96,    98,   -14,   -63,    25,   306,   144,
     -63,    25,   -63,   -63,   -63,   132,    88,   165,   346,   619,
     331,   619,   -63,   362,   619,   369,    44,   204,   121,   121,
     136,   121,   121,   121,    94,   104,   309,   151,   -63,    17,
     723,   734,    35,   402,   619,   -63,   -63,   -63,   -63,    25,
      10,   654,    13,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     121,   619,   234,   234,   121,   619,   234,   -63,    25,   -63,
     -63,    25,   108,   -63,   -63,   412,   619,   425,   -63,   435,
     -63,   -63,   -63,    36,    25,    48,    48,   352,   -63,   -63,
     -63,   352,   162,   118,   166,   -63,   127,   130,   619,   745,
     619,   756,   767,   -63,   448,   -63,   -63,    25,    75,    90,
     -63,    15,   458,   133,   121,   -63,   471,   -63,   -63,   -63,
     121,   180,   778,   140,   183,   -63,   352,   -63,   481,   619,
     494,   619,   619,   789,   -63,   171,   619,   619,   172,    14,
     -63,    25,   -63,   619,   800,   187,   152,   811,   -63,   504,
     -63,   517,   527,   619,   -63,   540,   550,   -63,   196,   563,
     619,   352,   209,   619,   822,   -63,   -63,   -63,   573,   192,
     194,   352,   -63,   586,   223,   352,   596,   619,   -63,   -63,
     -63,   -63,   -63,   -63,   229,   -63,   609,   -63,   -63
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    31,    28,    29,    30,     0,     0,     0,     0,     0,
       0,     0,    25,     0,    47,    50,     0,    71,    72,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    11,    17,    13,    12,     0,    16,    84,
      85,    86,    87,    15,    94,    95,    14,     0,     1,     0,
      24,     0,     0,    46,     0,     0,    49,     0,     0,    69,
      70,     0,   104,    33,    34,   105,    35,     0,    98,   102,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     107,   109,   111,     0,     0,     0,    22,    23,     0,    76,
      75,    18,    19,     2,    10,     0,     0,     0,     0,     0,
       0,     0,    45,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    56,     0,
       0,     0,     0,     0,     0,    36,    37,    90,    89,    88,
       0,     0,     0,    38,    39,    40,    41,    42,    43,    44,
       0,     0,     0,     0,     0,     0,     0,    20,    21,    92,
      93,    91,     0,    26,     6,     0,     0,     0,     3,     0,
       5,   103,    77,     0,    74,    96,    97,     0,    99,   100,
     101,     0,     0,     0,     0,    53,     0,     0,     0,     0,
       0,     0,     0,    62,     0,    32,   110,   112,     0,   106,
     108,     0,     0,    79,     0,     7,     0,     9,     4,    78,
       0,     0,     0,     0,     0,    51,     0,    55,     0,     0,
       0,     0,     0,     0,    61,     0,     0,     0,     0,     0,
       8,    73,    48,     0,     0,     0,     0,     0,    68,     0,
      60,     0,     0,     0,    82,     0,     0,    80,     0,     0,
       0,     0,     0,     0,     0,    67,    59,    58,     0,     0,
       0,     0,    66,     0,     0,     0,     0,     0,    57,    83,
      81,    27,    65,    54,     0,    64,     0,    52,    63
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -63,   -63,   -25,   -32,   -63,   -63,   -63,   -63,   235,   -62,
     199,   218,   157,   -63,   -63,   -11,    -7,    78,   185,   -18,
      -8,    11,   -63,   -63,   236,   -63,   -63,   -63,   -63,   -63,
     233,   -63,   -63,   208,    -2,   -23,   -24,   119,   129,   -63
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    10,    32,    33,    34,    35,    36,    11,    12,    13,
      37,    65,   128,   140,    14,    15,    16,   118,   119,    17,
      18,    19,   163,    38,    66,    39,    40,    41,    42,    43,
      44,    45,    46,    78,    68,    69,    79,    80,    81,    82
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      94,    59,    85,    88,    51,    56,   108,    70,   117,   120,
     117,    60,   107,   108,   109,    74,   145,   108,   108,   186,
     141,   109,    52,   176,    98,   109,   109,    57,   108,    61,
     103,    62,    63,   105,    59,   153,   109,    75,   142,    59,
      56,   182,   199,    76,    60,   217,   142,   108,   123,    60,
     161,    21,   111,   132,   174,   109,    94,   110,    71,   177,
      76,    20,   100,    56,   185,   142,    94,    22,   238,   125,
     126,    94,   127,    94,   155,    47,   157,   177,   200,   159,
     112,   113,    59,    23,    61,    48,    62,    63,   168,   169,
     170,    94,    60,    61,    53,    62,    63,    54,   215,   184,
      24,    83,   216,    25,    26,   201,   165,   166,    89,   202,
      86,    63,    95,   179,   181,   117,   188,    97,    27,    96,
     192,   102,   193,    94,    28,    94,    61,    94,    62,    63,
      29,   196,    30,   125,   126,    31,   149,    61,     1,    62,
      63,   143,     2,    75,   227,     3,     4,   115,   144,   107,
     171,   116,    94,   208,   167,   210,    94,   172,     1,   175,
      94,   194,     2,   147,    94,     3,     4,     5,    56,   203,
      56,   204,   124,     1,   205,   213,    94,     2,    94,   254,
       3,     4,   152,   206,   229,   142,   231,   232,   222,   261,
     226,   235,   236,   264,   225,   224,   234,    94,   239,    94,
      94,   237,    56,    94,    94,   241,   242,    94,   248,    61,
     162,    62,    63,    56,   251,   253,    94,   259,   256,    64,
     244,    94,   260,    64,    94,    64,    64,   255,    67,    64,
      64,   263,   266,    56,    94,    87,     1,   267,    91,    77,
       2,    62,    63,     3,     4,     5,    50,     6,     7,    92,
       8,     6,     7,   150,    58,   207,   108,   122,    84,     1,
      64,   189,   133,     2,   109,    90,     3,     4,     5,   106,
       6,     7,   190,    49,    64,    64,    64,     6,     7,     0,
     101,    23,     0,   129,   130,   131,     9,   134,   135,   136,
     137,   138,   139,     0,    64,    64,    93,     0,    24,     0,
       0,    25,    26,   148,   151,     0,    64,    64,    64,     9,
      64,    64,    64,     0,    23,   164,    27,     1,     0,     0,
       0,     2,    28,     0,     3,     4,   173,     0,    29,     0,
      30,    24,     0,    31,    25,    26,     0,     6,     7,    64,
     104,    64,    64,    64,     0,    64,     0,     0,   187,    27,
       6,     7,   191,   156,    23,    28,   146,     0,     0,     0,
       1,    29,     0,    30,     2,     0,    31,     3,     4,   154,
      23,    24,     1,     0,    25,    26,     2,    23,     0,     3,
       4,     5,     0,     6,     7,   158,    55,    24,     0,    27,
      25,    26,   160,    64,    24,    28,     0,    25,    26,    64,
       0,    29,   219,    30,     0,    27,    31,     0,   221,     0,
      23,    28,    27,     0,     0,     0,     0,    29,    28,    30,
      23,     0,    31,     0,    29,   183,    30,    24,     0,    31,
      25,    26,     0,    23,     0,   195,     0,    24,     0,     0,
      25,    26,     0,    23,     0,    27,     0,     0,   197,     0,
      24,    28,     0,    25,    26,    27,    23,    29,   198,    30,
      24,    28,    31,    25,    26,     0,    23,    29,    27,    30,
       0,   214,    31,    24,    28,     0,    25,    26,    27,    23,
      29,   218,    30,    24,    28,    31,    25,    26,     0,    23,
      29,    27,    30,     0,   220,    31,    24,    28,     0,    25,
      26,    27,    23,    29,   228,    30,    24,    28,    31,    25,
      26,     0,    23,    29,    27,    30,     0,   230,    31,    24,
      28,     0,    25,    26,    27,    23,    29,   245,    30,    24,
      28,    31,    25,    26,     0,    23,    29,    27,    30,     0,
     246,    31,    24,    28,     0,    25,    26,    27,    23,    29,
     247,    30,    24,    28,    31,    25,    26,     0,    23,    29,
      27,    30,     0,   249,    31,    24,    28,     0,    25,    26,
      27,    23,    29,   250,    30,    24,    28,    31,    25,    26,
       0,    23,    29,    27,    30,     0,   252,    31,    24,    28,
       0,    25,    26,    27,    23,    29,   258,    30,    24,    28,
      31,    25,    26,     0,    23,    29,    27,    30,     0,   262,
      31,    24,    28,     0,    25,    26,    27,    23,    29,   265,
      30,    24,    28,    31,    25,    26,     0,    23,    29,    27,
      30,     0,   268,    31,    24,    28,     0,    25,    26,    27,
       0,    29,     0,    30,    24,    28,    31,    25,    26,     0,
       0,    29,    27,    30,     0,     0,    31,   108,    28,     0,
     161,     0,    27,   133,    29,   109,    30,     0,    28,    31,
      72,     0,     0,     1,    29,     0,    30,     2,     0,    31,
       3,     4,     5,     0,     0,     0,     0,    73,   134,   135,
     136,   137,   138,   139,   114,     0,     1,     0,     0,     0,
       2,     0,     0,     3,     4,   115,   121,     0,     1,   116,
       0,     0,     2,     0,     0,     3,     4,   115,     1,     0,
       0,   116,     2,     0,     0,     3,     4,     5,     0,     6,
       7,     1,    99,     0,     0,     2,     0,     0,     3,     4,
       5,     0,     1,     0,     0,   178,     2,     0,     0,     3,
       4,     5,     0,     1,     0,     0,   180,     2,     0,     0,
       3,     4,     5,     0,     1,     0,     0,   209,     2,     0,
       0,     3,     4,     5,     0,     1,     0,     0,   211,     2,
       0,     0,     3,     4,     5,     0,     1,     0,     0,   212,
       2,     0,     0,     3,     4,     5,     0,     1,     0,     0,
     223,     2,     0,     0,     3,     4,     5,     0,     1,     0,
       0,   233,     2,     0,     0,     3,     4,     5,     0,     1,
       0,     0,   240,     2,     0,     0,     3,     4,     5,     0,
       1,     0,     0,   243,     2,     0,     0,     3,     4,     5,
       0,     0,     0,     0,   257
};

static const yytype_int16 yycheck[] =
{
      32,    19,    26,    28,    11,    16,     3,     5,    70,    71,
      72,    19,     5,     3,    11,    22,    30,     3,     3,     6,
      26,    11,    11,     6,    49,    11,    11,    16,     3,     5,
      55,     7,     8,    58,    52,    97,    11,    47,    52,    57,
      51,     6,     6,    53,    52,    30,    52,     3,    73,    57,
       6,     8,     4,    77,   116,    11,    88,    54,    56,    42,
      53,    53,    51,    74,    54,    52,    98,     8,    54,    45,
      46,   103,    48,   105,    99,     8,   101,    42,    42,   104,
      32,    33,   100,     8,     5,     0,     7,     8,   111,   112,
     113,   123,   100,     5,     8,     7,     8,    42,    23,   124,
      25,     8,    27,    28,    29,   167,   108,   109,     8,   171,
      31,     8,    42,   120,   121,   177,   141,    59,    43,    47,
     145,     8,   146,   155,    49,   157,     5,   159,     7,     8,
      55,   156,    57,    45,    46,    60,    48,     5,     8,     7,
       8,    51,    12,    47,   206,    15,    16,    17,    50,     5,
      56,    21,   184,   178,    18,   180,   188,    53,     8,     8,
     192,    53,    12,    31,   196,    15,    16,    17,   179,     7,
     181,    53,    22,     8,     8,   182,   208,    12,   210,   241,
      15,    16,    17,    56,   209,    52,   211,   212,     8,   251,
       7,   216,   217,   255,    54,   202,    25,   229,   223,   231,
     232,    29,   213,   235,   236,    18,    54,   239,   233,     5,
       6,     7,     8,   224,    18,   240,   248,    25,   243,    20,
     227,   253,    28,    24,   256,    26,    27,    18,    20,    30,
      31,     8,   257,   244,   266,    27,     8,     8,    30,     5,
      12,     7,     8,    15,    16,    17,    11,    19,    20,    31,
      22,    19,    20,    96,    22,   177,     3,    72,    25,     8,
      61,   142,     9,    12,    11,    29,    15,    16,    17,    61,
      19,    20,   143,    22,    75,    76,    77,    19,    20,    -1,
      22,     8,    -1,    75,    76,    77,    58,    34,    35,    36,
      37,    38,    39,    -1,    95,    96,    23,    -1,    25,    -1,
      -1,    28,    29,    95,    96,    -1,   107,   108,   109,    58,
     111,   112,   113,    -1,     8,   107,    43,     8,    -1,    -1,
      -1,    12,    49,    -1,    15,    16,    17,    -1,    55,    -1,
      57,    25,    -1,    60,    28,    29,    -1,    19,    20,   140,
      22,   142,   143,   144,    -1,   146,    -1,    -1,   140,    43,
      19,    20,   144,    22,     8,    49,    50,    -1,    -1,    -1,
       8,    55,    -1,    57,    12,    -1,    60,    15,    16,    23,
       8,    25,     8,    -1,    28,    29,    12,     8,    -1,    15,
      16,    17,    -1,    19,    20,    23,    22,    25,    -1,    43,
      28,    29,    23,   194,    25,    49,    -1,    28,    29,   200,
      -1,    55,   194,    57,    -1,    43,    60,    -1,   200,    -1,
       8,    49,    43,    -1,    -1,    -1,    -1,    55,    49,    57,
       8,    -1,    60,    -1,    55,    23,    57,    25,    -1,    60,
      28,    29,    -1,     8,    -1,    23,    -1,    25,    -1,    -1,
      28,    29,    -1,     8,    -1,    43,    -1,    -1,    23,    -1,
      25,    49,    -1,    28,    29,    43,     8,    55,    23,    57,
      25,    49,    60,    28,    29,    -1,     8,    55,    43,    57,
      -1,    23,    60,    25,    49,    -1,    28,    29,    43,     8,
      55,    23,    57,    25,    49,    60,    28,    29,    -1,     8,
      55,    43,    57,    -1,    23,    60,    25,    49,    -1,    28,
      29,    43,     8,    55,    23,    57,    25,    49,    60,    28,
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
      -1,    55,    -1,    57,    25,    49,    60,    28,    29,    -1,
      -1,    55,    43,    57,    -1,    -1,    60,     3,    49,    -1,
       6,    -1,    43,     9,    55,    11,    57,    -1,    49,    60,
       5,    -1,    -1,     8,    55,    -1,    57,    12,    -1,    60,
      15,    16,    17,    -1,    -1,    -1,    -1,    22,    34,    35,
      36,    37,    38,    39,     6,    -1,     8,    -1,    -1,    -1,
      12,    -1,    -1,    15,    16,    17,     6,    -1,     8,    21,
      -1,    -1,    12,    -1,    -1,    15,    16,    17,     8,    -1,
      -1,    21,    12,    -1,    -1,    15,    16,    17,    -1,    19,
      20,     8,    22,    -1,    -1,    12,    -1,    -1,    15,    16,
      17,    -1,     8,    -1,    -1,    22,    12,    -1,    -1,    15,
      16,    17,    -1,     8,    -1,    -1,    22,    12,    -1,    -1,
      15,    16,    17,    -1,     8,    -1,    -1,    22,    12,    -1,
      -1,    15,    16,    17,    -1,     8,    -1,    -1,    22,    12,
      -1,    -1,    15,    16,    17,    -1,     8,    -1,    -1,    22,
      12,    -1,    -1,    15,    16,    17,    -1,     8,    -1,    -1,
      22,    12,    -1,    -1,    15,    16,    17,    -1,     8,    -1,
      -1,    22,    12,    -1,    -1,    15,    16,    17,    -1,     8,
      -1,    -1,    22,    12,    -1,    -1,    15,    16,    17,    -1,
       8,    -1,    -1,    22,    12,    -1,    -1,    15,    16,    17,
      -1,    -1,    -1,    -1,    22
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     8,    12,    15,    16,    17,    19,    20,    22,    58,
      62,    68,    69,    70,    75,    76,    77,    80,    81,    82,
      53,     8,     8,     8,    25,    28,    29,    43,    49,    55,
      57,    60,    63,    64,    65,    66,    67,    71,    84,    86,
      87,    88,    89,    90,    91,    92,    93,     8,     0,    22,
      69,    77,    82,     8,    42,    22,    76,    82,    22,    80,
      81,     5,     7,     8,    71,    72,    85,    94,    95,    96,
       5,    56,     5,    22,    77,    47,    53,     5,    94,    97,
      98,    99,   100,     8,    91,    97,    31,    94,    63,     8,
      85,    94,    72,    23,    64,    42,    47,    59,    63,    22,
      82,    22,     8,    63,    22,    63,    94,     5,     3,    11,
      54,     4,    32,    33,     6,    17,    21,    70,    78,    79,
      70,     6,    79,    63,    22,    45,    46,    48,    73,    94,
      94,    94,    97,     9,    34,    35,    36,    37,    38,    39,
      74,    26,    52,    51,    50,    30,    50,    31,    94,    48,
      73,    94,    17,    70,    23,    63,    22,    63,    23,    63,
      23,     6,     6,    83,    94,    95,    95,    18,    96,    96,
      96,    56,    53,    17,    70,     8,     6,    42,    22,    77,
      22,    77,     6,    23,    63,    54,     6,    94,    63,    98,
      99,    94,    63,    97,    53,    23,    63,    23,    23,     6,
      42,    70,    70,     7,    53,     8,    56,    78,    63,    22,
      63,    22,    22,    77,    23,    23,    27,    30,    23,    94,
      23,    94,     8,    22,    77,    54,     7,    70,    23,    63,
      23,    63,    63,    22,    25,    63,    63,    29,    54,    63,
      22,    18,    54,    22,    77,    23,    23,    23,    63,    23,
      23,    18,    23,    63,    70,    18,    63,    22,    23,    25,
      28,    70,    23,     8,    70,    23,    63,     8,    23
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    61,    62,    62,    62,    62,    62,    62,    62,    62,
      63,    63,    64,    64,    64,    64,    64,    64,    65,    66,
      67,    67,    67,    67,    68,    68,    69,    69,    70,    70,
      70,    70,    71,    72,    72,    72,    73,    73,    74,    74,
      74,    74,    74,    74,    74,    75,    75,    76,    76,    77,
      77,    78,    78,    78,    78,    79,    79,    80,    80,    80,
      80,    80,    80,    81,    81,    81,    81,    81,    81,    82,
      82,    82,    82,    83,    83,    84,    84,    85,    85,    86,
      87,    88,    89,    89,    90,    90,    90,    90,    91,    91,
      91,    92,    92,    92,    93,    93,    94,    94,    94,    95,
      95,    95,    95,    96,    96,    96,    97,    97,    98,    98,
      99,    99,   100
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     4,     5,     4,     4,     5,     6,     5,
       2,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       3,     3,     2,     2,     2,     1,     4,     9,     1,     1,
       1,     1,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     2,     1,     7,     2,
       1,     3,     8,     2,     7,     3,     1,     9,     8,     8,
       7,     6,     5,    11,    10,    10,     9,     8,     7,     2,
       2,     1,     1,     3,     1,     2,     2,     3,     4,     4,
       6,     8,     6,     8,     1,     1,     1,     1,     3,     3,
       3,     3,     3,     3,     1,     1,     3,     3,     1,     3,
       3,     3,     1,     3,     1,     1,     3,     1,     3,     1,
       3,     1,     3
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
  case 88: /* assign: "identificador" "<-" expr  */
#line 244 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/ExprFlexBisonV3/ExprParserImpl.y"
                             { parser.assign(std::get<std::string>(yyvsp[-2]), std::get<double>(yyvsp[0])); }
#line 1748 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/ExprFlexBisonV3/build/ExprParserImpl.cpp"
    break;

  case 96: /* expr: expr "+" term  */
#line 258 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/ExprFlexBisonV3/ExprParserImpl.y"
                      { yyval = std::get<double>(yyvsp[-2]) + std::get<double>(yyvsp[0]); }
#line 1754 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/ExprFlexBisonV3/build/ExprParserImpl.cpp"
    break;

  case 97: /* expr: expr "-" term  */
#line 259 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/ExprFlexBisonV3/ExprParserImpl.y"
                        { yyval = std::get<double>(yyvsp[-2]) - std::get<double>(yyvsp[0]); }
#line 1760 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/ExprFlexBisonV3/build/ExprParserImpl.cpp"
    break;

  case 98: /* expr: term  */
#line 260 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/ExprFlexBisonV3/ExprParserImpl.y"
             { yyval = yyvsp[0]; }
#line 1766 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/ExprFlexBisonV3/build/ExprParserImpl.cpp"
    break;

  case 99: /* term: term "*" factor  */
#line 263 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/ExprFlexBisonV3/ExprParserImpl.y"
                         { yyval = std::get<double>(yyvsp[-2]) * std::get<double>(yyvsp[0]);  }
#line 1772 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/ExprFlexBisonV3/build/ExprParserImpl.cpp"
    break;

  case 100: /* term: term "div" factor  */
#line 264 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/ExprFlexBisonV3/ExprParserImpl.y"
                          { yyval = std::get<double>(yyvsp[-2]) / std::get<double>(yyvsp[0]);  }
#line 1778 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/ExprFlexBisonV3/build/ExprParserImpl.cpp"
    break;

  case 101: /* term: term "mod" factor  */
#line 265 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/ExprFlexBisonV3/ExprParserImpl.y"
                          { yyval = std::get<double>(yyvsp[-2]) / std::get<double>(yyvsp[0]);  }
#line 1784 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/ExprFlexBisonV3/build/ExprParserImpl.cpp"
    break;

  case 102: /* term: factor  */
#line 266 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/ExprFlexBisonV3/ExprParserImpl.y"
               { yyval = yyvsp[0]; }
#line 1790 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/ExprFlexBisonV3/build/ExprParserImpl.cpp"
    break;

  case 103: /* factor: "(" expr ")"  */
#line 269 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/ExprFlexBisonV3/ExprParserImpl.y"
                              { yyval = yyvsp[-1]; }
#line 1796 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/ExprFlexBisonV3/build/ExprParserImpl.cpp"
    break;

  case 104: /* factor: "numero"  */
#line 270 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/ExprFlexBisonV3/ExprParserImpl.y"
               { yyval = yyvsp[0]; }
#line 1802 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/ExprFlexBisonV3/build/ExprParserImpl.cpp"
    break;

  case 105: /* factor: id  */
#line 271 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/ExprFlexBisonV3/ExprParserImpl.y"
            {
            yyval = parser.constValue(std::get<std::string>(yyvsp[0]));
      }
#line 1810 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/ExprFlexBisonV3/build/ExprParserImpl.cpp"
    break;

  case 106: /* boolExpr: boolExpr "O" boolTerm  */
#line 276 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/ExprFlexBisonV3/ExprParserImpl.y"
                              { yyval = std::get<double>(yyvsp[-2]) + std::get<double>(yyvsp[0]); }
#line 1816 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/ExprFlexBisonV3/build/ExprParserImpl.cpp"
    break;

  case 107: /* boolExpr: boolTerm  */
#line 277 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/ExprFlexBisonV3/ExprParserImpl.y"
                 { yyval = yyvsp[0]; }
#line 1822 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/ExprFlexBisonV3/build/ExprParserImpl.cpp"
    break;

  case 108: /* boolTerm: boolTerm "Y" boolFactor  */
#line 280 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/ExprFlexBisonV3/ExprParserImpl.y"
                                { yyval = std::get<double>(yyvsp[-2]) * std::get<double>(yyvsp[0]);  }
#line 1828 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/ExprFlexBisonV3/build/ExprParserImpl.cpp"
    break;

  case 109: /* boolTerm: boolFactor  */
#line 281 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/ExprFlexBisonV3/ExprParserImpl.y"
                   { yyval = yyvsp[0]; }
#line 1834 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/ExprFlexBisonV3/build/ExprParserImpl.cpp"
    break;

  case 110: /* boolFactor: "(" boolExpr ")"  */
#line 284 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/ExprFlexBisonV3/ExprParserImpl.y"
                                      { yyval = yyvsp[-1]; }
#line 1840 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/ExprFlexBisonV3/build/ExprParserImpl.cpp"
    break;

  case 111: /* boolFactor: boolOperation  */
#line 285 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/ExprFlexBisonV3/ExprParserImpl.y"
                      { yyval = yyvsp[0]; }
#line 1846 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/ExprFlexBisonV3/build/ExprParserImpl.cpp"
    break;


#line 1850 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/ExprFlexBisonV3/build/ExprParserImpl.cpp"

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

