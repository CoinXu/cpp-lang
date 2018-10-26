// Pure virtual base definitions
#include <iostream>
using namespace std;

class Pet {
public:
  virtual void speak() const = 0;
  virtual void eat() const = 0;
  // Inline pure virtual definitions illegal:
  //! virtual void sleep() const = 0 {};
};


void Pet::speak() const {
  cout << "Pet::speak()" << endl;
}

void pet::eat() const {
  cout << "Pet::eat()" << endl;
}

class Dog : public Pet {
public:
  // Use the common Pet code
  void speak() const {
    Pet::speak();
  }

  void eat() const {
    Pet::eat();
  }
};

int main() {
  Dog dog;
  dog.speak();
  dog.eat();
}

