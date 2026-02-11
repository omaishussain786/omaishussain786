#include <iostream>
#include <string>
using namespace std;

class MobileRecharge {
    int id;
    string person;
    double amount;
public:
    MobileRecharge(int i,string p,double a){
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
    MobileRecharge record(111,"Customer11",775);
    record.updateAmount(50);
    record.display();
    return 0;
}
