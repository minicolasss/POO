#include "Livre.hpp"

Livre::Livre(const string auteur, const string titre)
{
	m_auteur = auteur;
	m_titre = titre;
	cout << "constructeur Livre " << m_titre << endl;
}

Livre::~Livre()
{
	cout << "destructeur Livre " << m_titre << endl;

}

void Livre::afficherLivre()
{
	cout << "J ai le livre " << m_titre << " de " << m_auteur << endl;

}
