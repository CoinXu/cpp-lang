#include <iostream>
using namespace std;

struct sysop 
{
	char name[26];
	char quote[64];
	int used;
};

const sysop & use(sysop & sysopref);

int main()
{
	sysop looper = {
		"Rick \"Fortran\" Lopper",
		"I'm a quto kind of quy.",
		0
	};

	use(looper);

	cout << "Lopper: " << looper.used << " use(s)\n";

	sysop copycat;
	copycat = use(looper);
	cout << "Lopper: " << looper.used << " use(s)\n";
	cout << "Copycat: " << copycat.used << " use(s)\n";
	cout << "use(looper): " << use(looper).used << " use(s)\n";

	return 0;
}

const sysop & use(sysop & sysopref) 
{
	cout << sysopref.name << " says:\n";
	cout << sysopref.quote << endl;
	sysopref.used++;
	return sysopref;
}