CC = clang++
CFLAGS = -Wall -std=c++11
SRC = main.cpp menu.cpp operation.cpp utils.cpp
OUTPUT = output

all: $(OUTPUT)

$(OUTPUT): $(SRC)
	$(CC) $(CFLAGS) -o $@ $^

.PHONY: clean

clean:
	rm -f $(OUTPUT)
