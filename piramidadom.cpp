// ConsoleApplication15.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	int n,i,j,k=0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <=i; j++)
		
			cout << j+k<<" ";
			k++;
		cout << endl;
	}


	system("pause");
		return 0;
}

