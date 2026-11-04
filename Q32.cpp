//
// Write a C++ program to demonstrate default, parameterized, and copy constructors in a single class and display the constructor calling order
#include <iostream>
using namespace std;

class MyClass {
public:
    MyClass() {
        cout << "Default Constructor called" << endl;
    }

    MyClass(int value) {
        cout << "Parameterized Constructor called" << endl;
    }

    MyClass(const MyClass &obj) {
        cout << "Copy Constructor called" << endl;
    }
};

int main() {
    MyClass obj1;          // Calls default constructor
    MyClass obj2(10);      // Calls parameterized constructor
    MyClass obj3(obj2);    // Calls copy constructor

    return 0;
}
