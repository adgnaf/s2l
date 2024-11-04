all:
	flex scade.l
	bison -d scade.y
	gcc -o a.out lex.yy.c scade.tab.c -lfl
