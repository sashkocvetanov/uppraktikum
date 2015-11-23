// ConsoleApplication28.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int n, m, sum = 0, c = 0;
	cin >> n >> m;
	if (n > m)
	{
		for (int i = m; i < n; i++)
		{
			for (int j = 1; j < i; j++)
			if (i%j == 0)
				sum += j;

			bool isPrime = true;

			if (sum == 0) isPrime = false;
			else
			for (int j = 2; j*j <= sum; j++)
			if (sum % j == 0) isPrime = false;

			if (isPrime)
				c++;

			sum = 0;
		}

	}
	else
	{
		for (int i = n; i < m; i++)
		{
			for (int j = 1; j < i; j++)
			if (i%j == 0)
				sum += j;

			bool isPrime = true;

			if (sum == 0) isPrime = false;
			else
			for (int j = 2; j*j <= sum; j++)
			if (sum % j == 0) isPrime = false;

			if (isPrime)
				c++;

			sum = 0;
		}

	}

	cout << c << endl;
	system("pause");
	return 0;
}