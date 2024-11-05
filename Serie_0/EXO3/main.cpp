#include <iostream>
#include <iomanip>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

int main() {

  int tab[5] = { 10, 20, 30, 40, 50 };
  int tab2[5] = {0};

  int m = sizeof(tab) / sizeof(int);
  //cout << m << endl;
  // ---------------------- 1er partie------------------
  int f = 0;
  int l = m;

  for (int i = 0; i < m; i++)
  {
    if (i%2==0)
    {
      tab2[l-1] = tab[i];
      l--;
    }
    else {
      tab2[f] = tab[i];
      f++;
    }
  }

  for (int i = 0; i < m; i++)
  {
    //cout << tab2[i];
  }

  // ---------------------- 2eme partie------------------

  int tab3[6] = { 10, 20, 30, 40, 50,60};
  int tmp;
  int t = sizeof(tab3) / sizeof(int);
  int r = t - 1;
  for (int i = 0; i < (m/2)+1; i++)
  {

    if (t % 2 == 0 && i % 2 == 0) {
      tmp = tab3[i];
      tab3[i] = tab3[r];
      tab3[r] = tmp;
      r = r - 2;
    }
  }
  
  for (int i = 0; i < t; i++)
  {
    cout << tab3[i];
  }

  return 0;
}