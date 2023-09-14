#include<iostream>

using namespace std;

int main(){
    int age;
    cout<<"Tell me your age : ";
    cin>>age;

    //**************if and if else if ladder**************
    // if(age<18){
    //     cout<<"You cannot come to the party."<<endl;
    // }
    // else if(age==18){
    //     cout<<"You are a kid, you will get a kid pass to the party."<<endl;
    // }
    // else{
    //     cout<<"You can come to the party."<<endl;
    // }


    //**************if and if else if ladder**************
    switch(age){
        case 18:
            cout<<"You are 18 years old"<<endl;
            break;
        case 0 :
            cout<<"You are not yet born"<<endl;
            break;
        default:
            cout<<"You are awesome"<<endl;
            break;
    }

    // return 0;
}