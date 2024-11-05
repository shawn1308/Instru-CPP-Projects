#pragma once
#include "Marin.h"
class Capitaine : public Marin
{
protected:
  string Grade;
public:
  Capitaine(string n, string p, int ag, double mon, string Grade);
  ~Capitaine();
  string toString();
  string getGrade();
  bool equals(Marin* m);
};

