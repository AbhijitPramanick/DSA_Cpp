// ************Dynamic initialisation of objects using constructor************

// Can we dynamically create objects when constructor overloading?
// Can we take user input and depending upon the input is it possible to dynamically create objects of class?
// Answer is --> Yes
#include<iostream>

using namespace std;
class BankDeposit{
    int principal;
    int years;
    float interestRate;
    float returnValue;

    public :
        BankDeposit(){};
        BankDeposit(int p, int y, float r);//r can be a value like 0.04
        BankDeposit(int p, int y, int R); //R can be a value like 0.04

        void display(void);
};
BankDeposit :: BankDeposit(int p, int y, float r){
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue *= (1+interestRate);
    }
}
BankDeposit :: BankDeposit(int p, int y, int r){
    principal = p;
    years = y;
    interestRate = float(r)/100;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue *= (1+interestRate);
    }
};

void BankDeposit :: display(void){
    cout<<"Principal = Rs."<<principal<<endl
        <<"Years = "<<years<<" years"<<endl
        <<"Rate per annum = "<<interestRate<<endl
        <<"Amount = Rs."<<returnValue<<endl<<endl;
}
int main(){
    BankDeposit bd1, bd2, bd3;
    int p, y, R;
    float r;

    cout<<"Enter Principal, years and rate(in float) : "<<endl;
    cin>>p>>y>>r;
    bd1 = BankDeposit(p,y,r);
    bd1.display();

    cout<<"Enter Principal, years and rate(in integer) : "<<endl;
    cin>>p>>y>>R;
    bd2 = BankDeposit(p,y,R);
    bd2.display();
    return 0;
}