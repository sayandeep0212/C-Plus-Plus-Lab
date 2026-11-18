#include <iostream>
using namespace std;

class Employee {
    string name;
    int id;
    double basic;
public:
    Employee() { name="Unknown"; id=0; basic=0; }
    Employee(string n,int i,double b) { name=n; id=i; basic=b; }
    Employee(const Employee &e) { name=e.name; id=e.id; basic=e.basic; }
    void show() { cout << name << " " << id << " Salary: " << basic << endl; }
    Employee operator+(Employee e) {
        Employee temp("Combined",0,basic+e.basic);
        return temp;
    }
    ~Employee() { }
};

int main() {
    Employee e1("Amit",1,20000), e2("Riya",2,25000);
    Employee e3=e1+e2;
    e1.show(); e2.show(); e3.show();
    return 0;
}
