#pragma once
#include <string>
using namespace std;

class Polynome
{
private:
  int MAX_COEFF;
  double tab[];
public: 
  ~Polynome();
  Polynome();
  Polynome(double coef, int degre);
  Polynome(double coef);
  string toString();
  double valeur(double x);
  Polynome* plus(Polynome* p);
};

