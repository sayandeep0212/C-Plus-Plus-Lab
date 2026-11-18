#include <iostream>
using namespace std;

class Product {
    int id;
    string name;
    double price;
public:
    Product(int i=0,string n="Item",double p=0) {
        this->id=i; this->name=n; this->price=p;
    }
    Product operator+(Product p) {
        Product temp(0,"Combined",price+p.price);
        return temp;
    }
    void show() { cout << name << " Total price: " << price << endl; }
};

Product combine(Product a, Product b) { return a+b; }

int main() {
    Product p1(1,"Pen",10), p2(2,"Book",50);
    Product p3=combine(p1,p2);
    p3.show();
    return 0;
}
