#include <iostream>
#include "voiture.hpp"


using namespace std;

int main()
{
    Voiture v = Voiture("Alfa", "159", 224758);

    cout << v.get_km() << endl;
    
    v.avance(10);

    cout << v.get_km() << endl;
}
