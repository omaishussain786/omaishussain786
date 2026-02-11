#include <iostream>
#include <string>
using namespace std;

class ElectricBill {
    int id;
    string person;
    double amount;
public:
    ElectricBill(int i,string p,double a){
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
    ElectricBill record(109,"Customer9",725);
    record.updateAmount(50);
    record.display();
    return 0;
}
