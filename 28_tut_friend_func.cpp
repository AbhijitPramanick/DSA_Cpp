//A simple example of friend function

#include<iostream>

using namespace std;

class Y;

class X{
    int data;
    public:
        void setValue(int value){
            data = value;
        }
        friend void add(X,Y);
};

class Y{
    int num;
    public:
        void setValue(int value){
            num = value;
        }
        friend void add(X,Y);
};

void add (X a, Y b){
    cout<<"The Sum is : "<<(a.data + b.num)<<endl;
}

int main(){
    X m;
    Y n;
    m.setValue(5);
    n.setValue(15);
    add(m,n);
    return 0;
}