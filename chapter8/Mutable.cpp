//: C08: Mutable.cpp
// The "mutable" keyword

class Z {
  int i;
  mutable int j;
public:
  Z();
  void f() const;
};

Z::Z(): i(0), j(0) {}
void Z::f() const {
  //! i++;   // Error -- increment of member ‘Z::i’ in read-only object
  j++;       // Ok: mutable
}

int main() {
  const Z z;
  z.f();
}
