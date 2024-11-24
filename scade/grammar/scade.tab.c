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




/* First part of user prologue.  */
#line 1 "scade.y"

#include <stdio.h>

#line 75 "scade.tab.c"

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

#include "scade.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_SEMICOLON = 3,                  /* SEMICOLON  */
  YYSYMBOL_DOUBLE_COLON = 4,               /* DOUBLE_COLON  */
  YYSYMBOL_EQUAL = 5,                      /* EQUAL  */
  YYSYMBOL_DOUBLE_LT = 6,                  /* DOUBLE_LT  */
  YYSYMBOL_DOUBLE_GT = 7,                  /* DOUBLE_GT  */
  YYSYMBOL_COMMA = 8,                      /* COMMA  */
  YYSYMBOL_L_BRACE = 9,                    /* L_BRACE  */
  YYSYMBOL_R_BRACE = 10,                   /* R_BRACE  */
  YYSYMBOL_COLON = 11,                     /* COLON  */
  YYSYMBOL_CARET = 12,                     /* CARET  */
  YYSYMBOL_L_PARENTHESE = 13,              /* L_PARENTHESE  */
  YYSYMBOL_R_PARENTHESE = 14,              /* R_PARENTHESE  */
  YYSYMBOL_UNDERSCORE = 15,                /* UNDERSCORE  */
  YYSYMBOL_ARROW_TO_RIGHT = 16,            /* ARROW_TO_RIGHT  */
  YYSYMBOL_MINUS = 17,                     /* MINUS  */
  YYSYMBOL_PLUS = 18,                      /* PLUS  */
  YYSYMBOL_MUL = 19,                       /* MUL  */
  YYSYMBOL_DIV = 20,                       /* DIV  */
  YYSYMBOL_DIFF = 21,                      /* DIFF  */
  YYSYMBOL_LT = 22,                        /* LT  */
  YYSYMBOL_GT = 23,                        /* GT  */
  YYSYMBOL_LE = 24,                        /* LE  */
  YYSYMBOL_GE = 25,                        /* GE  */
  YYSYMBOL_SHARP = 26,                     /* SHARP  */
  YYSYMBOL_CONCAT = 27,                    /* CONCAT  */
  YYSYMBOL_L_S_BRACKET = 28,               /* L_S_BRACKET  */
  YYSYMBOL_R_S_BRACKET = 29,               /* R_S_BRACKET  */
  YYSYMBOL_DOUBLE_DOT = 30,                /* DOUBLE_DOT  */
  YYSYMBOL_DOT = 31,                       /* DOT  */
  YYSYMBOL_VERTICAL_BAR = 32,              /* VERTICAL_BAR  */
  YYSYMBOL_PREFIXOP = 33,                  /* PREFIXOP  */
  YYSYMBOL_ABSTRACT = 34,                  /* ABSTRACT  */
  YYSYMBOL_OPEN = 35,                      /* OPEN  */
  YYSYMBOL_PACKAGE = 36,                   /* PACKAGE  */
  YYSYMBOL_PRIVATE = 37,                   /* PRIVATE  */
  YYSYMBOL_PUBLIC = 38,                    /* PUBLIC  */
  YYSYMBOL_END = 39,                       /* END  */
  YYSYMBOL_TYPE = 40,                      /* TYPE  */
  YYSYMBOL_IMPORTED = 41,                  /* IMPORTED  */
  YYSYMBOL_BOOL = 42,                      /* BOOL  */
  YYSYMBOL_SIGNED = 43,                    /* SIGNED  */
  YYSYMBOL_INT8 = 44,                      /* INT8  */
  YYSYMBOL_INT16 = 45,                     /* INT16  */
  YYSYMBOL_INT32 = 46,                     /* INT32  */
  YYSYMBOL_INT64 = 47,                     /* INT64  */
  YYSYMBOL_UNSIGNED = 48,                  /* UNSIGNED  */
  YYSYMBOL_UINT8 = 49,                     /* UINT8  */
  YYSYMBOL_UINT16 = 50,                    /* UINT16  */
  YYSYMBOL_UINT32 = 51,                    /* UINT32  */
  YYSYMBOL_UINT64 = 52,                    /* UINT64  */
  YYSYMBOL_FLOAT32 = 53,                   /* FLOAT32  */
  YYSYMBOL_FLOAT64 = 54,                   /* FLOAT64  */
  YYSYMBOL_CHAR_TYPE = 55,                 /* CHAR_TYPE  */
  YYSYMBOL_IS = 56,                        /* IS  */
  YYSYMBOL_NUMERIC = 57,                   /* NUMERIC  */
  YYSYMBOL_FLOAT_SYM = 58,                 /* FLOAT_SYM  */
  YYSYMBOL_INTEGER_SYM = 59,               /* INTEGER_SYM  */
  YYSYMBOL_ENUM = 60,                      /* ENUM  */
  YYSYMBOL_LAST = 61,                      /* LAST  */
  YYSYMBOL_CONST = 62,                     /* CONST  */
  YYSYMBOL_SENSOR = 63,                    /* SENSOR  */
  YYSYMBOL_CLOCK = 64,                     /* CLOCK  */
  YYSYMBOL_PROBE = 65,                     /* PROBE  */
  YYSYMBOL_DEFAULT = 66,                   /* DEFAULT  */
  YYSYMBOL_NOT = 67,                       /* NOT  */
  YYSYMBOL_WHEN = 68,                      /* WHEN  */
  YYSYMBOL_FUNCTION = 69,                  /* FUNCTION  */
  YYSYMBOL_NODE = 70,                      /* NODE  */
  YYSYMBOL_RETURNS = 71,                   /* RETURNS  */
  YYSYMBOL_WHERE = 72,                     /* WHERE  */
  YYSYMBOL_SPECIALIZE = 73,                /* SPECIALIZE  */
  YYSYMBOL_ASSUME = 74,                    /* ASSUME  */
  YYSYMBOL_GUARANTEE = 75,                 /* GUARANTEE  */
  YYSYMBOL_SIG = 76,                       /* SIG  */
  YYSYMBOL_VAR = 77,                       /* VAR  */
  YYSYMBOL_LET = 78,                       /* LET  */
  YYSYMBOL_TEL = 79,                       /* TEL  */
  YYSYMBOL_TRUE = 80,                      /* TRUE  */
  YYSYMBOL_FALSE = 81,                     /* FALSE  */
  YYSYMBOL_PRE = 82,                       /* PRE  */
  YYSYMBOL_FBY = 83,                       /* FBY  */
  YYSYMBOL_TIMES = 84,                     /* TIMES  */
  YYSYMBOL_MERGE = 85,                     /* MERGE  */
  YYSYMBOL_LNOT = 86,                      /* LNOT  */
  YYSYMBOL_MOD = 87,                       /* MOD  */
  YYSYMBOL_LAND = 88,                      /* LAND  */
  YYSYMBOL_LOR = 89,                       /* LOR  */
  YYSYMBOL_LXOR = 90,                      /* LXOR  */
  YYSYMBOL_LSL = 91,                       /* LSL  */
  YYSYMBOL_LSR = 92,                       /* LSR  */
  YYSYMBOL_AND = 93,                       /* AND  */
  YYSYMBOL_OR = 94,                        /* OR  */
  YYSYMBOL_XOR = 95,                       /* XOR  */
  YYSYMBOL_REVERSE = 96,                   /* REVERSE  */
  YYSYMBOL_TRANSPOSE = 97,                 /* TRANSPOSE  */
  YYSYMBOL_WITH = 98,                      /* WITH  */
  YYSYMBOL_IF = 99,                        /* IF  */
  YYSYMBOL_THEN = 100,                     /* THEN  */
  YYSYMBOL_ELSE = 101,                     /* ELSE  */
  YYSYMBOL_CASE = 102,                     /* CASE  */
  YYSYMBOL_OF = 103,                       /* OF  */
  YYSYMBOL_MAKE = 104,                     /* MAKE  */
  YYSYMBOL_FLATTEN = 105,                  /* FLATTEN  */
  YYSYMBOL_MAP = 106,                      /* MAP  */
  YYSYMBOL_FOLD = 107,                     /* FOLD  */
  YYSYMBOL_MAPI = 108,                     /* MAPI  */
  YYSYMBOL_FOLDI = 109,                    /* FOLDI  */
  YYSYMBOL_MAPFOLD = 110,                  /* MAPFOLD  */
  YYSYMBOL_MAPFOLDI = 111,                 /* MAPFOLDI  */
  YYSYMBOL_MAPW = 112,                     /* MAPW  */
  YYSYMBOL_MAPWI = 113,                    /* MAPWI  */
  YYSYMBOL_MAPFOLDW = 114,                 /* MAPFOLDW  */
  YYSYMBOL_MAPFOLDWI = 115,                /* MAPFOLDWI  */
  YYSYMBOL_ACTIVATE = 116,                 /* ACTIVATE  */
  YYSYMBOL_EVERY = 117,                    /* EVERY  */
  YYSYMBOL_MATCH = 118,                    /* MATCH  */
  YYSYMBOL_INITIAL = 119,                  /* INITIAL  */
  YYSYMBOL_RESTART = 120,                  /* RESTART  */
  YYSYMBOL_FOLDW = 121,                    /* FOLDW  */
  YYSYMBOL_FOLDWI = 122,                   /* FOLDWI  */
  YYSYMBOL_EMIT = 123,                     /* EMIT  */
  YYSYMBOL_AUTOMATON = 124,                /* AUTOMATON  */
  YYSYMBOL_FINAL = 125,                    /* FINAL  */
  YYSYMBOL_STATE = 126,                    /* STATE  */
  YYSYMBOL_UNLESS = 127,                   /* UNLESS  */
  YYSYMBOL_RESUME = 128,                   /* RESUME  */
  YYSYMBOL_DO = 129,                       /* DO  */
  YYSYMBOL_ELSIF = 130,                    /* ELSIF  */
  YYSYMBOL_UNTIL = 131,                    /* UNTIL  */
  YYSYMBOL_SYNCHRO = 132,                  /* SYNCHRO  */
  YYSYMBOL_INTEGER = 133,                  /* INTEGER  */
  YYSYMBOL_TYPED_INTEGER = 134,            /* TYPED_INTEGER  */
  YYSYMBOL_FLOAT = 135,                    /* FLOAT  */
  YYSYMBOL_TYPED_FLOAT = 136,              /* TYPED_FLOAT  */
  YYSYMBOL_CHAR = 137,                     /* CHAR  */
  YYSYMBOL_ID = 138,                       /* ID  */
  YYSYMBOL_NAME = 139,                     /* NAME  */
  YYSYMBOL_YYACCEPT = 140,                 /* $accept  */
  YYSYMBOL_program = 141,                  /* program  */
  YYSYMBOL_decls = 142,                    /* decls  */
  YYSYMBOL_path = 143,                     /* path  */
  YYSYMBOL_path_id = 144,                  /* path_id  */
  YYSYMBOL_package_decl = 145,             /* package_decl  */
  YYSYMBOL_optional_visibility = 146,      /* optional_visibility  */
  YYSYMBOL_visibility = 147,               /* visibility  */
  YYSYMBOL_decls_list = 148,               /* decls_list  */
  YYSYMBOL_external = 149,                 /* external  */
  YYSYMBOL_interface_status = 150,         /* interface_status  */
  YYSYMBOL_type_block = 151,               /* type_block  */
  YYSYMBOL_type_decl = 152,                /* type_decl  */
  YYSYMBOL_type_def = 153,                 /* type_def  */
  YYSYMBOL_id_list = 154,                  /* id_list  */
  YYSYMBOL_numeric_kind = 155,             /* numeric_kind  */
  YYSYMBOL_type_expr = 156,                /* type_expr  */
  YYSYMBOL_field_decl = 157,               /* field_decl  */
  YYSYMBOL_field_decl_list = 158,          /* field_decl_list  */
  YYSYMBOL_typevar = 159,                  /* typevar  */
  YYSYMBOL_const_block = 160,              /* const_block  */
  YYSYMBOL_const_decl_list = 161,          /* const_decl_list  */
  YYSYMBOL_const_decl = 162,               /* const_decl  */
  YYSYMBOL_sensor_block = 163,             /* sensor_block  */
  YYSYMBOL_sensor_decl_list = 164,         /* sensor_decl_list  */
  YYSYMBOL_sensor_decl = 165,              /* sensor_decl  */
  YYSYMBOL_var_decls = 166,                /* var_decls  */
  YYSYMBOL_var_id_list = 167,              /* var_id_list  */
  YYSYMBOL_var_id = 168,                   /* var_id  */
  YYSYMBOL_optional_when_decl = 169,       /* optional_when_decl  */
  YYSYMBOL_when_decl = 170,                /* when_decl  */
  YYSYMBOL_optional_default_decl = 171,    /* optional_default_decl  */
  YYSYMBOL_default_decl = 172,             /* default_decl  */
  YYSYMBOL_optional_last_decl = 173,       /* optional_last_decl  */
  YYSYMBOL_last_decl = 174,                /* last_decl  */
  YYSYMBOL_user_op_decl = 175,             /* user_op_decl  */
  YYSYMBOL_op_kind = 176,                  /* op_kind  */
  YYSYMBOL_optional_size_decl = 177,       /* optional_size_decl  */
  YYSYMBOL_size_decl = 178,                /* size_decl  */
  YYSYMBOL_params = 179,                   /* params  */
  YYSYMBOL_var_decls_for_params = 180,     /* var_decls_for_params  */
  YYSYMBOL_where_decl_list = 181,          /* where_decl_list  */
  YYSYMBOL_where_decl = 182,               /* where_decl  */
  YYSYMBOL_typevar_list = 183,             /* typevar_list  */
  YYSYMBOL_optional_spec_decl = 184,       /* optional_spec_decl  */
  YYSYMBOL_spec_decl = 185,                /* spec_decl  */
  YYSYMBOL_opt_body = 186,                 /* opt_body  */
  YYSYMBOL_optional_semicolon = 187,       /* optional_semicolon  */
  YYSYMBOL_data_def = 188,                 /* data_def  */
  YYSYMBOL_scope = 189,                    /* scope  */
  YYSYMBOL_optional_signal_block = 190,    /* optional_signal_block  */
  YYSYMBOL_signal_block = 191,             /* signal_block  */
  YYSYMBOL_optional_local_block = 192,     /* optional_local_block  */
  YYSYMBOL_local_block = 193,              /* local_block  */
  YYSYMBOL_var_decls_list_for_lb = 194,    /* var_decls_list_for_lb  */
  YYSYMBOL_optional_eqs = 195,             /* optional_eqs  */
  YYSYMBOL_eqs = 196,                      /* eqs  */
  YYSYMBOL_equation_list = 197,            /* equation_list  */
  YYSYMBOL_equation = 198,                 /* equation  */
  YYSYMBOL_simple_equation = 199,          /* simple_equation  */
  YYSYMBOL_lhs = 200,                      /* lhs  */
  YYSYMBOL_lhs_id_list = 201,              /* lhs_id_list  */
  YYSYMBOL_lhs_id = 202,                   /* lhs_id  */
  YYSYMBOL_assert = 203,                   /* assert  */
  YYSYMBOL_emission = 204,                 /* emission  */
  YYSYMBOL_emission_body = 205,            /* emission_body  */
  YYSYMBOL_name_list = 206,                /* name_list  */
  YYSYMBOL_return = 207,                   /* return  */
  YYSYMBOL_returns_var = 208,              /* returns_var  */
  YYSYMBOL_id_list_for_ret_var = 209,      /* id_list_for_ret_var  */
  YYSYMBOL_control_block = 210,            /* control_block  */
  YYSYMBOL_clocked_block = 211,            /* clocked_block  */
  YYSYMBOL_optional_id = 212,              /* optional_id  */
  YYSYMBOL_if_blk_or_match_blk = 213,      /* if_blk_or_match_blk  */
  YYSYMBOL_if_block = 214,                 /* if_block  */
  YYSYMBOL_data_def_or_if_blk = 215,       /* data_def_or_if_blk  */
  YYSYMBOL_match_block = 216,              /* match_block  */
  YYSYMBOL_match_ptrn_list = 217,          /* match_ptrn_list  */
  YYSYMBOL_state_machine = 218,            /* state_machine  */
  YYSYMBOL_state_decl_list = 219,          /* state_decl_list  */
  YYSYMBOL_state_decl = 220,               /* state_decl  */
  YYSYMBOL_optional_initial = 221,         /* optional_initial  */
  YYSYMBOL_optional_final = 222,           /* optional_final  */
  YYSYMBOL_optional_unless_trs = 223,      /* optional_unless_trs  */
  YYSYMBOL_optional_until = 224,           /* optional_until  */
  YYSYMBOL_tr_list_one_or_more = 225,      /* tr_list_one_or_more  */
  YYSYMBOL_optional_synchro = 226,         /* optional_synchro  */
  YYSYMBOL_tr_list_zero_or_more = 227,     /* tr_list_zero_or_more  */
  YYSYMBOL_transition = 228,               /* transition  */
  YYSYMBOL_arrow = 229,                    /* arrow  */
  YYSYMBOL_optional_actions = 230,         /* optional_actions  */
  YYSYMBOL_fork = 231,                     /* fork  */
  YYSYMBOL_elsif_fork_list = 232,          /* elsif_fork_list  */
  YYSYMBOL_elsif_fork = 233,               /* elsif_fork  */
  YYSYMBOL_optional_else_fork = 234,       /* optional_else_fork  */
  YYSYMBOL_else_fork = 235,                /* else_fork  */
  YYSYMBOL_target = 236,                   /* target  */
  YYSYMBOL_actions = 237,                  /* actions  */
  YYSYMBOL_emit_emission_body_list = 238,  /* emit_emission_body_list  */
  YYSYMBOL_emit_emission_body = 239,       /* emit_emission_body  */
  YYSYMBOL_optional_emit = 240,            /* optional_emit  */
  YYSYMBOL_clock_expr = 241,               /* clock_expr  */
  YYSYMBOL_expr = 242,                     /* expr  */
  YYSYMBOL_atom = 243,                     /* atom  */
  YYSYMBOL_bool_atom = 244,                /* bool_atom  */
  YYSYMBOL_id_expr = 245,                  /* id_expr  */
  YYSYMBOL_list_expr = 246,                /* list_expr  */
  YYSYMBOL_list = 247,                     /* list  */
  YYSYMBOL_expr_list = 248,                /* expr_list  */
  YYSYMBOL_tempo_expr = 249,               /* tempo_expr  */
  YYSYMBOL_list_list = 250,                /* list_list  */
  YYSYMBOL_arith_expr = 251,               /* arith_expr  */
  YYSYMBOL_unary_arith_op = 252,           /* unary_arith_op  */
  YYSYMBOL_bin_arith_op = 253,             /* bin_arith_op  */
  YYSYMBOL_relation_expr = 254,            /* relation_expr  */
  YYSYMBOL_bin_relation_op = 255,          /* bin_relation_op  */
  YYSYMBOL_bool_expr = 256,                /* bool_expr  */
  YYSYMBOL_bin_bool_op = 257,              /* bin_bool_op  */
  YYSYMBOL_array_expr = 258,               /* array_expr  */
  YYSYMBOL_struct_expr = 259,              /* struct_expr  */
  YYSYMBOL_mixed_constructor = 260,        /* mixed_constructor  */
  YYSYMBOL_label_expr = 261,               /* label_expr  */
  YYSYMBOL_label_expr_list = 262,          /* label_expr_list  */
  YYSYMBOL_index = 263,                    /* index  */
  YYSYMBOL_label_or_index = 264,           /* label_or_index  */
  YYSYMBOL_label_or_index_list = 265,      /* label_or_index_list  */
  YYSYMBOL_switch_expr = 266,              /* switch_expr  */
  YYSYMBOL_case_expr_list = 267,           /* case_expr_list  */
  YYSYMBOL_case_expr = 268,                /* case_expr  */
  YYSYMBOL_pattern = 269,                  /* pattern  */
  YYSYMBOL_apply_expr = 270,               /* apply_expr  */
  YYSYMBOL_operator = 271,                 /* operator  */
  YYSYMBOL_prefix = 272,                   /* prefix  */
  YYSYMBOL_iterator = 273,                 /* iterator  */
  YYSYMBOL_iterator_mw = 274               /* iterator_mw  */
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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2178

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  140
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  135
/* YYNRULES -- Number of rules.  */
#define YYNRULES  334
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  606

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   394


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   150,   150,   154,   155,   156,   157,   158,   159,   163,
     164,   168,   169,   173,   177,   178,   182,   183,   187,   188,
     192,   196,   197,   198,   199,   203,   204,   208,   209,   210,
     211,   215,   216,   220,   221,   225,   226,   227,   228,   229,
     233,   234,   235,   235,   235,   235,   236,   237,   237,   237,
     237,   238,   238,   239,   240,   241,   242,   243,   247,   251,
     252,   256,   260,   261,   265,   266,   270,   271,   275,   279,
     280,   284,   288,   292,   293,   297,   298,   299,   300,   304,
     305,   309,   313,   314,   318,   322,   323,   327,   331,   335,
     336,   340,   341,   345,   346,   350,   351,   355,   356,   360,
     361,   365,   369,   370,   374,   375,   379,   383,   384,   385,
     391,   392,   396,   397,   401,   407,   408,   412,   416,   417,
     421,   425,   426,   430,   431,   435,   439,   440,   444,   445,
     446,   447,   451,   455,   456,   460,   461,   465,   466,   470,
     471,   477,   481,   482,   483,   484,   488,   489,   493,   497,
     498,   502,   503,   507,   508,   512,   516,   517,   521,   522,
     526,   530,   531,   535,   539,   540,   543,   547,   548,   552,
     559,   560,   564,   565,   569,   570,   574,   575,   578,   579,
     583,   584,   588,   589,   593,   597,   601,   602,   606,   607,
     611,   612,   616,   620,   621,   625,   629,   630,   634,   635,
     639,   640,   644,   648,   649,   655,   656,   657,   661,   662,
     663,   664,   665,   666,   667,   668,   669,   670,   671,   672,
     676,   677,   678,   679,   680,   681,   685,   686,   690,   691,
     692,   696,   700,   701,   705,   706,   710,   711,   712,   713,
     714,   715,   719,   720,   724,   725,   726,   730,   731,   732,
     736,   737,   738,   739,   740,   741,   742,   743,   744,   745,
     749,   753,   754,   755,   756,   757,   758,   762,   763,   764,
     768,   769,   770,   774,   775,   776,   777,   778,   779,   780,
     781,   785,   786,   790,   794,   798,   799,   803,   807,   808,
     812,   813,   817,   818,   822,   823,   827,   831,   832,   833,
     834,   835,   836,   837,   838,   842,   846,   847,   848,   849,
     850,   851,   852,   853,   854,   855,   856,   857,   858,   862,
     863,   867,   868,   869,   870,   871,   872,   873,   874,   878,
     879,   880,   881,   882,   883
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "SEMICOLON",
  "DOUBLE_COLON", "EQUAL", "DOUBLE_LT", "DOUBLE_GT", "COMMA", "L_BRACE",
  "R_BRACE", "COLON", "CARET", "L_PARENTHESE", "R_PARENTHESE",
  "UNDERSCORE", "ARROW_TO_RIGHT", "MINUS", "PLUS", "MUL", "DIV", "DIFF",
  "LT", "GT", "LE", "GE", "SHARP", "CONCAT", "L_S_BRACKET", "R_S_BRACKET",
  "DOUBLE_DOT", "DOT", "VERTICAL_BAR", "PREFIXOP", "ABSTRACT", "OPEN",
  "PACKAGE", "PRIVATE", "PUBLIC", "END", "TYPE", "IMPORTED", "BOOL",
  "SIGNED", "INT8", "INT16", "INT32", "INT64", "UNSIGNED", "UINT8",
  "UINT16", "UINT32", "UINT64", "FLOAT32", "FLOAT64", "CHAR_TYPE", "IS",
  "NUMERIC", "FLOAT_SYM", "INTEGER_SYM", "ENUM", "LAST", "CONST", "SENSOR",
  "CLOCK", "PROBE", "DEFAULT", "NOT", "WHEN", "FUNCTION", "NODE",
  "RETURNS", "WHERE", "SPECIALIZE", "ASSUME", "GUARANTEE", "SIG", "VAR",
  "LET", "TEL", "TRUE", "FALSE", "PRE", "FBY", "TIMES", "MERGE", "LNOT",
  "MOD", "LAND", "LOR", "LXOR", "LSL", "LSR", "AND", "OR", "XOR",
  "REVERSE", "TRANSPOSE", "WITH", "IF", "THEN", "ELSE", "CASE", "OF",
  "MAKE", "FLATTEN", "MAP", "FOLD", "MAPI", "FOLDI", "MAPFOLD", "MAPFOLDI",
  "MAPW", "MAPWI", "MAPFOLDW", "MAPFOLDWI", "ACTIVATE", "EVERY", "MATCH",
  "INITIAL", "RESTART", "FOLDW", "FOLDWI", "EMIT", "AUTOMATON", "FINAL",
  "STATE", "UNLESS", "RESUME", "DO", "ELSIF", "UNTIL", "SYNCHRO",
  "INTEGER", "TYPED_INTEGER", "FLOAT", "TYPED_FLOAT", "CHAR", "ID", "NAME",
  "$accept", "program", "decls", "path", "path_id", "package_decl",
  "optional_visibility", "visibility", "decls_list", "external",
  "interface_status", "type_block", "type_decl", "type_def", "id_list",
  "numeric_kind", "type_expr", "field_decl", "field_decl_list", "typevar",
  "const_block", "const_decl_list", "const_decl", "sensor_block",
  "sensor_decl_list", "sensor_decl", "var_decls", "var_id_list", "var_id",
  "optional_when_decl", "when_decl", "optional_default_decl",
  "default_decl", "optional_last_decl", "last_decl", "user_op_decl",
  "op_kind", "optional_size_decl", "size_decl", "params",
  "var_decls_for_params", "where_decl_list", "where_decl", "typevar_list",
  "optional_spec_decl", "spec_decl", "opt_body", "optional_semicolon",
  "data_def", "scope", "optional_signal_block", "signal_block",
  "optional_local_block", "local_block", "var_decls_list_for_lb",
  "optional_eqs", "eqs", "equation_list", "equation", "simple_equation",
  "lhs", "lhs_id_list", "lhs_id", "assert", "emission", "emission_body",
  "name_list", "return", "returns_var", "id_list_for_ret_var",
  "control_block", "clocked_block", "optional_id", "if_blk_or_match_blk",
  "if_block", "data_def_or_if_blk", "match_block", "match_ptrn_list",
  "state_machine", "state_decl_list", "state_decl", "optional_initial",
  "optional_final", "optional_unless_trs", "optional_until",
  "tr_list_one_or_more", "optional_synchro", "tr_list_zero_or_more",
  "transition", "arrow", "optional_actions", "fork", "elsif_fork_list",
  "elsif_fork", "optional_else_fork", "else_fork", "target", "actions",
  "emit_emission_body_list", "emit_emission_body", "optional_emit",
  "clock_expr", "expr", "atom", "bool_atom", "id_expr", "list_expr",
  "list", "expr_list", "tempo_expr", "list_list", "arith_expr",
  "unary_arith_op", "bin_arith_op", "relation_expr", "bin_relation_op",
  "bool_expr", "bin_bool_op", "array_expr", "struct_expr",
  "mixed_constructor", "label_expr", "label_expr_list", "index",
  "label_or_index", "label_or_index_list", "switch_expr", "case_expr_list",
  "case_expr", "pattern", "apply_expr", "operator", "prefix", "iterator",
  "iterator_mw", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-539)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-320)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -539,    49,   356,  -539,   -80,   178,  -539,    23,  -539,  -539,
    -539,  -539,  -539,    74,  -539,  -539,  -539,   180,  -539,   256,
    -539,  -539,   -76,  -539,    74,   -34,  -539,    77,  -539,    -2,
     183,    34,  -539,    97,  -539,   150,   292,  -539,   196,   294,
    -539,    40,  -539,   298,  -539,   299,   289,  -539,   176,   515,
    -539,   146,   126,    11,   306,  -539,   317,   515,  -539,   185,
    -539,   318,  -539,  -539,  -539,  -539,   319,  -539,  -539,  -539,
    -539,  -539,  -539,  -539,   322,  -539,   323,  -539,   316,  -539,
     324,   275,   316,  -539,  -539,  -539,  -539,  -539,  -539,  -539,
     262,    24,   265,  -539,    45,   329,  -539,    95,   334,   335,
     205,   624,   -34,   126,  -539,  -539,   -40,   206,  -539,  -539,
     240,  -539,   106,   306,   624,   515,   185,  -539,  -539,  -539,
     342,   213,   396,  -539,  -539,   341,   624,  -539,   218,   624,
    -539,  -539,   624,   345,   347,  -539,   624,   350,   624,  -539,
    -539,  -539,  -539,  -539,  -539,   162,  2083,  -539,  -539,  -539,
    -539,  -539,  -539,   624,  -539,  -539,  -539,  -539,  -539,  -539,
    -539,   351,  -539,   246,  -539,   228,  -539,  -539,   -41,   515,
     -41,  -539,  -539,  2083,   316,  -539,   362,  -539,   247,   624,
     229,   229,  -539,  -539,  -539,  -539,   244,   245,  -539,  -539,
     248,   249,     6,     6,     6,     6,  1168,   365,   375,   382,
       6,     6,   624,  2083,   364,  -539,  2083,  2083,   624,   624,
    2083,   624,  1076,  -539,   624,   624,  -539,  -539,  -539,  -539,
    -539,  -539,  -539,  -539,  -539,   624,   624,   257,    20,   624,
    -539,  -539,  -539,  -539,  -539,  -539,  -539,  -539,  -539,   624,
     624,   624,  -539,  2083,   624,  -539,  -539,  -539,    17,  -539,
     204,   624,   213,  -539,   984,   380,   383,  -539,  -539,  -539,
    -539,   859,  -539,   281,   282,   398,   400,   515,   -11,   222,
    -539,   624,   304,   401,   402,   388,  -539,   407,  1207,  1262,
     624,  2083,  2083,  2083,  1391,  -539,   274,   277,  -539,  -539,
    2083,  2083,  2083,  2083,   403,    20,   355,  -539,   284,   229,
    -539,    19,  -539,  2083,  -539,   384,  -539,  -539,   382,   647,
     624,   624,   624,   261,   624,   290,  -539,  -539,    16,   200,
    2083,   413,   286,   624,   624,  -539,   624,   624,   297,  1022,
    -539,   624,   313,  -539,  -539,  -539,   427,   372,  -539,  -539,
      43,  -539,  -539,   420,  -539,   307,   308,   -34,   309,    13,
     309,  -539,  -539,   358,  -539,   433,  -539,   439,   440,  -539,
    -539,  -539,   379,  -539,  -539,    26,    39,  -539,   510,   670,
      76,   437,   837,  1355,  1446,  1482,  -539,  1573,  -539,   624,
    -539,   624,  -539,   438,  1537,  1628,  1300,  -539,   118,   450,
     624,  1664,    26,   624,   449,  -539,  -539,   284,  -539,  -539,
     444,   445,    73,  -539,   -20,   320,   359,  -539,   343,  -539,
     386,  -539,  -539,   624,    27,  -539,  -539,  -539,   169,  -539,
    -539,  -539,  -539,  -539,   454,  -539,  -539,    12,   173,  -539,
     624,   394,  -539,   367,   368,  1719,  1755,  -539,   447,   369,
     624,   624,  -539,   336,  2083,  -539,   456,  2083,   624,  -539,
     624,   624,  -539,   624,   624,  -539,  -539,  -539,  -539,   123,
     624,  -539,   -44,  -539,   348,   -41,  -539,  2083,  -539,  -539,
     -15,  -539,  -539,   624,  1810,   624,   624,   624,  -539,  -539,
    -539,   624,   458,  -539,   460,  -539,  2083,  2083,  2083,   930,
    1114,   344,   381,  2083,  -539,  -539,   360,   481,   167,  -539,
     477,  2083,  -539,  1846,  1901,  1937,  1992,  -539,  -539,   455,
     163,  -539,   624,   353,  -539,   485,   486,  -539,  -539,  -539,
    -539,   624,    26,   462,  -539,  -539,   358,   493,  -539,   412,
    2083,   387,  -539,  -539,  -539,  2028,   488,    26,   442,  -539,
     163,   416,   232,  -539,   232,   511,  -539,  -539,  -539,  -539,
     624,   416,   518,   395,  -539,   232,   698,   807,   522,  -539,
    -539,  -539,  -539,  -539,   158,  -539,   -36,  -539,  -539,   -59,
     414,  -539,   624,   404,   406,  -539,  -539,   410,  -539,   537,
    -539,   216,  -539,    13,   807,  -539,  -539,   -36,  -539,   414,
    -539,  -539,  -539,   538,  -539,   -31,  -539,   410,   624,  -539,
     506,  -539,  -539,   807,  -539,  -539
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
      18,     0,     2,     1,     0,    14,    25,    62,    69,    89,
      90,    19,     4,     5,     6,     7,     8,    21,     9,     0,
      17,    16,     0,    15,    63,    68,    20,    22,    23,     0,
       0,     0,     3,     0,    18,     0,     0,    33,     0,     0,
      24,    27,    26,    91,    10,     0,     0,    65,     0,     0,
      70,     0,     0,     0,     0,    92,     0,     0,    34,     0,
      40,     0,    42,    43,    44,    45,     0,    47,    48,    49,
      50,    51,    52,    53,    11,    61,     0,    54,    71,    55,
       0,    28,    31,    38,    39,    35,    36,    37,    29,    93,
       0,     0,     0,    13,    66,     0,    59,     0,     0,     0,
       0,     0,     0,     0,    94,    95,     0,     0,    75,    97,
       0,    73,     0,     0,     0,     0,     0,    56,    41,    46,
      12,     0,   232,   247,   248,     0,   232,   320,     0,     0,
     226,   227,     0,     0,     0,   249,     0,     0,     0,   222,
     224,   223,   225,   221,   229,   228,    57,   209,   220,   208,
     210,   211,   212,     0,   213,   214,   215,   216,   217,   218,
     219,     0,   306,     0,    30,     0,    76,    77,     0,     0,
       0,    96,    99,    67,    58,    60,     0,   285,     0,     0,
       0,     0,   321,   322,   323,   324,   325,   327,   329,   330,
     331,   333,     0,     0,     0,     0,   234,     0,   233,   306,
       0,     0,   232,   234,     0,   230,   267,   236,   232,     0,
     273,     0,     0,   261,     0,     0,   251,   250,   252,   253,
     262,   263,   264,   265,   266,     0,     0,     0,     0,     0,
     254,   255,   256,   257,   258,   259,   270,   271,   272,     0,
       0,     0,   275,   244,   232,    32,    78,    74,    79,    98,
     104,     0,     0,   282,     0,     0,     0,   326,   328,   332,
     334,     0,   319,     0,     0,     0,     0,     0,     0,     0,
     231,     0,     0,     0,     0,     0,   280,     0,     0,     0,
       0,   279,   237,   274,     0,   281,     0,     0,   205,   240,
     239,   245,   260,   268,     0,     0,    82,    80,     0,     0,
     100,   115,   105,   284,   286,     0,   309,   310,     0,     0,
       0,     0,     0,     0,     0,     0,   289,   290,     0,     0,
     235,     0,     0,     0,     0,   269,     0,   232,     0,     0,
     287,     0,     0,   206,   305,    81,     0,    85,    83,   102,
       0,   106,   107,     0,   138,     0,     0,     0,   156,     0,
     156,   137,    88,   118,   116,     0,   128,     0,   134,   135,
     129,   130,     0,   154,   153,     0,     0,   294,   232,     0,
      11,     0,     0,     0,     0,     0,   246,     0,   288,     0,
     291,     0,   307,     0,     0,     0,     0,   242,     0,     0,
       0,     0,     0,     0,     0,    72,    86,     0,   101,   133,
       0,     0,     0,   157,     0,     0,   142,   141,   170,   121,
       0,   119,   108,     0,     0,   151,   131,   304,     0,   299,
     301,   298,   297,   303,     0,   293,   295,    11,    11,   312,
       0,     0,   315,     0,     0,     0,     0,   308,     0,     0,
     232,   232,   241,     0,   292,   276,     0,    84,     0,   103,
       0,     0,   117,     0,     0,   155,   158,   159,   146,     0,
       0,   171,   170,   167,   172,   120,   126,   132,   136,   148,
       0,   300,   302,     0,     0,     0,     0,     0,   277,   283,
     311,     0,     0,   243,     0,   207,    87,   139,   140,     0,
       0,     0,   144,   143,   168,   173,     0,     0,     0,   150,
     149,   296,   313,     0,     0,     0,     0,   238,   278,     0,
     115,   147,     0,     0,   122,   110,     0,   152,   314,   317,
     318,     0,     0,   163,   161,   113,   118,     0,   162,     0,
     145,   174,   111,   109,   127,     0,     0,     0,   123,   112,
     115,     0,   115,   316,   115,     0,   126,   114,   124,   160,
       0,   175,     0,   176,   164,   115,     0,   186,     0,   178,
     182,   169,   165,   125,   115,   184,     0,   187,   179,   180,
     203,   199,     0,     0,     0,   185,   188,   186,   177,     0,
     204,     0,   200,     0,   186,   196,   197,     0,   183,   203,
     198,   202,   190,     0,   201,   193,   181,   186,     0,   191,
       0,   194,   195,   186,   189,   192
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -539,  -539,  -539,   542,   -47,  -539,  -539,   543,   513,   523,
     219,  -539,  -539,  -539,   -48,   -96,   -43,   435,  -539,  -268,
    -539,  -539,  -539,  -539,  -539,  -539,  -167,  -539,   385,  -539,
    -539,  -539,  -539,  -539,  -539,  -539,  -539,  -539,  -539,   436,
    -539,  -539,  -539,  -539,  -539,  -539,  -539,  -539,  -315,  -539,
     251,  -539,    28,  -539,  -539,  -539,  -539,     9,  -295,  -539,
    -539,  -539,   142,  -539,  -539,   -10,  -539,  -539,  -539,  -539,
    -539,  -539,   224,  -539,   168,    35,  -539,  -539,  -539,  -539,
     114,  -539,  -539,  -539,  -539,  -539,  -539,  -539,  -495,  -538,
       1,    -8,  -539,  -539,  -539,  -539,  -539,  -539,  -539,    -7,
    -539,  -240,  -101,  -539,  -356,  -539,  -539,  -125,   311,  -539,
    -539,  -539,  -539,  -539,  -539,  -539,  -539,  -539,  -539,  -539,
    -539,   328,  -539,  -202,    -9,   312,  -539,  -539,   220,  -381,
    -539,    71,  -110,  -539,  -539
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,    11,    76,   145,    12,    22,    27,     2,    28,
      29,    13,    30,    81,    38,    88,    78,    96,    97,    79,
      14,    24,    36,    15,    25,    39,   109,   110,   111,   296,
     297,   337,   338,   395,   396,    16,    17,    54,    55,    92,
     112,   250,   300,   340,   301,   302,   352,   533,   524,   525,
     526,   354,   410,   411,   465,   547,   548,   498,   527,   356,
     357,   358,   359,   360,   361,   407,   459,   416,   469,   470,
     362,   363,   404,   455,   528,   529,   457,   523,   364,   462,
     463,   464,   496,   542,   561,   551,   578,   569,   552,   565,
     566,   575,   595,   599,   600,   601,   576,   567,   581,   582,
     583,   289,   203,   147,   148,   149,   150,   197,   198,   151,
     388,   152,   153,   239,   154,   240,   155,   241,   156,   157,
     158,   177,   178,   242,   317,   318,   159,   366,   367,   424,
     160,   161,   162,   200,   201
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     146,   204,    77,   249,    77,    90,   355,   164,    82,   423,
      77,   446,   199,   173,    94,   499,    -9,   314,    89,   261,
     315,   196,   342,   106,   107,   165,   405,  -166,   206,   101,
     339,   207,   343,   286,   344,   210,   423,   212,   105,   127,
     550,   417,   344,   418,   314,    51,   592,   315,   453,     3,
     114,   397,   243,   425,   163,   335,   558,   101,    18,   602,
     -64,   -64,    34,   572,   -64,   605,   316,   316,    77,   371,
     597,   365,   174,   577,   579,   461,   452,   275,   254,   454,
      -9,    48,   379,   277,   573,   295,    83,   287,   106,   107,
    -205,    84,   574,   345,   346,   347,    52,   108,   166,   598,
      85,    86,    87,   116,    37,   117,   130,   131,   278,   170,
     279,    20,    21,   281,   282,    26,   316,   316,    26,   294,
     171,   441,    77,   500,   283,   284,   248,   285,   290,   449,
     392,   491,   442,   255,   256,   348,    41,   492,   291,   292,
     293,   536,   349,   350,    74,   262,   262,   262,   262,    37,
     303,   308,   406,   262,   262,    59,   545,   351,   288,   419,
     420,   -64,   108,   421,    74,   351,   423,   570,  -319,    83,
     320,   343,    43,   344,    84,  -319,   343,    -9,   344,   329,
     343,   423,   344,    85,    86,    87,    42,  -206,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,   387,   516,    48,   381,    80,    49,   372,   373,
     374,   375,   -21,   377,   262,    20,    21,    20,    21,   589,
      77,    26,   384,   385,   313,   386,   590,   553,   314,   554,
     391,   315,   345,   346,   347,    44,    31,   345,   346,   347,
     562,   345,   346,    35,   398,   343,   515,   344,   168,   571,
     314,   169,   341,   315,    48,   252,   245,   253,   199,    32,
      33,   516,   454,   263,   264,   265,   266,   196,   206,   104,
      48,   273,   274,   101,   348,   376,   298,   299,   435,   348,
     436,   349,   350,   348,    74,    75,   349,   350,    46,   444,
     349,   350,   447,   383,   271,    47,   351,    50,   497,   402,
      57,   351,   471,   472,    53,   351,   345,   346,   347,   380,
     380,   321,   467,   121,    58,   482,   483,   122,   422,    91,
      93,   123,   124,    95,    98,    99,    -9,   100,   101,   474,
     125,   103,   126,   102,     4,     5,   113,   127,    56,     6,
     115,   118,   119,   120,   167,   422,   -10,   486,   348,   487,
     488,   176,   489,   490,   202,   349,   350,   205,   208,   493,
     209,     7,     8,   211,   244,   128,   246,    74,     9,    10,
     351,   129,   501,   251,   503,   504,   505,   257,   258,   270,
     506,   259,   260,   271,   130,   131,   132,   133,   272,   134,
     135,     4,     5,   276,   306,   285,     6,   307,   309,   310,
     136,   137,   325,   138,   311,   121,   312,   323,   324,   122,
     326,   530,   332,   123,   124,   333,   365,   334,     7,     8,
     535,   336,   125,    75,   126,     9,    10,   382,   378,   127,
     389,   392,   393,   394,   399,   409,   412,   139,   140,   141,
     142,   143,    74,   144,   413,   400,   401,   403,   414,   557,
     415,   429,   437,   443,   448,   450,   451,   128,   460,   458,
     475,   480,   461,   129,   466,   473,   476,   477,   481,   484,
     485,   584,   507,   495,   508,   422,   130,   131,   132,   133,
     512,   134,   135,   511,   514,   517,   513,   522,   532,   534,
     422,   531,   136,   137,   537,   138,   539,   603,   179,   544,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   540,   541,   550,   193,   194,   195,   121,
     546,   559,   555,   122,    59,   568,   560,   123,   124,   139,
     140,   141,   142,   143,    74,   144,   125,   580,   126,   564,
     588,   596,   585,   127,   586,   604,    19,    45,    23,   172,
      40,   175,   353,   247,   538,   556,   468,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,   128,   456,   591,   408,   549,   494,   129,   587,   593,
     304,   319,   594,   322,     0,     0,   426,     0,     0,     0,
     130,   131,   132,   133,     0,   134,   135,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   136,   137,     0,   138,
       0,     0,   179,     0,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,     0,     0,     0,
     193,   194,   195,   121,     0,     0,     0,   122,     0,     0,
       0,   123,   124,   139,   140,   141,   142,   143,   427,   144,
     125,     0,   126,    74,    75,     0,   121,   127,     0,     0,
     368,     0,     0,     0,   123,   124,     0,     0,     0,     0,
       0,     0,     0,   125,     0,   126,     0,     0,     0,   121,
     127,     0,     0,   122,     0,   128,     0,   123,   124,     0,
       0,   129,     0,     0,     0,     0,   125,     0,   126,     0,
       0,     0,     0,   127,   130,   131,   132,   133,   128,   134,
     135,   343,     0,   344,   369,     0,     0,     0,     0,     0,
     136,   137,     0,   138,     0,     0,     0,   130,   131,   132,
     133,   128,   134,   135,     0,     0,     0,   129,     0,     0,
       0,     0,     0,   136,   137,     0,   138,     0,     0,     0,
     130,   131,   132,   133,     0,   134,   135,   139,   140,   141,
     142,   143,    74,   144,     0,     0,   136,   137,     0,   138,
       0,     0,   345,   346,     0,     0,     0,   563,     0,     0,
     139,   140,   141,   142,   143,   370,   144,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   139,   140,   141,   142,   143,   428,   144,
       0,     0,   213,     0,   348,     0,     0,     0,     0,   214,
       0,   349,   350,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,     0,   225,   226,   351,     0,   227,     0,
       0,     0,   213,     0,     0,     0,     0,     0,     0,   214,
       0,     0,     0,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,     0,   225,   226,     0,     0,   227,     0,
       0,     0,     0,     0,     0,   228,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   229,   127,     0,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   430,     0,   228,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   229,     0,     0,   230,   231,   232,   233,   234,   235,
     236,   237,   238,     0,     0,   213,   564,     0,     0,     0,
       0,     0,   214,     0,     0,     0,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   431,   225,   226,     0,
       0,   227,     0,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,     0,     0,     0,   193,
     194,   195,     0,     0,     0,     0,     0,     0,     0,   213,
       0,     0,     0,     0,     0,     0,   214,    74,   228,     0,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
       0,   225,   226,     0,   229,   227,     0,   230,   231,   232,
     233,   234,   235,   236,   237,   238,     0,   213,     0,     0,
       0,     0,     0,     0,   214,     0,     0,     0,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   509,   225,
     226,     0,   228,   227,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   229,     0,
       0,   230,   231,   232,   233,   234,   235,   236,   237,   238,
       0,   213,     0,     0,     0,     0,     0,   305,   214,     0,
     228,     0,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,     0,   225,   226,     0,   229,   227,     0,   230,
     231,   232,   233,   234,   235,   236,   237,   238,     0,   213,
       0,     0,     0,   390,     0,     0,   214,     0,     0,     0,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
       0,   225,   226,     0,   228,   227,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     229,     0,     0,   230,   231,   232,   233,   234,   235,   236,
     237,   238,     0,   213,     0,     0,   280,     0,     0,   267,
     214,     0,   228,     0,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,     0,   225,   226,     0,   229,   268,
       0,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     327,     0,   213,     0,   510,     0,     0,     0,     0,   214,
       0,     0,     0,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,     0,   225,   226,   228,     0,   227,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   229,     0,     0,   230,   231,   232,   233,   234,
     235,   236,   237,   238,     0,   328,   269,   213,     0,     0,
       0,     0,     0,     0,   214,   228,     0,     0,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,     0,   225,
     226,   229,     0,   227,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   440,     0,   213,     0,     0,     0,     0,
       0,     0,   214,     0,     0,     0,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,     0,   225,   226,     0,
     228,   227,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   229,     0,     0,   230,
     231,   232,   233,   234,   235,   236,   237,   238,     0,     0,
     213,     0,     0,     0,     0,     0,     0,   214,   228,   432,
       0,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,     0,   225,   226,   229,     0,   227,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   213,     0,     0,     0,
       0,     0,     0,   214,     0,     0,     0,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,     0,   225,   226,
     330,   331,   227,   228,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   229,
       0,     0,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   213,     0,   433,     0,     0,     0,     0,   214,   228,
       0,     0,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,     0,   225,   226,   229,     0,   227,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   213,     0,   434,
       0,     0,     0,     0,   214,     0,     0,     0,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,     0,   225,
     226,     0,     0,   227,   228,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     229,     0,     0,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   213,     0,   438,     0,     0,     0,     0,   214,
     228,     0,     0,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,     0,   225,   226,   229,     0,   227,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   213,     0,
       0,     0,     0,     0,     0,   214,     0,     0,     0,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,     0,
     225,   226,   330,     0,   227,   228,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   229,     0,     0,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   213,     0,   439,     0,     0,     0,     0,
     214,   228,     0,     0,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,     0,   225,   226,   229,     0,   227,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   213,
       0,     0,     0,     0,     0,     0,   214,     0,     0,     0,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
       0,   225,   226,   445,     0,   227,   228,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   229,     0,     0,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   213,     0,     0,     0,     0,     0,
       0,   214,   228,   478,     0,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,     0,   225,   226,   229,     0,
     227,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     213,     0,     0,     0,     0,     0,     0,   214,     0,   479,
       0,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,     0,   225,   226,     0,     0,   227,   228,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   229,     0,     0,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   213,     0,     0,     0,     0,
       0,     0,   214,   228,   502,     0,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,     0,   225,   226,   229,
       0,   227,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   213,     0,     0,     0,     0,     0,     0,   214,     0,
     518,     0,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,     0,   225,   226,     0,     0,   227,   228,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   229,     0,     0,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   213,     0,     0,     0,
       0,     0,     0,   214,   228,   519,     0,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,     0,   225,   226,
     229,     0,   227,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   213,     0,     0,     0,     0,     0,     0,   214,
       0,   520,     0,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,     0,   225,   226,     0,     0,   227,   228,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   229,     0,     0,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   213,     0,     0,
       0,     0,     0,     0,   214,   228,     0,     0,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,     0,   225,
     226,   229,     0,   227,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   213,     0,     0,     0,     0,     0,     0,
     214,     0,   543,     0,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,     0,   225,   226,     0,   521,   227,
     228,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   229,     0,     0,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   213,     0,
       0,     0,     0,     0,     0,   214,   228,     0,     0,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,     0,
     225,   226,   229,     0,   227,   230,   231,   232,   233,   234,
     235,   236,   237,   238,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   228,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   229,     0,     0,
     230,   231,   232,   233,   234,   235,   236,   237,   238
};

