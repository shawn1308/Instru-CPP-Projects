#include "Athlete.h"
#include <sstream>

Athlete::Athlete()
{
  cptDossard++;
  dossard = cptDossard;
}

string Athlete::ToString()
{
  stringstream ss;
  ss << "Porte {Dossard:" << this->dossard << "," << this->temoin << "}";
  return ss.str();
}

Athlete::Athlete(bool temoin)
{
  cptDossard++;
  dossard = cptDossard;
  this->temoin = temoin;
}

void Athlete::rendLeTemoin()
{
  if (this->temoin == true)
  {
    this->temoin = false;
  }
}

bool Athlete::aLeTemoin()
{
  return this->temoin;
}

void Athlete::passeLeTemoinA(Athlete* a)
{
  this->temoin = false;
  a->temoin = true;
}

void Athlete::setSuivant(Athlete* suivant)
{
  this->suivant = suivant;
}


void Athlete::prendLeTemoin()
{
  if (this->temoin == false)
  {
    this->temoin = true;
  }
  else
  {
    this->passeLeTemoinA(this->suivant);
  }
}
