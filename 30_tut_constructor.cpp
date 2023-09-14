#include <iostream>

using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int, int);
    void getData(void)
    {
        cout << "Complex number is " << a << " + " << b << "i" << endl;
    }
};
// Default constructor is a constructor which does not accept any parameters

//Following is a Parameterised Constructor as it accepts certain number of parameters
Complex ::Complex(int x, int y)
{
    a = x;
    b = y;
    cout << "Object created and constructor invoked." << endl;
}
int main()
{
    // Implicit call
    Complex c1(34, 6);

    // Explicit call
    Complex c2 = Complex(5, 17);

    c1.getData();
    c2.getData();

    return 0;
}