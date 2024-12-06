
#include <iostream>

using namespace std;

int main()
{
    cout << "bienvenue" << endl;

    float conso;
    cout << "quelle est ta conso de kilowattheures :) :" << endl;
    cin >> conso;
    float  tarif;
    cout << "quelle est le tarif de ton fournisseur :) :" << endl;
    cin >> tarif;
    cout << "recap conso :" << conso << endl << "recap tarif :" << tarif << endl;

    int total;

    total = conso * tarif;
    cout << "Le montant total de votre facture electrique est :" << total << "euros , ou" << total << "est la valeur calculee." << endl;

}
