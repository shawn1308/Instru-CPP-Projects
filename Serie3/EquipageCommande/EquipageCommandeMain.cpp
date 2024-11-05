#include "Marin.h"
#include "Equipage.h"
#include "Capitaine.h"
#include "EquipageCommande.h"
#include <iostream>
int main() {
  Marin* m1 = new Marin("Pigeon", "Roucoule", 20, 1500.23);
  Marin* m2 = new Marin("Pigeon", "Roucoule", 20, 1300.23);
  Marin* m3 = new Marin("Comme", "Jamais", 48, 1450.23);
  Capitaine* c1 = new Capitaine("ALEG", "viz", 28, 1950.23,"CAPITAINE");
  EquipageCommande* EC1 = new EquipageCommande(c1);
  EC1->addMarin(m1);
  EC1->addMarin(m2);
  cout << EC1->toString() << endl;
}