// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	char symbol;
	int a;
	int b;
	cin >> a;
	cin >> symbol;
	cin >> b;
	
	switch (symbol)
	{
	case '+':
		cout << a + b << endl;
		break;
	case'-':
		cout << a - b << endl;
		break;
	case '*':
		cout << a*b << endl;
		break;
	case '/':
		cout << a / b << endl;
		break;
	case'%':
		cout << a%b << endl;
		break;
	default:
		cout << "greshka" <<endl ;
	}
	system("pause");
	

	
	return 0;
}

