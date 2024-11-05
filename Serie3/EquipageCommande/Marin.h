#pragma once
#include <string>

using namespace std;
class Marin
{
private:
	string nom;
	string prenom;
	int age;
	double salaire;
public:
	Marin(string n, string p, int ag, double mon);
	Marin(string n, double mon);
	Marin(string n, string p, int ag);
	~Marin();
	int getAge();
	string getNom();
	string getPrenom();
	double getSalaire();

	void setPrenom(string p);
	void setSalaire(double s);
	friend ostream& operator << (ostream& os, Marin* s);
	void vieillir();
	void augmenterSalaire(double);
	bool equals(Marin* m);
};

