#include<iostream>

using namespace std;
int sum(int x, int y){
    cout<<"Using function with 2 arguments.\n";
    return x+y;
}
int sum(int x, int y, int z){
    cout<<"Using function with 3 arguments.\n";
    return x+y+z;
}
int main(){
    int a = 2, b = 4, c = 6;
    cout<<"The sum of a, b is "<<sum(a,b)<<endl;
    cout<<"The sum of a, b, c  is "<<sum(a,b,c)<<endl;
    return 0;
}