// Implication of Constructor with default arguments
#include <iostream>

using namespace std;
class Simple
{
    int data1;
    int data2;
    int data3;

public:
    // Constructor with default arguments.
    Simple(int a, int b = 9, int c = 12)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void printData(void);
};

void Simple ::printData(void)
{
    cout << "Data1 : " << data1 << endl
         << "Data2 : " << data2 << endl
         << "Data3 : " << data3 << endl
         << endl;
}

int main()
{
    Simple s(1, 4);
    // Data3 value will be taken as default argument by the constructor function.
    s.printData();
    return 0;
}

/*
//Homework : Write a program to demonstrate the use of Constructor with default argument having class named Complex.
#include<iostream>

using namespace std;
class Complex{
    int a, b;
    public:
        //A parameterised constructor with default arguments.
        Complex(int x = 0, int y = 0){
            a = x;
            b = y;
            cout<<"An object of class Complex is created and a constructor is invoked."<<endl;
        }
        void printData(void){
            cout<<"The complex number : "<<a<<" + "<<b<<"i"<<endl<<endl;
        }
};

int main(){
    Complex c1;
    c1.printData();

    Complex c2(12);
    c2.printData();

    Complex c3(31,87);
    c3.printData();

    return 0;
}
*/