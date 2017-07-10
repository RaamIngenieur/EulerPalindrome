// EulerPalindrome.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int i, j,palPro=0,pro;
	string palTest,palTest1;

	for (i = 100; i < 1000; i++)
	{
		for (j = 100; j < 1000; j++)
		{
			pro = i*j;
			palTest = to_string(pro);
			palTest1 = palTest;
			reverse(palTest.begin(), palTest.end());
			(palTest1 == palTest) ? (pro > palPro ? palPro = pro : pro) : pro;
		}
	}

	cout << "Highest palindrome is "<< palPro << endl;
	cin.get();


    return 0;
}

