// ConsoleApplication18.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int n, m;
	do
	{
		cin >> m >> n;
	} while (n < 10 && n > 5555 && m < 10 && m > 5555);
	
	if (n > m)
	{

		for (int i = n; i >= m; i--)

		if (i % 50 == 0)
		{
			cout << i << ",";
		}
	}
			else cout << "nqma chisla kratni na 50" << endl;
		
				
			system("pause");
			return 0;
		}