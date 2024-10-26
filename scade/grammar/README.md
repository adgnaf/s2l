# flex/bison rules for Scade 6

## flex rules 

`scade.l` is flex rules for Scade 6. 

### Usage 

Generate lexer.

```bash
flex scade.l
gcc -o lexer lex.yy.c -lfl
```

Test tokens.

```bash
./lexer test/test.txt
```