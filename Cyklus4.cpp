#include <iostream>
using namespace std;

int main()
{
	int vstup;
	int i;
	cin >> vstup;
	int c = vstup;
	
	for (i =vstup; i >= 0; i--)
	{
		c = 0;
		
		while (c<=vstup)
		{
			if(i>=c)
			{
				cout << " ";
			}
			else
			{
				cout << "x";
			}
			
			c++;
		}
		cout << "\n";
		

		
	}

}