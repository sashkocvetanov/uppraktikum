// ConsoleApplication11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int start, end, step, n,sum=0;
	
	cin >> start;
	cin >> end;
	cin >> step;
	
	n = -(start - end - step) / step;
	cout << ((2 * start + (n - 1)*step)*n) / 2 << endl;

	

	system("pause");
	return 0;
}

