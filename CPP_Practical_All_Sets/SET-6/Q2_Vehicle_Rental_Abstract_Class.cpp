#include <iostream>
using namespace std;

class Vehicle
{
public:
    virtual int calculateRent(int days) = 0;
    virtual void displayType() = 0;
};

class Car : public Vehicle
{
public:
    int calculateRent(int days)
    {
        return days * 2000;
    }

    void displayType()
    {
        cout << "Car";
    }
};

class Bike : public Vehicle
{
public:
    int calculateRent(int days)
    {
        return days * 800;
    }

    void displayType()
    {
        cout << "Bike";
    }
};

class Truck : public Vehicle
{
public:
    int calculateRent(int days)
    {
        return days * 5000 + 1000;
    }

    void displayType()
    {
        cout << "Truck";
    }
};

int main()
{
    Car c;
    Bike b;
    Truck t;

    Vehicle *v;

    v = &c;
    v->displayType();
    cout << " Rent = " << v->calculateRent(3) << endl;

    v = &b;
    v->displayType();
    cout << " Rent = " << v->calculateRent(3) << endl;

    v = &t;
    v->displayType();
    cout << " Rent = " << v->calculateRent(3) << endl;

    return 0;
}
