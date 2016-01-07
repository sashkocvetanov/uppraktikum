// ConsoleApplication70.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
void readArr(char *arr, int n)
{
	for (int i = 0; i < n-1; i++)
	{
		cout << "a[" << i << "]:";
		cin >> arr[i];
		arr[n - 1] = '\0';
	}
}
char strlen(char arr[])
{
	int i = 0, br = 0;
	while (arr[i] != '\0')
	{
		i++;
		br++;
	}return br;
}
void strcpy(char arr[], char a, char b)
{
	for (int i = 0; i <strlen(arr) ; i++)
	{
		if (arr[i] == a)arr[i] = b;
		
	}
	for (int i = 0; i < strlen(arr); i++)
	{
		cout << arr[i];
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	int n;
	cin >> n;
	char a, b;
	char arr[100];
	cin >> a >> b;
	readArr(arr, n);
	strcpy(arr, a, b);
	




	system("pause");
	return 0;
}

