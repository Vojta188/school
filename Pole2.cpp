
#include <iostream>
using namespace std;
int main()
{
	//97 - 122
	//int cislo;
	//cin >> cislo;
	
	int i = 0;
	int a = 0;
	int l = 0;
	char p[20];
	

	
	for ( int i = 0; i < 20; i++)
	{
		cin >> p[i];
	}

	
	for (l = 0; l < 20; l++)
	{
		int cislo = p[l];
		
		for (a = 0; a < cislo - 96; a++)
		{
			cout << p[l];
			
			
		}
		cout << "\n";
		a = 0;
	}

	
	

}
