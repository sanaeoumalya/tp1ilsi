#include "Voiture.h"
#include <iostream>

using namespace std;
Voiture::Voiture(int r, char c, int v, char mo,Moteur *M)
{
	this->moteur = M;
	this->ref=r;
	this->color=c;
	this->vitesse = v;
	this->model = mo;
}
Voiture::Voiture(const Voiture& V)
{
	this->ref = V.ref;
	this->color = V.color;
	this->vitesse =V.vitesse;
	this->model = V.model;
	this->moteur = new Moteur(*V.moteur);

}
;

void const Voiture::afficher() {
	cout << "ref ="  << ref<< endl;
	cout << "color =" << color << endl;
	cout << "vitesse =" << vitesse << endl;
	cout << "model =" << model<< endl;
	this->moteur->afficher();
}


void Voiture::accelerer(int a) {
	vitesse = vitesse + a;

}

Voiture::~Voiture()
{
	delete this->moteur;
}


