// ConsoleApplication17.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>

using namespace std;

int main()
{
	int n, counter = 1, row = 1;
	do{
		cin >> n;
	} while (n<1 || n>200);
	for (int i = 1; i <= n; i++)
	{
		while (counter <= row)
		{
			if (i <= n)
			{
				cout << i << " ";
				i++;
			}
			else cout << "*"<< " ";
			counter++;
		}
		--i;
		row++;
		cout << endl;
		counter = 1;
	}





	system("pause");
	return 0;
}