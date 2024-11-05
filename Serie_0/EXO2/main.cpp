#include <iostream>
#include <iomanip>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

int main() {

  double my_p = 1;
  int x = 0;
  for (int i = 3; i < 100000; i=i+2)
  {
    if (x==0)
    {
      my_p = my_p - (1.0 / i);
      x++;
    }
    else {
      my_p = my_p + (1.0 / i);
      x = 0;
    }
  }
  double my_pp = my_p * 4.0;
  cout << "Valeur de pi avec formule :" << my_pp << endl;
  cout << "Pi de Librarie = " << std::setprecision(16) << M_PI << endl;
  return 0;
}