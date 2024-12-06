#include <iostream>
using namespace std;

int main()
{
	cout << "Bienvenue \n";

	int nombre;
	cout << "choisit un nombre au pif : \n";
	cin >> nombre;

	int result = 1;
	int i;

	for (i = 1; i <= nombre; i++) 
		{
		result = result * i;
		}
	cout << "voici ta factoriel :" << result << "\n en sachant que le nombre etait :" << nombre << endl;
}
