#ifndef VOITURE
#define VOITURE

#include <iostream>

using namespace std;


class Voiture
{
private:
	string m_marque;
	string m_modele;
	float m_km;


public:

	Voiture(string ma, string mo, float k);

	void avance(float d);

	string get_marque();
	float get_km();
};



#endif