// ConsoleApplication26.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int n,m, max =-10000;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> m;
		if (m<0 && m>max)
		{
			max = m;
		}
	}cout << max << endl;
	system("pause");
	return 0;
}

