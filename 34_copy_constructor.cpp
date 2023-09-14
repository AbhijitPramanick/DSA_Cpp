// Copy Constructor
// very important from the examination point of view
#include <iostream>

using namespace std;

class Number
{

    int a;
    static int count; // Count static integer is added by me to understand when constructors are called and objects are created. It was not mentioned in the tutorial.

public:
    Number(Number &obj)
    { // Copy Constructor
        a = obj.a;
        cout << "An object is created and Copy Constructor called." << endl;
        count++;
    }

    // When no copy constructor is found by compiler during compilation, compiler itself provides a copy constructor.
    // So whenever a copy constructor is invoked in the main(), compiler provides its own copy constructor in the absence of the latter.

    // It is a very typical question asked in the interviews.

    Number()
    {
        a = 0;
        cout << "An object is created and default Constructor function is invoked." << endl;
        count++;
    }
    Number(int num)
    {
        a = num;
        cout << "An object is created and a parameterised Constructor function is invoked." << endl;
        count++;
    }
    void display()
    {
        cout << "The number is (count = " << count << ") : " << a << endl;
    }
};
int Number ::count;
int main()
{
    Number x, y, z(45), z2;
    x.display();
    y.display();
    z.display();

    Number z1(z); // Copy constructor invoked.
    z1.display();

    z2 = z; // Copy constructor is not called
    z2.display();

    Number z3 = z; 
    //Copy constructor is called because declaration of an object and assinging it the values of other object is done in the same line of the syntax.
    z3.display();
    
    return 0;
}
