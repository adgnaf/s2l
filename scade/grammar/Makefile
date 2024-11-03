all:
	flex scade2.l
	bison -d scade2.y
	gcc -o a.out lex.yy.c scade2.tab.c -lfl
