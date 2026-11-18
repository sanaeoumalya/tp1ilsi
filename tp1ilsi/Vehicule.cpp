#include "Vehicule.h"

Vehicule::Vehicule(string m)
{
	this->Marque = m;
}
void Vehicule::afficher() {
	cout << "la marque est:" << Marque;
}

Vehicule::~Vehicule()
{
}
