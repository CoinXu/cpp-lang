#include <iostream>

inline double square(double x) { return x * x;}

int main() 
{
	using namespace std;
	double a, b;
	double c = 13.0;

	a = square(5.0);
	b = square(4.5 + 7.5);

	cout << "a = " << a << ", b = " << b << "\n";
	cout << "c = " << c;
	cout << ", c square = " << square(c++) << "\n";
	cout << "Now c = " << c << "\n";

	// make an alias
	double & d = c;
	bool t = d == c;

	cout << "double & d is " << d << endl;
	cout << "double & d == c" << t << endl;

	return 0;
}