
#include <iostream>

using namespace std;

int main()
{
	cout << "bijour\n";

	float nombre;
	cout << "donne un nombre au pif : \n";
	cin >> nombre;

	int result;

	result = nombre;

	if (result % 2 == 0)
	{
		cout << "le nombre est pair \n";
	}
	else
	{
		cout << "le nombre est impair \n";
	}
}
