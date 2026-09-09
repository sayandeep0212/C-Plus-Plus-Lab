#include <iostream>
using namespace std;

class Circle {
private:
	float radius;

public:
	void calculateArea();
};

void Circle::calculateArea() {
	cout << "Enter radius: ";
	cin >> radius;

	float area = 3.14 * radius * radius;
	cout << "Area of circle = " << area << endl;
}

int main() {
	Circle circle;
	circle.calculateArea();

	return 0;
}