#include<iostream>

using namespace std;

class Student{
    protected:
        int roll_number;
    public:
        void set_roll_number(int);
        void get_roll_number(void);
};
void Student :: set_roll_number(int r){
    roll_number = r;
}
void Student :: get_roll_number(){
    cout<<"The roll number of the student is "<<roll_number<<endl;
}
//-----------------------------------------------------------------------
class Exam : public Student{
    protected:
        float maths;
        float physics;
    public:
        void set_marks(float, float);
        void get_marks(void);
};
void Exam :: set_marks(float m1, float m2){
    maths = m1;
    physics = m2;
}
void Exam :: get_marks(){
    cout<<"Marks in maths = "<<maths<<endl;
    cout<<"Makrs in physics = "<<physics<<endl;
}
//-----------------------------------------------------------------------

class Result : public Exam
{
    float percentage;
    public : 
        void display_marks(){
            void get_roll_number();
            void get_marks();
            cout<<"Your overall percentage is "<<(maths+physics)/2<<endl;
    }
};
//-----------------------------------------------------------------------

int main(){
    Result harry;
    harry.set_roll_number(12);
    harry.set_marks(95.5,96.7);
    harry.display_marks();
    return 0;
}