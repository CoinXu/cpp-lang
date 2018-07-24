//: C08:Castaway.cpp
#include <iostream>
using namespace std;

class Y {
  int i;
public:
  Y();
  void f() const;
  int get() const;
};

Y::Y() { i = 0; }
void Y::f() const {
  //! i++;   // Error -- const member function
  ((Y*)this)->i++;  // Ok: cast away const-ness
  // Better: use C++ explicit case syntax:
  (const_cast<Y*>(this))->i++;
}

int Y::get() const {
  return i;
}

int main() {
  const Y y;
  y.f();
  cout << y.get() << endl;
}
