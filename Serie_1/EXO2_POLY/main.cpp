#include "Polynome.h"
#include <iostream>
int main() {
  Polynome* p3 = new Polynome(7,2);
  cout << "y : " << p3->valeur(10) << endl;
  p3->~Polynome();
  return 0;
}