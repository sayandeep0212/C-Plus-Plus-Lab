#include <iostream>
using namespace std;
class BankAccount {
private:
    float balance;
public:
    BankAccount() {
        balance = 0;
    }
    void deposit(float amount) {
        balance = balance + amount;
    }
    void showBalance() {
        cout << "Balance = " << balance;
    }
};
int main() {
    BankAccount b;
    b.deposit(5000);
    b.showBalance();
    return 0;
}