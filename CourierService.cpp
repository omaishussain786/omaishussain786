#include <iostream>
#include <string>
using namespace std;

class CourierService {
    int id;
    string person;
    double amount;
public:
    CourierService(int i,string p,double a){
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
    CourierService record(124,"Customer24",1100);
    record.updateAmount(50);
    record.display();
    return 0;
}
