CPP = g++
HEAD_FILE_PATH = ./
COMPILE_CMD = $(CPP) -I $(HEAD_FILE_PATH)

.SUFFIXES : .o .cpp .c
.cpp.o :
	$(COMPILE_CMD) $<
.c.o :
	$(COMPILE_CMD) $<

Tree: ./Tree.cpp
	$(COMPILE_CMD) -o $@ ./Tree.cpp

clean:
	rm Tree

.PHONY:
	clean
