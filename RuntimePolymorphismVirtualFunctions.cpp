#include <iostream>
using namespace std;

class Shape{
public:
    virtual double area(){
        return 0;
    }
};

class Rectangle:public Shape{
private:
    double length;
    double width;
public:
    Rectangle(double l,double w){
        length=l;
        width=w;
    }
    double area(){
        return length*width;
    }
};

class Circle:public Shape{
private:
    double radius;
public:
    Circle(double r){
        radius=r;
    }
    double area(){
        return 3.14159*radius*radius;
    }
};

int main(){
    Shape *s1,*s2;
    Rectangle r(6,4);
    Circle c(5);
    s1=&r;
    s2=&c;
    cout<<s1->area()<<endl;
    cout<<s2->area()<<endl;
    return 0;
}