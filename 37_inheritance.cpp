#include <iostream>

using namespace std;

// Base class
class Employee
{
public:
    int id;
    int salary;

    // Constructor
    Employee(int inpId)
    {
        id = 1;
        salary = 34;
    }

    // Default constructor
    Employee() {}
};

// Derived class syntax

// class {{derived_class_Name}} : {{Visibility_mode}} {{base_class_name}}
// {
//     class member/methods/etc...
// }

// Visibility modes can be private or public

// Note:
// 1. Default visibility mode is private.
// 2. Private visibility mode : Public members of the base class becomes private members of the derived class.
// 3. Public visibility mode : public memebrs of the base class will become the private members of the derived class
// 4. Private members of the base class can never be inherited.

// Creating a programmer class derived form employee base class

class Programmer : public Employee
{
public:
    int languageCode;
    Programmer(int inpId)
    {
        id = inpId;
        languageCode = 9;
    }
    void getData()
    {
        cout << id << endl;
    }
};

int main()
{
    Employee harry(1), rohan(2);
    cout << "Salary of harry is " << harry.salary << endl;
    cout << "Salary of rohan is " << rohan.salary << endl;
    Programmer skillF(10);
    cout << skillF.languageCode << endl;
    skillF.getData();
    cout << "ID of the skillF : " << skillF.id << endl; //-->throws am error when class programmer is inherited privately from the base class Employee
    return 0;
}