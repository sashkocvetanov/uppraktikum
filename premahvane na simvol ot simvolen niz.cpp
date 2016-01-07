// ConsoleApplication71.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

void readArr(char arr[], int n)
{
	for (int i = 0; i < n-1; i++)
	{
		cout << "arr[" << i << "]:";
		cin >> arr[i];
		arr[n - 1] = '\0';
	}
}
int strlen(char arr[], char a)
{
	int i = 0, br = 0;
	while (arr[i] != '\0')
	{
		i++;
		br++;
	}return br;
}
void remove(char arr[], char a)
{
	int i = 0,j=0;
	while (i <= strlen(arr))
	{


		
			if (arr[i] != a)
			{
				arr[j] = arr[i];
				j++;

			}i++;
			

		
		
	}
	arr[j] = '\0';
}
int _tmain(int argc, _TCHAR* argv[])
{
	int n;
	cin >> n;
	char a;
	cin >> a;
	char arr[100];
	readArr(arr, n);
	remove(arr, a);
	for (int i = 0; i < strlen(arr); i++)
	{
		cout << arr[i];
	}

	system("pause");
	return 0;
}

