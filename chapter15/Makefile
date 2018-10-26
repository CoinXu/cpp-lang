CPP = g++
HEAD_FILE_PATH = ./
COMPILE_CMD = $(CPP) -I $(HEAD_FILE_PATH)

.SUFFIXES : .o .cpp .c
.cpp.o :
	$(COMPILE_CMD) $<
.c.o :
	$(COMPILE_CMD) $<

Array: ./Array.cpp
	$(COMPILE_CMD) -o $@ ./Array.cpp

test: Array
	./Array

clean:
	rm Array

.PHONY:
	clean
