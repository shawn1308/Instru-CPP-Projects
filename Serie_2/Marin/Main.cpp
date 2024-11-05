#include "Marin.h"
#include "Equipage.h"
#include "Capitaine.h"
#include <iostream>
int main() {
  Marin* m1 = new Marin("Pigeon","Roucoule",20,1500.23);
  Marin* m2 = new Marin("Pigeon", "Roucoule", 20, 1300.23);
  Marin* m3 = new Marin("Comme", "Jamais", 48, 1450.23);
  Marin* m4 = new Marin("Pigeon", "Roucoule", 20, 1500.23);
  Marin* m5 = new Marin("PigeonRR", "RouRRcoule", 25, 1510.23);
  cout << m1 << endl;
  bool b1 = m1->equals(m4);
  cout << b1 << endl;

  cout << "-----------------------" << endl;
  Equipage* e = new Equipage();
  cout << e->getNombreMarins() << endl;
  e->addMarin(m1);
  cout << e->getNombreMarins() << endl;
  e->addMarin(m4);
  cout << e->getNombreMarins() << endl;
  e->addMarin(m2);
  cout << e->getNombreMarins() << endl;

  cout << "-----------------------" << endl;
  Equipage* e2 = new Equipage();
  e2->addMarin(m5);
  cout << e2->getNombreMarins() << endl;

  cout << "-----------------------" << endl;
  e->addAllEquipage(e2);
  cout << e->getNombreMarins() << endl;


  cout << "-----------------------" << endl;
  Capitaine* c1 = new Capitaine("Pigeon", "Roucoule", 20, 1500.23,"CAP");
  cout << c1->toString() << endl;
  
  

}