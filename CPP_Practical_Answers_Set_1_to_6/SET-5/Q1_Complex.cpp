#include <iostream>
using namespace std;

class Complex {
    double real, imag;
public:
    Complex(double r=0,double i=0) { real=r; imag=i; }
    Complex operator+(Complex c) {
        return Complex(real+c.real,imag+c.imag);
    }
    Complex operator-(Complex c) {
        return Complex(real-c.real,imag-c.imag);
    }
    Complex operator-() { return Complex(-real,-imag); }
    friend Complex multiply(Complex a,Complex b);
    void show() { cout << real << " + " << imag << "i" << endl; }
    void change(double r) { this->real=r; }
};

Complex multiply(Complex a,Complex b) {
    return Complex(a.real*b.real-a.imag*b.imag,
                   a.real*b.imag+a.imag*b.real);
}

int main() {
    Complex a(2,3), b(1,2);
    (a+b).show();
    (a-b).show();
    (-a).show();
    multiply(a,b).show();
    a.change(5); a.show();
    return 0;
}
