#pragma once
#include <iostream>
using namespace std;
class Vehicule
{
private:
	string Marque;
public:
	Vehicule(string);
	virtual void afficher();
	~Vehicule();

};

