OBJS=main.o display.o
FILES=main.cpp display.cpp
HFILES=display.hpp

CC=clang++
CFLAGS=-Wall -Werror -Wextra -Wpedantic -std=c++20
LFLAGS=-lSDL2 -lGL -lGLEW
BIN=app

all: $(BIN)
	./$(BIN)

$(BIN): $(OBJS)
	$(CC) -o $(BIN) $^ $(LFLAGS)

*.o: *.cpp
	$(CC) -c $^ $(CFLAGS)

clean:
	@rm -rf $(BIN) $(OBJS)
