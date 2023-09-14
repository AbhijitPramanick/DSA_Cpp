#include<iostream>

using namespace std;

int main(){
    for (int k = 0; k < 20; k++)
    {
        // if (k==2)
        // {
        //     break;
        // }
        if (k%2==0)
        {
            continue;
        }
        cout<<k<<endl;
        
    }    
    return 0;
}