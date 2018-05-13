/**
 * @date 2018-05-13
 * @descrption Test of c++ library
 */

#include "CppLib.h"
#include <fstream>
#include <iostream>
#include <string>
#include <cassert>

using namespace std;

int main() {
	Stash IntStash;
	int i;

	IntStash.initialize(sizeof(int));
	for(i = 0; i < 10; i++) {
		IntStash.add(&i);
	}

	for(i = 0; i < IntStash.count(); i++) {
		cout << "IntStash.fetch(" << i << ") = "
				 << *(int*)IntStash.fetch(i)
				 << endl;
	}

	IntStash.cleanup();

	const int bufsize = 80;
	Stash StringStash;
	StringStash.initialize(sizeof(char) * bufsize);
	ifstream in("./tests/CppLibTest.cpp");
	assert(in);

	string line;
	while(getline(in, line)) {
		StringStash.add(line.c_str());
	}

	i = 0;
	char* cp;
	while((cp = (char*)StringStash.fetch(i++)) != 0) {
		cout << "StringStash.fetch(" << i << ") = "
				 << cp << endl;
	}

	StringStash.cleanup();

	return 0;
}

