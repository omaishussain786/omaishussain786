#include <iostream>
using namespace std;

class BankAccount {
    string owner;
    double balance;
public:
    BankAccount(string name, double initial) : owner(name), balance(initial) {}
    void deposit(double amount) { balance += amount; }
    void withdraw(double amount) {
        if (amount <= balance) balance -= amount;
        else cout << "Insufficient funds" << endl;
    }
    void display() {
        cout << "Owner: " << owner << ", Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount acc("Alice", 1000.0);
    acc.deposit(200);
    acc.withdraw(150);
    acc.display();
    return 0;
}