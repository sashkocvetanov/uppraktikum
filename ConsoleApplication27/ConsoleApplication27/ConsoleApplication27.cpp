// ConsoleApplication27.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int n, m, sum = 0, count = 0;
	cout << "n: ";
	cin >> n;
	cout << "m: ";
	cin >> m;
	
		for (int i = n; i <= m; i++)
		{


			for (int j = 1; j < i; j++)
			{
				if (i%j == 0)
				{
					sum = sum + i;
				}
			}

			for (int g = 2; g<sum; g++)
			{

				if (sum%g == 0)
				{
					break;
				}
				else {
					count++;
					break;
				}

			}

		}
		cout << count << endl;;
	

	system("Pause");
	return 0;
}

