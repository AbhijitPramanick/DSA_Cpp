// *********Destructors in C++*********

// Destructor neither takes any argument nor returns any value

#include <iostream>

using namespace std;

int count = 0; //Global variable (static variable can be alternative)

class num
{
public:
    num()
    { // Constructor
        count++;
        cout << "A constructor is called for object no. " << count << endl;
    }
    ~num()
    { // Destructor
        cout << "A destructor is called for object no. " << count << endl;
        count--;
    }
};

int main()
{
    cout << "We are inside the main function." << endl;
    cout << "Creating an object..." << endl;
    num n1;
    {
        cout << "We are in a block inside the main function" << endl;
        cout << "Creating 3 objects..." << endl;
        num n2, n3, n4;
        cout << "Exiting the block." << endl;
    }
    cout << "Exiting the main function" << endl;
    return 0;
}

// Destructors are invoked by the compiler as soon as the scope of the object ends in a function or a block.
// Destructors helps us to free the dynamically allocated memories to the objects.
// Destructors can be used in association with other concepts of c++ like stack, queue, heap, dynamic memory allocation, etc.