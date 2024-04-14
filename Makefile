CC = g++
CFLAGS = -Wall -Wextra -g -std=c++20
EXECUTABLE = main

.PHONY: all clean debug run

all: $(EXECUTABLE)

$(EXECUTABLE): main.cpp
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f $(EXECUTABLE)

debug: $(EXECUTABLE)
	gdb ./$(EXECUTABLE)

run: $(EXECUTABLE)
	./$(EXECUTABLE)