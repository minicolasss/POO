
#include "Personne.hpp"
#include <iostream>

#include <memory>

int main()
{
	Personne p = Personne("lau", "fab", 8);

	string nom = p.get_nom();
	nom = "toto";

	cout << p.get_nom() << endl;
	cout << p.get_age() << endl;

	p.set_age(10);
	cout << p.get_age() << endl;


	{
		//dynamique
		shared_ptr<Personne> p2 = make_shared<Personne>("jean", "fab", 8);
		p2->set_age(11);
		cout << p2->get_age() << endl;

	}

	Livre l1 = Livre("JKR", "Harry");
	p.ajouterLivre(&l1);
	p.afficherBiblio();

	Livre l2 = Livre("Tolkien", "SdA");
	p.ajouterLivre(&l2);
	p.afficherBiblio();

	Livre* l3 = new Livre("Oda", "OnePiece");
	p.ajouterLivre(l3);


	p.afficherBiblio();


	delete l3;



	return 0;
}

