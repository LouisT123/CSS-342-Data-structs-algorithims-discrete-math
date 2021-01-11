#include <cassert>
#include <iostream>
using namespace std;

int a = 100;
void swap(string a, string b)
{

	string tmp = a;
	a = b;
	b = tmp;
}
int& returnByRef() {
	static int c = 20;
	return c;
}
int returnByVal() {
	return a;
}
int main() {
	int x = 10;
	// y is a copy of x
	x++;
	// z is an alias for x
	int& z = x;
	cout << "z:" << z << endl;
	int b = returnByVal();
	cout << "b:" << b << endl;

	returnByRef() = 10; //return by ref to use on left side of an assigment
	cout << "a:" << a << endl;

	int* y = &x;   //y is a pointer to an int, we can have different type of pointers

	cout << "y:" << y << endl;
	cout << "&y:" << &y << endl;
	cout << "*y:" << *y << endl; //dereference y 

	int** w = &y; //can have pointers to pointers
	cout << "w:" << w << endl;
	cout << "&w:" << &w << endl;
	cout << "*w:" << *w << endl; //dereference w once 
	cout << "**w:" << **w << endl; //dereference w once


	return 0;
}


