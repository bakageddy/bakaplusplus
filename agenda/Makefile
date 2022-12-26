CC=clang++
CFLAGS=-Wall -Werror -Wextra -Wpedantic -std=c++20 -O3
CFILES= serialize.cpp main.cpp
BIN=main
OBJFILES= serialize.o main.o

all: $(BIN)
	./$(BIN)

$(BIN): $(OBJFILES)
	$(CC) -o $(BIN) $(OBJFILES)

%.o: %.cpp
	$(CC) -c $< $(CFLAGS)

clean:
	@rm -rf $(OBJFILES) $(BIN)
