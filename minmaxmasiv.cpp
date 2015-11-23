// ConsoleApplication32.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int n, max, min;
	int mas[100];
	cin >> n;
	for (int j = 0; j < n; j++)
	{
		cin >> mas[j];
	}min = max = mas[0];
	for (int i = 0; i < n; i++)
	{
	
		
		if (mas[i]< min)
		{
			min = mas[i];
		}
		if (mas[i]>max)
		{
			max = mas[i];
		}
	}cout << min << " " << max << endl;

system("pause");
	return 0;
}

