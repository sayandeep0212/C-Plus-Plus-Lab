#include <iostream>
using namespace std;

class Student
{
private:
    int marks;

public:
    void input()
    {
        cout << "Enter Marks: ";
        cin >> marks;
    }

    friend void compare(Student s1, Student s2);
};

void compare(Student s1, Student s2)
{
    if(s1.marks > s2.marks)
        cout << "Student 1 has higher marks";
    else if(s2.marks > s1.marks)
        cout << "Student 2 has higher marks";
    else
        cout << "Both have equal marks";
}

int main()
{
    Student s1, s2;

    cout << "Student 1: ";
    s1.input();

    cout << "Student 2: ";
    s2.input();

    compare(s1, s2);

    return 0;
}
