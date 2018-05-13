/**
 * @date 2018-05-13
 * @description Clib test case
 */

#include "Clib.h"
#include <fstream>
#include <iostream>
#include <string>
#include <cassert>

using namespace std;

int main() {
	// Define variables at the beginning of the block as in C
	CSTash intStash, stringStash;
	int i;
	char* cp;
	ifstream in;
	string line;
	const int bufsize = 80;

	// Now remember to initiazlie the variables
	initialize(&intStash, sizeof(int));
	for(i = 0; i < 10; i++) {
		add(&intStash, &i);
	}

	for(i = 0; i < count(&intStash); i++) {
		cout << "fetch(&intStash, " << i << ") = "
				 << *(int*)fetch(&intStash, i)
				 << endl;
	}

	// Holds 80-character strings
	initialize(&stringStash, sizeof(char) * bufsize);
	in.open("./tests/ClibTest.cpp");
	assert(in);

	while(getline(in, line)) {
		add(&stringStash, line.c_str());
	}

	i = 0;

	while((cp = (char*)fetch(&stringStash, i++)) != 0) {
		cout << "fetch(&stringStash, " << i << ") = "
				 << cp << endl;
	}

	cleanup(&intStash);
	cleanup(&stringStash);

	return 0;
}

