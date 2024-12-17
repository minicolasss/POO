#include <iostream>
#include "voiture.hpp"

using namespace std;

Voiture::Voiture(string ma, string mo, float k)
{
    m_marque = ma;
    m_modele = mo;
    m_km = k;
}

void Voiture::avance(float d)
{
    cout << get_marque() << endl;

    m_km += d;
}

string Voiture::get_marque()
{
    return m_marque;
}

float Voiture::get_km()
{
    return m_km;
}
