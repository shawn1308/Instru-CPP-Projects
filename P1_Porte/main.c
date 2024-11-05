#define _CRT_SECURE_NO_WARNINGS

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct Porte {
	int hauteur; // en cms
	int largeur; // en cms
	char couleur[10]; // une couleur
	int etat; // fermée:0 ouverte:1
} Porte;

Porte* nouvellePorte(int h, int l, char* c); // fermée par défaut
char* ToString(Porte* p);
void fermerPorte(Porte* p);
void ouvrirPorte(Porte* p);
int Equals(Porte* p1, Porte* p2);

Porte* nouvellePorte(int h, int l, char* c) {
	Porte* p = (Porte*)malloc(sizeof(Porte));
	if (p != NULL) {
		p->hauteur = h;
		p->largeur = l;
		strcpy(p->couleur, c);
		p->etat = 0; // etat fermée !
	}
	return p;
}

char* ToString(Porte* p) {
	char* s = (char*)malloc(100 * sizeof(char));
	sprintf(s, "{h:%d,l:%d,c:%s,e:%d}",
		p->hauteur, p->largeur, p->couleur, p->etat);
	return s;
}

void fermerPorte(Porte* p) {
	p->etat = 0; // 0 pour fermée
}

void ouvrirPorte(Porte* p) {
	p->etat = 1; // 1 pour ouverte
}

int Equals(Porte* p1, Porte* p2) {
	if (p1 == NULL || p2 == NULL) return 0;
	if (p1 == p2) return 1;

	if (p1->hauteur != p2->hauteur) return 0;
	if (p1->largeur != p2->largeur) return 0;
	if (strcmp(p1->couleur, p2->couleur) != 0) return 0;

	return 1;
}

int main() {
	//Porte* p = nouvellePorte(180, 90, "GRIS");
	Porte* p;
	p = nouvellePorte(180, 90, "GRIS");

	Porte* p2 = nouvellePorte(180, 90, "GRIS");
	//printf("%d\n",p->hauteur);
	//printf("%s\n",ToString(p));
	puts(ToString(p));
	ouvrirPorte(p);
	puts(ToString(p));
	printf("\n%d", Equals(p, p));
	printf("\n%d", Equals(p, p2));
	if (p == p2) {
		printf("OK");
	}
	else {
		printf("KO");
	}
	return 0;
}