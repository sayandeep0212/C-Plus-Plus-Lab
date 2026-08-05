//Write a C++ program to input two numbers and performs addition, subtraction, multiplication, division and modulus operations on them.
#include<iostream>
using namespace std;

int main () {
    float a,b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Sum: " << a + b << endl;
    cout << "Substraction: " << a-b << endl;
    cout << "Multiplication: " <<a*b << endl;
    cout << "Division: " << a/b << endl;
    cout << "Modulus: " << (int)a % (int)b << endl;

    return 0;
}