#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int id;
    double salary;

public:
    void input() {
        cout << "Enter employee name: ";
        getline(cin, name);

        cout << "Enter employee ID: ";
        cin >> id;

        cout << "Enter employee salary: ";
        cin >> salary;
    }

    void displayDetails() {
        cout << "\nEmployee Details" << endl;
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Employee emp;

    emp.input();
    emp.displayDetails();

    return 0;
}
