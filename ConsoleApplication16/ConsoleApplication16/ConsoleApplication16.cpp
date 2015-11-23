// ConsoleApplication16.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int x, n;
	cin >> x >> n;


	for (int i = 1; i <= n; i++)
	{

		do
		{
			x++;
		} while ((x % 7 != 0) && (x % 9 != 0));

		cout <<i<<"."<< x << endl;
	
	}



	system("pause");
	return 0;
}

