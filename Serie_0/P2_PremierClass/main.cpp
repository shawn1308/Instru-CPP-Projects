#include "Porte.h"
#include <iostream>
int main(){
  Porte* p;
  p = new Porte(180,90,"GRIS");
  p->ouvrirPorte();
  cout << "CKK" << endl;
  string s = p->ToString();
  cout << s << endl;

  Porte* p2;
  p2 = new Porte(5, 34, "BLEU");
  cout << p2 << endl;

  if (p->Equals(p2)) cout << "OK" << endl;
  else cout << "NO NO" << endl;
  return 0;
}