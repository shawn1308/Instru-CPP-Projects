#include "Marin.h"
using namespace std;
#include <iostream>

Marin::Marin(string n, string p, int ag, double mon)
{
  this->nom = n;
  this->prenom = p;
  this->age = ag;
  this->salaire = mon;
}

Marin::Marin(string n, double mon)
{
  this->nom = n;
  this->prenom = "";
  this->age = 0;
  this->salaire = mon;
}

Marin::Marin(string n, string p, int ag)
{
  this->nom = n;
  this->prenom = p;
  this->age = ag;
  this->salaire = 0.0;
}

Marin::~Marin()
{
  delete this;
}

int Marin::getAge()
{
  return this->age;
}

string Marin::getNom()
{
  return this->nom;
}

string Marin::getPrenom()
{
  return this->prenom;
}

double Marin::getSalaire()
{
  return this->salaire;
}


void Marin::setPrenom(string p)
{
  this->prenom = p;
}

void Marin::setSalaire(double s)
{
  this->salaire = s;
}

void Marin::vieillir()
{
  this->age++;
}

void Marin::augmenterSalaire(double pourcen)
{
  this->salaire = pourcen * this->salaire;
}

bool Marin::equals(Marin*m)
{
  if (m == nullptr) return false;
  if (this == m) return true;
  if (this->age != m->age) return false;
  if (this->salaire != m->salaire) return false;
  if (this->nom.compare(m->nom) != 0) return false;
  if (this->prenom.compare(m->prenom) != 0 ) return false;
  return true;
}

ostream& operator<<(ostream& os, Marin* s)
{
    return (os << "Marin{n:" << s->nom << ", p :" << s->prenom << ",a:" << s->age << ",S:" << s->salaire << "}");
}
