#include<iostream>

using namespace std;

int sum(int, int);//funtion prototype : it contains arguments
void greet(void);

int main(){
    greet();
    int a, b;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    //a and b are actual parameters
    cout<<"The sum of two numbers is "<<sum(a,b)<<endl;
    return 0;
}

//here x and y are formal parameters which are taking values from actual parameters a and b
int sum(int x, int y){ //function definition
    return x+y;
}
void greet(){
    cout<<"Hello good morning\n";
}