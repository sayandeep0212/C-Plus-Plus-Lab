#include <iostream>
#include <string>
using namespace std;

class Account
{
public:
    string name;
    float balance;

    Account(string n, float b)
    {
        name = n;
        balance = b;
    }

    Account(Account &a)
    {
        name = a.name;
        balance = a.balance;
    }

    void deposit(float amount)
    {
        balance = balance + amount;
    }

    void display()
    {
        cout << "\\nName: " << name;
        cout << "\\nBalance: " << balance << endl;
    }
};

int main()
{
    Account a1("Rahul", 5000);
    Account a2(a1);

    cout << "Original Account:";
    a1.display();

    a2.deposit(2000);

    cout << "\\nCopied Account:";
    a2.display();

    return 0;
}
