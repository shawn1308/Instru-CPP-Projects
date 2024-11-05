#include "Bloc.h"
#include <sstream>

Bloc::Bloc(int nbLampes)
{
  this->nbLampes = nbLampes;
	tab = new Lampe*[nbLampes];
	this->disjoncteurAEteint = false;
}

Bloc::~Bloc()
{
	delete this;
}

int Bloc::valPuissance(void)
{
		int pui = 0;
		for (int i = 0; i < this->nbLampes; i++)
		{
			pui += this->tab[i]->valPuissance();
		}
		return pui;
}

void Bloc::initialiser(Couleur c, Puissance p, bool al)
{
	for (int i = 0; i < this->nbLampes; i++)
	{
		this->tab[i] = new Lampe(c, p, al);
	}
}

void Bloc::allumer(void)
{
	for (int i = 0; i < this->nbLampes; i++)
	{
		this->tab[i]->allumer();
	}
}

void Bloc::allumer(int ind)
{
	this->tab[ind]->allumer();
}

void Bloc::eteindre(void)
{
	for (int i = 0; i < this->nbLampes; i++)
	{
		this->tab[i]->eteindre();
	}
}

void Bloc::eteindre(int ind)
{
	this->tab[ind]->eteindre();
}

string Bloc::toString()
{
	stringstream ss;
	ss << "Disjonc ? :" << this->disjoncteurAEteint << endl;
	ss << "Nb elements ? :" << this->nbLampes << endl;
	ss << "tot puissance ? :" << this->valPuissance() << endl;
	for (int i = 0; i < this->nbLampes; i++)
	{
		ss << tab[i]->toString() << endl;
	}
	return ss.str();
}
