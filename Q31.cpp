//Write is C++ program to demonstrate constructor overloading and operator overloading together using a complex class
#include <iostream>
using namespace std;
class Complex{
    int real, imag;
    public:
     Complex(){
        real = 0;
        imag = 0;
    }
    Complex(int r, int i){
        real = r;
        imag = i;
    }

    Complex(const Complex &c){
        real = c.real;
        imag = c.imag;
    }

    Complex operator +(Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main(){
    Complex c1;
    Complex c2(5, 3);
    Complex c3(2, 4);
    Complex c4(c2);
    Complex c5 = c2 + c3;
    cout << "Default Constructor: ";
    c1.display();
    cout << "Parameterized Constructor: ";
    c2.display();
    cout << "Copy Constructor: ";
    c4.display();
    cout << "Addition of Complex Numbers: ";
    c5.display();
    return 0;
}
