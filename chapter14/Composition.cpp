// Reuse code with composition
#include "Useful.h"

class Y {
  int i;

public:
  X x;
  Y() {
    i = 0;
  }

  void f(int ii) {
    i = ii;
  }

  int g() const {
    return i;
  }
}

class YY {
  int i;
  X x;

public:
  YY() {
    i = 0;
  }

  void f(int ii) {
    i = ii;
    x.set(ii);
  }

  int g() const {
    return i * x.read();
  }

  void permute() {
    x.permute();
  }
}

int main() {
  Y y;
  y.f(47);
  y.x.set(37);
}
