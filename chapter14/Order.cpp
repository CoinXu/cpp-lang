// Constructor/destructor order

#include <fstream>
using namespace std;

ofstream out("order.out");

#define CLASS(ID) class ID { \
public: \
  ID(int) { out << #ID " constructor\n"; } \
  ~ID() { out << #ID " destructor\n"; } \
};

CLASS(Base);
CLASS(A);
CLASS(B);
CLASS(C);
CLASS(D);

class Derived : public Base {
  A a;
  B b;

public:
  Derived(int): a(1), b(2), Base(3) {
    out << "Derived constructor\n";
  }

  ~Derived() {
    out << "Derived destructor\n";
  }
};

class Der : public Derived {
  C c;
  D d;

public:
  Der(): c(1), d(2), Derived(3) {
    out << "Der constructor\n";
  }
  ~Der() {
    out << "Der destructor\n";
  }
};

int main() {
  Der der;
}
