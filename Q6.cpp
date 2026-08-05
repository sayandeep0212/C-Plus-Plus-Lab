#include <iostream>
using namespace std;

int main() {
    int age;
    float cgpa;
    string name, regNo, gender;
    cout << "Enter Student's Name: ";
    cin >> name;
    cout << "Enter Student's Registration Number: ";
    cin >> regNo;
    cout << "Enter Student's Age: ";
    cin >> age;
    cout << "Enter Student's Gender: ";
    cin >> gender;
       cout << "Enter Student's CGPA: ";
    cin >> cgpa;

    cout << "\nStudent's Details:\n";
    cout << "Name: " << name << endl;
    cout << "Registration Number: " << regNo << endl;
    cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
    cout << "CGPA: " << cgpa << endl;


}