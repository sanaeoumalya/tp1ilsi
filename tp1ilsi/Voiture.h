#pragma once
#include "Moteur.h"
class Voiture
{
private:
	int ref;
	char color;
	int vitesse;
	char model;
  Moteur* moteur;
public:
	Voiture(int, char, int, char, Moteur*);
	Voiture(const Voiture& v);
	const void afficher();
	void accelerer(int);
	~Voiture();
};
