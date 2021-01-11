// keep entering numbers, display largest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int number;
    int largest = 0;
    cout << "keep entering numbers, enter a letter to exit loop" << endl;
    while (cin >> number) 
    {
        if (cin.fail()) break;
        if (number > largest)
        {
            largest = number;
        }
        cout << "largest number so far is " << largest << endl;
    }
}

