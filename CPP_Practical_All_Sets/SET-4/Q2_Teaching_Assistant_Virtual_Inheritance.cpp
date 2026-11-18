#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    string name;

    void getName()
    {
        cout << "Enter Name: ";
        cin >> name;
    }
};

class Student : virtual public Person
{
public:
    int roll;
};

class Employee : virtual public Person
{
public:
    int empid;
};

class TeachingAssistant : public Student, public Employee
{
public:
    void input()
    {
        getName();

        cout << "Enter Roll: ";
        cin >> roll;

        cout << "Enter Employee ID: ";
        cin >> empid;
    }

    void display()
    {
        cout << "\\nName: " << name;
        cout << "\\nRoll: " << roll;
        cout << "\\nEmployee ID: " << empid;
    }
};

int main()
{
    TeachingAssistant t;

    t.input();
    t.display();

    return 0;
}
