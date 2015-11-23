// ConsoleApplication23.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	int n, m,sum=0,z=0;
	cin >> n >> m;
	for (int i = n; i <= m; i++)
	{
		for (int k = 1; k <= i-1; k++)
		{		
			if (i%k == 0)
			{
				sum += k;
				bool isPrime = true;
				if (sum <= 1)
				{
					isPrime = false;
				}
				else
				{
					for (int c = 2; c*c <= sum && isPrime; c++)
					{
						
						if (sum%c == 0 )
						{
							isPrime = false;
							z++;
						}
					}
				}
			}
		}		
	}
	
	cout << z << endl;
	
	system("pause");
	return 0;
}

