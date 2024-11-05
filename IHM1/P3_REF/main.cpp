#include <iostream>
#include "Porte.h"
using namespace std;
int main() {
  int v1;
  int& refv1 = v1;
  refv1 = 44;
  cout << v1 << endl;

  Porte* p1 = new Porte(170, 45, "ROUGE");
  p1->ouvrirPorte();
  cout << p1 << endl;
  Porte p2(150, 70, "BLEU");
  p2.ouvrirPorte();
  cout << p2 << endl;

  Porte& p3 = *p1;
  Porte& p4 = p2;

  cout << p3 << endl;
  cout << p4 << endl;

  if (p3 == p4) cout << "OK" << endl;
  else cout << "NO" << endl;
  return 0;
}