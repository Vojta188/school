#include <iostream>
#include <cmath> 
using namespace std;

int main() {
	int vstup[8];
	int i;
	int pom =0;
	int vysledek = 0;

	for (i = 0; i < 8; i++)
	{
		cin >> vstup[i];
	}
	
	for (i = 0; i < 8; i++)
	{
		if (vstup[i] == 1)
		{		
				pom = pow(2, i);
			vysledek = vysledek + pom;
			
		}

	}
	cout << "Desitkove: " << vysledek;
	

}