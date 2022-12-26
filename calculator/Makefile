CC=g++
CFLAGS=-Wall -Werror -Wpedantic -std=c++14
CFILES=main.cpp calc.cpp calc.hpp
BINARY=bin

all: main.o calc.o calc.hpp
	$(CC) main.o calc.o -o $(BINARY)

run: $(BINARY)
	./$(BINARY)

%.o: %.c
	$(CC) -c $< $(CFLAGS)

clean:
	@rm -rf $(BINARY) main.o calc.o calc.hpp.gch
