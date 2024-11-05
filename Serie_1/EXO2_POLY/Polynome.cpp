#include "Polynome.h"
#define _USE_MATH_DEFINES // for C
#include <math.h>
#include <sstream>

Polynome::Polynome(){
  this->MAX_COEFF = 8;
  this->tab[8] = { 0 };
}

Polynome::Polynome(double coef, int degre)
{
  this->MAX_COEFF = 8;
  this->tab[8] = { 0 };
  this->tab[degre] = coef;
}

Polynome::Polynome(double coef)
{
  this->MAX_COEFF = 8;
  this->tab[8] = { 0 };
  this->tab[0] = coef;
}

Polynome::~Polynome() {
  delete this;
}

double Polynome::valeur(double x)
{
  double y = 0;
  for (int i = 0; i < MAX_COEFF; i++)
  {
    y += tab[i] * pow(x, i);
  }
  return y;
}

Polynome* Polynome::plus(Polynome* p)
{
  Polynome* t = new Polynome();
  double tab_t[8] = { 0 };
  for (int i = 0; i < MAX_COEFF; i++)
  {
    tab_t[i] = this->tab[i] + p->tab[i];
    t->tab[i] = tab_t[i];
  }
  return t;
}

string Polynome::toString()
{
  stringstream ss;
  ss << "Fonction :" << this->tab[7] << "X^8 + " << this->tab[6] << "X^7 + " << this->tab[5] << "X^6 + " << this->tab[4] << "X^5 + " << this->tab[3] << "X^4 + " << this->tab[2] << "X^3 + " << this->tab[1] << "X^2 +" << this->tab[0];
  return ss.str();
}




