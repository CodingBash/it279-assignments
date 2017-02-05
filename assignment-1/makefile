CC=g++
CFLAGS=-std=c++11 -g -Wall

all: main

main: Main.o Input.o Output.o Sort.o
	${CC} ${CFLAGS} -o main Main.o Input.o Output.o Sort.o

Main.o: Main.cpp
	${CC} ${CFLAGS} -c Main.cpp

Input.o: Input.cpp Input.h
	${CC} ${CFLAGS} -c Input.cpp

Output.o: Output.cpp Output.h
	${CC} ${CFLAGS} -c Output.cpp

Sort.o: Sort.cpp Sort.h
	${CC} ${CFLAGS} -c Sort.cpp

clean:
	rm -f *.o *.out main

run: clean main
	./main
