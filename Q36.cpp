//Write a C++ program to overload the class plus, equality operators in a distance class to add and compare two distance objects
#include <iostream>
using namespace std;

class Distance {
    int meters;
    int centimeters;
public:
    Distance() : meters(0), centimeters(0) {}
    Distance(int m, int cm) : meters(m), centimeters(cm) {}

    Distance operator+(const Distance& other) const {
        int totalMeters = meters + other.meters;
        int totalCentimeters = centimeters + other.centimeters;
        if (totalCentimeters >= 100) {
            totalMeters += totalCentimeters / 100;
            totalCentimeters %= 100;
        }
        return Distance(totalMeters, totalCentimeters);
    }

    bool operator==(const Distance& other) const {
        return meters == other.meters && centimeters == other.centimeters;
    }

    void display() const {
        cout << "Distance: " << meters << " meters " << centimeters << " centimeters" << endl;
    }
};

int main() {
    Distance d1(5, 50);
    Distance d2(3, 25);
    Distance d3 = d1 + d2;
    Distance d4(8, 75);

    cout << "Distance 1:" << endl;
    d1.display();
    cout << "Distance 2:" << endl;
    d2.display();
    cout << "Distance 3 (Sum of D1 and D2):" << endl;
    d3.display();
    cout << "Distance 4:" << endl;
    d4.display();

    if (d3 == d4) {
        cout << "D3 and D4 are equal." << endl;
    } else {
        cout << "D3 and D4 are not equal." << endl;
    }

    return 0;
}