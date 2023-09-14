// A class can have more than one constructor, which can have different arguments.
// This is called constructor overloading.

#include <iostream>

using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int x, int y)
    { // A parameterised constructor
        a = x;
        b = y;
        cout << "An object is created and constructor function is invoked successfully." << endl;
    }
    Complex(int x)
    { // Another parameterised constructor havign different number of arguments.
        a = x;
        b = 0;
        cout << "An object is created and constructor function is invoked successfully." << endl;
    }
    Complex()
    { // A Default Constructor : as it takes no arguments.
        a = 0;
        b = 0;
        cout << "An object is created and constructor function is invoked successfully." << endl;
    }
    void printNumber(void)
    {
        cout << "The complex number is " << a << " + " << b << "i" << endl;
    }
};
int main()
{
    Complex c1(4, 6);
    c1.printNumber();

    Complex c2(7);
    c2.printNumber();

    Complex c3;
    c3.printNumber();
    
    return 0;
}