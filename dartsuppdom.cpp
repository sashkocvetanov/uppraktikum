// ConsoleApplication22.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<cmath>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int P1P, P2P, P3P;
	double P1x, P1y, P2x, P2y, P3x, P3y;
	cout << "first player shot coordinates:";
	cin >> P1x >> P1y;

	cout << "second player shot coordinates:";
	cin >> P2x >> P2y;

	cout << "third player shot coordinates:";
	cin >> P3x >> P3y;

	if (P1x == 0 && P1y == 0)
	{
		P1P = 10;
	}

	if ((sqrt(P1x*P1x + P1y*P1y) <= 1) && P1x != 0 && P1y != 0)
	{
		P1P = 9;
	}

	if (sqrt(P1x*P1x + P1y*P1y) > 1 && sqrt(P1x*P1x + P1y*P1y) <= 2)
	{
		P1P = 8;
	}

	if (sqrt(P1x*P1x + P1y*P1y) > 2 && sqrt(P1x*P1x + P1y*P1y) <= 3)
	{
		P1P = 7;
	}

	if (sqrt(P1x*P1x + P1y*P1y) > 3 && sqrt(P1x*P1x + P1y*P1y) <= 4)
	{
		P1P = 6;
	}

	if (sqrt(P1x*P1x + P1y*P1y) > 4 && sqrt(P1x*P1x + P1y*P1y) <= 5)
	{
		P1P = 5;
	}

	if (sqrt(P1x*P1x + P1y*P1y) > 5 && sqrt(P1x*P1x + P1y*P1y) <= 6)
	{
		P1P = 4;
	}

	if (sqrt(P1x*P1x + P1y*P1y) > 6 && sqrt(P1x*P1x + P1y*P1y) <= 7)
	{
		P1P = 3;
	}

	if (sqrt(P1x*P1x + P1y*P1y) > 7 && sqrt(P1x*P1x + P1y*P1y) <= 8)
	{
		P1P = 2;
	}

	if (sqrt(P1x*P1x + P1y*P1y) > 8 && sqrt(P1x*P1x + P1y*P1y) <= 10)
	{
		P1P = 1;
	}

	if (sqrt(P3x*P3x + P3y*P3y) > 10)
	{
		P1P = 0;
	}


	if (P2x == 0 && P2y == 0)
	{
		P2P = 10;
	}

	if ((sqrt(P2x*P2x + P2y*P2y) <= 1) && P2x != 0 && P2y != 0)
	{
		P2P = 9;
	}

	if (sqrt(P2x*P2x + P2y*P2y) > 1 && sqrt(P2x*P2x + P2y*P2y) <= 2)
	{
		P2P = 8;
	}

	if (sqrt(P2x*P2x + P2y*P2y) > 2 && sqrt(P2x*P2x + P2y*P2y) <= 3)
	{
		P2P = 7;
	}

	if (sqrt(P2x*P2x + P2y*P2y) > 3 && sqrt(P2x*P2x + P2y*P2y) <= 4)
	{
		P2P = 6;
	}

	if (sqrt(P2x*P2x + P2y*P2y) > 4 && sqrt(P2x*P2x + P2y*P2y) <= 5)
	{
		P2P = 5;
	}

	if (sqrt(P2x*P2x + P2y*P2y) > 5 && sqrt(P2x*P2x + P2y*P2y) <= 6)
	{
		P2P = 4;
	}

	if (sqrt(P2x*P2x + P2y*P2y) > 6 && sqrt(P2x*P2x + P2y*P2y) <= 7)
	{
		P2P = 3;
	}

	if (sqrt(P2x*P2x + P2y*P2y) > 7 && sqrt(P2x*P2x + P2y*P2y) <= 8)
	{
		P2P = 2;
	}

	if (sqrt(P2x*P2x + P2y*P2y) > 8 && sqrt(P2x*P2x + P2y*P2y) <= 10)
	{
		P2P = 1;
	}

	if (sqrt(P3x*P3x + P3y*P3y) > 10)
	{
		P2P = 0;
	}


	if (P3x == 0 && P3y == 0)
	{
		P3P = 10;
	}

	if ((sqrt(P3x*P3x + P3y*P3y) <= 1) && P3x != 0 && P3y != 0)
	{
		P3P = 9;
	}

	if (sqrt(P3x*P3x + P3y*P3y) > 1 && sqrt(P3x*P3x + P3y*P3y) <= 2)
	{
		P3P = 8;
	}

	if (sqrt(P3x*P3x + P3y*P3y) > 2 && sqrt(P3x*P3x + P3y*P3y) <= 3)
	{
		P3P = 7;
	}

	if (sqrt(P3x*P3x + P3y*P3y) > 3 && sqrt(P3x*P3x + P3y*P3y) <= 4)
	{
		P3P = 6;
	}

	if (sqrt(P3x*P3x + P3y*P3y) > 4 && sqrt(P3x*P3x + P3y*P3y) <= 5)
	{
		P3P = 5;
	}

	if (sqrt(P3x*P3x + P3y*P3y) > 5 && sqrt(P3x*P3x + P3y*P3y) <= 6)
	{
		P3P = 4;
	}

	if (sqrt(P3x*P3x + P3y*P3y) > 6 && sqrt(P3x*P3x + P3y*P3y) <= 7)
	{
		P3P = 3;
	}

	if (sqrt(P3x*P3x + P3y*P3y) > 7 && sqrt(P3x*P3x + P3y*P3y) <= 8)
	{
		P3P = 2;
	}

	if (sqrt(P3x*P3x + P3y*P3y) > 8 && sqrt(P3x*P3x + P3y*P3y) <= 10)
	{
		P3P = 1;
	}

	if (sqrt(P3x*P3x + P3y*P3y) > 10)
	{
		P3P = 0;
	}

	if (P1P >= P2P && P1P >= P3P)
	{
		cout << "1- " << P1P << endl;

	}
	if (P2P >= P1P && P2P >= P3P)
	{
		cout << "2- " << P2P << endl;
	}
	if (P3P >= P1P && P3P >= P2P)
	{
		cout << "3- " << P3P << endl;
	}
	system("pause");
	return 0;
}