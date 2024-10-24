#include <iostream>
using namespace std;

int main()
{
	int vstup;
	int i;
	int c = 0;
	cin >> vstup;

	for (i = 0; vstup > i; i++)
	{
		while (i >= c)
		{
			cout << "x";
			c++;
		}
		cout << "\n";
		c = 0;
	}
}
