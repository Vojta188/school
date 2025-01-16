#include <iostream>
using namespace std;

int main() {
	char cislo[10];
	int i = 0;
	int pom;
	int new_pom;
	


	for ( i = 0; i < 10; i++)
	{
		cin >> cislo[i];
	}
	
	for (i = 0; i < 10; i++)
	{
		int p = cislo[i];
		if (p > 47 && p < 58)
		{
			
			pom = cislo[i];
			new_pom = pom - 48;
			cout << new_pom;
			
			
		}
		
	}
	if (new_pom % 2 == 0)
	{
		cout << "Je sude";
	}
	else
	{
		cout << "Je liche";
	}
	
}
