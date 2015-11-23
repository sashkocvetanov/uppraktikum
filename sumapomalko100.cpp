// ConsoleApplication8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	int sum = 0;

	while (sum < 100)
	{
		int n;
		cin >> n;

		if (n < 30)
		{
			sum +=n;
		}

		cout << "Sum: "<< sum << endl;

	}
	
	
	system("pause");
	return 0;
}

