#include <iostream>
#include <string>
using namespace std;

class Person{
protected:
    string name;
public:
    void setName(string n){
        name=n;
    }
};

class Student:public Person{
protected:
    int roll;
public:
    void setStudent(int r,string n){
        roll=r;
        name=n;
    }
};

class Result:public Student{
private:
    int marks[3];
public:
    void setMarks(int a,int b,int c){
        marks[0]=a;
        marks[1]=b;
        marks[2]=c;
    }
    int total(){
        return marks[0]+marks[1]+marks[2];
    }
    void show(){
        cout<<roll<<endl;
        cout<<name<<endl;
        cout<<total()<<endl;
    }
};

int main(){
    Result r;
    r.setStudent(5,"Omais");
    r.setMarks(70,75,80);
    r.show();
    return 0;
}