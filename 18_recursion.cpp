#include<iostream>

using namespace std;

// int fact(int n){
//     if(n<=1){
//         return 1;
//     }
//     else{
//         return n*fact(n-1);
//     }
// }
int fibonacci(int n){
    if(n<2){
        return 1;
    }
    return (fibonacci(n-1)+fibonacci(n-2));
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    // cout<<"The factorial of "<<n<<" is "<<fact(n)<<endl;
    cout<<"The fibonacci series upto "<<n<<"numbers : " <<endl;
    for (int i = 0; i <=n; i++)
    {
        cout<<fibonacci(i)<<"\t";
    }
    cout<<endl;
    return 0;
}