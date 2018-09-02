CPP = g++
HEAD_FILE_PATH = ./
COMPILE_CMD = $(CPP) -I $(HEAD_FILE_PATH)

.SUFFIXES : .o .cpp .c
.cpp.o :
	$(COMPILE_CMD) $<
.c.o :
	$(COMPILE_CMD) $<

Inline: ./Inline.cpp
	$(COMPILE_CMD) -o $@ ./Inline.cpp

test: Inline \

	./Inline

clean:
	rm Inline

.PHONY:
	clean
