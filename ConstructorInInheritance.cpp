#include <iostream>
#include <string>
using namespace std;

class Person{
protected:
    string name;
public:
    Person(string n){ name=n; }
};

class Student:public Person{
    int roll;
public:
    Student(string n,int r):Person(n){
        roll=r;
    }
    void show(){
        cout<<name<<" "<<roll<<endl;
    }
};

int main(){
    Student s("Omais",21);
    s.show();
    return 0;
}