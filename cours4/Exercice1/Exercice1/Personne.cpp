#include "Personne.hpp"

Personne::Personne(const string p, const string n, const int a)
{
	m_prenom = p;
	m_nom = n;
	m_age = a;
	m_biblio = vector<Livre*>();
}

Personne::Personne(const string p, const string n) :
	m_prenom(p), m_nom(n), m_age(0), m_biblio(vector<Livre*>())
{
}

Personne::~Personne()
{
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


void Employe::afficheinfo()
{
	cout << "Employe salaire " << m_salaire << endl;
}

Employe::Employe(const string p, const string n, const int a, int salaire):
	Personne(p,n,a), m_salaire(salaire)
{
}

int Employe::get_salaire()
{
	return m_salaire;
}

Etudiant::Etudiant(const string p, const string n, const int a, int numero):
	Personne(p,n,a), m_numero(numero)
{
}

void Etudiant::Afficheinfo()
{
	cout << "Etudiant numero " << get_nom() << "	:  " << m_numero << endl;
}

int Etudiant::get_numero()
{
	return m_numero;
}

Alternant::Alternant(const string p, const string n, const int a, int numero, int salaire) :
	Etudiant(p, n, a, numero), Employe(p, n, a, salaire)
{
}


void Alternant::Afficheinfo()
{
	cout << "prenom		:  " << Personne::get_prenom() << endl << "numero etu	:  " << get_numero() << endl << "salaire	:  " << get_salaire() << endl;
}
