#include <iostream>
using namespace std;

class Account {
protected:
    int accNo;
    double balance;
public:
    void getData() { cout << "Enter account number and balance: "; cin >> accNo >> balance; }
    virtual void calculateInterest() = 0;
    virtual ~Account() {}
};

class SavingsAccount : public Account {
public:
    void calculateInterest() { cout << "Savings interest: " << balance*0.04 << endl; }
};

class CurrentAccount : public Account {
public:
    void calculateInterest() { cout << "Current account interest: " << balance*0.02 << endl; }
};

int main() {
    SavingsAccount s;
    CurrentAccount c;
    Account *p;
    s.getData(); p=&s; p->calculateInterest();
    c.getData(); p=&c; p->calculateInterest();
    return 0;
}
