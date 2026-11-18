#include <iostream>
using namespace std;

class Shape {
public:
    virtual void calculateArea()=0;
    virtual ~Shape() {}
};

class Circle : public Shape {
    double r;
public:
    Circle(double x) { r=x; }
    void calculateArea() { cout << "Circle area: " << 3.14*r*r << endl; }
};

class Rectangle : public Shape {
    double l,w;
public:
    Rectangle(double a,double b) { l=a; w=b; }
    void calculateArea() { cout << "Rectangle area: " << l*w << endl; }
};

class Triangle : public Shape {
    double b,h;
public:
    Triangle(double x,double y) { b=x; h=y; }
    void calculateArea() { cout << "Triangle area: " << 0.5*b*h << endl; }
};

int main() {
    Shape *p;
    p=new Circle(5); p->calculateArea(); delete p;
    p=new Rectangle(4,6); p->calculateArea(); delete p;
    p=new Triangle(4,5); p->calculateArea(); delete p;
    return 0;
}
