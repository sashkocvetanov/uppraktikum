// ConsoleApplication19.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	
	for (int i = 102; i <= 987; i++)
	{
		if ((i % 10 != i /100) && ((i / 10) % 10 != i %10) && ((i / 10) % 10 != i / 100))
		
			cout << i << ",";
		
	}

	system("pause");
	return 0;
}

