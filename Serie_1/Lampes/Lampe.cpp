#include "Lampe.h"
#include <iostream>
#include <sstream>

Lampe::Lampe(Couleur cl, Puissance pui, bool est_all)
{
  this->couleur = cl;
  this->puissance = pui;
  this->estAllume = est_all;
}

Lampe::~Lampe()
{
  delete this;
}

int Lampe::valPuissance(void)
{
  if (!this->estAllume) {
    return 0;
  }
  else if(static_cast<int>(Puissance::W100) == static_cast<int>(puissance)) {
    return 100;
  }
  else if (static_cast<int>(Puissance::W40) == static_cast<int>(puissance)) {
    return 40;
  }
  else if (static_cast<int>(Puissance::W60) == static_cast<int>(puissance)) {
    return 60;
  }
}

void Lampe::allumer(void)
{
  if (!estAllume && nbAllumage < 50) {
    estAllume = true;
    nbAllumage++;
  }
}

void Lampe::eteindre(void)
{
  if (estAllume) {
    estAllume = false;
  }
}

bool Lampe::estGrille(void)
{
  if (this->nbAllumage >= 50) {
    return true;
  }
  return false;
}

string Lampe::toString()
{
  stringstream ss;
  ss << "Nb allumage :" << this->nbAllumage << ", Couleur : ";
  if (static_cast<int>(couleur)==0)
  {
    ss << "Blanc" << ", Puissance : ";
  }
  else if (static_cast<int>(couleur) == 1)
  {
    ss << "Jaune" << ", Puissance : ";
  }
  else if (static_cast<int>(couleur) == 2)
  {
    ss << "Rouge" << ", Puissance : ";
  }
  ss << this->valPuissance();
  return ss.str();
}
