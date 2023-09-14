//Protected Access Modifier in C++
#include<iostream>

using namespace std;

class Base{
    protected: //it is private but can be inherited
        int a;      //We want to derive int a in the derived class keeping it private.
    private:
        int b;
    public:
        int c;

};
/*                    |     Public derivation    |    Private derivation   |   Protected derivation    |

        1. Private           Not inherited              Not inherited           Not inherited
        2. Protected         Protected                  Private                 Protected
        3. Public            Public                     Private                 Protected

*/
class Derived : public Base{

};
int main(){
    Base x;
    Derived y;

    // cout<<x.a;
    // cout<<x.b;
    cout<<x.c;   //-->Accessible
    // cout<<y.a;
    // cout<<y.b;
    cout<<y.c;   //-->Accessible


// class Derived : protected Base{

// };
// int main(){
//     Base x;
//     Derived y;

//     cout<<x.a;
//     cout<<x.b;
//     cout<<x.c;   //-->Accessible
//     cout<<y.a;
//     cout<<y.b;
//     cout<<y.c;   //-->Accessible


// class Derived : private Base{

// };
// int main(){
//     Base x;
//     Derived y;

//     cout<<x.a;
//     cout<<x.b;
//     cout<<x.c;  //-->Accessible
//     cout<<y.a;
//     cout<<y.b;
//     cout<<y.c;


    return 0;
}