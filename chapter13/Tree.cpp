#include <iostream>

class Tree {
  int height;

public:
  Tree(int h): height(h) {}
  ~Tree() {
    std::cout << "*";
  }
  friend std::ostream& operator<<(std::ostream& os, const Tree* t) {
    return os << "Tree height is: " << t->height << std::endl;
  }
};

int main() {
  Tree* t = new Tree(40);
  std::cout << t;
  delete t;
}
