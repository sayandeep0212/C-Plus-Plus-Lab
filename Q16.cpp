//Write a C++ Program to demonstrate single inheritanceusing person and employee

#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void getPersonDetails() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
    }

    void displayPersonDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Employee : public Person {
private:
    int empId;
    float salary;

public:
    void getEmployeeDetails() {
        cout << "Enter Employee ID: ";
        cin >> empId;
        cout << "Enter Salary: ";
        cin >> salary;
    }

    void displayEmployeeDetails() {
        displayPersonDetails();
        cout << "Employee ID: " << empId << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Employee e;

    e.getPersonDetails();
    e.getEmployeeDetails();

    cout << "\n--- Employee Details ---" << endl;
    e.displayEmployeeDetails();

    return 0;
}