#include "Personne.hpp"

Personne::Personne(const string p, const string n, const int a)
{
	m_prenom = p;
	m_nom = n;
	m_age = a;
	m_biblio = vector<Livre*>();
	cout << "Constructeur de Personne " << m_prenom << endl;
}

Personne::Personne(const string p, const string n) :
	m_prenom(p), m_nom(n), m_age(0), m_biblio(vector<Livre*>())
{
}

Personne::~Personne()
{
	cout << "destructeur Personne " << m_prenom << endl;
}

string Personne::get_nom() const
{
	return m_nom;
}

string Personne::get_prenom() const
{
	return m_prenom;
}

int Personne::get_age() const
{
	const int a = 7;
	return m_age;
}

void Personne::set_age(const int a)
{
	m_age = a;
}

void Personne::ajouterLivre(Livre* l)
{
	m_biblio.push_back(l);
}

void Personne::afficherBiblio() const
{
	for (int i = 0; i < m_biblio.size(); i++)
	{
		m_biblio[i]->afficherLivre();
	}



}
