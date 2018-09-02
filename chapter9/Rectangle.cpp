//: C09:Rectangle.cpp
// Acessors & mutators
//

class Reactangle {
  int wide, high;

public:
  Reactangle(int w = 0, int h = 0): wide(w), high(h) {}

  int width() const { return wide; }
  void width(int w) { wide = w; }

  int height() const { return high; }
  void height(int h) { high = h; } 
};

int main() {
  Reactangle r(19, 47);
  r.height(2 * r.width());
  r.width(2 * r.height());
}
