#include <iostream>
#include "fonction.hpp"

using namespace std;


int main()
{
	cout << "Bienvenue dans le jeux du hangman\n";

	cout << "option debug mot a devinez :	\n";
	cout << chooseword() << endl;
	cache();

	chooselettre();

	return 0;
}