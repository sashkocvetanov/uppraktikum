// ConsoleApplication30.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<iomanip>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int n,counter=1;
	char symbol;
	 cin>>n>>symbol;
	for (int i = 1; i <= n; i++)
	{
		cout << endl;
		for (int j = i; j <= n; j++)
		{
			cout << symbol;
			
		}counter++;
		cout << setw(counter);
	}cout << endl;
	
	counter--;
	for (int k = 1; k >= i; k--)
	{
		
		cout << symbol;
	}
	
	
	
	system("pause");
	return 0;
}

