#include <iostream>
#include <vector>
#include "MINIPROJET.hpp"

using namespace std;


Movie::Movie(const string titrefilm, int dureefilm)
{
	m_titrefilm = titrefilm;
	m_dureefilm = dureefilm;
	m_listefilm = vector<Movie*>();
}

Movie::~Movie()
{
}

void Movie::afffilm()
{
	cout << "Liste des films : " << endl;
	for (Movie* film : m_listefilm) 
	{ 
		cout << "- " << film->m_titrefilm << " " << film->m_dureefilm << " minutes" << endl; 
	}
}

void Movie::ajoutdefilm(Movie* l)
{
	m_listefilm.push_back(l);
}

Session::Session(const int date, const int heure, const int place_total)
{
	m_date = date;
	m_heure = heure;
	m_place_total = place_total;
	m_listsession = vector<Session*>();
}

Session::~Session()
{
}

void Session::ajoutseance(Session* l)
{
	m_listsession.push_back(l);
}

void Session::affseance()
{
	cout << "Liste des seances : " << endl;
	for (Session* seance : m_listsession)
	{
		cout << "- Date: " << seance->m_date << ", Heure: " << seance->m_heure << endl;
	}
}




