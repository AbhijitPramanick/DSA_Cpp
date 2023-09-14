// OOPS - classes and objects 

// C++ --> Initially called --> C with classes by Bjarne stroustrup
// class -->extensions of structures in C++
// Structures had limitations:
//   - Members are public
//   - Structures cannot have methods
 
// Classes = structures + More...
// Classes can have methods and properties
// Classes --> can make few members as private and few as public

// Structures in C++ are typedefed
// You can declare objects along with the class declaration

/*class Employee{
    //class definition
}abhi, aman, amit;*/

//abhi.salary = 8 -->makes no sense if salary is private



//************Nesting of member functions************

#include<iostream>
#include<string>

using namespace std;

class Binary{
    //Members in the class are by-Default private in class unless stated as public.
    string s;
    public:
        void read(void);
        void chk_Bin(void);
        void ones_com(void);
        void display(void);
};

void Binary::read(void){
    cout<<"Enter a binary number : ";
    cin>>s;
    chk_Bin(); //NESTING OF MEMBER FUNCTIONS
    // THERE IS NO NEED TO MENTION  b.chk_bin()
    // NOTE : If chk_bin() is mentioned as a private member, then it cannot be accessed from outside, but only by methods of the class
}

void Binary::chk_Bin(void){
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"Incorrect binary format"<<endl;
            exit(0);
            //Is Exit 0 and break same?
            // The major difference between break and exit() is that break is a keyword, which causes an immediate exit from the switch or loop ( for , while or do ), while exit() is a standard library function, which terminates program execution when it is called. void exit(int return_code
        }
    }
}

void Binary :: ones_com(void){
    
    cout<<"Performing ones compliment..."<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)=='0'){
            s.at(i) = '1';
        }
        else{
            s.at(i) = '0';
        }
    }    
}
void Binary :: display(void){
    cout<<"The binary number : "<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
}
int main(){
    Binary b;
    b.read();
    // b.chk_Bin();
    b.display();
    b.ones_com();
    b.display();
    return 0;
}