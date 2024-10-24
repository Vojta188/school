#include <iostream>
using namespace std;

int main()
{
	int vstup;
	int i;
	
	cin >> vstup;
	int c = vstup;
	

	for (i = 0; i < vstup; i++)
	{
		
		
		if (i > (vstup / 2)) {
			c = i + 1;
			
		}
		else {
			c = c - i;
		}
		
		cout << " c " << c;
		cout << " i " << i;
		cout << " vstup " << (vstup / 2);
		
		while(vstup > c)
		{
			
			
				cout << " ";
				c++;
			
			
		}
		
		cout << "x" << "\n";
		
		
		
		
	}