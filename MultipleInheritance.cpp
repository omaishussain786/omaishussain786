#include <iostream>
using namespace std;

class Identity{
protected:
    int id;
public:
    Identity(int i){ id=i; }
};

class Academic{
protected:
    int semester;
public:
    Academic(int s){ semester=s; }
};

class Student:public Identity,public Academic{
public:
    Student(int i,int s):Identity(i),Academic(s){}

    void show(){
        cout<<id<<" "<<semester<<endl;
    }
};

int main(){
    Student s(101,3);
    s.show();
    return 0;
}