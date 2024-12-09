#include <iostream>
#include <string>
#include <vector>
#include <cstdlib> 
#include <ctime>
#include "fonction.hpp"

using namespace std;

void chooselettre()
{
	string motcacher = cache();

	char guess;
	cout << "choisie une lettre :	";
	cin >> guess;

	int index;
	string word = chooseword(); 
	int length = word.length();

	for (index = 0; index < length; ++index)
	{
		if (word[index] == guess) {
			motcacher[index] = guess;

			cout << cache();
		}
	}

}


string cache()
{
	string motcacher;

	srand(static_cast<unsigned int>(time(0)));

	motcacher = string(chooseword().length(), '_');

	int randd = rand() % chooseword().length();

	motcacher[randd] = chooseword()[randd];

	cout << motcacher << endl;

	return motcacher;
}


string chooseword()
{
	vector<string> words= { "banc", "chaise", "ecriture", "poubelle", "lecture" };

	srand(static_cast<unsigned int>(time(0)));

	int choose = rand() % words.size();

	return words[choose];
}



void drawhangman(int life)
{
	if (life == 6) 
	{
		printf("\n\n\n\n\n\n\n-------\n");
	}
	if (life == 5)
	{
		printf("\n |\n |\n |\n |\n |\n |\n-------\n");
	}
	if (life == 4)
	{
		printf(" -------\n | |\n |\n |\n |\n |\n-------\n");
	}
	if (life == 3)
	{
		printf(" -------\n | |\n | O\n |\n |\n |\n-------\n");
	}
	if (life == 2)
	{
		printf(" -------\n | |\n | O\n | |\n |\n |\n-------\n");
	}
	if (life == 1)
	{
		printf(" -------\n | |\n | O\n | /|\\\n |\n |\n-------\n");
	}
	if (life == 0)
	{
		printf(" -------\n | |\n | O\n | /|\\\n | / \\\n |\n-------\n");
	}
}
