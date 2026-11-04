// Write C++ program to initialize and display employee details using a constructor.
#include <iostream>
#include <string>
using namespace std;

class Employee {
    string name;
    int id;
    float salary;
public:
    Employee() {
        name = "";
        id = 0;
        salary = 0.0;
    }
    Employee(string n, int i, float s) {
        name = n;
        id = i;
        salary = s;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Employee e1; 
    Employee e2("Bob", 102, 75000.0); 
    Employee e3(e2); 
    cout << "Employee 1 (Default):" << endl;
    e1.display();
    cout << "Employee 2 (Parameterized):" << endl;
    e2.display();
    cout << "Employee 3 (Copy):" << endl;
    e3.display();
    return 0;
}