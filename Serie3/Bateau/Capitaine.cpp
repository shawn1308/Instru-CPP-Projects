#include "Capitaine.h"
#include "Marin.h"
#include <sstream>

Capitaine::Capitaine(string n, string p, int ag, double mon, string Grade) : Marin(n, p, ag, mon), Grade(Grade)
{
  this->Grade = Grade;
}

string Capitaine::toString()
{
  stringstream ss;
  ss << "Marin{n:" << this->getNom() << ",P:" << this->getPrenom() << ",A:" << this->getAge() << ",S:" << this->getSalaire() << "} => " << this->getGrade() << endl;
  return ss.str();
}

string Capitaine::getGrade()
{
  return  this->Grade;
}

// ------------- enlever------------------
bool Capitaine::equals(Marin* m)
{
  if (!Marin::equals(m)) return false;
  return true;
}
