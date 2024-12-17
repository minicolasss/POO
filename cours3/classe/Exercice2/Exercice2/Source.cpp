#include <iostream>
#include "exercice2.hpp"

using namespace std;

Livre::Livre(const string titre, const string auteur)
{
	m_titre = titre;
	m_auteur = auteur;
	m_bibli = vector<Livre*>();
	cout << "constructe \n";
}

Livre::~Livre()
{
	cout << "dest\n";
}


string Livre::get_titre() const
{
	return m_titre;
}

string Livre::get_auteur() const
{
	return m_auteur;
}

void Livre::ajoutlivre(Livre* l)
{
	m_bibli.push_back(l);
}

void Livre::aff()
{
	cout << "lire livre     " << m_titre << endl;
}

void Livre::affbibli()
{
	for (int i = 0; i < m_bibli.size(); i++)
	{
		m_bibli[i]->affbibli();
		//cout << m_bibli[i] << endl;
	}
}
