#include <iostream>
using namespace std;

class ATM {
private:
    float balance;

    void processWithdrawal(float amount) {
        balance = balance - amount;
    }

public:
    ATM() {
        balance = 5000;
    }

    void withdraw(float amount) {
        if (amount <= balance) {
            processWithdrawal(amount);
            cout << "Withdrawal successful" << endl;
            cout << "Remaining Balance = " << balance;
        }
        else {
            cout << "Insufficient balance";
        }
    }
};

int main() {
    ATM a;

    a.withdraw(2000);

    return 0;
}