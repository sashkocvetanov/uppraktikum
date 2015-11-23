// ConsoleApplication34.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int n, max, second, min, beforelast;
	cin >> n;
	
	int arr[100];
	
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}max = arr[0];
	min = arr[0];
	second = arr[0];
	beforelast = arr[0];

	for (int i = 0; i < n; i++)
	{
		if (max<arr[i])
			max = arr[i];
		if (min > arr[i])
			min = arr[i];
	}for (int j = 0; j < n; j++)
	{
		
		if (second<arr[j] && arr[j] != max)
			second = arr[j];
		if (beforelast> arr[j] && arr[j] != min)
		beforelast = arr[j];
	}
	
	cout << max <<" "<< min <<" "<<second<<" "<<beforelast<< endl;
	
	
	system("pause");
	return 0;
}

