#include <iostream>
using namespace std;

int main() {

	int vstup[50];
	int i,l = 0;
	int nacteno = 0;
	int pom;
	
	for (i = 0; i < 50; i++)
	{
		
		
		cin >> vstup[i];
		nacteno = nacteno + 1;
		if (vstup[i] == 0)
		{
			break;
		}
		
		
	}
	

	for (i = 0; i < nacteno; i++)
	{
		for (l = 0; l < nacteno -1; l++)
		{
			if (vstup[l] > vstup[l + 1])
			{
				pom = vstup[l];
				vstup[l] = vstup[l + 1];
				vstup[l + 1] = pom;
			}
			
		}
		
		
	}
	
	for (i = 0; i < nacteno; i++)
	{
		
		cout << vstup[i];
		if (vstup[i] < vstup[i + 1])
		{
			cout << "\n";
		}
	}
}