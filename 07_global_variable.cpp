#include<iostream>
#include<iomanip>

using namespace std;
int c = 45;
int main(){

    //**************Built-in datatypes****************
    // int a, b, c;
    // cout<<"Enter two numbers : "<<endl;
    // cin>>a>>b;
    // c = a+b;
    // cout<<"The sum of a and b is : "<<c<<endl;
    // cout<<"The value of global variable is : "<<::c<<endl;

    //**************long double, long anf float Literals****************
    // float d = 34.4f;
    // long double e = 34.4l;
    // cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e<<endl;

    // cout<<"The size of 34.4 : "<<sizeof(34.4)<<endl;
    // cout<<"The size of 34.4f : "<<sizeof(34.4f)<<endl;
    // cout<<"The size of 34.4F : "<<sizeof(34.4F)<<endl;
    // cout<<"The size of 34.4l : "<<sizeof(34.4l)<<endl;
    // cout<<"The size of 34.4L : "<<sizeof(34.4L)<<endl;

    //**************Reference variables****************
    // float x = 45;
    // float & y = x;
    // cout<<x<<endl;
    // cout<<y<<endl;

    //**************Typecasting****************
    // int a = 45;
    // float b = 245.36;
    // const float pi = 3.14;
    // cout<<"The value of a is "<<a<<endl;
    // cout<<"The value of a is "<<(float)a<<endl;
    // cout<<"The value of a is "<<float(a)<<endl;
    // cout<<"The value of b is "<<b<<endl;
    // cout<<"The value of b is "<<(int)b<<endl;
    // cout<<"The value of b is "<<int(b)<<endl;
    // cout<<"The value of pi is "<<pi<<endl;

    //**************Manipulators*****************
    //endl
    // int a = 2, b = 34, c = 1234;
    // cout<<"The value of a is "<<a<<endl;
    // cout<<"The value of b is "<<b<<endl;
    // cout<<"The value of c is "<<c<<endl;
    // cout<<"The value of a is "<<setw(5)<<a<<endl;
    // cout<<"The value of b is "<<setw(5)<<b<<endl;
    // cout<<"The value of c is "<<setw(5)<<c<<endl;

    //*************Operator precedence***************
    int a = 3, b = 4;
    int c = 3*a + b -45 +87;
    cout<<c<<endl;
    return 0;
}