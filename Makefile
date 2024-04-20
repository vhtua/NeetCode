CC = g++
CFLAGS = -Wall -Wextra -g -std=c++20
EXECUTABLE = main

.PHONY: all clean debug run

all: $(EXECUTABLE)

$(EXECUTABLE): $(SOURCE)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f $(EXECUTABLE)

debug: $(EXECUTABLE)
	gdb ./$(EXECUTABLE)

run: $(EXECUTABLE)
	./$(EXECUTABLE)

ifndef SOURCE
$(error SOURCE is not set. Please specify the source code file name using 'make run SOURCE=your_file_name.cpp')
endif
