#include "Bateau.h"
#include <sstream>
bool Bateau::equals(Bateau* b)
{
	if (this->nom.compare(b->nom) == 0)
	{
		return true;
	}
  return false;
}

string Bateau::toString()
{
	stringstream ss;
	ss << "Bateau [Nom : " << this->nom << ", Tonnage : " << this->tonnage << ", Commandant : " << this->equipage->commandant->getNom() << ", membres de l'équipage : [";
	ss << this->equipage->toString() << "]";
	return ss.str();
}
