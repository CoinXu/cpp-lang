// Pure abstract base classes
#include <iostream>
using namespace std;

enum note { MiddleC, Csharp, Cflat };

class Instrument {
public:
  // pure virtual functions:
  virtual void play(note) const = 0;
  virtual char* what() const = 0;

  // Assume this will modify the object:
  virtual void adjust(int) = 0;
};


class Wind: public Instrument {
public:
  void play(note) const {
    cout << "Wind::paly" << endl;
  }

  char* what() const {
    return "Wind";
  }

  void adjust(int) {}
};

class Percussion: public Instrument {
public:
  void play(note) const {
    cout << "Percussion::play" << endl;
  }

  char* what() const {
    return "Percussion";
  }
  void adjust(int) {}
};




