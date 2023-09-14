#include<iostream>

using namespace std;

int main(){
    int a = 10;
    int *b = &a;
    cout<<"Address of a is "<<&a<<endl;
    cout<<"Address of a is "<<b<<endl;

    cout<<"The value at address : "<<*b<<endl;
    
    int **c = &b;
    cout<<"The value at address : "<<c<<endl;
    cout<<"The value at address : "<<**c<<endl;

    return 0;
}