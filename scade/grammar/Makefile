TARGET = scade_parser

all:
	gcc -o $(TARGET) lex.yy.c scade.tab.c -lfl

clean:
	rm -f $(TARGET) 

.PHONY: all clean 