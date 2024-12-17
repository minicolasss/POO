#ifndef PERSONNE
#define PERSONNE

#include <iostream>
#include <vector>
#include "Livre.hpp"

using namespace std;

class Personne
{
private:
	string m_prenom;
	string m_nom;
	int m_age;
	vector<Livre*> m_biblio;


public:
	Personne(const string p, const string n, const int a); // constructeur
	Personne(const string p, const string n); // constructeur
	~Personne(); // destructeur

	// getter pour récupérer les informations de la classe

	string get_nom() const; // const pour dire que l'on ne peut pas modifier les attributs de la classe dans cette méthode
	string get_prenom() const;
	int get_age() const;

	// setter pour modifier la classe
	void set_age(const int a);

	void ajouterLivre(Livre* l);

	void afficherBiblio() const;
};

class Employe : public Personne
{
private :
	int m_salaire;

public :
	void afficheinfo();
	Employe(const string p, const string n, const int a, int salaire);
	int get_salaire();
};

class Etudiant : public Personne
{
private :
	int m_numero;

public :
	Etudiant(const string p, const string n, const int a, int numero);
	void Afficheinfo();
	int get_numero();
};

class Alternant : public Etudiant, public Employe 
{
private :


public : 
	Alternant(const string p, const string n, const int a, int numero, int salaire);
	void Afficheinfo();
};

#endif