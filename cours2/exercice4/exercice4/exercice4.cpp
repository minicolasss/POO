#include <iostream>

using namespace std;

int impot()
{
    int revenus;
    int result;

    cout << "revenue au mois du premier :   ";
    cin >> revenus;

    revenus = revenus * 12;

    cout << "revenir a l'annee du premier :    " << revenus << endl;

    if (revenus < 11294)
    {
        cout << "l'imposion avec un top de 0% :     " << revenus << endl;
    }
    if (revenus < 28797 && revenus > 11295)
    {
        result = (revenus * 11) / 100;
        cout << "l'imposion avec un top de 11% :     " << revenus << endl;
    }
    if (revenus < 82341 && revenus > 28798)
    {
        result = (revenus * 30) / 100;
        cout << "l'imposion avec un top de 30% :     " << revenus << endl;
    }
    if (revenus < 177106 && revenus > 82342)
    {
        result = (revenus * 41) / 100;
        cout << "l'imposion avec un top de 41% :     " << revenus << endl;
    }
    if (revenus > 177107)
    {
        result = (revenus * 45) / 100;
        cout << "l'imposion avec un top de 45% :     " << revenus << endl;
    }
    
    return revenus;
}

int impot2()
{
    int revenus2;
    int result2;

    cout << "revenue au mois du deuxieme :   ";
    cin >> revenus2;

    revenus2 = revenus2 * 12;

    cout << "revenir a l'annee du deuxieme :    " << revenus2 << endl;

    if (revenus2 < 11294)
    {
        cout << "l'imposion avec un top de 0% :     " << revenus2 << endl;
    }
    if (revenus2 < 28797 && revenus2 > 11295)
    {
        result2 = (revenus2 * 11) / 100;
        cout << "l'imposion avec un top de 11% :     " << revenus2 << endl;
    }
    if (revenus2 < 82341 && revenus2 > 28798)
    {
        result2 = (revenus2 * 30) / 100;
        cout << "l'imposion avec un top de 30% :     " << revenus2 << endl;
    }
    if (revenus2 < 177106 && revenus2 > 82342)
    {
        result2 = (revenus2 * 41) / 100;
        cout << "l'imposion avec un top de 41% :     " << revenus2 << endl;
    }
    if (revenus2 > 177107)
    {
        result2 = (revenus2 * 45) / 100;
        cout << "l'imposion avec un top de 45% :     " << revenus2 << endl;
    }
    return revenus2;
}

int couple()
{
    int revenus = impot();
    int revenus2 = impot2();


    int revcouple;
    int result;

        

    revcouple = ((revenus + revenus2) * 12) / 2;

    cout << "revenir a l'annee du couple :    " << revcouple << endl;

    if (revcouple < 11294)
    {
        cout << "l'imposion avec un top de 0% :     " << revcouple << endl;
    }
    if (revcouple < 28797 && revcouple > 11295)
    {
        result = (revcouple * 11) / 100;
        cout << "l'imposion avec un top de 11% :     " << revcouple << endl;
    }
    if (revcouple < 82341 && revcouple > 28798)
    {
        result = (revcouple * 30) / 100;
        cout << "l'imposion avec un top de 30% :     " << revcouple << endl;
    }
    if (revcouple < 177106 && revcouple > 82342)
    {
        result = (revcouple * 41) / 100;
        cout << "l'imposion avec un top de 41% :     " << revcouple << endl;
    }
    if (revcouple > 177107)
    {
        result = (revcouple * 45) / 100;
        cout << "l'imposion avec un top de 45% :     " << revcouple << endl;
    }

    return revcouple;
}


int main()
{
    couple();

    return 0;
}