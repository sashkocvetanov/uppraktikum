// ConsoleApplication13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	int n;
	cin >> n;
	switch (n)
	{
	case 1:
		n = 1; cout << "monday" << endl; break;
	case 2:
		n = 2; cout << "tuesday" << endl; break;
	case 3:
		n = 3; cout << "wednesday" << endl; break;
	case 4:
		n = 4; cout << "thursday" << endl; break;
	case 5:
		n = 5; cout << "friday" << endl; break;
	case 6:
		n = 6; cout << "saturday" << endl; break;
	case 7:
		n = 7; cout << "sunday" << endl; break;
	default:
		cout << "incorrect input!" << endl;
	}
	
	
	
	
	system("pause");
	return 0;
}

