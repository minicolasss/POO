#ifndef LIVRE
#define LIVRE

#include <iostream>
using namespace std;

class Livre
{
private:
	string m_titre;
	string m_auteur;

public:
	Livre(const string auteur, const string titre);
	~Livre();

	void afficherLivre();
};

#endif