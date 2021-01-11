// ICA Square (operator overload).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cassert>
#include "Square.h"

using namespace std;


int main()
{
    Square S2(2);
    cout << "S2: " << S2 << " -- visual check, did we print [2]" << endl;
    assert(S2.getLength() == 2 && "s2 should have length 2");
}
