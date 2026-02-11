#include <iostream>
using namespace std;

class Account{
public:
    virtual double interest(double amount){
        return 0;
    }
};

class SavingsAccount:public Account{
public:
    double interest(double amount){
        return amount*0.04;
    }
};

class FixedDepositAccount:public Account{
public:
    double interest(double amount){
        return amount*0.07;
    }
};

int main(){
    Account *a1,*a2;
    SavingsAccount s;
    FixedDepositAccount f;

    a1=&s;
    a2=&f;

    cout<<a1->interest(10000)<<endl;
    cout<<a2->interest(10000)<<endl;

    return 0;
}