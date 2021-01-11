#pragma once

#include <iostream>

using namespace std;

class Square {
    friend ostream& operator<<(ostream& Out, const Square& Sq);

public:
    explicit Square(int Length);

    int getLength() const;

    Square operator+(const Square& Other) const;

    Square& operator+=(const Square& Other);
private:
    int Length;

};