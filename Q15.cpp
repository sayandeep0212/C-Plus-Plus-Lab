//create a student class and derive a result class from it to display student marks

#include <iostream>
#include <string>
using namespace std;

class Student {
    private:
        string name;
        int rollNumber;

    public:
        void inputDetails() {
            cout << "Enter student name: ";
            getline(cin, name);

            cout << "Enter student roll number: ";
            cin >> rollNumber;
        }

        void displayDetails() {
            cout << "\nStudent Details" << endl;
            cout << "Name: " << name << endl;
            cout << "Roll Number: " << rollNumber << endl;
        }
};

int main() {
    Student student;

    student.inputDetails();
    student.displayDetails();

    return 0;
}