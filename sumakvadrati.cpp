// ConsoleApplication9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	
	int n;
	cin >> n;
	while (n >= 9999)
	{
		cin >> n;
	}
	for (int i = 0; i <= n - 1; i = i + 1)

		cout << i << " " << endl;
	
	system("pause");
	return 0;
}

