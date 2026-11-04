// Write a C++ program to overload the equality operator to compare two objects.
#include <iostream>
using namespace std;

class MyClass {
    int value;
public:
    MyClass(int v) : value(v) {}

    bool operator==(const MyClass& other) const {
        return value == other.value;
    }
};

int main() {
    MyClass obj1(10);
    MyClass obj2(10);
    MyClass obj3(20);

    if (obj1 == obj2) {
        cout << "obj1 and obj2 are equal." << endl;
    } else {
        cout << "obj1 and obj2 are not equal." << endl;
    }

    if (obj1 == obj3) {
        cout << "obj1 and obj3 are equal." << endl;
    } else {
        cout << "obj1 and obj3 are not equal." << endl;
    }

    return 0;
}