#include <iostream>
using namespace std;

class Payment
{
public:
    virtual void processPayment(double amount) = 0;
};

class CreditCardPayment : public Payment
{
public:
    void processPayment(double amount)
    {
        cout << "Credit Card Payment: " << amount << endl;
    }
};

class PayPalPayment : public Payment
{
public:
    void processPayment(double amount)
    {
        cout << "PayPal Payment: " << amount << endl;
    }
};

class UPIPayment : public Payment
{
public:
    void processPayment(double amount)
    {
        cout << "UPI Payment: " << amount << endl;
    }
};

int main()
{
    CreditCardPayment c;
    PayPalPayment p;
    UPIPayment u;

    Payment *ptr;

    ptr = &c;
    ptr->processPayment(1000);

    ptr = &p;
    ptr->processPayment(2000);

    ptr = &u;
    ptr->processPayment(3000);

    return 0;
}
