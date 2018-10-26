#include <iostream>
#include <string>

using namespace std;

class Pet {
  string pname;
public:
  Pet (const  string& name): pname(name) {}
  virtual string name() const { return pname; }
  virtual string description() const {
    return "This is " + pname;
  }
};

class Dog : public Pet {
  string favorite;

public:
  Dog (const string& name, const string& activity)
    : Pet(name), favorite(activity) {}

  string description() const {
    return Pet::name() + " likes to" + favorite;
  }
};

void describe(Pet p) {
  cout << p.description() << endl;
}

int main() {
  Pet p("Alfred");
  Dog d("Fluffy", "sleep");
  describe(p);
  describe(d);
}
