//If a global and a local variable has same name then, the local variable will have more precedence in the function, the local variable is declared.

#include<iostream>

using namespace std;

int glo = 6;

void check(){
    int glo = 12; 
    cout<<"The value of global variable inside the 'check' function is "<<glo<<"\n";
}

int main(){
    int glo = 9;
    cout<<"The value of global variable in the main function is "<<glo<<"\n";
    check();
    return 0;
}