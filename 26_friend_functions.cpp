//***************Friend functions***************

#include <iostream>

using namespace std;

class Complex
{
    int a, b;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNumber(void)
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }

    // Declaration of friend function
    friend Complex sumComplex(Complex, Complex);
    //This doesn't mean that (sumComplex) function has become the member function of class Complex. SumComplex is an outside function having permission to access the private members of the class Complex.
    //i.e. If c1 being an object of the class Complex, c1.sumComplex() will give error.
};

// Below is a function which takes 2 complex type arguments and also returns a complex type.
// But it needs a permission from Complex class to access the private members of Complex class.
// That permission is a declaration of friend function in the class
Complex sumComplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    Complex c1, c2, sum;

    c1.setNumber(1, 4);
    c1.printNumber();

    c2.setNumber(5, 8);
    c2.printNumber();

    sum = sumComplex(c1, c2);
    sum.printNumber();

    return 0;
}
/* Properties of FRIEND function :
        1. Friend function is not in the scope of the class.
        2. Since it is not in the scope of the class, it cannot be called from the object of the class.
        3. Can be invoked without the help of any object.
        4. Usually contains objects as arguments, by not necessary.
        5. Can be declared in either private or public part of the class.
        6. It cannot access the members directly by their names and need (object_name.member_name) to access any member.

*/