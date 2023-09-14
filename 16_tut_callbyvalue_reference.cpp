#include <iostream>

using namespace std;

void swap1(int, int);     // Function prototype for call by value
void swap2(int *, int *); // Function prototype for call by reference
void swap_reference_variables(int &, int &);
int main()
{
    int a = 2, b = 6;
    cout << "Before swapping :                         a = " << a << ",   b = " << b << endl;
    swap1(a, b); // actual arguments
    cout << "After swap1 swapping :                    a = " << a << ",   b = " << b << endl;
    swap2(&a, &b);
    cout << "After swap2 swapping :                    a = " << a << ",   b = " << b << endl;
    swap_reference_variables(a, b); // actual arguments
    cout << "After swap_reference_variables swapping : a = " << a << ",   b = " << b << endl;
    return 0;
}

// Call by value
//this will not swap a and b
void swap1(int x, int y) // formal arguments
{
    x = x + y;
    y = x - y;
    x = x - y;
}

// Call by reference
//This will swap a and b using pointers
void swap2(int *x, int *y)
{
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
}

//Swapping using reference variables, specially in cpp
void swap_reference_variables(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

// #include<iostream>

// using namespace std;
// int & swap(int &a, int &b){
//     a = a+b;
//     b = a-b;
//     a = a-b;
//     return a;
// }
// int main(){
//     int a = 2, b = 3;
//     cout<<"a = "<<a<<"\tb = "<<b<<endl;
//     swap(a,b) = 56;
//     cout<<"a = "<<a<<"\tb = "<<b<<endl;
//     return 0;
// }