// ConsoleApplication25.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int n,m, max = 0, min = 10000;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> m;
		if (m < min)
		{
			min = m;
		}
		if (m>max)
		{
			max = m;
		}
	}cout << max << " " << min<<endl;

	system("pause");
	return 0;
}
