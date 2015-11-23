// ConsoleApplication33.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
const int max_size = 100;
int _tmain(int argc, _TCHAR* argv[])
{
	
	double arr[max_size];
	double b;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n-i-1; j++)
		{
			if (arr[j]>arr[j + 1])
			{
				b = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = b;
			}
		}
		
	}
	for (int i = 0; i < n ; i++)
	{
		cout << arr[i];
	}

	
	
	
	system("pause");
	return 0;
}

