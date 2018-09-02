//:C09:Cpptime.h
//A simple time class

#ifndef CPPTIME_H
#define CPPTIME_H

#include <ctime>
#include <cstring>

class Time {
  std::time_t t;
  std::tm local;
  char asciiRep[26];
  unsigned char lflag, aflag;

  void updateLocal() {
    if (!lflag) {
      local = *std::localtime(&t);
      lflag++;
    }
  }

  void updateAscii() {
    if (!aflag) {
      updateLocal();
      std::strcpy(asciiRep,  std::asctime(&local));
      aflag++;
    }
  }

public:
  Time() { mark(); }
  
};
