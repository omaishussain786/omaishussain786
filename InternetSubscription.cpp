#include <iostream>
#include <string>
using namespace std;

class InternetSubscription {
    int id;
    string person;
    double amount;
public:
    InternetSubscription(int i,string p,double a){
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
    InternetSubscription record(112,"Customer12",800);
    record.updateAmount(50);
    record.display();
    return 0;
}
