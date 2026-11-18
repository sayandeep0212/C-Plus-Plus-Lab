#include <iostream>
using namespace std;

class Vehicle {
protected:
    string name;
public:
    Vehicle(string n) { name=n; }
    virtual double calculateRent(int days)=0;
    virtual ~Vehicle() {}
    void showRent(int days) {
        cout << name << " rent: " << calculateRent(days) << endl;
    }
};

class Car : public Vehicle {
public:
    Car(string n):Vehicle(n) {}
    double calculateRent(int days) { return days*1500; }
};

class Bike : public Vehicle {
public:
    Bike(string n):Vehicle(n) {}
    double calculateRent(int days) { return days*500; }
};

int main() {
    Car c("Car");
    Bike b("Bike");
    Vehicle *p=&c; p->showRent(2);
    p=&b; p->showRent(2);
    return 0;
}
