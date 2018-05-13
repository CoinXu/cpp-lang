/**
 * @date 2018-05-23
 * @descrition Implementation of example C-like library
 * Declare structure and functions
 */

#include "CLib.h"
#include <iostream>
#include <cassert>

using namespace std;

// Quantity of elements to add
// When increasing storage
const int increment = 100;

void initialize(CSTash*s, int size) {
	s->size = size;
	s->quantity = 0;
	s->storage = 0;
	s->next = 0;
}

void cleanup(CSTash* s) {
	if(s->storage != 0) {
		cout << "freeing storage" << endl;
		delete [] s->storage;
	}
}

int add(CSTash* s, const void* element) {
	if(s->next >= s->quantity) {
		inflate(s, increment);
	}

	// Copy element into storage, starting at next empty space
	int start_bytes = s->next * s->size;
	unsigned char* e = (unsigned char*)element;
	for(int i = 0; i < s->size; i++) {
		s->storage[start_bytes + i] = e[i];
	}
	s->next++;
	return s->next - 1;
}

void* fetch(CSTash* s, int index) {
	// Check index boundaries
	assert(0 <= index);
	
	// To indicate the end
	if(index >= s->next) {
		return 0;
	}

	// Produce pointer to desired element
	return &(s->storage[index * s->size]);
}

int count(CSTash* s) {
	return s->next;
}

void inflate(CSTash* s, int increase) {
	assert(increase > 0);
	int new_quantity = s->quantity + increase;
	int new_bytes = new_quantity * s->size;
	int old_bytes = s->quantity * s->size;
	unsigned char*b = new unsigned char[new_bytes];

	// Copy old to new
	for(int i = 0; i < old_bytes; i++) {
		b[i] = s->storage[i];
	}

	// Delete old storage
	delete [] s->storage;
	// Point to new memory
	s->storage = b;
	s->quantity = new_quantity;
}


