//More examples of Parameterised Constructors

#include<iostream>
#include<cmath>

using namespace std;

class Point{
    int x, y;
    friend float distance(Point, Point);
    public:
        Point(int a, int b){
            x = a;
            y = b;
        }
        void pointDisplay(){
            cout<<"Point is ("<<x<<", "<<y<<")."<<endl;
        }
};

    //  Question : Create a function which take two Point class objects and computes the distance between them.

float distance(Point m, Point n){
    float num = sqrt(pow((n.x-m.x),2) + pow((n.y-m.y),2));
    return num;
}
int main(){
    Point p(24,56);
    p.pointDisplay();

    Point q = Point(59,127);
    q.pointDisplay();

    cout<<"The distance between two points is "<<distance(p,q)<<" units."<<endl;; 

    return 0;
}