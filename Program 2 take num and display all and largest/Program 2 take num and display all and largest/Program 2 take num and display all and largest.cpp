// Program 2 take num and display all and largest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void largestList();

int main()
{
    largestList();
}

void largestList()
{
    const int MAXNUMBERS = 10;
    int Nums[MAXNUMBERS];
    int N1;
    int Largest = INT_MIN;
    int Count = 0;
    cout << "Enter a number: ";
    while (cin >> N1 && Count < MAXNUMBERS) {
        Nums[Count] = N1;
        Largest = max(Largest, N1);
        ++Count;
        cout << "Enter a number: ";
    };
    for (int i = 0; i < Count; ++i) {
        cout << Nums[i] << " ";
    }
    cout << endl;
    cout << "Largest is " << Largest << endl;

}
