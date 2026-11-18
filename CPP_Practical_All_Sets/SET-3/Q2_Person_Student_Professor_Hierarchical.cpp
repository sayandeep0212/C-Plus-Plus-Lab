#include <iostream>
#include <string>
using namespace std;

class Person
{
protected:
    string name;
    int age;

public:
    void getPerson()
    {
        cout << "Enter name and age: ";
        cin >> name >> age;
    }
};

class Student : public Person
{
public:
    int roll;
    float gpa;

    void input()
    {
        getPerson();

        cout << "Enter Roll and GPA: ";
        cin >> roll >> gpa;
    }

    void display()
    {
        cout << "\\nStudent Details";
        cout << "\\nName: " << name;
        cout << "\\nAge: " << age;
        cout << "\\nRoll: " << roll;
        cout << "\\nGPA: " << gpa;
    }
};

class Professor : public Person
{
public:
    int empid;
    float salary;

    void input()
    {
        getPerson();

        cout << "Enter Employee ID and Salary: ";
        cin >> empid >> salary;
    }

    void display()
    {
        cout << "\\nProfessor Details";
        cout << "\\nName: " << name;
        cout << "\\nAge: " << age;
        cout << "\\nEmployee ID: " << empid;
        cout << "\\nSalary: " << salary;
    }
};

int main()
{
    Student s;
    Professor p;

    s.input();
    s.display();

    p.input();
    p.display();

    return 0;
}
