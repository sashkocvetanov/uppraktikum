// ConsoleApplication29.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int n;
	char a, b;
	cin >> n;
	cin >> a >> b;
	int z = n;
	for (int i = 1; i < n; i++)
	{
		
		for (int j = 1; j <= i; j++)
		{
			cout << a;
		}
			
			for (int p = z-1; p>0; p--)
			{
				
				cout << b;
			}
			z--;
			
		cout << endl;
	}
	
	system("pause");
	return 0;
}

