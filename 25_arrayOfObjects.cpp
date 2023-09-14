#include<iostream>

using namespace std;
class Employee{
    int id;
    float salary;
    static int count;
    public:
        void setId(void){
            salary = 52402.235;
            cout<<"Enter the employee ID : ";
            cin>>id;
            count++;
        }
        void getId(void){
            cout<<"The employee ID is : "<<id<<" and the salary is : $"<<salary<<endl;
        }
        void getCount(void){
            cout<<"The value of count is : "<<count<<endl<<"---------------\n";
        }
};
int Employee::count;
int main(){
    Employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getId();
        fb[i].getCount();
    }    
    return 0;
}