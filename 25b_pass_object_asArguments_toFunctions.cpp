// Program to demonstrate : Passing class objects to class functions/methods.
#include <iostream>

using namespace std;
class Complex
{
    int a;
    int b;
    static int count;

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
        count++;
    }

    void setDataBySum(Complex o1, Complex o2)
    {
        cout<<"\nPerforming addition of two complex numbers..."<<endl;
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }

    void printNumber()
    {
        cout << "Your complex number is : " << a << " + i " << b << endl;
    }
};

int Complex :: count;

int main()
{
    Complex c1, c2, c3;

    c1.setData(1, 2);
    c1.printNumber();

    c2.setData(3, 4);
    c2.printNumber();

    //Objects are passed to class methods
    c3.setDataBySum(c1, c2);
    c3.printNumber();

    return 0;
}