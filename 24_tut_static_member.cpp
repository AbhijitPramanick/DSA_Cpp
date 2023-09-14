//Static data members and methods - OOPS
//sometimes we want to make different objects of the same class and want to maintain a single or common counter for all the objects. 

#include<iostream>

using namespace std;

class Employee{
    int id;
    //static data member
    static int count;

    public:
        void setData(void){
            cout<<"Enter the employee ID : "<<endl;
            cin>>id;
            count++;
        }
        void getData(void){
            cout<<"The Employee ID is : "<<id<<", having count no. "<<count<<endl;
        }

        //Static function is a function which can access only the static data memebers and methods of the class
        //when there is a need of running a function with name of class only without the need of creating an object, we use Static function

        static void getcount(void){
            cout<<"The value of the count is "<<count<<endl<<"---------------------"<<endl;
            //static methods cannot the non-static members of the class
            // cout<<"The employee id : "<<id<<endl; //-->>This will generate error
        }
};
//count is the static data memeber of the class employee
//static members are by-default initialised with 0.
int Employee :: count = 100;

int main(){
    Employee harry, abhi, amit;
    // harry.id = 1;
    // harry.count = 1; //Cannot do this because id and count are private.

    harry.setData();
    harry.getData();
    Employee::getcount();

    abhi.setData();
    abhi.getData();
    Employee::getcount();

    amit.setData();
    amit.getData();
    Employee::getcount();
    return 0;
}