// ConsoleApplication9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int sum = 0;
	int n;
	cin >> n;
	while (n >= 9999)
	{
		cin >> n;
	}
	for (int i = 0; i <= n; i++)
	{
		sum = sum + i*i;
	}cout << "sum:" << sum << endl;
	system("pause");
	return 0;
}

