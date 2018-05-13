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
CppLibTest: ./tests/CppLibTest.cpp CppLib.cpp
	$(COMPILE_CMD) -o $@ ./tests/CppLibTest.cpp CppLib.cpp

# all test case
test: ClibTest CppLibTest
	./ClibTest
	./CppLibTest

# clean
clean: 
	rm ClibTest
	rm CppLibTest


.PHONY:
	clean