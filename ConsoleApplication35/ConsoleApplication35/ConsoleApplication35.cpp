// ConsoleApplication35.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int n,p,br=0;
	int arr[100];
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}cin >> p;
	for (int i = 0; i < n; i++)

	{
		
		if (p == arr[i])
		{
			br++;
		}
		
	}
	cout << br << endl;
	
	
	system("pause");
	return 0;
}

