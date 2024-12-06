#include <iostream>
using namespace std;
int main()
{
    cout << "Bienvenue\n";

    int PIN = 1234;
    cout << "le code est :" << PIN << endl;
    int user;
    
    cout << "entrer le code PIN : \n";
    cin >> user;

    while (user != PIN) 
    {
        cout << "entrer le code PIN : \n";
        cin  >> user;
    }
    cout << "le code est bon";
}
