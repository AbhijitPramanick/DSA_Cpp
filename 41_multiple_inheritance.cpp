//Multiple inheritance

#include<iostream>

using namespace std;

// Syntax for inheriting in multiple inheritance
// {{class Derived}} : {{visiblity_mode Base1}}, {{visibility_mode Base2}}
// {
//     class body/method/members
// };

class Base1{
    protected:
        int base1int;
    public:
        void set_base1int(int a){
            base1int = a;
        }
};

class Base2{
    protected:
        int base2int;
    public:
        void set_base2int(int a){
            base2int = a;
        }
};
class Base3{
    protected:
        int base3int;
    public:
        void set_base3int(int a){
            base3int = a;
        }
};

class Derived : public Base1, public Base2, public Base3{
    public:
        void show(){
            cout<<"The value of Base 1 is "<<base1int<<endl;
            cout<<"The value of Base 2 is "<<base2int<<endl;
            cout<<"The value of Base 3 is "<<base3int<<endl;
            cout<<"The sum of base1int and base2int is "<<base1int +base2int + base3int <<endl;
        }
};

//  The inherited Derived class will look like this:
/*  Data members:
        base1int-->protected
        base2int-->protected
    Methods:
        set_base1int()-->public
        set_base2int()-->public
        show()-->public 
*/
int main(){
    Derived harry;
    harry.set_base1int(23);
    harry.set_base2int(25);
    harry.set_base3int(75);
    harry.show();
    return 0;
}