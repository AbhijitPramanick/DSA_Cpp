#include<iostream>

using namespace std;
//inline functions are request to the compiler, the compiler can ignore if not found suitable.
// There are some conditions where it advised not to use inline functions like during usage of static variables, when the function code is too bulky (can cause high usage of memory for code written, etc.
inline int product(int a, int b){
    return a*b;
}
int main(){
    int a,b;
    cout<<"Enter a and b : ";
    cin>>a>>b;
    cout<<"Product of a and b is "<<product(a,b)<<endl;
    return 0;
}

//**************Default arguments**************
// #include<iostream>

// using namespace std;
// float money(int loan, float interest = 1.04){
//     return loan*interest;
// }
// int main(){
//     cout<<"Net amount is "<<money(10000)<<endl;
//     cout<<"Bankers : Net amount is "<<money(10000,1.06)<<endl;
//     return 0;
// }