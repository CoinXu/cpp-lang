/**
 * @date 2018-05-13
 * @description C library converted to C++
 * Declare structure and functions
 */

#include "CppLib.h"
#include <iostream>
#include <cassert>

using namespace std;

const int increment = 100;

void Stash::initialize(int sz) {
	size = sz;
	quantity = 0;
	storage = 0;
	next = 0;
}

void Stash::cleanup() {
	if(storage != 0) {
		cout << "freeing storage" << endl;
		delete [] storage;
	}
}

int Stash::add(const void* element) {
	if(next >= quantity) {
		inflate(increment);
	}

	// Copy element into storage, starting at next empty space
	int start_bytes = next * size;
	unsigned char* e = (unsigned char*)element;
	for(int i = 0; i < size; i++) {
		storage[start_bytes + i] = e[i];
	}
	next++;
	return next - 1;
}

void* Stash::fetch(int index) {
	// Check index boundaries
	assert(0 <= index);
	
	// To indicate the end
	if(index >= next) {
		return 0;
	}

	// Produce pointer to desired element
	return &(storage[index * size]);
}

int Stash::count() {
	return next;
}

void Stash::inflate(int increase) {
	assert(increase > 0);
	int new_quantity = quantity + increase;
	int new_bytes = new_quantity * size;
	int old_bytes = quantity * size;
	unsigned char*b = new unsigned char[new_bytes];

	// Copy old to new
	for(int i = 0; i < old_bytes; i++) {
		b[i] = storage[i];
	}

	// Delete old storage
	delete [] storage;
	// Point to new memory
	storage = b;
	quantity = new_quantity;
}

