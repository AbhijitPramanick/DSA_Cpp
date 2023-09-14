//Example of single inheritance.
#include<iostream>

using namespace std;
//--------------------------------------------------------------------------
//Base class
class Base{
    int data1; //it is private by default and is not inheritable.
    public:
        int data2;
        void setData();
        int getData1();
        int getData2();
};

void Base :: setData(void){
    data1 = 10;
    data2 = 20; 
}
int Base :: getData1(void){
    return data1;
}
int Base :: getData2(void){
    return data2;
}
//---------------------------------------------------------------------------
class Derived : private Base{
    //The class is being derived publicly
    int data3;
    public :    
        void process();
        void display();
};

void Derived :: process(){
    setData();                  //Setdata() is now a private member method of derived class
    data3 = data2 * getData1();
}
void Derived :: display(){
    cout<<"The value of data1 is "<<getData1()<<endl; //Data1 is private in the base class, so it can be accessed by the public method of base class
    cout<<"The value of data2 is "<<data2<<endl;
    cout<<"The value of data3 is "<<data3<<endl;
}
//---------------------------------------------------------------------------
int main(){
    Derived der;
    der.process();
    der.display();
    return 0;
}