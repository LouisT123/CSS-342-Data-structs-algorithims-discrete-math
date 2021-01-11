#include <iostream>
//constructors

using namespace std;

class Complex
{
private:
    double real;
    double imag;

public:
    // Default constructor 
    explicit Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}
    // explicit because second argument can be optional
    // Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}


    // A method to compare two Complex numbers (overloading an operator)
    bool operator== (Complex rhs) {
        return (real == rhs.real && imag == rhs.imag) ? true : false;
        //also possible (same as above)
    /*    if (real == rhs.real && imag == rhs.imag)
        {
            return true;
        }
        return false;*/
    }
};

int main()
{
    // a Complex object 
    Complex com1(3.0, 0.0);
    //by defualt if not declared will have variables at 0 ie: Complex com2(0.0, 0.0)
   /* Complex com2;*/
   //for non explicit 
   // if (com1 == 3.0)
    if (com1 == Complex(3.0))
        cout << "Same";
    else
        cout << "Not Same";
    return 0;
}