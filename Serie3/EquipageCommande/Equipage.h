#pragma once
#include "Marin.h"
using namespace std;
#include <iostream>
#include <vector>

class Equipage
{
protected:
  vector<Marin*>* marins;
public:
  Equipage();
  ~Equipage();
  int getNombreMarins();
  bool isMarinPresent(Marin* m);
  bool addMarin(Marin* m);
  string ToString();
  bool removeMarin(Marin* m);
  void clear();
  vector<Marin*>* getEquipage();
  bool addAllEquipage(Equipage* e);
  Marin* getMarinByName(string nom);
  void augmenterSalaire(double d);
  double getMaxSalaire();
  double getMoyenneSalaire();
  double getMedianeSalaire();
  bool equals(Equipage* e);
};

