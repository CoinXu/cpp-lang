#include <iostream>
#include <cstring>

int main() {
	using namespace std;
	int * pt = new int;
	*pt = 1001;

	cout << "int ";
	cout << "value = " << *pt << ": location = " << pt << endl;

	double * pd = new double;
	*pd = 1000001.0;

	cout << "double ";
	cout << "value = " << *pd << ": location = " << pd << endl;
	
	delete pt;
	delete pd;

	// ## array in c++
	int psome[10] = {5};
	psome[0] = 0x10;

	cout << "array ";
	// print first value
	cout << "value = " << * psome << ": location = " << &psome << endl;

	// dynamic array
	int * dpsome = new int[10];
	dpsome[0] = 0x11;


	cout << "dynamic array ";
	// print first value
	cout << "value = " << * dpsome << ": location = " << dpsome << endl;
	delete dpsome;

	// ## string in c++
	char animal[20] = "bear";
	const char * bird = "wren";
	char * ps;

	cout << animal << " and ";
	cout << bird << "\n";

	// enter a kind of animal
	cout << "Enter a kin of animal:";
	cin >> animal;

	// set ps to point to string
	ps = animal;
	cout << ps << "s!\n";
	cout << "Before using strcpy();\n";
	cout << animal << " at " << (int *) animal << endl;
	cout << ps << " at " << (int *) ps << endl;

	// get new storage then copy string to it
	ps = new char[strlen(animal) + 1];
	strcpyy(ps, animal);
	cout << "After using strcpy():\n";
	cout << animal << " at " << (int *) animal << endl;
	cout << ps << " at " << (int *) ps << endl;

	delete [] ps;

	return 0;
}
