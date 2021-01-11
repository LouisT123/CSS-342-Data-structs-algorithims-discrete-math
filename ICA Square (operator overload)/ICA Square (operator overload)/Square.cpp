#include "Square.h"

ostream& operator<<(ostream& Out, const Square& Sq)
{
	Out << "[" << Sq.getLength() << "]";
	return Out;
}

Square::Square(int Length)
{
	this->Length = Length;
}

int Square::getLength() const
{
	return Length;
}
//byval?
Square Square::operator+(const Square& Other) const
{
	int newLength = this->Length + Other.Length;
	Square square(newLength);
	return square;
}
//byref?
Square& Square::operator+=(const Square& Other)
{
	Length += Other.getLength();
	return *this;
}
