
#include <iostream>

using namespace std;

int main()
{
    cout << "bienvenue" << endl;

    float poids;
    cout << "donne ton poids :) :" << endl;
    cin >> poids;
    float  taille;
    cout << "donne ta taille :) :" << endl;
    cin >> taille;
    cout << "recap poids :" << poids << endl << "recap taille :" << taille << endl;

    int IMC;

    IMC = poids / (taille * taille);
    cout << "voici ton IMC :" << IMC << endl;

}
