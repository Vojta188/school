#include <iostream>
using namespace std;

int main() {
	int save[10];
	int pom;
	int secist = 0;
	int i,l,k,o = 0;

	for (i = 0; i < 10; i++)
	{
		cin >> save[i];
	}
	
	for (l = 0; l < 9; l++)
	{
		for (k = 0; k < 9; k++)
		{
			if (save[k] > save[k + 1])
			{
				pom = save[k];
				save[k] = save[k + 1];
				save[k + 1] = pom;
			}
		}
		k = 0;
	}
	for (l = 0; l < 10; l++)
	{
		cout << save[l]<< "\n";
	}

	for (o = 0; o < 10; o++)
	{
		secist = secist + save[o];
		cout << secist << ", ";

	}
}
