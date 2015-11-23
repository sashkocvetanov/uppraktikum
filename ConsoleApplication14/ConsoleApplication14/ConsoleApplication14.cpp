// ConsoleApplication14.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = i; j >= n; j++)
		{
			cout << j;
		}cout << endl;
	}
	system("pause");
	return 0;
}

