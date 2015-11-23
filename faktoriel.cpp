// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int n;
	cin >> n;
	int fact =1 ;
	while ( n>1 )
	{
		fact *= n;
		n--;
	}cout << fact << endl;
	system("pause");
	return 0;
}

