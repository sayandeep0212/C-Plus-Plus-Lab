#include <iostream>
using namespace std;

class Student {
private:
	string name;
	int rollNumber;
	float marks;

public:
	void display() {
		name = "Rahul";
		rollNumber = 101;
		marks = 85.5;

		cout << "Student Name: " << name << endl;
		cout << "Roll Number: " << rollNumber << endl;
		cout << "Marks: " << marks << endl;
	}
};

int main() {
	Student student;
	student.display();

	return 0;
}