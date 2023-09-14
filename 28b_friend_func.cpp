// An advanced example of friend function
#include<iostream>

using namespace std;

class c2;//Forward declaration : tells the compiler that the definition of class c2 is defined later

class c1{
    int val1;
    friend void exchange(c1 &, c2 &); //declaration of friend function
    public:
        void inData(int a){
            val1 = a;
        }
        void display(void){
            cout<<val1<<endl;
        }
};

class c2{
    int val2;
    friend void exchange(c1 &, c2 &);
    public:
        void inData(int a){
            val2 = a;
        }
        void display(void){
            cout<<val2<<endl;
        }
};

//Below is the friend function named exchange().
//Exchange function swaps the private data members of the classes c1 and c2.
void exchange(c1 &x, c2 &y){
    // int temp = x.val1;
    // x.val1 = y.val2;
    // y.val2 = temp;
    x.val1 = x.val1 + y.val2;
    y.val2 = x.val1 - y.val2;
    x.val1 = x.val1 - y.val2;
}

int main(){
    c1 m;
    c2 n;
    m.inData(29);
    n.inData(131);
    cout<<"Before calling exchange function : "<<endl;
    m.display();
    n.display();
    exchange(m,n);
    cout<<"After calling exchange function : "<<endl;
    m.display();
    n.display();

    return 0;
}