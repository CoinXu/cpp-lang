CPP = g++
HEAD_FILE_PATH = ./
COMPILE_CMD = $(CPP) -I $(HEAD_FILE_PATH)

.SUFFIXES : .o .cpp .c
.cpp.o :
	$(COMPILE_CMD) $<
.c.o :
	$(COMPILE_CMD) $<

Inheritance: ./Inheritance.cpp
	$(COMPILE_CMD) -o $@ ./Inheritance.cpp

Order: ./Order.cpp
	$(COMPILE_CMD) -o $@ ./Order.cpp

ObjectSlicing: ./ObjectSlicing.cpp
	$(COMPILE_CMD) -o $@ ./ObjectSlicing.cpp

test: Inheritance Order ObjectSlicing
	# ./Inheritance
	# ./Order
	./ObjectSlicing

clean:
	rm Inheritance
	rm Order
	rm ObjectSlicing

.PHONY:
	clean
