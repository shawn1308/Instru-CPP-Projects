#pragma once
#include "EquipageCommande.h"
class Bateau
{
private:
  string nom;
  int tonnage;
  EquipageCommande* equipage;
public:
  bool equals(Bateau* b);
  string toString();
};

