#include <iostream>
#include <string>

class Student {
private:
	int rollNumber;
	std::string name;
	float marks;

public:
	Student(int rollNumber, const std::string& name, float marks)
		: rollNumber(rollNumber), name(name), marks(marks) {}

	void display() const {
		std::cout << "Roll Number: " << rollNumber
				  << ", Name: " << name
				  << ", Marks: " << marks << std::endl;
	}
};

int main() {
	Student students[5] = {
		Student(1, "Aarav", 89.5f),
		Student(2, "Diya", 92.0f),
		Student(3, "Rohan", 78.5f),
		Student(4, "Anaya", 85.0f),
		Student(5, "Kabir", 91.5f)
	};

	std::cout << "Student Details:\n";
	for (const Student& student : students) {
		student.display();
	}

	return 0;
}