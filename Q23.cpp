#include <iostream>
using namespace std;

class Student {
public:
	void display();
};

void Student::display() {
	cout << "Student Name: Rahul" << endl;
	cout << "Roll Number: 101" << endl;
	cout << "Marks: 85.5" << endl;
}

int main() {
	Student student;
	student.display();

	return 0;
}