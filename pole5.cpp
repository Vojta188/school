#include <iostream>
using namespace std;

int main() {

	char vstup[30];
	int i,l = 0;
	for ( i = 0; i < 30; i++)
	{
		cin >> vstup[i];
		if(vstup[i] == 'X')
		{
			break;
		}
	}

	for (i = 0; i < 30; i++)
	{
		int prevod = vstup[i];
		prevod = prevod - 96;

		cout << vstup[i];
		for (l = 0; l < prevod; l++)
		{
			cout << "*";
		}
		cout << "\n";
		l = 0;

	}

}