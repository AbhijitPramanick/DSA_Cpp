#include<iostream>

using namespace std;

typedef struct employee{
    int eId;
    char favChar;
    float sal;
}emp;

//union gives better memory management
union money
{
    int rice;
    char car;
    float pounds;
};

int main(){
    // emp abhi;
    // emp dinesh;
    // emp amit;
    // abhi.eId = 123;
    // abhi.favChar = 'd';
    // abhi.sal = 123400;
    // cout<<"The value is : "<<abhi.eId<<endl;
    // cout<<"The value is : "<<abhi.favChar<<endl;
    // cout<<"The value is : "<<abhi.sal<<endl;


    // union money m1;
    // m1.rice = 23;
    // cout<<m1.rice<<endl;
    // cout<<m1.car<<endl;
    // cout<<m1.pounds<<endl<<"-------------------"<<endl;
    // m1.car = 'r';
    // cout<<m1.rice<<endl;
    // cout<<m1.car<<endl;
    // cout<<m1.pounds<<endl;

    enum meal{breakfast, lunch, dinner, snacks};
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<snacks<<endl;
    int m2 = dinner;
    cout<<m2<<endl;
    return 0;
}