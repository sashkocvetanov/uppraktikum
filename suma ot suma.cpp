// ConsoleApplication5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<cmath>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	double sum = 0;
	for (int k = 1; k <= n; k++)
	{
		for (int j = 2 * k + 2; j <= 2 * n; j += 2)
		{

			sum += fact(3 * j) / (pow(fact(j), 2)*pow(4, 3 * k - j));
		}
	}
	cout << sum;
	return 0;
}

