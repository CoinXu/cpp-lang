// Simple inheritance
#include "Useful.h"
#include <iostream>

using namespace std;

class Y : public X {
  int i;

public:
  Y() {
    i = 0;
  }

  int change() {
    i = permute(); // different name call
    return i;
  }

  void set(int ii) {
    i = ii;
    X::set(ii);  // same-name function call
  }
};

int main() {
  cout << "sizeof(X) = " << sizeof(X) << endl;
  cout << "sizeof(Y) = " << sizeof(Y) << endl;

  Y y;
  y.change();

  // X function interface comes throught:
  y.read();
  y.permute();

  // Redefined function hide base versions:
  y.set(12);
}
