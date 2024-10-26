/* flex rules for scade 6 */

DIGIT2 [0-1]
DIGIT8 [0-7]
DIGIT10 [0-9]
DIGIT16 [a-fA-F0-9]

INTEGER2 0b{DIGIT2}+
INTEGER8 0{DIGIT8}+
INTEGER10 (0|[1-9]{DIGIT10}*)
INTEGER16 0x{DIGIT16}+

INTEGER ({INTEGER2}|{INTEGER8}|{INTEGER10}|{INTEGER16})

TYPED_INTEGER INTEGER(_i | _ui)(8 | 16 | 32 | 64)

EXPONENT [eE][+-]?{DIGIT10}+
FLOAT ({DIGIT10}+\.{DIGIT10}*{EXPONENT}?|{DIGIT10}*\.{DIGIT10}+{EXPONENT}?)

TYPED_FLOAT {FLOAT}(_f32|_f64)

LETTER (_|[a-z]|[A-Z])

ALPHANUMERIC ({DIGIT10}|{LETTER})

WORD {LETTER}{ALPHANUMERIC}*

CHARACTER ({ALPHANUMERIC}|[ \!"\$#%&'\(\)\*\+,-\.\/:;_<=>\?@\[\]\\\^`\|\{\}~])

CHAR '{CHARACTER}'

ID {WORD}

NAME '{WORD}

PREFIXOP ("$+$"|"$-$"|"$*$"|"$/$"|"$mod$"|"$=$"|"$<>$"|"$<$"|"$>$"|"$<=$"|"$>=$"|"$@$"|"$times$"|"$and$"|"$or$"|"$xor$"|"$land$"|"$lor$"|"$lxor$"|"$lsl$"|"$lsr$"|"+$"|"-$"|"not$"|"lnot$"|"reverse$")

%x COMMENT

%%

{INTEGER} {
    printf("INTEGER: %s\n", yytext);
} 

{FLOAT} {
    printf("FLOAT: %s\n", yytext);
}

"<>" |
"<=" |
">=" |
"<<" |
">>" |
"=" |
"<" |
">" |
"(" |
")" |
"[" |
"]" |
"{" |
"}" |
"->" |
"::" |
".." |
";" |
"," |
"." |
":" |
"^" |
"@" |
"#" |
"_" |
"|" |
"+" |
"-" |
"*" |
"/" {
    printf("Symbol List - lexeme: %s\n", yytext);
}

{PREFIXOP} printf("Symbol List - PREFIXOP: %s\n", yytext);

abstract | 
activate | 
and | 
assume |
automaton |
bool |
case |
char |
clock |
const |
default |
do |
else |
elsif |
emit |
end |
enum |
every |
flase |
fby |
final |
flatten |
float |
float32 |
float64 |
fold |
foldi |
foldw |
foldwi |
function |
guarantee |
group |
if |
imported |
initial |
int8 |
int16 |
int32 |
int64 |
integer |
is |
land |
last |
let |
lnot |
lor |
lsl |
lsr |
lxor |
make |
map |
mapfold |
mapfoldi |
mapfoldw |
mapfoldwi |
mapi |
mapw |
mapwi |
match |
merge |
mod |
node |
not |
numeric |
of |
onreset |
open |
or |
package |
parameter |
pre |
private |
probe |
public |
restart |
resume |
returns |
reverse |
sensor |
sig |
signed |
specialize |
state |
synchro |
tel |
then |
times |
transpose |
true |
type |
uint8 |
uint16 |
uint32 |
uint64 |
unless |
unsigned |
until |
var |
when |
where |
with |
xor {
    printf("Keyword: %s\n", yytext);
}

{CHAR} printf("CHAR: %s\n", yytext);

{ID} printf("ID: %s\n", yytext);

{NAME} printf("NAME: %s\n", yytext);


"/*" { BEGIN(COMMENT); }
<COMMENT>{
    \*"/" { BEGIN(INITIAL); } 
    .|\n 
}

"--".* /* eat up single line comments */

[ \t\r\n\f]+ /* eat up whitespace */

. printf("Unrecognized character: %s\n", yytext);

%%

int main(int argc, char **argv) {
    if (argc > 1) {
        yyin = fopen(argv[1], "r");
    } else {
        yyin = stdin;
    }
    yylex();
}