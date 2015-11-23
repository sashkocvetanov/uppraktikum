// ConsoleApplication24.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	int k,i,sum=0,sr=0;
	cin >> k;
	do
		{
			cin >> i;
			sum +=i;
		} while (sum <= k);
		
		for (int j = 1; j <= i; j++)
		{
			cout << j << endl;
		}
				
				
		

	system("pause");
	return 0;
}