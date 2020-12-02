CC := g++
CFLAGS := -Wall -Wextra -std=c++11 # without debug
TARGET := main

all: run

main.lex.yy.c: main.lex
	 flex --noyywrap -o main.lex.yy.cpp  main.lex 

main.tab.c: main.y
	bison -o main.tab.cpp --defines=main.tab.h -v main.y

pch.h.gch: pch.h
	g++ -x c++-header -o pch.h.gch -c pch.h

lex: main.lex.yy.c

yacc: main.tab.c

main: pch.h.gch
	$(CC) $(CFLAGS) $(shell ls ./*.cpp) -o ./main

.PHONY: all clean main run lex yacc test debug link testscope asm nasm example-code out

run: lex yacc main

test: 
	./main test/1.c > result.txt

clean:
	rm -f *.output main.lex.yy.cpp main.tab.cpp main.tab.h main.output pch.h.gch $(TARGET) *.o ./* 
