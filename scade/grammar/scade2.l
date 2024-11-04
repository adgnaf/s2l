%{

#include "stdio.h"
#include "scade2.tab.h"

%}

DIGIT2 [0-1]
DIGIT8 [0-7]
DIGIT10 [0-9]
DIGIT16 [a-fA-F0-9]

INTEGER2 0b{DIGIT2}+
INTEGER8 0{DIGIT8}+
INTEGER10 (0|[1-9]{DIGIT10}*)
INTEGER16 0x{DIGIT16}+

LEX_INTEGER ({INTEGER2}|{INTEGER8}|{INTEGER10}|{INTEGER16})

LEX_TYPED_INTEGER INTEGER(_i|_ui)(8|16|32|64)

EXPONENT [eE][+-]?{DIGIT10}+
LEX_FLOAT ({DIGIT10}+\.{DIGIT10}*{EXPONENT}?|{DIGIT10}*\.{DIGIT10}+{EXPONENT}?)

LEX_TYPED_FLOAT {LEX_FLOAT}(_f32|_f64)

LETTER (_|[a-z]|[A-Z])
ALPHANUMERIC ({DIGIT10}|{LETTER})
WORD {LETTER}{ALPHANUMERIC}*

CHARACTER ({ALPHANUMERIC}|[ \!"\$#%&'\(\)\*\+,-\.\/:;_<=>\?@\[\]\\\^`\|\{\}~])

LEX_CHAR ('{CHARACTER}'|'\\x{DIGIT16}{DIGIT16}')

LEX_ID {WORD}
LEX_NAME '{WORD}


LEX_PREFIXOP ("$+$"|"$-$"|"$*$"|"$/$"|"$mod$"|"$=$"|"$<>$"|"$<$"|"$>$"|"$<=$"|"$>=$"|"$@$"|"$times$"|"$and$"|"$or$"|"$xor$"|"$land$"|"$lor$"|"$lxor$"|"$lsl$"|"$lsr$"|"+$"|"-$"|"not$"|"lnot$"|"reverse$")


%%

{LEX_INTEGER} { return INTEGER; }
{LEX_TYPED_INTEGER} { return TYPED_INTEGER; }
{LEX_FLOAT} { return FLOAT; }
{LEX_TYPED_FLOAT} { return TYPED_FLOAT; }

"::" { return DOUBLE_COLON; }
";" { return SEMICOLON; }
"=" { return EQUAL; }
"<<" { return DOUBLE_LT; }
">>" { return DOUBLE_GT; }
"," { return COMMA; }
"{" { return L_BRACE; }
"}" { return R_BRACE; }
":" { return COLON; }
"^" { return CARET; }
"(" { return L_PARENTHESE; }
")" { return R_PARENTHESE; }
"_" { return UNDERSCORE; }
"->" { return ARROW_TO_RIGHT; }
"-" { return MINUS; }
"+" { return PLUS; }
"*" { return MUL; }
"/" { return DIV; }
"<>" { return DIFF; }
"<" { return LT; }
">" { return GT; }
"<=" { return LE; }
">=" { return GE; }
"#" { return SHARP; }
"@" { return CONCAT; }
"[" { return L_S_BRACKET; }
"]" { return R_S_BRACKET; }
".." { return DOUBLE_DOT; }
"." { return DOT; }
"|" { return VERTICAL_BAR; }

{LEX_PREFIXOP} { return PREFIXOP; }

abstract { return ABSTRACT; }
open { return OPEN; }
package { return PACKAGE; }
private { return PRIVATE; }
public { return PUBLIC; }
end { return END; }
type { return TYPE; }
imported { return IMPORTED; }
bool { return BOOL; }
signed { return SIGNED; }
int8 { return INT8; }
int16 { return INT16; }
int32 { return INT32; }
int64 { return INT64; }
unsigned { return UNSIGNED; }
uint8 { return UINT8; }
uint16 { return UINT16; }
uint32 { return UINT32; }
uint64 { return UINT64; }
float32 { return FLOAT32; }
float64 { return FLOAT64; }
char { return CHAR_TYPE; }
is { return IS; }
numeric { return NUMERIC; }
float { return FLOAT_SYM; }
integer { return INTEGER_SYM; }
enum { return ENUM; }
last { return LAST; }
const { return CONST; }
sensor { return SENSOR; }
clock { return CLOCK; }
probe { return PROBE; }
default { return DEFAULT; }
not { return NOT; }
when { return WHEN; }
function { return FUNCTION; }
node { return NODE; }
returns { return RETURNS; }
where { return WHERE; }
specialize { return SPECIALIZE; }
assume { return ASSUME; }
guarantee { return GUARANTEE; }
sig { return SIG; }
var { return VAR; }
let { return LET; }
tel { return TEL; }
true { return TRUE; }
false { return FALSE; }
pre { return PRE; }
fby { return FBY; }
times { return TIMES; }
merge { return MERGE; }
lnot { return LNOT; }
mod { return MOD; }
land { return LAND; }
lor { return LOR; }
lxor { return LXOR; }
lsl { return LSL; }
lsr { return LSR; }
and { return AND; }
or { return OR; }
xor { return XOR; }
reverse { return REVERSE; }
transpose { return TRANSPOSE; }
with { return WITH; }
if { return IF; }
then { return THEN; }
else { return ELSE; }
case { return CASE; }
of { return OF; }
make { return MAKE; }
flatten { return FLATTEN; }
map { return MAP; }
fold { return FOLD; }
mapi { return MAPI; }
foldi { return FOLDI; }
mapfold { return MAPFOLD; }
mapfoldi { return MAPFOLDI; }
mapw { return MAPW; }
mapwi { return MAPWI; }
mapfoldw { return MAPFOLDW; }
mapfoldwi { return MAPFOLDWI; }
activate { return ACTIVATE; }
every { return EVERY; }
match { return MATCH; }
initial { return INITIAL; }
restart { return RESTART; }
foldw { return FOLDW; }
foldwi { return FOLDWI; }
emit { return EMIT; }
automaton { return AUTOMATON; }
final { return FINAL; }
state { return STATE; }
unless { return UNLESS; }
resume { return RESUME; }
do { return DO; }
elsif { return ELSIF; }
until { return UNTIL; }
synchro { return SYNCHRO; }


{LEX_CHAR} { return CHAR; }

{LEX_ID} { 
    /* printf("ID: %s\n", yytext); */
    return ID;
}

{LEX_NAME} { return NAME; }

[ \t\r\n\f]+ /* eat up whitespace */

. printf("Unrecognized character: %s\n", yytext);

%%