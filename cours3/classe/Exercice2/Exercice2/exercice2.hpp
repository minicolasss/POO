#ifndef LIVRE
#define LIVRE

#include <iostream>
#include <vector>
using namespace std;

class Livre
{
private :
	string m_titre;
	string m_auteur;
	vector<Livre*> m_bibli;


public :
	Livre(const string titre,const string auteur);
	~Livre();

	string get_titre()const;
	string get_auteur()const;
	void ajoutlivre(Livre* l);
	void aff();
	void affbibli();
};



#endif