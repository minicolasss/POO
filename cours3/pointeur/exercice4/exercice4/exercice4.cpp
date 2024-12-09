#include <iostream>
#include <vector>


using namespace std;

typedef struct Chanson
{
    string titre;
    string artiste;
    int duree;
};


void ajout(vector<Chanson> playlist)
{
    Chanson ch;


    for (int i = 0; i < 150; i++)
    {

    }
}

void supp()
{
    cout << "test" << endl;
}


void aff(vector<Chanson> playlist)
{
    for (int i = 0; i < playlist.size(); i++)
    {
        Chanson c = playlist[i];
        cout << "musique n" << i + 1 << endl;
        cout << c.titre << "        " << c.artiste << "     " << c.duree << endl;

    }
}  


int main()
{
    vector<Chanson> playlist;

    int i = 0;
    int index;


    while(i < 1)
    {
        cout << "1. ajouter une musique" << "       " << "2. supprimer une musique" << "        " << "3. afficher la playlist" << endl;
        cin >> index;
        if (index == 1)
        {
            ajout();
        }
        if (index == 2)
        {
            supp();
        }
        if (index == 3)
        {
            aff(playlist);
        }
        if (index == 404)
        {
            i = 2;
        }
        else if (index != 1 && index != 2 && index != 3 && index != 404)
        {
            cout << "mauvaise manipe" << endl;
        }
    }

    return 0;
}
