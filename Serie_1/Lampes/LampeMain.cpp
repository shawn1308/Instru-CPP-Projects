#include "Lampe.h"
#include "Bloc.h"
#include <iostream>
int main() {
  Couleur clr = Couleur::jaune;
  Puissance puiss = Puissance::W60;
  Lampe* L1 = new Lampe(clr, puiss, true);
  L1->eteindre();
  L1->allumer();
  cout << L1->toString();
  cout << "----------------------" << endl;
  Bloc* bl = new Bloc(10);
  bl->initialiser(clr, puiss, true);
  cout << bl->toString();
}