static const yytype_int16 yycheck[] =
{
     101,   126,    49,   170,    51,    53,   301,   103,    51,   365,
      57,   392,   122,   114,    57,    30,     4,    28,     7,    13,
      31,   122,     3,    64,    65,    65,    13,    71,   129,    12,
     298,   132,    13,    13,    15,   136,   392,   138,    14,    33,
      99,    15,    15,    17,    28,     5,   584,    31,    68,     0,
       5,     8,   153,    14,   102,   295,   551,    12,   138,   597,
      37,    38,   138,    99,    41,   603,   268,   269,   115,   309,
     101,    32,   115,   132,   569,   119,     3,   202,   179,    99,
       4,     8,    66,   208,   120,    68,    43,    67,    64,    65,
      14,    48,   128,    74,    75,    76,    56,   138,   138,   130,
      57,    58,    59,     8,   138,    10,    80,    81,   209,     3,
     211,    37,    38,   214,   215,    41,   318,   319,    41,   244,
      14,     3,   169,   138,   225,   226,   169,   138,   229,   397,
     118,     8,    14,   180,   181,   116,   138,    14,   239,   240,
     241,   522,   123,   124,   138,   192,   193,   194,   195,   138,
     251,   261,   139,   200,   201,     9,   537,   138,   138,   133,
     134,   138,   138,   137,   138,   138,   522,     9,     6,    43,
     271,    13,   138,    15,    48,    13,    13,     4,    15,   280,
      13,   537,    15,    57,    58,    59,     3,    14,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,   327,   498,     8,     5,    60,    11,   309,   310,
     311,   312,   138,   314,   261,    37,    38,    37,    38,     3,
     267,    41,   323,   324,   267,   326,    10,   542,    28,   544,
     331,    31,    74,    75,    76,   138,    17,    74,    75,    76,
     555,    74,    75,    24,   340,    13,    79,    15,     8,   564,
      28,    11,   299,    31,     8,     8,    10,    10,   368,     3,
       4,   556,    99,   192,   193,   194,   195,   368,   369,     7,
       8,   200,   201,    12,   116,    14,    72,    73,   379,   116,
     381,   123,   124,   116,   138,   139,   123,   124,   138,   390,
     123,   124,   393,     7,     8,     3,   138,     3,   465,   347,
      11,   138,   133,   134,     6,   138,    74,    75,    76,   318,
     319,     7,   413,     9,   138,   440,   441,    13,   365,    13,
       3,    17,    18,   138,     6,     6,     4,     4,    12,   430,
      26,    56,    28,     9,    35,    36,    71,    33,    39,    40,
      11,     7,     7,   138,   138,   392,     4,   448,   116,   450,
     451,   138,   453,   454,    13,   123,   124,   139,    13,   460,
      13,    62,    63,    13,    13,    61,   138,   138,    69,    70,
     138,    67,   473,    11,   475,   476,   477,   133,   133,    14,
     481,   133,   133,     8,    80,    81,    82,    83,     6,    85,
      86,    35,    36,    29,    14,   138,    40,    14,   117,   117,
      96,    97,    14,    99,     6,     9,     6,     6,     6,    13,
       3,   512,   138,    17,    18,   138,    32,    14,    62,    63,
     521,    66,    26,   139,    28,    69,    70,    14,   138,    33,
     133,   118,     5,    61,    14,    77,     3,   133,   134,   135,
     136,   137,   138,   139,     5,   138,   138,   138,     8,   550,
      71,    14,    14,     3,     5,    11,    11,    61,    99,   139,
      66,    14,   119,    67,    78,    11,    99,    99,    99,   133,
      14,   572,    14,   125,    14,   522,    80,    81,    82,    83,
      99,    85,    86,   139,     3,     8,   126,    32,     3,     3,
     537,   138,    96,    97,    32,    99,     3,   598,   102,    11,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   101,   127,    99,   120,   121,   122,     9,
      78,     3,    11,    13,     9,     3,   131,    17,    18,   133,
     134,   135,   136,   137,   138,   139,    26,   123,    28,   129,
       3,     3,   138,    33,   138,    39,     4,    34,     5,   113,
      27,   116,   301,   168,   526,   546,   414,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    61,   404,   583,   350,   540,   462,    67,   577,   587,
     252,   269,   589,   272,    -1,    -1,   366,    -1,    -1,    -1,
      80,    81,    82,    83,    -1,    85,    86,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    96,    97,    -1,    99,
      -1,    -1,   102,    -1,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,    -1,    -1,    -1,
     120,   121,   122,     9,    -1,    -1,    -1,    13,    -1,    -1,
      -1,    17,    18,   133,   134,   135,   136,   137,   138,   139,
      26,    -1,    28,   138,   139,    -1,     9,    33,    -1,    -1,
      13,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    -1,    28,    -1,    -1,    -1,     9,
      33,    -1,    -1,    13,    -1,    61,    -1,    17,    18,    -1,
      -1,    67,    -1,    -1,    -1,    -1,    26,    -1,    28,    -1,
      -1,    -1,    -1,    33,    80,    81,    82,    83,    61,    85,
      86,    13,    -1,    15,    67,    -1,    -1,    -1,    -1,    -1,
      96,    97,    -1,    99,    -1,    -1,    -1,    80,    81,    82,
      83,    61,    85,    86,    -1,    -1,    -1,    67,    -1,    -1,
      -1,    -1,    -1,    96,    97,    -1,    99,    -1,    -1,    -1,
      80,    81,    82,    83,    -1,    85,    86,   133,   134,   135,
     136,   137,   138,   139,    -1,    -1,    96,    97,    -1,    99,
      -1,    -1,    74,    75,    -1,    -1,    -1,    79,    -1,    -1,
     133,   134,   135,   136,   137,   138,   139,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   133,   134,   135,   136,   137,   138,   139,
      -1,    -1,     5,    -1,   116,    -1,    -1,    -1,    -1,    12,
      -1,   123,   124,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    28,   138,    -1,    31,    -1,
      -1,    -1,     5,    -1,    -1,    -1,    -1,    -1,    -1,    12,
      -1,    -1,    -1,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    28,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    84,    33,    -1,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    66,    -1,    68,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    84,    -1,    -1,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    -1,    -1,     5,   129,    -1,    -1,    -1,
      -1,    -1,    12,    -1,    -1,    -1,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,   119,    27,    28,    -1,
      -1,    31,    -1,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,    -1,    -1,    -1,   120,
     121,   122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,
      -1,    -1,    -1,    -1,    -1,    -1,    12,   138,    68,    -1,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    27,    28,    -1,    84,    31,    -1,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    -1,     5,    -1,    -1,
      -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,   118,    27,
      28,    -1,    68,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,
      -1,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      -1,     5,    -1,    -1,    -1,    -1,    -1,   103,    12,    -1,
      68,    -1,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    -1,    27,    28,    -1,    84,    31,    -1,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    -1,     5,
      -1,    -1,    -1,   101,    -1,    -1,    12,    -1,    -1,    -1,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    27,    28,    -1,    68,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      84,    -1,    -1,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    -1,     5,    -1,    -1,   100,    -1,    -1,    11,
      12,    -1,    68,    -1,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27,    28,    -1,    84,    31,
      -1,    87,    88,    89,    90,    91,    92,    93,    94,    95,
       3,    -1,     5,    -1,   100,    -1,    -1,    -1,    -1,    12,
      -1,    -1,    -1,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    28,    68,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    84,    -1,    -1,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    -1,     3,    98,     5,    -1,    -1,
      -1,    -1,    -1,    -1,    12,    68,    -1,    -1,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    27,
      28,    84,    -1,    31,    87,    88,    89,    90,    91,    92,
      93,    94,    95,     3,    -1,     5,    -1,    -1,    -1,    -1,
      -1,    -1,    12,    -1,    -1,    -1,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    -1,    27,    28,    -1,
      68,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    -1,    -1,
       5,    -1,    -1,    -1,    -1,    -1,    -1,    12,    68,    14,
      -1,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    27,    28,    84,    -1,    31,    87,    88,    89,
      90,    91,    92,    93,    94,    95,     5,    -1,    -1,    -1,
      -1,    -1,    -1,    12,    -1,    -1,    -1,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    -1,    27,    28,
      29,    30,    31,    68,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      -1,    -1,    87,    88,    89,    90,    91,    92,    93,    94,
      95,     5,    -1,     7,    -1,    -1,    -1,    -1,    12,    68,
      -1,    -1,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    -1,    27,    28,    84,    -1,    31,    87,    88,
      89,    90,    91,    92,    93,    94,    95,     5,    -1,     7,
      -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    31,    68,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      84,    -1,    -1,    87,    88,    89,    90,    91,    92,    93,
      94,    95,     5,    -1,     7,    -1,    -1,    -1,    -1,    12,
      68,    -1,    -1,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    28,    84,    -1,    31,    87,
      88,    89,    90,    91,    92,    93,    94,    95,     5,    -1,
      -1,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    -1,
      27,    28,    29,    -1,    31,    68,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    84,    -1,    -1,    87,    88,    89,    90,    91,    92,
      93,    94,    95,     5,    -1,     7,    -1,    -1,    -1,    -1,
      12,    68,    -1,    -1,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27,    28,    84,    -1,    31,
      87,    88,    89,    90,    91,    92,    93,    94,    95,     5,
      -1,    -1,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    27,    28,    29,    -1,    31,    68,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    84,    -1,    -1,    87,    88,    89,    90,    91,
      92,    93,    94,    95,     5,    -1,    -1,    -1,    -1,    -1,
      -1,    12,    68,    14,    -1,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    -1,    27,    28,    84,    -1,
      31,    87,    88,    89,    90,    91,    92,    93,    94,    95,
       5,    -1,    -1,    -1,    -1,    -1,    -1,    12,    -1,    14,
      -1,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    31,    68,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    -1,    -1,    87,    88,    89,    90,
      91,    92,    93,    94,    95,     5,    -1,    -1,    -1,    -1,
      -1,    -1,    12,    68,    14,    -1,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    -1,    27,    28,    84,
      -1,    31,    87,    88,    89,    90,    91,    92,    93,    94,
      95,     5,    -1,    -1,    -1,    -1,    -1,    -1,    12,    -1,
      14,    -1,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    -1,    27,    28,    -1,    -1,    31,    68,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    84,    -1,    -1,    87,    88,    89,
      90,    91,    92,    93,    94,    95,     5,    -1,    -1,    -1,
      -1,    -1,    -1,    12,    68,    14,    -1,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    -1,    27,    28,
      84,    -1,    31,    87,    88,    89,    90,    91,    92,    93,
      94,    95,     5,    -1,    -1,    -1,    -1,    -1,    -1,    12,
      -1,    14,    -1,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    28,    -1,    -1,    31,    68,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,    87,    88,
      89,    90,    91,    92,    93,    94,    95,     5,    -1,    -1,
      -1,    -1,    -1,    -1,    12,    68,    -1,    -1,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    27,
      28,    84,    -1,    31,    87,    88,    89,    90,    91,    92,
      93,    94,    95,     5,    -1,    -1,    -1,    -1,    -1,    -1,
      12,    -1,    14,    -1,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27,    28,    -1,    66,    31,
      68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,    87,
      88,    89,    90,    91,    92,    93,    94,    95,     5,    -1,
      -1,    -1,    -1,    -1,    -1,    12,    68,    -1,    -1,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    -1,
      27,    28,    84,    -1,    31,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,
      87,    88,    89,    90,    91,    92,    93,    94,    95
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,   141,   148,     0,    35,    36,    40,    62,    63,    69,
      70,   142,   145,   151,   160,   163,   175,   176,   138,   143,
      37,    38,   146,   147,   161,   164,    41,   147,   149,   150,
     152,   150,     3,     4,   138,   150,   162,   138,   154,   165,
     149,   138,     3,   138,   138,   148,   138,     3,     8,    11,
       3,     5,    56,     6,   177,   178,    39,    11,   138,     9,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,   138,   139,   143,   144,   156,   159,
      60,   153,   156,    43,    48,    57,    58,    59,   155,     7,
     154,    13,   179,     3,   156,   138,   157,   158,     6,     6,
       4,    12,     9,    56,     7,    14,    64,    65,   138,   166,
     167,   168,   180,    71,     5,    11,     8,    10,     7,     7,
     138,     9,    13,    17,    18,    26,    28,    33,    61,    67,
      80,    81,    82,    83,    85,    86,    96,    97,    99,   133,
     134,   135,   136,   137,   139,   144,   242,   243,   244,   245,
     246,   249,   251,   252,   254,   256,   258,   259,   260,   266,
     270,   271,   272,   154,   155,    65,   138,   138,     8,    11,
       3,    14,   179,   242,   156,   157,   138,   261,   262,   102,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   120,   121,   122,   242,   247,   248,   272,
     273,   274,    13,   242,   247,   139,   242,   242,    13,    13,
     242,    13,   242,     5,    12,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    27,    28,    31,    68,    84,
      87,    88,    89,    90,    91,    92,    93,    94,    95,   253,
     255,   257,   263,   242,    13,    10,   138,   168,   156,   166,
     181,    11,     8,    10,   242,   144,   144,   133,   133,   133,
     133,    13,   144,   271,   271,   271,   271,    11,    31,    98,
      14,     8,     6,   271,   271,   247,    29,   247,   242,   242,
     100,   242,   242,   242,   242,   138,    13,    67,   138,   241,
     242,   242,   242,   242,   247,    68,   169,   170,    72,    73,
     182,   184,   185,   242,   261,   103,    14,    14,   272,   117,
     117,     6,     6,   156,    28,    31,   263,   264,   265,   265,
     242,     7,   248,     6,     6,    14,     3,     3,     3,   242,
      29,    30,   138,   138,    14,   241,    66,   171,   172,   159,
     183,   144,     3,    13,    15,    74,    75,    76,   116,   123,
     124,   138,   186,   190,   191,   198,   199,   200,   201,   202,
     203,   204,   210,   211,   218,    32,   267,   268,    13,    67,
     138,   241,   242,   242,   242,   242,    14,   242,   138,    66,
     264,     5,    14,     7,   242,   242,   242,   247,   250,   133,
     101,   242,   118,     5,    61,   173,   174,     8,   155,    14,
     138,   138,   154,   138,   212,    13,   139,   205,   212,    77,
     192,   193,     3,     5,     8,    71,   207,    15,    17,   133,
     134,   137,   144,   244,   269,    14,   268,   138,   138,    14,
      66,   119,    14,     7,     7,   242,   242,    14,     7,     7,
       3,     3,    14,     3,   242,    29,   269,   242,     5,   159,
      11,    11,     3,    68,    99,   213,   214,   216,   139,   206,
      99,   119,   219,   220,   221,   194,    78,   242,   202,   208,
     209,   133,   134,    11,   242,    66,    99,    99,    14,    14,
      14,    99,   247,   247,   133,    14,   242,   242,   242,   242,
     242,     8,    14,   242,   220,   125,   222,   166,   197,    30,
     138,   242,    14,   242,   242,   242,   242,    14,    14,   118,
     100,   139,    99,   126,     3,    79,   198,     8,    14,    14,
      14,    66,    32,   217,   188,   189,   190,   198,   214,   215,
     242,   138,     3,   187,     3,   242,   269,    32,   192,     3,
     101,   127,   223,    14,    11,   269,    78,   195,   196,   215,
      99,   225,   228,   188,   188,    11,   197,   242,   228,     3,
     131,   224,   188,    79,   129,   229,   230,   237,     3,   227,
       9,   188,    99,   120,   128,   231,   236,   132,   226,   228,
     123,   238,   239,   240,   242,   138,   138,   230,     3,     3,
      10,   205,   229,   231,   239,   232,     3,   101,   130,   233,
     234,   235,   229,   242,    39,   229
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   140,   141,   142,   142,   142,   142,   142,   142,   143,
     143,   144,   144,   145,   146,   146,   147,   147,   148,   148,
     149,   150,   150,   150,   150,   151,   151,   152,   152,   152,
     152,   153,   153,   154,   154,   155,   155,   155,   155,   155,
     156,   156,   156,   156,   156,   156,   156,   156,   156,   156,
     156,   156,   156,   156,   156,   156,   156,   156,   157,   158,
     158,   159,   160,   160,   161,   161,   162,   162,   163,   164,
     164,   165,   166,   167,   167,   168,   168,   168,   168,   169,
     169,   170,   171,   171,   172,   173,   173,   174,   175,   176,
     176,   177,   177,   178,   178,   179,   179,   180,   180,   181,
     181,   182,   183,   183,   184,   184,   185,   186,   186,   186,
     187,   187,   188,   188,   189,   190,   190,   191,   192,   192,
     193,   194,   194,   195,   195,   196,   197,   197,   198,   198,
     198,   198,   199,   200,   200,   201,   201,   202,   202,   203,
     203,   204,   205,   205,   205,   205,   206,   206,   207,   208,
     208,   209,   209,   210,   210,   211,   212,   212,   213,   213,
     214,   215,   215,   216,   217,   217,   218,   219,   219,   220,
     221,   221,   222,   222,   223,   223,   224,   224,   225,   225,
     226,   226,   227,   227,   228,   229,   230,   230,   231,   231,
     232,   232,   233,   234,   234,   235,   236,   236,   237,   237,
     238,   238,   239,   240,   240,   241,   241,   241,   242,   242,
     242,   242,   242,   242,   242,   242,   242,   242,   242,   242,
     243,   243,   243,   243,   243,   243,   244,   244,   245,   245,
     245,   246,   247,   247,   248,   248,   249,   249,   249,   249,
     249,   249,   250,   250,   251,   251,   251,   252,   252,   252,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     254,   255,   255,   255,   255,   255,   255,   256,   256,   256,
     257,   257,   257,   258,   258,   258,   258,   258,   258,   258,
     258,   259,   259,   260,   261,   262,   262,   263,   264,   264,
     265,   265,   266,   266,   267,   267,   268,   269,   269,   269,
     269,   269,   269,   269,   269,   270,   271,   271,   271,   271,
     271,   271,   271,   271,   271,   271,   271,   271,   271,   272,
     272,   273,   273,   273,   273,   273,   273,   273,   273,   274,
     274,   274,   274,   274,   274
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     3,     1,     1,     1,     1,     1,     1,
       3,     1,     3,     6,     0,     1,     1,     1,     0,     2,
       1,     0,     1,     1,     2,     1,     3,     2,     4,     4,
       6,     1,     4,     1,     3,     1,     1,     1,     1,     1,
       1,     3,     1,     1,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     3,     1,
       3,     1,     1,     2,     0,     3,     4,     6,     2,     0,
       3,     3,     6,     1,     3,     1,     2,     2,     3,     0,
       1,     2,     0,     1,     3,     0,     1,     3,    10,     1,
       1,     0,     1,     2,     3,     2,     3,     1,     3,     0,
       2,     3,     1,     3,     0,     1,     2,     1,     2,     6,
       0,     1,     2,     1,     3,     0,     1,     3,     0,     1,
       2,     0,     3,     0,     1,     3,     0,     3,     1,     1,
       1,     2,     3,     2,     1,     1,     3,     1,     1,     4,
       4,     2,     1,     3,     3,     5,     1,     3,     2,     2,
       2,     0,     3,     1,     1,     3,     0,     1,     1,     1,
       6,     1,     1,     4,     4,     5,     3,     1,     2,     7,
       0,     1,     0,     1,     0,     2,     0,     3,     2,     3,
       0,     4,     0,     3,     3,     2,     0,     1,     1,     6,
       0,     2,     3,     0,     1,     2,     2,     2,     4,     2,
       1,     3,     2,     0,     1,     1,     2,     5,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     3,     0,     1,     1,     3,     2,     3,     8,     3,
       3,     6,     1,     3,     2,     3,     5,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     2,     3,     4,
       1,     1,     1,     2,     3,     2,     6,     7,     8,     3,
       3,     3,     3,     7,     3,     1,     3,     3,     2,     1,
       1,     2,     6,     6,     1,     2,     4,     1,     1,     1,
       2,     1,     2,     1,     1,     4,     1,     5,     6,     4,
       4,     7,     6,     8,     9,     6,    11,     9,     9,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     2,     1,
       1,     1,     2,     1,     2
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

#line 2123 "scade.tab.c"

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

#line 886 "scade.y"


int main(int argc, char **argv) {
    extern FILE *yyin;
    if (argc > 1) {
        yyin = fopen(argv[1], "r");
    } else {
        yyin = stdin;
    }
    int res = yyparse();
    if (!res) {
        printf("Scade program parsed successfully!\n");
    } else {
        printf("Syntax error.\n");
    }
    return 0;
}

void yyerror(char *s) {
    fprintf(stderr, "error: %s\n", s);
}
