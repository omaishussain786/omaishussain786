#include <iostream>
#include <string>
using namespace std;

class BusPass {
    int id;
    string person;
    double amount;
public:
    BusPass(int i,string p,double a){
        id=i;
        person=p;
        amount=a;
    }

    double calculateFinalAmount(){
        double serviceCharge = amount * 0.05;
        return amount + serviceCharge;
    }

    void updateAmount(double extra){
        amount = amount + extra;
    }

    void display(){
        cout<<id<<endl;
        cout<<person<<endl;
        cout<<amount<<endl;
        cout<<calculateFinalAmount()<<endl;
    }
};

int main(){
    BusPass record(128,"Customer28",1200);
    record.updateAmount(50);
    record.display();
    return 0;
}
