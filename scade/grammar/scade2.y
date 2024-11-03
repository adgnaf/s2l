%{
#include <stdio.h>
%}

%token SEMICOLON
%token DOUBLE_COLON
%token EQUAL
%token DOUBLE_LT
%token DOUBLE_GT
%token COMMA
%token L_BRACE
%token R_BRACE
%token COLON
%token CARET
%token L_PARENTHESE
%token R_PARENTHESE
%token UNDERSCORE
%token ARROW_TO_RIGHT
%token MINUS
%token PLUS
%token MUL
%token DIV 
%token DIFF
%token LT
%token GT
%token LE
%token GE
%token SHARP

%token ABSTRACT 
%token OPEN
%token PACKAGE
%token PRIVATE
%token PUBLIC 
%token END
%token TYPE
%token IMPORTED
%token BOOL
%token SIGNED
%token INT8
%token INT16
%token INT32
%token INT64
%token UNSIGNED
%token UINT8
%token UINT16
%token UINT32
%token UINT64
%token FLOAT32
%token FLOAT64
%token CHAR_TYPE
%token IS
%token NUMERIC
%token FLOAT_SYM
%token INTEGER_SYM
%token ENUM
%token LAST
%token CONST
%token SENSOR
%token CLOCK
%token PROBE
%token DEFAULT
%token NOT
%token WHEN
%token FUNCTION
%token NODE
%token RETURNS
%token WHERE
%token SPECIALIZE
%token ASSUME
%token GUARANTEE
%token SIG
%token VAR
%token LET
%token TEL
%token TRUE
%token FALSE
%token PRE
%token FBY
%token TIMES 
%token MERGE
%token LNOT
%token MOD
%token LAND
%token LOR
%token LXOR 
%token LSL
%token LSR 
%token AND
%token OR
%token XOR 

%token INTEGER 
%token TYPED_INTEGER
%token FLOAT
%token TYPED_FLOAT
%token CHAR
%token ID
%token NAME

%%

program:
    decls_list
    ;

decls:
    OPEN path SEMICOLON
    | package_decl
    | type_block 
    | const_block
    | sensor_block
    | user_op_decl
    ;

path: 
    ID
    | path DOUBLE_COLON ID
    ;

path_id:
    ID
    | path DOUBLE_COLON ID 
    ;

package_decl:
    PACKAGE optional_visibility ID decls_list END SEMICOLON
    ;

optional_visibility:
    %empty
    | visibility
    ;

visibility:
    PUBLIC
    | PRIVATE
    ;

decls_list: 
    %empty
    | decls_list decls
    ;

external:
    IMPORTED
    ;

interface_status:
    %empty
    | visibility
    | external
    | visibility external
    ;

type_block:
    TYPE 
    | type_block type_decl SEMICOLON
    ;

type_decl:
    interface_status ID
    | interface_status ID EQUAL type_def
    | interface_status ID IS numeric_kind
    | interface_status ID EQUAL type_def IS numeric_kind
    ;

type_def:
    type_expr
    | ENUM L_BRACE id_list R_BRACE
    ;

id_list:
    ID
    | id_list COMMA ID
    ;

numeric_kind:
    NUMERIC 
    | FLOAT_SYM
    | INTEGER_SYM
    | SIGNED
    | UNSIGNED
    ;

type_expr:
    BOOL
    | SIGNED DOUBLE_LT DOUBLE_GT
    | INT8 | INT16 | INT32 | INT64
    | UNSIGNED DOUBLE_LT DOUBLE_GT
    | UINT8 | UINT16 | UINT32 | UINT64 
    | FLOAT32 | FLOAT64
    | CHAR_TYPE
    | path_id
    | typevar
    | L_BRACE field_decl_list R_BRACE
    | type_expr CARET expr
    ;

field_decl:
    ID COLON type_expr
    ;

field_decl_list:
    field_decl
    | field_decl_list COMMA field_decl
    ;

typevar:
    NAME
    ;

const_block:
    CONST 
    | CONST const_decl_list
    ;

const_decl_list:
    %empty 
    | const_decl_list const_decl SEMICOLON
    ;

const_decl:
    interface_status ID COLON type_expr
    | interface_status ID COLON type_expr EQUAL expr
    ;

sensor_block:
    SENSOR sensor_decl_list
    ;

sensor_decl_list:
    %empty
    | sensor_decl_list sensor_decl SEMICOLON
    ;

sensor_decl:
    id_list COLON type_expr
    ;

var_decls:
    var_id_list COLON type_expr optional_when_decl optional_default_decl optional_last_decl
    ;

var_id_list:
    var_id
    | var_id_list COMMA var_id
    ;

var_id:
    ID
    | CLOCK ID
    | PROBE ID
    | CLOCK PROBE ID
    ;

optional_when_decl:
    %empty
    | when_decl 
    ;

when_decl:
    WHEN clock_expr
    ;

optional_default_decl:
    %empty
    | default_decl 
    ;

