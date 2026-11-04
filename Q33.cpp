//Write a C++ program to initialize a student name, roll, marks using different overloaded constructor.
#include <iostream>
#include <string>
using namespace std;

class Student {
    string name;
    int roll;
    float marks;
public:
    Student() {
        name = "";
        roll = 0;
        marks = 0.0;
    }
    Student(string n, int r, float m) {
        name = n;
        roll = r;
        marks = m;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s1; 
    Student s2("Alice", 101, 85.5); 
    Student s3(s2); 
    cout << "Student 1 (Default):" << endl;
    s1.display();
    cout << "Student 2 (Parameterized):" << endl;
    s2.display();
    cout << "Student 3 (Copy):" << endl;
    s3.display();
    return 0;
}