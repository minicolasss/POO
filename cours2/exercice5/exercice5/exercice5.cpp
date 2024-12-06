#include <iostream>
#include <string>
#include <vector>
#include <cstdlib> 
#include <ctime>
#include "fonction.hpp"

using namespace std;

float game()
{
	
}







string chooseword()
{
	vector<string> words= { "banc", "chaise", "ecriture", "poubelle", "lecture" };

	srand(static_cast<unsigned int>(time(0)));

	int choose = rand() % words.size();
	cout << words[choose];
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
