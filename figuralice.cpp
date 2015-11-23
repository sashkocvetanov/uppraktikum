// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int n;
	cin >> n;
	int a, h;
	double p = 3.14;
	cin >> a >> h;
	int Str=(a*h)/2;
	int Skv=a*a;
	int Spr=(a*h)/2;
	int Sokr=2*p*h;
	

	if (n == 1)cout << "lice triagalnik:" << Str << endl;
	if (n == 2)cout << "lice kvadrat:" << Skv << endl;
	if (n == 3)cout << "lice pravougulnik:" << Spr << endl;
	if (n == 4)cout << "lice okrujnost:" << Sokr << endl;
	system("pause");
	return 0;
}

