#pragma once
#include "Lampe.h"

class Bloc
{
private:
	int nbLampes;
	Lampe** tab;
	bool disjoncteurAEteint;
public:
	Bloc(int nbLampes = 5);
	~Bloc();
	int valPuissance(void);
	void initialiser(Couleur c, Puissance p, bool al = true);
	void allumer(void);
	void allumer(int ind);
	void eteindre(void);
	void eteindre(int ind);
	string toString();
};