# Makefile for test case
CPP = g++
HEAD_FILE_PATH = ./
COMPILE_CMD = $(CPP) $(CPPFLAGS) -I $(HEAD_FILE_PATH)

.SUFFIXES : .o .cpp .c
.cpp.o :
	$(COMPILE_CMD) $<
.c.o :
	$(COMPILE_CMD) $<

ClibTest: ./tests/ClibTest.cpp Clib.cpp
	$(COMPILE_CMD) -o $@ ./tests/ClibTest.cpp Clib.cpp

# all test case
test: ClibTest
	./ClibTest

# clean
clean: 
	rm ClibTest


.PHONY:
	clean