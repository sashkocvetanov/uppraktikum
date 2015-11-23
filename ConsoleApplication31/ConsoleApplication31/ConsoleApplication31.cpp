// ConsoleApplication31.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<iomanip>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int n;
	int arr[100];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	cout << "print" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << endl;
	}











	system("pause");
	return 0;
}

