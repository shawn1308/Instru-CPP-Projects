#include "EquipageCommande.h"
#include "Equipage.h"
#include <sstream>
EquipageCommande::EquipageCommande(Capitaine* c) :Equipage(), commandant(c)
{
}

EquipageCommande::~EquipageCommande()
{
  delete this;
}
string EquipageCommande::toString()
{
  stringstream ss;
  ss << this->commandant->toString();
  ss << Equipage::ToString();
  return ss.str();
}