default_decl:
    DEFAULT EQUAL expr
    ;

optional_last_decl:
    %empty
    | last_decl
    ;

last_decl:
    LAST EQUAL expr
    ;

user_op_decl:
    op_kind interface_status ID optional_size_decl params RETURNS params where_decl_list optional_spec_decl opt_body
    ;

op_kind:
    FUNCTION 
    | NODE 
    ;

optional_size_decl:
    %empty
    | size_decl
    ;

size_decl:
    DOUBLE_LT DOUBLE_GT
    | DOUBLE_LT id_list DOUBLE_GT
    ;

params:
    L_PARENTHESE R_PARENTHESE
    | L_PARENTHESE var_decls_for_params R_PARENTHESE 
    ;

var_decls_for_params:
    var_decls 
    | var_decls_for_params SEMICOLON var_decls
    ;

where_decl_list:
    %empty
    | where_decl_list where_decl
    ;

where_decl:
    WHERE typevar_list numeric_kind
    ;

typevar_list:
    typevar
    | typevar_list COMMA typevar
    ;

optional_spec_decl:
    %empty
    | spec_decl
    ;

spec_decl:
    SPECIALIZE path_id
    ;

opt_body:
    SEMICOLON
    | equation SEMICOLON
    | optional_signal_block 
      optional_local_block 
      LET equation_list TEL optional_semicolon
    ;

optional_semicolon:
    %empty
    | SEMICOLON
    ;

data_def:
    equation SEMICOLON
    | scope
    ;

scope:
    optional_signal_block
    optional_local_block
    optional_eqs
    ;

optional_signal_block:
    %empty
    | signal_block
    ;

signal_block:
    SIG id_list SEMICOLON
    ;

optional_local_block:
    %empty
    | local_block
    ;

local_block:
    VAR var_decls_list_for_lb
    ;

var_decls_list_for_lb:
    %empty
    | var_decls_list_for_lb var_decls SEMICOLON
    ;

optional_eqs:
    %empty
    | eqs
    ;

eqs:
    LET equation_list TEL
    ;

equation_list:
    %empty
    | equation_list equation SEMICOLON
    ;

equation:
    simple_equation
    | assert 
    ;

simple_equation:
    lhs EQUAL expr
    ;

lhs:
    L_PARENTHESE R_PARENTHESE
    | lhs_id_list
    ;

lhs_id_list:
    lhs_id
    | lhs_id_list COMMA lhs_id
    ;

lhs_id:
    ID
    | UNDERSCORE
    ;

assert:
    ASSUME ID COLON expr 
    | GUARANTEE ID COLON expr 


clock_expr:
    ID
    | NOT ID
    ;

expr:
    id_expr
    | atom 
    | list_expr 
    | tempo_expr 
    | arith_expr 
    | relation_expr 
    | bool_expr
    ;

atom:
    bool_atom
    | CHAR 
    | INTEGER
    | FLOAT
    | TYPED_INTEGER
    | TYPED_FLOAT
    ;

bool_atom:
    TRUE
    | FALSE
    ;

id_expr:
    path_id
    | NAME
    | LAST NAME
    ;

list_expr:
    L_PARENTHESE list R_PARENTHESE
    ;

list:
    %empty
    | expr_list
    ;

expr_list:
    expr
    | expr_list COMMA expr 
    ;

tempo_expr:
    PRE expr 
    | expr ARROW_TO_RIGHT expr 
    | FBY L_PARENTHESE list SEMICOLON expr SEMICOLON list R_PARENTHESE
    | expr TIMES expr 
    | expr WHEN clock_expr
    | MERGE L_PARENTHESE expr SEMICOLON list_list R_PARENTHESE
    ;

list_list:
    list
    | list_list SEMICOLON list
    ;

arith_expr:
    unary_arith_op expr
    | expr bin_arith_op expr
    | L_PARENTHESE expr COLON type_expr R_PARENTHESE
    ;

unary_arith_op:
    MINUS
    | PLUS
    | LNOT
    ;

bin_arith_op:
    PLUS
    | MINUS
    | MUL
    | DIV
    | MOD
    | LAND 
    | LOR 
    | LXOR 
    | LSL 
    | LSR 
    ;

relation_expr:
    expr bin_relation_op expr
    ;

bin_relation_op:
    EQUAL
    | DIFF
    | LT 
    | GT 
    | LE 
    | GE 
    ;

bool_expr:
    NOT expr
    | expr bin_bool_op expr 
    | SHARP L_PARENTHESE list R_PARENTHESE
    ;

bin_bool_op:
    AND 
    | OR
    | XOR
    ;


%%

int main(int argc, char **argv) {
    extern FILE *yyin;
    if (argc > 1) {
        yyin = fopen(argv[1], "r");
    } else {
        yyin = stdin;
    }
    int res = yyparse();
    printf("Result of yyparse is %d\n", res);
    return 0;
}

void yyerror(char *s) {
    fprintf(stderr, "error: %s\n", s);
}