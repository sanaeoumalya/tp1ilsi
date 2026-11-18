#include "Moteur.h"
#include <iostream>
using namespace std;
Moteur::Moteur(int a, int p)
{
	annee = a;
	puissance = p;
}
void Moteur::afficher() {
	cout << "annee=" << annee << endl;
	cout << "puissance =" << puissance << endl;
}
Moteur::~Moteur(){
}
