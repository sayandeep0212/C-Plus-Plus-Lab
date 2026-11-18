#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    int roll;
    string name;

    void getStudent()
    {
        cout << "Enter Roll and Name: ";
        cin >> roll >> name;
    }
};

class Marks : public Student
{
public:
    int m1, m2, m3;

    void getMarks()
    {
        cout << "Enter three marks: ";
        cin >> m1 >> m2 >> m3;
    }
};

class Result : public Marks
{
public:
    int total;

    void display()
    {
        total = m1 + m2 + m3;

        cout << "\\nRoll: " << roll;
        cout << "\\nName: " << name;
        cout << "\\nTotal Marks: " << total;
        cout << "\\nResult: " << (total >= 120 ? "Pass" : "Fail");
    }
};

int main()
{
    Result r;

    r.getStudent();
    r.getMarks();
    r.display();

    return 0;
}
