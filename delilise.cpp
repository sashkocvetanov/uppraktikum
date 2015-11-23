// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	int a;
	cin >> a;
	a % 2 == 0 ? cout << "deli se na 2" << endl : cout << "ne se deli na 2" << endl;
	a % 3 == 0 ? cout << "deli se na 3" << endl : cout << "ne se deli na 3" << endl;
	a % 4 == 0 ? cout << "deli se na 4" << endl : cout << "ne se deli na 4" << endl;
	a % 5 == 0 ? cout << "deli se na 5" << endl : cout << "ne se deli na 5" << endl;
	a % 6 == 0 ? cout << "deli se na 6" << endl : cout << "ne se deli na 6" << endl;
	a % 7 == 0 ? cout << "deli se na 7" << endl : cout << "ne se deli na 7" << endl;
	a % 8 == 0 ? cout << "deli se na 8" << endl : cout << "ne se deli na 8" << endl;
	a % 9 == 0 ? cout << "deli se na 9" << endl : cout << "ne se deli na 9" << endl;
	a % 10 == 0 ? cout << "deli se na 10" << endl : cout << "ne se deli na 10" << endl;
	system("pause");
	return 0;
}

