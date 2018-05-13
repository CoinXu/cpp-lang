/**
 * @date 2018-05-13
 * @description C-like library converted to C++
 */

struct Stash {
	int size;	int quantity;
	int next;
	unsigned char* storage;

	// Functions
	void initialize(int size);
	void cleanup();
	int add(const void* element);
	void* fetch(int index);
	int count();
	void inflate(int increase);
};
