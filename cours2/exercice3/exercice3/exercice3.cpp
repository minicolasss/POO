#include <iostream>
#include <math.h>
using namespace std;

void immo()
{
    int capitalemp;
    int tauxint;
    int dureerremb;

    int mantantmens;
    int couttotal;

    cout << "quelle est le Capital emprunte :   ";
    cin >> capitalemp;
    system("cls");
    cout << "quelle est le Taux d'interet annuel :   ";
    cin >> tauxint;
    system("cls");
    cout << "quelle est la duree de remboursement :   ";
    cin >> dureerremb;
    system("cls");


    mantantmens = (capitalemp * ((tauxint / 100.0) / 12)) / (1 - pow(1 + ((tauxint / 100.0) / 12), -12 * dureerremb));
    couttotal = (mantantmens * 12 * dureerremb) - capitalemp;

    cout << "La mensualite est: " << mantantmens << endl;
    cout << "Le cout total du credit est:   " << couttotal << endl;
}




int main()
{
    cout << "bienvenue sur notre programe\n";
    immo();

    return 0;
}
