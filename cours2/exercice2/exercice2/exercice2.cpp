#include <iostream>
#include <string>
using namespace std;

void speudo()
{
	string prenom;
	cout << "quelle est votre prenom" << endl;
	cin >> prenom;
	system("cls");
	string maj,
			nom;
	cout << "quelle est votre nom" << endl;
	cin >> nom;
	system("cls");
	cout << "voici votre prenom : " << prenom << "	voici votre nom : " << nom << endl;
	string speudo;
	maj = toupper(nom[0]);
	string nom1;
	nom1 = nom.erase(0, 1);
	speudo = prenom[0] + maj + nom1;
	cout << speudo << endl;
}



int main()
{
	int num = 3;
	while (num > 0)
	{
		speudo();
		num--;
	}
}
