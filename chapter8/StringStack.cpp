// C08: StringStack.cpp
// Using static const to create a compile-time constant inside a class

#include <cstring>
#include <iostream>

using namespace std;

class StringStack {
  static const int size = 100;
  const string* stack[size];
  int index;

public:
  StringStack();
  void push(const string* s);
  int point();
  const string* pop();
};

StringStack::StringStack(): index(0) {
  memset(stack, 0, size * sizeof(string*));
}

void StringStack::push(const string* s) {
  if (index < size) {
    stack[index++] = s;
  }
}

int StringStack::point() {
  return index;
}

const string* StringStack::pop() {
  if (index > 0) {
    const string* rv = stack[--index];
    stack[index] = 0;
    return rv;
  }

  return 0;
}

string IceCream[] = {
  "pralines & cream",
  "fudge ripple",
  "jamocha almond fudge",
  "wild mountain blackberry",
  "rasberry sorbet",
  "lemon swirl",
  "rocky road",
  "deep chocolate fudge"
};

const int ICsz = sizeof IceCream / sizeof *IceCream;

int main() {
  StringStack ss;

  cout << "sizeof IceCream: " << sizeof IceCream << endl;
  cout << "sizeof *IceCream: " << sizeof *IceCream << endl;
  cout << "ICsz: " << ICsz << endl;

  for (int i = 0; i < ICsz; i++) {
    ss.push(&IceCream[i]);
  }

  cout << "point: " << ss.point() << endl;

  const string* cp;
  while ((cp = ss.pop()) != 0) {
    cout << *cp << endl;
  }
}
