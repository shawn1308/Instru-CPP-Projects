#pragma once
#include <string>
using namespace std;
class Porte
{
private:
	int hauteur; // en cms
	int largeur; // en cms
	string couleur; // une couleur
	bool etat; // ferm�e:false ouverte:true

public:
	Porte(int h, int l, string c);
	string ToString();
	void fermerPorte();
	void ouvrirPorte();
	bool Equals(Porte* p);
	friend ostream& operator << (ostream& os, Porte* s);
	friend ostream& operator << (ostream& os, Porte& s);
	friend bool operator == (Porte& x, Porte& y);
};

