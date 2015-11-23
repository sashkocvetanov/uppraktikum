// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<cmath>
using namespace std;

int f(int n)
{
	int fact = 1;
	while (n > 1)
	{
		fact *= n;
		n--;
	}
	return fact;
}
int _tmain(int argc, _TCHAR* argv[])
{
	cout << f(3) << endl;
	
	system("pause");
	return 0;
}

