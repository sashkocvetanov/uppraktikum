// ConsoleApplication12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<cmath>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	double x, y;
	bool f = false;
	cin >> x >> y;
	if (((sqrt((x + 1)*(x + 1) + y*y)<1) || x<-1 || y>1 || x>2 || y<-1 || ((x>1 && x <= 2) && y > 0.5)))
	{
		f = false; cout << f << endl;
	}
	else {
		f = true; cout << f << endl;
	}

	
	
	
	system("pause");
	return 0;
}

