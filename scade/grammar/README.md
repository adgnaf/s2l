# flex/bison rules for Scade 6

* `scade.l` is flex rules for Scade 6. 
* `scade.y` is bison rules for Scade 6.

## Usage 

```bash
make 
./scade_parser test/program.scade
```

## Misc 

Generate lexer and parser 

```bash
flex scade.l
bison -d scade.y
```
