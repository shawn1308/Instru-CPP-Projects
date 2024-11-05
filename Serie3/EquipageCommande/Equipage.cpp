#include "Equipage.h"
#include <sstream>
#include <vector>
#include <algorithm> 
Equipage::Equipage() {
	this->marins = new vector<Marin*>();
}

Equipage::~Equipage()
{
	delete this;
}

int Equipage::getNombreMarins()
{
	if (this->marins->empty())
	{
		return 0;
	}
	return this->marins->size();
}

bool Equipage::isMarinPresent(Marin* m)
{
	for (int i = 0; i < this->getNombreMarins(); i++)
	{
		if (m->equals(this->marins->at(i))) {
			return true;
		}
	}
	return false;
}

bool Equipage::addMarin(Marin* m)
{
	if (this->isMarinPresent(m)) {
		return false;
	}
	else {
		this->marins->push_back(m);
		return true;
	}
}

string Equipage::ToString()
{
	stringstream ss;
	ss << "Equipage : " << endl;
	for (int i = 0; i < this->getNombreMarins(); i++)
	{
		ss << "Marin{N:" << this->marins->at(i)->getNom() << ",P:" << this->marins->at(i)->getPrenom() << ",Age :" << this->marins->at(i)->getAge() << ", Salaire :" << this->marins->at(i)->getSalaire() << "}" << endl;
	}
	return ss.str();
}

bool Equipage::removeMarin(Marin* m)
{
	for (int i = 0; i < this->getNombreMarins(); i++)
	{
		if (m->equals(this->marins->at(i))) {
			this->marins->erase(this->marins->begin() + i);
			return false;
		}
	}
}

void Equipage::clear()
{
	this->marins->clear();
}

vector<Marin*>* Equipage::getEquipage()
{
	return this->marins;
}

bool Equipage::addAllEquipage(Equipage* e)
{
	for (int i = 0; i < e->getNombreMarins(); i++)
	{
		if (this->isMarinPresent(e->marins->at(i))) {
			return false;
		}
	}
	for (int i = 0; i < e->getNombreMarins(); i++)
	{
		this->addMarin(e->marins->at(i));
	}
	return true;
}

Marin* Equipage::getMarinByName(string nom)
{
	Marin* m = nullptr;
	for (int i = 0; i < this->getNombreMarins(); i++)
	{
		if (this->marins->at(i)->getNom().compare(nom) == 0) {
			m = this->marins->at(i);
		}
	}
	return m;
}

void Equipage::augmenterSalaire(double d)
{
	for (int i = 0; i < this->getNombreMarins(); i++)
	{
		this->marins->at(i)->augmenterSalaire(d);
	}
}

double Equipage::getMaxSalaire()
{
	double n = 0.0;
	for (int i = 0; i < this->getNombreMarins(); i++)
	{
		if (this->marins->at(i)->getSalaire() > n) {
			n = this->marins->at(i)->getSalaire();
		}
	}
	return n;
}

double Equipage::getMoyenneSalaire()
{
	double sm = 0.0;
	for (int i = 0; i < this->getNombreMarins(); i++)
	{
		sm += this->marins->at(i)->getSalaire();
	}
	return sm / (double)this->getNombreMarins();
}

double Equipage::getMedianeSalaire()
{
	vector<double> salaire;
	for (int i = 0; i < this->getNombreMarins(); i++)
	{
		salaire.push_back(this->marins->at(i)->getSalaire());
	}
	sort(salaire.begin(), salaire.end());
	return this->marins->at(this->getNombreMarins() / 2)->getSalaire();
}

bool Equipage::equals(Equipage* e)
{
	if (e->getNombreMarins() != this->getNombreMarins())
	{
		return false;
	}
	for (int i = 0; i < e->getNombreMarins(); i++)
	{
		if (!this->isMarinPresent(e->marins->at(i)))
		{
			return false;
		}
	}
	return true;
}
