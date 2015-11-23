// ConsoleApplication38.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<cmath>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	
	double n,sum=0,sum1=0,br=0,min=0;
	cin >> n;
	int minindex;
	double arr[100];
	for (int i = 0; i < n; i++) 
	{
		cin>>arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		
		br++;
		sum+= arr[i];
		sum1 = sum / br;
	}
	cout << sum1 << endl;
	min =fabs( sum1 - arr[0]);
	
	for (int i = 1; i < n; i++)
	{
		if (min>fabs(sum1 - arr[i]))
		{
			min = fabs(sum1 - arr[i]);
			 minindex = i;
		}
	}
	cout << arr[minindex] << endl;
	
	
	
	system("pause");
	return 0;
}

