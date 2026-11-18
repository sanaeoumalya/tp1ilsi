#include<iostream>
#include "Voiture.h"
#include "Moteur.h"
int main() {
	Moteur*m1=new Moteur(12, 44);
	Voiture v1(1, 'c', 0, 'm',m1);
	v1.afficher();
	v1.accelerer(10);
	v1.afficher();
	Moteur m2(3, 2);
	m2.afficher();
	Voiture v2(v1);
	v2.afficher();





}