//: C09: Inline.cpp
// Inlines inside classes

#include <iostream>
#include <string>

#define DEBUG(x) cout << #x " = " << x << endl
#define TRACE(x) cerr << #x << endl, x
#define FIELD(a) char* a##_string; int a##_size

using namespace std;

class Point {
  int i, j, k;
  
public:
  Point(): i(0), j(0), k(0) {}
  Point(int ii, int jj, int kk): i(ii), j(jj), k(kk) {}

  void print(const string& msg = "") const {
    if (msg.size() != 0) {
      DEBUG(msg);
    }

    DEBUG(i);
    DEBUG(j);
    DEBUG(k);
  }
};

int main() {
  Point p, q(1, 2, 3);
  p.print("value of p");
  p.print("value of q");
}
