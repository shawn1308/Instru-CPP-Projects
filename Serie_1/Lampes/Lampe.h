#pragma once
#include <string>
using namespace std;

enum class Couleur { blanc, jaune, rouge };
enum class Puissance { W40, W60, W100 };

class Lampe
{
private:
	Couleur couleur;
	Puissance puissance;
	bool estAllume;
	int nbAllumage = 0;
public:
	Lampe(Couleur cl, Puissance pui, bool est_all);
	~Lampe();
	int valPuissance(void);
	void allumer(void);
	void eteindre(void);
	bool estGrille(void);
	string toString();
};