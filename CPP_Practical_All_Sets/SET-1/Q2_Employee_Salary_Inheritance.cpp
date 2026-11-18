#include <iostream>
#include <string>
using namespace std;

class Employee
{
public:
    int id;
    string name;
};

class Salary : public Employee
{
public:
    float basic, hra, da, gross;

    void input()
    {
        cout << "Enter ID and Name: ";
        cin >> id >> name;

        cout << "Enter Basic Salary: ";
        cin >> basic;

        cout << "Enter HRA and DA: ";
        cin >> hra >> da;
    }

    void calculate()
    {
        gross = basic + hra + da;
    }

    void display()
    {
        cout << "\\nEmployee ID: " << id;
        cout << "\\nName: " << name;
        cout << "\\nBasic Salary: " << basic;
        cout << "\\nHRA: " << hra;
        cout << "\\nDA: " << da;
        cout << "\\nGross Salary: " << gross;
    }
};

int main()
{
    Salary s;

    s.input();
    s.calculate();
    s.display();

    return 0;
}
