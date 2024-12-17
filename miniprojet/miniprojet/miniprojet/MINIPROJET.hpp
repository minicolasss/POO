#ifndef MINIPROJET
#define MINIPROJET

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Movie
{
	private :
		string m_titrefilm;
		int m_dureefilm;
		vector<Movie*> m_listefilm;


	public :
		Movie(const string titrefilm,const int dureefilm);
		~Movie();
		void afffilm();
		void ajoutdefilm(Movie* l);

};

class Session
{
private :
	int m_date;
	int m_heure;

	int m_place_total;
	

	vector<Session*> m_listsession;

public :
	Session(const int date, const int heure, const int place_total );
	~Session();
	void ajoutseance(Session* l);
	void affseance();
	int placedispo(int m_place_total);

};


#endif
