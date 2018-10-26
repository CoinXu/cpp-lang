CPP = g++
HEAD_FILE_PATH = ./
COMPILE_CMD = $(CPP) -I $(HEAD_FILE_PATH)

.SUFFIXES : .o .cpp .c
.cpp.o :
	$(COMPILE_CMD) $<
.c.o :
	$(COMPILE_CMD) $<

HowMany: ./HowMany.cpp
	$(COMPILE_CMD) -o $@ ./HowMany.cpp

HowManyCopyConstructor: ./HowManyCopyConstructor.cpp
	$(COMPILE_CMD) -o $@ ./HowManyCopyConstructor.cpp

clean:
	rm HowMany
	rm HowManyCopyConstructor

.PHONY:
	clean
