// Constructors and Destructors in C++

#include <iostream>

using namespace std;

class Complex
{
    int a, b;

public:
    // Creating a Constructor.
    // Constructor is a 'special member function', with the same name as the class.
    // It is used to initialise the objects of the class.
    // It is automatically invoked whenever as soon as an object is created.

    Complex(void); // Constructor declaration
    void printNumber(void)
    {
        cout << "The complex number is : " << a << " + " << b << "i" << endl;
    }
};

// For Constructor return type is not necessary.
// return type may not be specified on a constructor

// Default Constructor : A construct is called a default constructor if it takes no parameters
Complex::Complex()
{
    a = 0;
    b = 0;
    cout << "An object is created and constructor function is invoked successfully." << endl;
}

int main()
{
    Complex c1, c2, c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();
    return 0;
}

/* Characteristics of Constructor:

        1. It should be declared at the public section of the class.
        2. They are automatically invoked when the object is created.
        3. They cannot return values and cannot have return types.
        4. It can have default_arguments.
        5. We cannot refer to their address.

*/