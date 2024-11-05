#pragma once
#include <string>
using namespace std;

static int cptDossard = 0;

class Athlete
{
private:
  int dossard;
  bool temoin = false;
  Athlete* suivant;
public: 
  Athlete();
  Athlete(bool temoin);
  string ToString();
  void prendLeTemoin();
  void rendLeTemoin();
  bool aLeTemoin();
  void passeLeTemoinA(Athlete* a);
  void setSuivant(Athlete* suivant);
};
