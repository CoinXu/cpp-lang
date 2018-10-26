// A Class that counts its objects

#include <fstream>
#include <string>

using namespace std;

ofstream out("HowManyCopyConstructor.out");

class HowManyCopyConstructor {
  string name;
  static int objectCount;

public:
  HowManyCopyConstructor(const string& id = ""): name(id) {
    objectCount++;
    print("HowManyCopyConstructor()");
  }

  ~HowManyCopyConstructor() {
    objectCount--;
    print("~HowManyCopyConstructor()");
  }

  HowManyCopyConstructor(const HowManyCopyConstructor& h): name(h.name) {
    name += " copy";
    objectCount++;
    print("HowManyCopyConstructor(const HowManyCopyConstructor& h)");
  }

  void print(const string& msg = "") const {
    if (msg.size() != 0)
      out << msg << ": ";
    out << " " << name << ": "
        << "objectCount = " << objectCount << endl;
  }
};


int HowManyCopyConstructor::objectCount = 0;

HowManyCopyConstructor f(HowManyCopyConstructor x) {
  x.print("x argument inside f()");
  out << "returning from f()" << endl;
  return x;
}

int main() {
  HowManyCopyConstructor h("h");
  out << "entering f()" << endl;

  HowManyCopyConstructor h2 = f(h);
  h2.print("h2 after call to f()");

  out << "call f(), no return value" << endl;
  f(h);

  out << "after call to f()" << endl;
}

