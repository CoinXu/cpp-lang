/**
 * @date 2018-05-13
 * @description mini c lib 
 * Header file for a C-like library
 * An array-like entity created at runtime
 */

typedef struct CStashTag {
	int size;                 // Size of each space
	int quantity;             // Number of storage spaces
	int next;                 // Next empty space
	unsigned char* storage;   // Dynamically allocated array of bytes;
} CSTash;

void initialize(CSTash* s, int size);
void cleanup(CSTash* s);
int add(CSTash* s, const void* element);
void* fetch(CSTash*s, int index);
int count(CSTash* s);
void inflate(CSTash* s, int increase);
