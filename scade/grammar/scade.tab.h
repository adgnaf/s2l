/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_SCADE_TAB_H_INCLUDED
# define YY_YY_SCADE_TAB_H_INCLUDED
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
    SEMICOLON = 258,               /* SEMICOLON  */
    DOUBLE_COLON = 259,            /* DOUBLE_COLON  */
    EQUAL = 260,                   /* EQUAL  */
    DOUBLE_LT = 261,               /* DOUBLE_LT  */
    DOUBLE_GT = 262,               /* DOUBLE_GT  */
    COMMA = 263,                   /* COMMA  */
    L_BRACE = 264,                 /* L_BRACE  */
    R_BRACE = 265,                 /* R_BRACE  */
    COLON = 266,                   /* COLON  */
    CARET = 267,                   /* CARET  */
    L_PARENTHESE = 268,            /* L_PARENTHESE  */
    R_PARENTHESE = 269,            /* R_PARENTHESE  */
    UNDERSCORE = 270,              /* UNDERSCORE  */
    ARROW_TO_RIGHT = 271,          /* ARROW_TO_RIGHT  */
    MINUS = 272,                   /* MINUS  */
    PLUS = 273,                    /* PLUS  */
    MUL = 274,                     /* MUL  */
    DIV = 275,                     /* DIV  */
    DIFF = 276,                    /* DIFF  */
    LT = 277,                      /* LT  */
    GT = 278,                      /* GT  */
    LE = 279,                      /* LE  */
    GE = 280,                      /* GE  */
    SHARP = 281,                   /* SHARP  */
    CONCAT = 282,                  /* CONCAT  */
    L_S_BRACKET = 283,             /* L_S_BRACKET  */
    R_S_BRACKET = 284,             /* R_S_BRACKET  */
    DOUBLE_DOT = 285,              /* DOUBLE_DOT  */
    DOT = 286,                     /* DOT  */
    VERTICAL_BAR = 287,            /* VERTICAL_BAR  */
    PREFIXOP = 288,                /* PREFIXOP  */
    ABSTRACT = 289,                /* ABSTRACT  */
    OPEN = 290,                    /* OPEN  */
    PACKAGE = 291,                 /* PACKAGE  */
    PRIVATE = 292,                 /* PRIVATE  */
    PUBLIC = 293,                  /* PUBLIC  */
    END = 294,                     /* END  */
    TYPE = 295,                    /* TYPE  */
    IMPORTED = 296,                /* IMPORTED  */
    BOOL = 297,                    /* BOOL  */
    SIGNED = 298,                  /* SIGNED  */
    INT8 = 299,                    /* INT8  */
    INT16 = 300,                   /* INT16  */
    INT32 = 301,                   /* INT32  */
    INT64 = 302,                   /* INT64  */
    UNSIGNED = 303,                /* UNSIGNED  */
    UINT8 = 304,                   /* UINT8  */
    UINT16 = 305,                  /* UINT16  */
    UINT32 = 306,                  /* UINT32  */
    UINT64 = 307,                  /* UINT64  */
    FLOAT32 = 308,                 /* FLOAT32  */
    FLOAT64 = 309,                 /* FLOAT64  */
    CHAR_TYPE = 310,               /* CHAR_TYPE  */
    IS = 311,                      /* IS  */
    NUMERIC = 312,                 /* NUMERIC  */
    FLOAT_SYM = 313,               /* FLOAT_SYM  */
    INTEGER_SYM = 314,             /* INTEGER_SYM  */
    ENUM = 315,                    /* ENUM  */
    LAST = 316,                    /* LAST  */
    CONST = 317,                   /* CONST  */
    SENSOR = 318,                  /* SENSOR  */
    CLOCK = 319,                   /* CLOCK  */
    PROBE = 320,                   /* PROBE  */
    DEFAULT = 321,                 /* DEFAULT  */
    NOT = 322,                     /* NOT  */
    WHEN = 323,                    /* WHEN  */
    FUNCTION = 324,                /* FUNCTION  */
    NODE = 325,                    /* NODE  */
    RETURNS = 326,                 /* RETURNS  */
    WHERE = 327,                   /* WHERE  */
    SPECIALIZE = 328,              /* SPECIALIZE  */
    ASSUME = 329,                  /* ASSUME  */
    GUARANTEE = 330,               /* GUARANTEE  */
    SIG = 331,                     /* SIG  */
    VAR = 332,                     /* VAR  */
    LET = 333,                     /* LET  */
    TEL = 334,                     /* TEL  */
    TRUE = 335,                    /* TRUE  */
    FALSE = 336,                   /* FALSE  */
    PRE = 337,                     /* PRE  */
    FBY = 338,                     /* FBY  */
    TIMES = 339,                   /* TIMES  */
    MERGE = 340,                   /* MERGE  */
    LNOT = 341,                    /* LNOT  */
    MOD = 342,                     /* MOD  */
    LAND = 343,                    /* LAND  */
    LOR = 344,                     /* LOR  */
    LXOR = 345,                    /* LXOR  */
    LSL = 346,                     /* LSL  */
    LSR = 347,                     /* LSR  */
    AND = 348,                     /* AND  */
    OR = 349,                      /* OR  */
    XOR = 350,                     /* XOR  */
    REVERSE = 351,                 /* REVERSE  */
    TRANSPOSE = 352,               /* TRANSPOSE  */
    WITH = 353,                    /* WITH  */
    IF = 354,                      /* IF  */
    THEN = 355,                    /* THEN  */
    ELSE = 356,                    /* ELSE  */
    CASE = 357,                    /* CASE  */
    OF = 358,                      /* OF  */
    MAKE = 359,                    /* MAKE  */
    FLATTEN = 360,                 /* FLATTEN  */
    MAP = 361,                     /* MAP  */
    FOLD = 362,                    /* FOLD  */
    MAPI = 363,                    /* MAPI  */
    FOLDI = 364,                   /* FOLDI  */
    MAPFOLD = 365,                 /* MAPFOLD  */
    MAPFOLDI = 366,                /* MAPFOLDI  */
    MAPW = 367,                    /* MAPW  */
    MAPWI = 368,                   /* MAPWI  */
    MAPFOLDW = 369,                /* MAPFOLDW  */
    MAPFOLDWI = 370,               /* MAPFOLDWI  */
    ACTIVATE = 371,                /* ACTIVATE  */
    EVERY = 372,                   /* EVERY  */
    MATCH = 373,                   /* MATCH  */
    INITIAL = 374,                 /* INITIAL  */
    RESTART = 375,                 /* RESTART  */
    FOLDW = 376,                   /* FOLDW  */
    FOLDWI = 377,                  /* FOLDWI  */
    EMIT = 378,                    /* EMIT  */
    AUTOMATON = 379,               /* AUTOMATON  */
    FINAL = 380,                   /* FINAL  */
    STATE = 381,                   /* STATE  */
    UNLESS = 382,                  /* UNLESS  */
    RESUME = 383,                  /* RESUME  */
    DO = 384,                      /* DO  */
    ELSIF = 385,                   /* ELSIF  */
    UNTIL = 386,                   /* UNTIL  */
    SYNCHRO = 387,                 /* SYNCHRO  */
    INTEGER = 388,                 /* INTEGER  */
    TYPED_INTEGER = 389,           /* TYPED_INTEGER  */
    FLOAT = 390,                   /* FLOAT  */
    TYPED_FLOAT = 391,             /* TYPED_FLOAT  */
    CHAR = 392,                    /* CHAR  */
    ID = 393,                      /* ID  */
    NAME = 394                     /* NAME  */
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


#endif /* !YY_YY_SCADE_TAB_H_INCLUDED  */
