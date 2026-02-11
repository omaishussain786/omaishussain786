#include <iostream>
using namespace std;

class Vehicle{
public:
    virtual void startEngine()=0;
    virtual void stopEngine()=0;
};

class Car:public Vehicle{
public:
    void startEngine(){
        cout<<"Car engine started"<<endl;
    }
    void stopEngine(){
        cout<<"Car engine stopped"<<endl;
    }
};

int main(){
    Vehicle *v;
    Car c;
    v=&c;
    v->startEngine();
    v->stopEngine();
    return 0;
}