// ICA find largest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int a = 0;
	int b = 0;
	cout << "please enter a number " << endl;
	cin >> a;
	cout << "you entered " << a << endl;
	cout << "please enter another number " << endl;
	cin >> b;
	cout << "please enter another number " << endl;
	cout << "you entered " << b << endl;
	
	if (a > b)
	{
		cout << "the largest number is " << a << endl;

	}

	if (a < b)
	{
		cout << "the largest number is " << b << endl;
	}

	if (a = b)
	{
		cout << "this is the same number " << b << endl;
	}




}


