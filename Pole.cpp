#include <iostream>
using namespace std;

int main()
{
	int p[5000];
	int i;
	int b;
	int pocitadlo = 0;
	int a[5000];
	int c = 0;
	int secti = 0;
	int save = 0;
	int k;
	
	for (i = 0; i < 5000; i++)
	{
		p[i] = i + 1;
	}
	for (i = 0; i < 5000; i++)
	{
		while (p[i] != 1)
		{
			if (p[i] % 2 == 0)
			{
				p[i] = p[i] / 2;
			}
			else
			{
				p[i] = 3 * p[i] + 1;
			}
			//cout << p[i] << "\n";
			pocitadlo = pocitadlo + 1;
		}
		//cout << pocitadlo << "\n";
		a[i] = pocitadlo;
		pocitadlo = 0;
		

		
	}
	for (b = 0; b < 5000; b++)
	{
		for (k = 0; k < 4999; k++)
		{
			if (a[k] > a[k + 1])
			{
				save = a[k];
				a[k] = a[k + 1];
				a[k + 1] = save;


			}

		}
		secti = 0;
	}

	

	for ( i = 0; i < 5000 ; i++)
	{
		if (a[i] == a[i + 1])
		{
			secti++;
		}
		else
		{
			cout << a[i] <<" = " << secti + 1<<"\n";
			secti = 0;
		}
	}



}