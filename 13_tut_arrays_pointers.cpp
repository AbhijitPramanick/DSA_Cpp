#include<iostream>

using namespace std;


int main(){
    int a[3][3];
    // int* p = a;
    for (int i = 0; i < 3; i++)
    {
        cout<<endl;
        for (int j = 0; j < 3; j++)
        {
            cout<<"Enter the element["<<i<<"]["<<j<<"] : "<<endl;
            cin>>a[i][j];
        }        
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
    return 0;
}