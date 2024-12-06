#include <iostream>
using namespace std;

int main()
{
	cout << "bienvenue\n";

	int choix;
	cout << "rentre le nombre de la table que tu veux : \n";
	cin >> choix;

	cout << "voici la table de multiplication de " << choix << endl;

	int result;

	for (int i = 1; i <= 10; i++) {
		result = choix * i;
		cout << i << " = " << result << endl;
	}
}
