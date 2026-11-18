#include <iostream>
using namespace std;

class ElectricityBill {
    int id, units;
    string name;
public:
    ElectricityBill() { id=0; name="Unknown"; units=0; }
    ElectricityBill(int i,string n,int u) { id=i; name=n; units=u; }
    ElectricityBill operator+(ElectricityBill b) {
        return ElectricityBill(0,"Combined",units+b.units);
    }
    ElectricityBill operator++() { ++units; return *this; }
    void show() { cout << name << " Units: " << units << endl; }
    ~ElectricityBill() { }
};

int main() {
    ElectricityBill a(1,"Amit",100), b(2,"Riya",150);
    ElectricityBill c=a+b;
    c.show();
    ++a; a.show();
    ElectricityBill *p=new ElectricityBill(3,"Raj",200);
    p->show();
    delete p;
    return 0;
}
