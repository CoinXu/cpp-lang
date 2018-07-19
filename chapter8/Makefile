CPP = g++
HEAD_FILE_PATH = ./
COMPILE_CMD = $(CPP) -I $(HEAD_FILE_PATH)

.SUFFIXES : .o .cpp .c
.cpp.o :
	$(COMPILE_CMD) $<
.c.o :
	$(COMPILE_CMD) $<

ConstInitialization: ./ConstInitialization.cpp
	${COMPILE_CMD} -o $@ ./ConstInitialization.cpp

BuiltInTypeConstructors: ./BuiltInTypeConstructors.cpp
	${COMPILE_CMD} -o $@ ./BuiltInTypeConstructors.cpp

EncapsulatingTypes: ./EncapsulatingTypes.cpp
	${COMPILE_CMD} -o $@ ./EncapsulatingTypes.cpp

StringStack: ./StringStack.cpp
	${COMPILE_CMD} -o $@ ./StringStack.cpp

test: ConstInitialization \
	  BuiltInTypeConstructors \
	  EncapsulatingTypes \
	  StringStack
	./ConstInitialization
	./BuiltInTypeConstructors
	./EncapsulatingTypes
	./StringStack

clean:
	rm ConstInitialization
	rm BuiltInTypeConstructors
	rm EncapsulatingTypes
	rm StringStack

.PHONY:
	clean
