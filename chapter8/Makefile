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

ConstMember: ./ConstMember.cpp
	${COMPILE_CMD} -o $@ ./ConstMember.cpp

Castaway: ./Castaway.cpp
		${COMPILE_CMD} -o $@ ./Castaway.cpp

Mutable: ./Mutable.cpp
		${COMPILE_CMD} -o $@ ./Mutable.cpp


test: ConstInitialization \
	  BuiltInTypeConstructors \
	  EncapsulatingTypes \
	  StringStack \
	  ConstMember \
	  Castaway \
	  Mutable \
	./ConstInitialization
	./BuiltInTypeConstructors
	./EncapsulatingTypes
	./StringStack
	./ConstMember
	./Castaway
	./Mutable

clean:
	rm ConstInitialization
	rm BuiltInTypeConstructors
	rm EncapsulatingTypes
	rm StringStack
	rm ConstMember
	rm Castaway
	rm Mutable

.PHONY:
	clean
