// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int x,y;
	cout << "x=" << endl;
	cin >> x;
	switch (x)
	{
	case 1:
		x == 1;
		cout << "y" <<"=" <<x-5<<  endl;
			break;
	case 2:
		x == 2;
		cout << "sin(x)" << "=" << sin(x) << endl;
			break;
	case 3:
		x == 3;
		cout << "cos(x)" << "=" << cos(x) << endl;
			break;




	}
	system("pause");
	return 0;
}

