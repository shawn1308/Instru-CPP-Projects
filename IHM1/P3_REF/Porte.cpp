#include "Porte.h"
#include <sstream>
Porte::Porte(int h, int l, string c)
{
  this->hauteur = h;
  this->largeur = l;
  this->couleur = c;
  this->etat = false;
}

string Porte::ToString()
{
  stringstream ss;
  ss << "Porte {h:" << this->hauteur << ", l :" << this->largeur << ",c:" << this->couleur << ",e:" << this->etat << "}";
  return ss.str();
}

ostream& operator << (ostream& os, Porte* s) {
  return (os << "{h:" << s->hauteur << ", l :" << s->largeur << ",c:" << s->couleur << ",e:" << s->etat << "}");
}

ostream& operator << (ostream& os, Porte& s) {
  return (os << "{h:" << s.hauteur << ", l :" << s.largeur << ",c:" << s.couleur << ",e:" << s.etat << "}");
}

bool operator == (Porte& x, Porte& y) {
  if (x.hauteur != y.hauteur) return false;
  if (x.largeur != y.largeur) return false;
  if (x.couleur != y.couleur) return false;
  return true;
}
void Porte::fermerPorte()
{
  this->etat = false;
}

void Porte::ouvrirPorte()
{
  this->etat = true;
}

bool Porte::Equals(Porte* p)
{
  if (p == nullptr) return false;
  if (this == p) return true;
  if (this->hauteur != p->hauteur) return false;
  if (this->largeur != p->largeur) return false;
  if (this->couleur != p->couleur) return false;
  return true;
}
