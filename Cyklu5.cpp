#include <iostream>
using namespace std;

int main() {
	int cislo;
	cin >> cislo;
	int pom_cislo = cislo/2;
	int pom_cislo2 = cislo / 2;
	int i,m = 0;
	int test = 5;
	

	for (i = 0; i < cislo; i++)
	{
		while (pom_cislo > m)
		{
				m++;
			
			cout << " ";
				
			
		}
		
			pom_cislo2 = pom_cislo2 - 1;
			if (pom_cislo2 >= 0)
			{
				pom_cislo = pom_cislo - 1;
			}
			else
			{
				pom_cislo = pom_cislo + 1;
			}
		
		
		cout << "*" << "\n";
		m = 0;
		
	
		
	}
	cout <<"m " << m;
	cout << "pom_cislo: " << pom_cislo;
	cout << "pom_cislo2: " << pom_cislo2;
}