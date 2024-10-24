#include <iostream>
using namespace std;

int main()
{
	int vstup;
	int i;
	int c = 1;
	cin >> vstup;

	for (i = 0; vstup > i; i++)
	{
		if (c == 1)
		{
			while (c <= vstup)
			{

				cout << c;
				c++;
			}
			cout << "\n";
			continue;
		}
				c = c - 1;
			if(c == vstup)
			{
				while (c >= 1)
				{
					cout << c;
					c--;
				}
				c = c + 1;
				cout << "\n";
			}
		}
		
		
	}