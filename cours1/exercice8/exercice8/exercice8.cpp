#include <iostream>
using namespace std;

int main()
{
    cout << "bienvenue dans notre restaurant\n";

    int solde;
    cout << "quelle est votre solde ? \n";
    cin >> solde;

    system("cls");

    cout << "votre solde disponible : " << solde << endl;

    int burger1 = 10;
    int burger2 = 15;
    int burger3 = 30;
    int choix;
    while (solde != 0)
    {
    cout << endl << "carte : \n" << "1.burger1 :   " << burger1 << "\n2.burger2 :   " << burger2 << "\n3.burger3 :   " << burger3 << endl << endl << "choix du burger :   ";
    cin >> choix;

    system("cls");
        if (choix == 1)
        {
            solde = solde - burger1;
            cout << "vous avez choisie burger1" << endl << "voici votre solde : " << solde << endl;
        }
        if (choix == 2)
        {
            solde = solde - burger2;
            cout << "vous avez choisie burger2" << endl << "voici votre solde : " << solde << endl;
        }
        if (choix == 3)
        {
            solde = solde - burger3;
            cout << "vous avez choisie burger3" << endl << "voici votre solde : " << solde << endl;
        }
        else if (choix != 1 && choix != 2 && choix != 3)
        {
            cout << "movaise input" << endl << "voici votre solde : " << solde;
        }
    }
}
