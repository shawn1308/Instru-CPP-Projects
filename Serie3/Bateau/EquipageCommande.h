#pragma once
#include "Equipage.h"
#include "Capitaine.h"
class EquipageCommande : public Equipage
{
public:
  Capitaine* commandant;
  EquipageCommande(Capitaine* c = nullptr);
  ~EquipageCommande();
  string toString();

};

